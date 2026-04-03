@.str = constant [3 x i8] c"%d\00"
define dso_local i32 @IsPowerOfTwo(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp eq i32 %6, 0
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %2
  br label %40
9:
  store i32 0, i32* %4
  store i32 0, i32* %5
  br label %12
12:
  %13 = load i32, i32* %3
  %14 = icmp ugt i32 %13, 0
  br i1 %14, label %15, label %32
15:
  %16 = load i32, i32* %3
  %17 = and i32 %16, 1
  %18 = load i32, i32* %4
  %19 = add i32 %18, %17
  store i32 %19, i32* %4
  %20 = load i32, i32* %3
  %21 = lshr i32 %20, 1
  store i32 %21, i32* %3
  %22 = load i32, i32* %3
  %23 = icmp ugt i32 %22, 0
  br i1 %23, label %24, label %31
24:
  %25 = load i32, i32* %3
  %26 = and i32 %25, 1
  %27 = load i32, i32* %5
  %28 = add i32 %27, %26
  store i32 %28, i32* %5
  %29 = load i32, i32* %3
  %30 = lshr i32 %29, 1
  store i32 %30, i32* %3
  br label %31
31:
  br label %12
32:
  %33 = load i32, i32* %4
  %34 = load i32, i32* %5
  %35 = add nsw i32 %33, %34
  %36 = icmp eq i32 %35, 1
  %37 = zext i1 %36 to i32
  store i32 %37, i32* %2
  br label %40
40:
  %41 = load i32, i32* %2
  ret i32 %41
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
  %18 = call i32 @IsPowerOfTwo(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
