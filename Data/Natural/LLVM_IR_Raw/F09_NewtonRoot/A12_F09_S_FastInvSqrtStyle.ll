@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @NewtonRoot(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca float
  %5 = alloca i32
  %6 = alloca i64
  store i32 %0, i32* %3
  %7 = load i32, i32* %3
  %8 = icmp slt i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store i32 -1, i32* %2
  br label %65
10:
  %11 = load i32, i32* %3
  %12 = icmp slt i32 %11, 2
  br i1 %12, label %13, label %15
13:
  %14 = load i32, i32* %3
  store i32 %14, i32* %2
  br label %65
15:
  %17 = load i32, i32* %3
  %18 = sitofp i32 %17 to float
  store float %18, float* %4
  %21 = load i32, i32* %20
  store i32 %21, i32* %5
  %22 = load i32, i32* %5
  %23 = lshr i32 %22, 1
  %24 = add i32 532487669, %23
  store i32 %24, i32* %5
  %26 = load float, float* %25
  store float %26, float* %4
  %28 = load float, float* %4
  %29 = fptosi float %28 to i64
  store i64 %29, i64* %6
  %30 = load i64, i64* %6
  %31 = icmp eq i64 %30, 0
  br i1 %31, label %32, label %33
32:
  store i64 1, i64* %6
  br label %33
33:
  %34 = load i64, i64* %6
  %35 = load i32, i32* %3
  %36 = sext i32 %35 to i64
  %37 = load i64, i64* %6
  %38 = sdiv i64 %36, %37
  %39 = add nsw i64 %34, %38
  %40 = sdiv i64 %39, 2
  store i64 %40, i64* %6
  %41 = load i64, i64* %6
  %42 = load i32, i32* %3
  %43 = sext i32 %42 to i64
  %44 = load i64, i64* %6
  %45 = sdiv i64 %43, %44
  %46 = add nsw i64 %41, %45
  %47 = sdiv i64 %46, 2
  store i64 %47, i64* %6
  %48 = load i64, i64* %6
  %49 = add nsw i64 %48, 1
  %50 = load i64, i64* %6
  %51 = add nsw i64 %50, 1
  %52 = mul nsw i64 %49, %51
  %53 = load i32, i32* %3
  %54 = sext i32 %53 to i64
  %55 = icmp sle i64 %52, %54
  br i1 %55, label %56, label %59
56:
  %57 = load i64, i64* %6
  %58 = add nsw i64 %57, 1
  store i64 %58, i64* %6
  br label %59
59:
  %60 = load i64, i64* %6
  %61 = trunc i64 %60 to i32
  store i32 %61, i32* %2
  br label %65
65:
  %66 = load i32, i32* %2
  ret i32 %66
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
