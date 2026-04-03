define dso_local i32 @Sqrt(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i64
  store i32 %0, i32* %3
  %5 = load i32, i32* %3
  %6 = icmp slt i32 %5, 0
  br i1 %6, label %7, label %8
7:
  store i32 -1, i32* %2
  br label %26
8:
  store i64 0, i64* %4
  br label %10
10:
  %11 = load i64, i64* %4
  %12 = add nsw i64 %11, 1
  %13 = load i64, i64* %4
  %14 = add nsw i64 %13, 1
  %15 = mul nsw i64 %12, %14
  %16 = load i32, i32* %3
  %17 = sext i32 %16 to i64
  %18 = icmp sle i64 %15, %17
  br i1 %18, label %19, label %22
19:
  %20 = load i64, i64* %4
  %21 = add nsw i64 %20, 1
  store i64 %21, i64* %4
  br label %10
22:
  %23 = load i64, i64* %4
  %24 = trunc i64 %23 to i32
  store i32 %24, i32* %2
  br label %26
26:
  %27 = load i32, i32* %2
  ret i32 %27
}
