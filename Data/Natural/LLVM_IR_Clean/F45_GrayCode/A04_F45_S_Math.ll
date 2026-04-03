define dso_local i32 @GrayCode(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %2
  %5 = load i32, i32* %2
  %6 = lshr i32 %5, 1
  store i32 %6, i32* %3
  %7 = load i32, i32* %2
  %8 = load i32, i32* %3
  %9 = or i32 %7, %8
  %10 = load i32, i32* %2
  %11 = load i32, i32* %3
  %12 = and i32 %10, %11
  %13 = sub i32 %9, %12
  ret i32 %13
}
