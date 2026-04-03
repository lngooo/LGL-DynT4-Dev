define dso_local i32 @s(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %2
  store i32 1431655765, i32* %3
  %5 = load i32, i32* %2
  %6 = load i32, i32* %2
  %7 = lshr i32 %6, 1
  %8 = load i32, i32* %3
  %9 = and i32 %7, %8
  %10 = sub i32 %5, %9
  store i32 %10, i32* %2
  %11 = load i32, i32* %2
  %12 = and i32 %11, 858993459
  %13 = load i32, i32* %2
  %14 = lshr i32 %13, 2
  %15 = and i32 %14, 858993459
  %16 = add i32 %12, %15
  store i32 %16, i32* %2
  %17 = load i32, i32* %2
  %18 = load i32, i32* %2
  %19 = lshr i32 %18, 4
  %20 = add i32 %17, %19
  %21 = and i32 %20, 252645135
  store i32 %21, i32* %2
  %22 = load i32, i32* %2
  %23 = load i32, i32* %2
  %24 = lshr i32 %23, 8
  %25 = add i32 %22, %24
  store i32 %25, i32* %2
  %26 = load i32, i32* %2
  %27 = load i32, i32* %2
  %28 = lshr i32 %27, 16
  %29 = add i32 %26, %28
  store i32 %29, i32* %2
  %30 = load i32, i32* %2
  %31 = and i32 %30, 63
  ret i32 %31
}
