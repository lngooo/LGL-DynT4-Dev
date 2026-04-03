@.str = constant [3 x i8] c"%u\00"
define dso_local i32 @EXU(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i32, i32* %4
  %9 = icmp sge i32 %8, 32
  br i1 %9, label %10, label %11
10:
  br label %30
11:
  %12 = load i32, i32* %2
  %13 = load i32, i32* %4
  %14 = lshr i32 %12, %13
  %15 = and i32 %14, 1
  %16 = load i32, i32* %2
  %17 = load i32, i32* %4
  %18 = add nsw i32 %17, 1
  %19 = lshr i32 %16, %18
  %20 = and i32 %19, 1
  %21 = icmp ne i32 %15, %20
  br i1 %21, label %22, label %27
22:
  %23 = load i32, i32* %4
  %24 = shl i32 1, %23
  %25 = load i32, i32* %3
  %26 = or i32 %25, %24
  store i32 %26, i32* %3
  br label %27
27:
  %28 = load i32, i32* %4
  %29 = add nsw i32 %28, 1
  store i32 %29, i32* %4
  br label %7
30:
  %31 = load i32, i32* %3
  ret i32 %31
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %7 = load i32, i32* %4
  %8 = icmp slt i32 %7, 2
  br i1 %8, label %9, label %10
9:
  store i32 0, i32* %3
  br label %21
10:
  %12 = load i8**, i8*** %5
  %13 = getelementptr inbounds i8*, i8** %12, i64 1
  %14 = load i8*, i8** %13
  %15 = call i64 @strtoul(i8* %14, i8** null, i32 10)
  %16 = trunc i64 %15 to i32
  store i32 %16, i32* %6
  %17 = load i32, i32* %6
  %18 = call i32 @EXU(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
