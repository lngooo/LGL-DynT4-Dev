define dso_local i32 @ByteSwap(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %2
  %5 = load i32, i32* %2
  %6 = shl i32 %5, 8
  %7 = and i32 %6, -16711936
  %8 = load i32, i32* %2
  %9 = lshr i32 %8, 8
  %10 = and i32 %9, 16711935
  %11 = or i32 %7, %10
  store i32 %11, i32* %3
  %12 = load i32, i32* %3
  %13 = shl i32 %12, 16
  %14 = load i32, i32* %3
  %15 = lshr i32 %14, 16
  %16 = or i32 %13, %15
  ret i32 %16
}
