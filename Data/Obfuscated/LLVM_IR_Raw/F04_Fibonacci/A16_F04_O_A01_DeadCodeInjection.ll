@.str = constant [3 x i8] c"0\0A\00"
@.str.1 = constant [5 x i8] c"%ld\0A\00"
define dso_local i64 @P(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i64
  %6 = alloca i64
  %7 = alloca i32
  %8 = alloca i32
  store i32 %0, i32* %3
  store i64 0, i64* %4
  store i64 1, i64* %5
  %12 = load i32, i32* %3
  %13 = icmp eq i32 %12, 0
  br i1 %13, label %14, label %15
14:
  store i64 0, i64* %2
  store i32 1, i32* %7
  br label %40
15:
  store i32 2, i32* %8
  br label %17
17:
  %18 = load i32, i32* %8
  %19 = load i32, i32* %3
  %20 = icmp sle i32 %18, %19
  br i1 %20, label %23, label %21
21:
  store i32 2, i32* %7
  br label %32
23:
  %24 = load i64, i64* %4
  %25 = load i64, i64* %5
  %26 = add nsw i64 %24, %25
  store i64 %26, i64* %6
  %27 = load i64, i64* %5
  store i64 %27, i64* %4
  %28 = load i64, i64* %6
  store i64 %28, i64* %5
  br label %29
29:
  %30 = load i32, i32* %8
  %31 = add nsw i32 %30, 1
  store i32 %31, i32* %8
  br label %17
32:
  %33 = load i32, i32* %3
  %34 = icmp eq i32 %33, 1
  br i1 %34, label %35, label %36
35:
  br label %38
36:
  %37 = load i64, i64* %5
  br label %38
38:
  %39 = phi i64 [ 1, %35 ], [ %37, %36 ]
  store i64 %39, i64* %2
  store i32 1, i32* %7
  br label %40
40:
  %44 = load i64, i64* %2
  ret i64 %44
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
  %25 = call i64 @P(i32 %24)
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
