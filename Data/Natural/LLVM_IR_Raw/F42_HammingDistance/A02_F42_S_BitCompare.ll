@.str = constant [3 x i8] c"%d\00"
define dso_local i32 @HammingDistance(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  br label %9
9:
  %10 = load i32, i32* %6
  %11 = icmp slt i32 %10, 32
  br i1 %11, label %14, label %12
12:
  br label %31
14:
  %15 = load i32, i32* %3
  %16 = load i32, i32* %6
  %17 = shl i32 1, %16
  %18 = and i32 %15, %17
  %19 = load i32, i32* %4
  %20 = load i32, i32* %6
  %21 = shl i32 1, %20
  %22 = and i32 %19, %21
  %23 = icmp ne i32 %18, %22
  br i1 %23, label %24, label %27
24:
  %25 = load i32, i32* %5
  %26 = add nsw i32 %25, 1
  store i32 %26, i32* %5
  br label %27
27:
  br label %28
28:
  %29 = load i32, i32* %6
  %30 = add nsw i32 %29, 1
  store i32 %30, i32* %6
  br label %9
31:
  %32 = load i32, i32* %5
  ret i32 %32
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %8 = load i32, i32* %4
  %9 = icmp slt i32 %8, 3
  br i1 %9, label %10, label %11
10:
  store i32 0, i32* %3
  br label %30
11:
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 1
  %15 = load i8*, i8** %14
  %16 = call i64 @strtoul(i8* %15, i8** null, i32 10)
  %17 = trunc i64 %16 to i32
  store i32 %17, i32* %6
  %19 = load i8**, i8*** %5
  %20 = getelementptr inbounds i8*, i8** %19, i64 2
  %21 = load i8*, i8** %20
  %22 = call i64 @strtoul(i8* %21, i8** null, i32 10)
  %23 = trunc i64 %22 to i32
  store i32 %23, i32* %7
  %24 = load i32, i32* %6
  %25 = load i32, i32* %7
  %26 = call i32 @HammingDistance(i32 %24, i32 %25)
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %26)
  store i32 0, i32* %3
  br label %30
30:
  %31 = load i32, i32* %3
  ret i32 %31
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
