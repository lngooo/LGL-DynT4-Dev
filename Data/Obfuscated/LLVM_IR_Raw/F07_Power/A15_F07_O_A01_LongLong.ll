@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @ufMT3(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i64
  %6 = alloca i64
  %7 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  store i64 1, i64* %5
  %10 = load i32, i32* %3
  %11 = sext i32 %10 to i64
  store i64 %11, i64* %6
  store i32 0, i32* %7
  br label %13
13:
  %14 = load i32, i32* %7
  %15 = load i32, i32* %4
  %16 = icmp slt i32 %14, %15
  br i1 %16, label %19, label %17
17:
  br label %26
19:
  %20 = load i64, i64* %6
  %21 = load i64, i64* %5
  %22 = mul nsw i64 %21, %20
  store i64 %22, i64* %5
  br label %23
23:
  %24 = load i32, i32* %7
  %25 = add nsw i32 %24, 1
  store i32 %25, i32* %7
  br label %13
26:
  %27 = load i64, i64* %5
  %28 = trunc i64 %27 to i32
  ret i32 %28
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 3
  br i1 %7, label %8, label %9
8:
  store i32 1, i32* %3
  br label %20
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @atoi(i8* %12)
  %14 = load i8**, i8*** %5
  %15 = getelementptr inbounds i8*, i8** %14, i64 2
  %16 = load i8*, i8** %15
  %17 = call i32 @atoi(i8* %16)
  %18 = call i32 @ufMT3(i32 %13, i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %20
20:
  %21 = load i32, i32* %3
  ret i32 %21
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
