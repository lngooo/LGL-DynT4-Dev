@.str = constant [6 x i8] c"%lld\0A\00"
define dso_local i64 @t(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i32
  store i32 %0, i32* %3
  store i64 1, i64* %4
  %7 = load i32, i32* %3
  %8 = icmp slt i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store i64 0, i64* %2
  store i32 1, i32* %5
  br label %24
10:
  br label %11
11:
  %12 = load i32, i32* %3
  %13 = icmp sgt i32 %12, 1
  br i1 %13, label %14, label %22
14:
  br label %15
15:
  %16 = load i32, i32* %3
  %17 = sext i32 %16 to i64
  %18 = load i64, i64* %4
  %19 = mul nsw i64 %18, %17
  store i64 %19, i64* %4
  %20 = load i32, i32* %3
  %21 = add nsw i32 %20, -1
  store i32 %21, i32* %3
  br label %11
22:
  %23 = load i64, i64* %4
  store i64 %23, i64* %2
  store i32 1, i32* %5
  br label %24
24:
  %26 = load i64, i64* %2
  ret i64 %26
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
  %14 = call i64 @t(i32 %13)
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
