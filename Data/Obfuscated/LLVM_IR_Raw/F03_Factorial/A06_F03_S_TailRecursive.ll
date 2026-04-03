@.str = constant [6 x i8] c"%lld\0A\00"
define dso_local i64 @qngi(i32 %0, i64 %1) {
  %3 = alloca i64
  %4 = alloca i32
  %5 = alloca i64
  store i32 %0, i32* %4
  store i64 %1, i64* %5
  %6 = load i32, i32* %4
  %7 = icmp sle i32 %6, 0
  br i1 %7, label %8, label %10
8:
  %9 = load i64, i64* %5
  store i64 %9, i64* %3
  br label %18
10:
  %11 = load i32, i32* %4
  %12 = sub nsw i32 %11, 1
  %13 = load i64, i64* %5
  %14 = load i32, i32* %4
  %15 = sext i32 %14 to i64
  %16 = mul nsw i64 %13, %15
  %17 = call i64 @qngi(i32 %12, i64 %16)
  store i64 %17, i64* %3
  br label %18
18:
  %19 = load i64, i64* %3
  ret i64 %19
}
define dso_local i64 @J2(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp slt i32 %4, 0
  br i1 %5, label %6, label %7
6:
  store i64 0, i64* %2
  br label %10
7:
  %8 = load i32, i32* %3
  %9 = call i64 @qngi(i32 %8, i64 1)
  store i64 %9, i64* %2
  br label %10
10:
  %11 = load i64, i64* %2
  ret i64 %11
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
  %14 = call i64 @J2(i32 %13)
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
