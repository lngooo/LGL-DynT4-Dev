@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @NewtonRoot(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca float
  %5 = alloca i32*
  %6 = alloca i64
  %7 = alloca i32
  store i32 %0, i32* %3
  %8 = load i32, i32* %3
  %9 = icmp slt i32 %8, 0
  br i1 %9, label %10, label %11
10:
  store i32 -1, i32* %2
  br label %52
11:
  %13 = load i32, i32* %3
  %14 = sitofp i32 %13 to float
  store float %14, float* %4
  store i32* %16, i32** %5
  %17 = load i32*, i32** %5
  %18 = load i32, i32* %17
  %19 = lshr i32 %18, 1
  %20 = add i32 532487669, %19
  %21 = load i32*, i32** %5
  store i32 %20, i32* %21
  %23 = load float, float* %4
  %24 = fptosi float %23 to i64
  store i64 %24, i64* %6
  %25 = load i64, i64* %6
  %26 = icmp sle i64 %25, 0
  br i1 %26, label %27, label %28
27:
  store i64 1, i64* %6
  br label %28
28:
  store i32 0, i32* %7
  br label %30
30:
  %31 = load i32, i32* %7
  %32 = icmp slt i32 %31, 3
  br i1 %32, label %35, label %33
33:
  br label %46
35:
  %36 = load i64, i64* %6
  %37 = load i32, i32* %3
  %38 = sext i32 %37 to i64
  %39 = load i64, i64* %6
  %40 = sdiv i64 %38, %39
  %41 = add nsw i64 %36, %40
  %42 = ashr i64 %41, 1
  store i64 %42, i64* %6
  br label %43
43:
  %44 = load i32, i32* %7
  %45 = add nsw i32 %44, 1
  store i32 %45, i32* %7
  br label %30
46:
  %47 = load i64, i64* %6
  %48 = trunc i64 %47 to i32
  store i32 %48, i32* %2
  br label %52
52:
  %53 = load i32, i32* %2
  ret i32 %53
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
