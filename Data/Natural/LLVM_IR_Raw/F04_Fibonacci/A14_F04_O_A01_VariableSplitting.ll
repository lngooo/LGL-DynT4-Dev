@.str = constant [3 x i8] c"0\0A\00"
@.str.1 = constant [5 x i8] c"%ld\0A\00"
define dso_local i64 @Fibonacci(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i64
  %6 = alloca i64
  %7 = alloca i64
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i64
  store i32 %0, i32* %3
  store i64 0, i64* %4
  store i64 0, i64* %5
  store i64 1, i64* %6
  store i64 0, i64* %7
  %15 = load i32, i32* %3
  %16 = icmp eq i32 %15, 0
  br i1 %16, label %17, label %18
17:
  store i64 0, i64* %2
  store i32 1, i32* %8
  br label %52
18:
  store i32 2, i32* %9
  br label %20
20:
  %21 = load i32, i32* %9
  %22 = load i32, i32* %3
  %23 = icmp sle i32 %21, %22
  br i1 %23, label %26, label %24
24:
  store i32 2, i32* %8
  br label %42
26:
  %28 = load i64, i64* %4
  %29 = load i64, i64* %5
  %30 = add nsw i64 %28, %29
  %31 = load i64, i64* %6
  %32 = load i64, i64* %7
  %33 = add nsw i64 %31, %32
  %34 = add nsw i64 %30, %33
  store i64 %34, i64* %10
  %35 = load i64, i64* %6
  store i64 %35, i64* %4
  %36 = load i64, i64* %7
  store i64 %36, i64* %5
  %37 = load i64, i64* %10
  store i64 %37, i64* %6
  store i64 0, i64* %7
  br label %39
39:
  %40 = load i32, i32* %9
  %41 = add nsw i32 %40, 1
  store i32 %41, i32* %9
  br label %20
42:
  %43 = load i32, i32* %3
  %44 = icmp eq i32 %43, 1
  br i1 %44, label %45, label %46
45:
  br label %50
46:
  %47 = load i64, i64* %6
  %48 = load i64, i64* %7
  %49 = add nsw i64 %47, %48
  br label %50
50:
  %51 = phi i64 [ 1, %45 ], [ %49, %46 ]
  store i64 %51, i64* %2
  store i32 1, i32* %8
  br label %52
52:
  %57 = load i64, i64* %2
  ret i64 %57
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
