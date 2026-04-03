define dso_local i32 @GrayCode(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  %6 = load i32, i32* %2
  store i32 %6, i32* %3
  %8 = load i32, i32* %2
  %9 = lshr i32 %8, 1
  store i32 %9, i32* %4
  %10 = load i32, i32* %3
  %11 = load i32, i32* %4
  %12 = or i32 %10, %11
  %13 = load i32, i32* %3
  %14 = load i32, i32* %4
  %15 = and i32 %13, %14
  %16 = xor i32 %15, -1
  %17 = and i32 %12, %16
  ret i32 %17
}
