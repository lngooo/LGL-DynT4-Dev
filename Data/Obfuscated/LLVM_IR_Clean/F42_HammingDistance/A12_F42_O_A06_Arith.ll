define dso_local i32 @Bjc0(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %8 = load i32, i32* %3
  %9 = load i32, i32* %4
  %10 = or i32 %8, %9
  %11 = load i32, i32* %3
  %12 = load i32, i32* %4
  %13 = and i32 %11, %12
  %14 = sub i32 %10, %13
  store i32 %14, i32* %5
  %15 = load i32, i32* %5
  %16 = load i32, i32* %5
  %17 = lshr i32 %16, 1
  %18 = and i32 %17, 1431655765
  %19 = sub i32 %15, %18
  store i32 %19, i32* %5
  %20 = load i32, i32* %5
  %21 = and i32 %20, 858993459
  %22 = load i32, i32* %5
  %23 = lshr i32 %22, 2
  %24 = and i32 %23, 858993459
  %25 = add i32 %21, %24
  store i32 %25, i32* %5
  %27 = load i32, i32* %5
  %28 = load i32, i32* %5
  %29 = lshr i32 %28, 4
  %30 = add i32 %27, %29
  %31 = and i32 %30, 252645135
  %32 = mul i32 %31, 16843009
  %33 = lshr i32 %32, 24
  store i32 %33, i32* %6
  %34 = load i32, i32* %6
  %35 = load i32, i32* %3
  %36 = load i32, i32* %3
  %37 = xor i32 %35, %36
  %38 = add i32 %34, %37
  ret i32 %38
}
