@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @wghn(i32 %0) {
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
  br label %64
9:
  %10 = load i32, i32* %3
  %11 = icmp slt i32 %10, 2
  br i1 %11, label %12, label %14
12:
  %13 = load i32, i32* %3
  store i32 %13, i32* %2
  br label %64
14:
  store i64 1, i64* %4
  br label %16
16:
  %17 = load i64, i64* %4
  %18 = shl i64 %17, 2
  %19 = load i32, i32* %3
  %20 = sext i32 %19 to i64
  %21 = icmp sle i64 %18, %20
  br i1 %21, label %22, label %25
22:
  %23 = load i64, i64* %4
  %24 = shl i64 %23, 1
  store i64 %24, i64* %4
  br label %16
25:
  %27 = load i64, i64* %4
  %28 = load i32, i32* %3
  %29 = sext i32 %28 to i64
  %30 = load i64, i64* %4
  %31 = sdiv i64 %29, %30
  %32 = add nsw i64 %27, %31
  %33 = ashr i64 %32, 1
  store i64 %33, i64* %5
  br label %34
34:
  %35 = load i64, i64* %5
  %36 = load i64, i64* %4
  %37 = icmp slt i64 %35, %36
  br i1 %37, label %38, label %47
38:
  %39 = load i64, i64* %5
  store i64 %39, i64* %4
  %40 = load i64, i64* %4
  %41 = load i32, i32* %3
  %42 = sext i32 %41 to i64
  %43 = load i64, i64* %4
  %44 = sdiv i64 %42, %43
  %45 = add nsw i64 %40, %44
  %46 = ashr i64 %45, 1
  store i64 %46, i64* %5
  br label %34
47:
  %48 = load i64, i64* %4
  %49 = add nsw i64 %48, 1
  %50 = load i64, i64* %4
  %51 = add nsw i64 %50, 1
  %52 = mul nsw i64 %49, %51
  %53 = load i32, i32* %3
  %54 = sext i32 %53 to i64
  %55 = icmp sle i64 %52, %54
  br i1 %55, label %56, label %59
56:
  %57 = load i64, i64* %4
  %58 = add nsw i64 %57, 1
  store i64 %58, i64* %4
  br label %59
59:
  %60 = load i64, i64* %4
  %61 = trunc i64 %60 to i32
  store i32 %61, i32* %2
  br label %64
64:
  %65 = load i32, i32* %2
  ret i32 %65
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
  %14 = call i32 @wghn(i32 %13)
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
