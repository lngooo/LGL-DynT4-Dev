define dso_local i32 @GrayCode(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %2
  %8 = load i32, i32* %2
  store i32 %8, i32* %3
  %10 = load i32, i32* %2
  %11 = lshr i32 %10, 1
  store i32 %11, i32* %4
  %13 = load i32, i32* %3
  %14 = and i32 %13, 0
  %15 = load i32, i32* %4
  %16 = and i32 %15, 0
  %17 = or i32 %14, %16
  store i32 %17, i32* %5
  %19 = load i32, i32* %3
  %20 = load i32, i32* %4
  %21 = xor i32 %19, %20
  %22 = load i32, i32* %5
  %23 = or i32 %21, %22
  store i32 %23, i32* %6
  %24 = load i32, i32* %6
  %25 = and i32 %24, -1
  ret i32 %25
}
