define dso_local i32 @Power(i32 %0, i32 %1) {
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
