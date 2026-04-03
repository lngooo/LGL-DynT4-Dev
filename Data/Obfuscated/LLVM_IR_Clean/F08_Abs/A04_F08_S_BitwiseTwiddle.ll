define dso_local i32 @QEN(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %2
  %5 = load i32, i32* %2
  %6 = ashr i32 %5, 31
  store i32 %6, i32* %3
  %7 = load i32, i32* %2
  %8 = load i32, i32* %3
  %9 = xor i32 %7, %8
  %10 = load i32, i32* %3
  %11 = sub nsw i32 %9, %10
  ret i32 %11
}
