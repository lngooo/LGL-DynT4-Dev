@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @NewtonRoot(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i64
  %6 = alloca i32
  store i32 %0, i32* %3
  %7 = load i32, i32* %3
  %8 = icmp slt i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store i32 -1, i32* %2
  br label %42
10:
  %11 = load i32, i32* %3
  %12 = icmp eq i32 %11, 0
  br i1 %12, label %13, label %14
13:
  store i32 0, i32* %2
  br label %42
14:
  %16 = load i32, i32* %3
  %17 = sext i32 %16 to i64
  %18 = shl i64 %17, 16
  store i64 %18, i64* %4
  store i64 65536, i64* %5
  store i32 0, i32* %6
  br label %21
21:
  %22 = load i32, i32* %6
  %23 = icmp slt i32 %22, 20
  br i1 %23, label %26, label %24
24:
  br label %36
26:
  %27 = load i64, i64* %5
  %28 = load i64, i64* %4
  %29 = load i64, i64* %5
  %30 = sdiv i64 %28, %29
  %31 = add nsw i64 %27, %30
  %32 = ashr i64 %31, 1
  store i64 %32, i64* %5
  br label %33
33:
  %34 = load i32, i32* %6
  %35 = add nsw i32 %34, 1
  store i32 %35, i32* %6
  br label %21
36:
  %37 = load i64, i64* %5
  %38 = ashr i64 %37, 8
  %39 = trunc i64 %38 to i32
  store i32 %39, i32* %2
  br label %42
42:
  %43 = load i32, i32* %2
  ret i32 %43
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %8 = load i32, i32* %4
  %9 = icmp slt i32 %8, 2
  br i1 %9, label %10, label %11
10:
  store i32 1, i32* %3
  br label %38
11:
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 1
  %15 = load i8*, i8** %14
  %16 = call i32 @atoi(i8* %15)
  %17 = call i32 @NewtonRoot(i32 %16)
  store i32 %17, i32* %6
  store i32 0, i32* %7
  br label %19
19:
  %20 = load i32, i32* %7
  %21 = add nsw i32 %20, 1
  %22 = load i32, i32* %7
  %23 = add nsw i32 %22, 1
  %24 = mul nsw i32 %21, %23
  %25 = load i8**, i8*** %5
  %26 = getelementptr inbounds i8*, i8** %25, i64 1
  %27 = load i8*, i8** %26
  %28 = call i32 @atoi(i8* %27)
  %29 = icmp sle i32 %24, %28
  br i1 %29, label %30, label %33
30:
  %31 = load i32, i32* %7
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %7
  br label %19
33:
  %34 = load i32, i32* %7
  %35 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %34)
  store i32 0, i32* %3
  br label %38
38:
  %39 = load i32, i32* %3
  ret i32 %39
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
