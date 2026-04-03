define dso_local i64 @CgS(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i32
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp slt i32 %6, 0
  br i1 %7, label %8, label %9
8:
  store i64 0, i64* %2
  br label %29
9:
  store i64 1, i64* %4
  store i32 1, i32* %5
  br label %12
12:
  %13 = load i32, i32* %5
  %14 = load i32, i32* %3
  %15 = icmp sle i32 %13, %14
  br i1 %15, label %18, label %16
16:
  br label %26
18:
  %19 = load i32, i32* %5
  %20 = sext i32 %19 to i64
  %21 = load i64, i64* %4
  %22 = mul nsw i64 %21, %20
  store i64 %22, i64* %4
  br label %23
23:
  %24 = load i32, i32* %5
  %25 = add nsw i32 %24, 1
  store i32 %25, i32* %5
  br label %12
26:
  %27 = load i64, i64* %4
  store i64 %27, i64* %2
  br label %29
29:
  %30 = load i64, i64* %2
  ret i64 %30
}
