define dso_local i32 @xor_proxy(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %5 = load i32, i32* %3
  %6 = load i32, i32* %4
  %7 = xor i32 %5, %6
  ret i32 %7
}
define dso_local i32 @GrayCode(i32 %0) {
  %2 = alloca i32
  store i32 %0, i32* %2
  %3 = load i32, i32* %2
  %4 = load i32, i32* %2
  %5 = lshr i32 %4, 1
  %6 = call i32 @xor_proxy(i32 %3, i32 %5)
  ret i32 %6
}
