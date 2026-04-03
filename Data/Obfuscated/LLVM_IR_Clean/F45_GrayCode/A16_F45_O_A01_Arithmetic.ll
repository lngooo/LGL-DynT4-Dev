define dso_local i32 @yC(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  %6 = load i32, i32* %2
  %7 = udiv i32 %6, 2
  store i32 %7, i32* %3
  %9 = load i32, i32* %2
  %10 = load i32, i32* %3
  %11 = xor i32 %9, %10
  store i32 %11, i32* %4
  %12 = load i32, i32* %4
  ret i32 %12
}
