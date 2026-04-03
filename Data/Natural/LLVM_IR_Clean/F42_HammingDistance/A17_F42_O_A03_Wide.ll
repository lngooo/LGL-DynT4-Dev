define dso_local i32 @HammingDistance(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i64
  %6 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %8 = load i32, i32* %3
  %9 = zext i32 %8 to i64
  %10 = load i32, i32* %4
  %11 = zext i32 %10 to i64
  %12 = xor i64 %9, %11
  store i64 %12, i64* %5
  store i32 0, i32* %6
  br label %14
14:
  %15 = load i64, i64* %5
  %16 = icmp ne i64 %15, 0
  br i1 %16, label %17, label %24
17:
  %18 = load i64, i64* %5
  %19 = sub i64 %18, 1
  %20 = load i64, i64* %5
  %21 = and i64 %20, %19
  store i64 %21, i64* %5
  %22 = load i32, i32* %6
  %23 = add nsw i32 %22, 1
  store i32 %23, i32* %6
  br label %14
24:
  %25 = load i32, i32* %6
  ret i32 %25
}
