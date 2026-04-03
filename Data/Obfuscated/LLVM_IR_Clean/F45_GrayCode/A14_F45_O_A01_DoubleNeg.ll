define dso_local i32 @VM(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %2
  %5 = load i32, i32* %2
  %6 = lshr i32 %5, 1
  store i32 %6, i32* %3
  %7 = load i32, i32* %2
  %8 = xor i32 %7, -1
  %9 = load i32, i32* %3
  %10 = xor i32 %9, -1
  %11 = and i32 %8, %10
  %12 = load i32, i32* %2
  %13 = load i32, i32* %3
  %14 = and i32 %12, %13
  %15 = or i32 %11, %14
  %16 = xor i32 %15, -1
  ret i32 %16
}
