@.str = constant [6 x i8] c"%lld\0A\00"
define dso_local i64 @Factorial(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %3
  %7 = load i32, i32* %3
  %8 = icmp slt i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store i64 0, i64* %2
  br label %38
10:
  store i64 1, i64* %4
  store i32 1, i32* %5
  store i32 0, i32* %6
  br label %14
14:
  %15 = load i32, i32* %6
  %16 = icmp ne i32 %15, 2
  br i1 %16, label %17, label %33
17:
  %18 = load i32, i32* %6
  switch i32 %18, label %32 [
    i32 0, label %19
    i32 1, label %25
  ]
19:
  %20 = load i32, i32* %5
  %21 = load i32, i32* %3
  %22 = icmp sle i32 %20, %21
  %23 = zext i1 %22 to i64
  %24 = select i1 %22, i32 1, i32 2
  store i32 %24, i32* %6
  br label %32
25:
  %26 = load i32, i32* %5
  %27 = sext i32 %26 to i64
  %28 = load i64, i64* %4
  %29 = mul nsw i64 %28, %27
  store i64 %29, i64* %4
  %30 = load i32, i32* %5
  %31 = add nsw i32 %30, 1
  store i32 %31, i32* %5
  store i32 0, i32* %6
  br label %32
32:
  br label %14
33:
  %34 = load i64, i64* %4
  store i64 %34, i64* %2
  br label %38
38:
  %39 = load i64, i64* %2
  ret i64 %39
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %9
8:
  store i32 1, i32* %3
  br label %16
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @atoi(i8* %12)
  %14 = call i64 @Factorial(i32 %13)
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @.str, i64 0, i64 0), i64 %14)
  store i32 0, i32* %3
  br label %16
16:
  %17 = load i32, i32* %3
  ret i32 %17
}
declare i32 @printf(i8*, ...)
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i64 @strtol(i8*, i8**, i32)
