@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @IM(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i64
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp slt i32 %6, 0
  br i1 %7, label %8, label %9
8:
  store i32 -1, i32* %2
  br label %44
9:
  %10 = load i32, i32* %3
  %11 = icmp slt i32 %10, 2
  br i1 %11, label %12, label %14
12:
  %13 = load i32, i32* %3
  store i32 %13, i32* %2
  br label %44
14:
  %16 = load i32, i32* %3
  %17 = sext i32 %16 to i64
  store i64 %17, i64* %4
  %19 = load i64, i64* %4
  %20 = load i32, i32* %3
  %21 = sext i32 %20 to i64
  %22 = load i64, i64* %4
  %23 = sdiv i64 %21, %22
  %24 = add nsw i64 %19, %23
  %25 = sdiv i64 %24, 2
  store i64 %25, i64* %5
  br label %26
26:
  %27 = load i64, i64* %5
  %28 = load i64, i64* %4
  %29 = icmp slt i64 %27, %28
  br i1 %29, label %30, label %39
30:
  %31 = load i64, i64* %5
  store i64 %31, i64* %4
  %32 = load i64, i64* %4
  %33 = load i32, i32* %3
  %34 = sext i32 %33 to i64
  %35 = load i64, i64* %4
  %36 = sdiv i64 %34, %35
  %37 = add nsw i64 %32, %36
  %38 = sdiv i64 %37, 2
  store i64 %38, i64* %5
  br label %26
39:
  %40 = load i64, i64* %4
  %41 = trunc i64 %40 to i32
  store i32 %41, i32* %2
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
  %14 = call i32 @IM(i32 %13)
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
