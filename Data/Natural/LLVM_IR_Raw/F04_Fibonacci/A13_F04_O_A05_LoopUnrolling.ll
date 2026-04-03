@.str = constant [3 x i8] c"0\0A\00"
@.str.1 = constant [5 x i8] c"%ld\0A\00"
define dso_local i64 @Fibonacci(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i64
  %6 = alloca i32
  %7 = alloca i64
  store i32 %0, i32* %3
  %8 = load i32, i32* %3
  %9 = icmp eq i32 %8, 0
  br i1 %9, label %10, label %11
10:
  store i64 0, i64* %2
  br label %51
11:
  %12 = load i32, i32* %3
  %13 = icmp eq i32 %12, 1
  br i1 %13, label %14, label %15
14:
  store i64 1, i64* %2
  br label %51
15:
  store i64 0, i64* %4
  store i64 1, i64* %5
  store i32 2, i32* %6
  br label %19
19:
  %20 = load i32, i32* %6
  %21 = load i32, i32* %3
  %22 = sub nsw i32 %21, 1
  %23 = icmp sle i32 %20, %22
  br i1 %23, label %24, label %34
24:
  %25 = load i64, i64* %4
  %26 = load i64, i64* %5
  %27 = add nsw i64 %25, %26
  store i64 %27, i64* %4
  %28 = load i64, i64* %4
  %29 = load i64, i64* %5
  %30 = add nsw i64 %28, %29
  store i64 %30, i64* %5
  br label %31
31:
  %32 = load i32, i32* %6
  %33 = add nsw i32 %32, 2
  store i32 %33, i32* %6
  br label %19
34:
  %35 = load i32, i32* %6
  %36 = load i32, i32* %3
  %37 = icmp sle i32 %35, %36
  br i1 %37, label %38, label %46
38:
  %40 = load i64, i64* %4
  %41 = load i64, i64* %5
  %42 = add nsw i64 %40, %41
  store i64 %42, i64* %7
  %43 = load i64, i64* %5
  store i64 %43, i64* %4
  %44 = load i64, i64* %7
  store i64 %44, i64* %5
  br label %46
46:
  %47 = load i64, i64* %5
  store i64 %47, i64* %2
  br label %51
51:
  %52 = load i64, i64* %2
  ret i64 %52
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i64
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %9 = load i32, i32* %4
  %10 = icmp slt i32 %9, 2
  br i1 %10, label %11, label %12
11:
  store i32 1, i32* %3
  br label %31
12:
  %14 = load i8**, i8*** %5
  %15 = getelementptr inbounds i8*, i8** %14, i64 1
  %16 = load i8*, i8** %15
  %17 = call i32 @atoi(i8* %16)
  store i32 %17, i32* %6
  %18 = load i32, i32* %6
  %19 = icmp slt i32 %18, 0
  br i1 %19, label %20, label %22
20:
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0))
  store i32 0, i32* %3
  store i32 1, i32* %7
  br label %29
22:
  %24 = load i32, i32* %6
  %25 = call i64 @Fibonacci(i32 %24)
  store i64 %25, i64* %8
  %26 = load i64, i64* %8
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.1, i64 0, i64 0), i64 %26)
  store i32 0, i32* %3
  store i32 1, i32* %7
  br label %29
29:
  br label %31
31:
  %32 = load i32, i32* %3
  ret i32 %32
}
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare i64 @strtol(i8*, i8**, i32)
