define dso_local i32 @GrayCode(i32 %0) {
  %2 = alloca i32
  store i32 %0, i32* %2
  %3 = load i32, i32* %2
  %4 = load i32, i32* %2
  %5 = lshr i32 %4, 1
  %6 = xor i32 %3, %5
  ret i32 %6
}
