@.str = constant [3 x i8] c"%u\00"
define dso_local i32 @CDH(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 0, i32* %6
  br label %11
11:
  %12 = load i32, i32* %6
  %13 = icmp slt i32 %12, 32
  br i1 %13, label %16, label %14
14:
  br label %38
16:
  %17 = load i32, i32* %2
  %18 = load i32, i32* %6
  %19 = lshr i32 %17, %18
  %20 = and i32 %19, 1
  store i32 %20, i32* %4
  %21 = load i32, i32* %2
  %22 = load i32, i32* %6
  %23 = add nsw i32 %22, 1
  %24 = lshr i32 %21, %23
  %25 = and i32 %24, 1
  store i32 %25, i32* %5
  %26 = load i32, i32* %4
  %27 = load i32, i32* %5
  %28 = icmp ne i32 %26, %27
  br i1 %28, label %29, label %34
29:
  %30 = load i32, i32* %6
  %31 = shl i32 1, %30
  %32 = load i32, i32* %3
  %33 = or i32 %32, %31
  store i32 %33, i32* %3
  br label %34
34:
  br label %35
35:
  %36 = load i32, i32* %6
  %37 = add nsw i32 %36, 1
  store i32 %37, i32* %6
  br label %11
38:
  %39 = load i32, i32* %3
  ret i32 %39
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
  %18 = call i32 @CDH(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
