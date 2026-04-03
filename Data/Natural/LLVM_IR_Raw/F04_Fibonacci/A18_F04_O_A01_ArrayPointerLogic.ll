@__const.Fibonacci.v = constant [2 x i64] [i64 0, i64 1]
@.str = constant [3 x i8] c"0\0A\00"
@.str.1 = constant [5 x i8] c"%ld\0A\00"
define dso_local i64 @Fibonacci(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca [2 x i64]
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %3
  %9 = load i32, i32* %3
  %10 = icmp eq i32 %9, 0
  br i1 %10, label %11, label %12
11:
  store i64 0, i64* %2
  store i32 1, i32* %5
  br label %39
12:
  store i32 2, i32* %6
  br label %14
14:
  %15 = load i32, i32* %6
  %16 = load i32, i32* %3
  %17 = icmp sle i32 %15, %16
  br i1 %17, label %20, label %18
18:
  store i32 2, i32* %5
  br label %33
20:
  %21 = getelementptr inbounds [2 x i64], [2 x i64]* %4, i64 0, i64 0
  %22 = load i64, i64* %21
  %23 = getelementptr inbounds [2 x i64], [2 x i64]* %4, i64 0, i64 1
  %24 = load i64, i64* %23
  %25 = add nsw i64 %22, %24
  %26 = load i32, i32* %6
  %27 = srem i32 %26, 2
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds [2 x i64], [2 x i64]* %4, i64 0, i64 %28
  store i64 %25, i64* %29
  br label %30
30:
  %31 = load i32, i32* %6
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %6
  br label %14
33:
  %34 = load i32, i32* %3
  %35 = srem i32 %34, 2
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds [2 x i64], [2 x i64]* %4, i64 0, i64 %36
  %38 = load i64, i64* %37
  store i64 %38, i64* %2
  store i32 1, i32* %5
  br label %39
39:
  %41 = load i64, i64* %2
  ret i64 %41
}
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
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
