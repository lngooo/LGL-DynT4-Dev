@PMVU.yDvN = internal constant [16 x i32] [i32 0, i32 1, i32 1, i32 1, i32 2, i32 2, i32 2, i32 2, i32 2, i32 3, i32 3, i32 3, i32 3, i32 3, i32 3, i32 3]
define dso_local i32 @PMVU(i32 %0) {
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
  %11 = icmp sle i32 %10, 15
  br i1 %11, label %12, label %17
12:
  %13 = load i32, i32* %3
  %14 = sext i32 %13 to i64
  %15 = getelementptr inbounds [16 x i32], [16 x i32]* @PMVU.yDvN, i64 0, i64 %14
  %16 = load i32, i32* %15
  store i32 %16, i32* %2
  br label %44
17:
  %19 = load i32, i32* %3
  %20 = sext i32 %19 to i64
  store i64 %20, i64* %4
  %22 = load i32, i32* %3
  %23 = sdiv i32 %22, 2
  %24 = add nsw i32 %23, 1
  %25 = sext i32 %24 to i64
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
