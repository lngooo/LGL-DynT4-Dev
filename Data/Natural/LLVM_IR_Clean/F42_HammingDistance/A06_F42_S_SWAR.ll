define dso_local i32 @HammingDistance(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %7 = load i32, i32* %3
  %8 = load i32, i32* %4
  %9 = xor i32 %7, %8
  store i32 %9, i32* %5
  %10 = load i32, i32* %5
  %11 = load i32, i32* %5
  %12 = lshr i32 %11, 1
  %13 = and i32 %12, 1431655765
  %14 = sub i32 %10, %13
  store i32 %14, i32* %5
  %15 = load i32, i32* %5
  %16 = and i32 %15, 858993459
  %17 = load i32, i32* %5
  %18 = lshr i32 %17, 2
  %19 = and i32 %18, 858993459
  %20 = add i32 %16, %19
  store i32 %20, i32* %5
  %21 = load i32, i32* %5
  %22 = load i32, i32* %5
  %23 = lshr i32 %22, 4
  %24 = add i32 %21, %23
  %25 = and i32 %24, 252645135
  %26 = mul i32 %25, 16843009
  %27 = lshr i32 %26, 24
  ret i32 %27
}
