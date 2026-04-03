@Yaeh.FBLF = internal global [101 x i64] zeroinitializer
@.str = constant [3 x i8] c"0\0A\00"
@.str.1 = constant [5 x i8] c"%ld\0A\00"
define dso_local i64 @Yaeh(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp sle i32 %4, 1
  br i1 %5, label %6, label %9
6:
  %7 = load i32, i32* %3
  %8 = sext i32 %7 to i64
  store i64 %8, i64* %2
  br label %31
9:
  %10 = load i32, i32* %3
  %11 = sext i32 %10 to i64
  %12 = getelementptr inbounds [101 x i64], [101 x i64]* @Yaeh.FBLF, i64 0, i64 %11
  %13 = load i64, i64* %12
  %14 = icmp ne i64 %13, 0
  br i1 %14, label %15, label %20
15:
  %16 = load i32, i32* %3
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds [101 x i64], [101 x i64]* @Yaeh.FBLF, i64 0, i64 %17
  %19 = load i64, i64* %18
  store i64 %19, i64* %2
  br label %31
20:
  %21 = load i32, i32* %3
  %22 = sub nsw i32 %21, 1
  %23 = call i64 @Yaeh(i32 %22)
  %24 = load i32, i32* %3
  %25 = sub nsw i32 %24, 2
  %26 = call i64 @Yaeh(i32 %25)
  %27 = add nsw i64 %23, %26
  %28 = load i32, i32* %3
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds [101 x i64], [101 x i64]* @Yaeh.FBLF, i64 0, i64 %29
  store i64 %27, i64* %30
  store i64 %27, i64* %2
  br label %31
31:
  %32 = load i64, i64* %2
  ret i64 %32
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
  %25 = call i64 @Yaeh(i32 %24)
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
