@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @NewtonRoot(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i64
  %6 = alloca i64
  %7 = alloca i64
  store i32 %0, i32* %3
  %8 = load i32, i32* %3
  %9 = icmp slt i32 %8, 0
  br i1 %9, label %10, label %11
10:
  store i32 -1, i32* %2
  br label %44
11:
  %13 = load i32, i32* %3
  %14 = sext i32 %13 to i64
  store i64 %14, i64* %4
  %16 = load i32, i32* %3
  %17 = sext i32 %16 to i64
  store i64 %17, i64* %5
  %19 = load i64, i64* %4
  %20 = add nsw i64 %19, 1
  %21 = sdiv i64 %20, 2
  store i64 %21, i64* %6
  br label %22
22:
  %23 = load i64, i64* %6
  %24 = load i64, i64* %5
  %25 = icmp slt i64 %23, %24
  br i1 %25, label %26, label %38
26:
  %27 = load i64, i64* %6
  store i64 %27, i64* %5
  %29 = load i32, i32* %3
  %30 = sext i32 %29 to i64
  %31 = load i64, i64* %5
  %32 = sdiv i64 %30, %31
  store i64 %32, i64* %7
  %33 = load i64, i64* %5
  %34 = load i64, i64* %7
  %35 = add nsw i64 %33, %34
  %36 = sdiv i64 %35, 2
  store i64 %36, i64* %6
  br label %22
38:
  %39 = load i64, i64* %5
  %40 = trunc i64 %39 to i32
  store i32 %40, i32* %2
  br label %44
44:
  %45 = load i32, i32* %2
  ret i32 %45
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
  %14 = call i32 @NewtonRoot(i32 %13)
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %14)
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
