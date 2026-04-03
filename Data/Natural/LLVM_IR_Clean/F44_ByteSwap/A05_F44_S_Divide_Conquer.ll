define dso_local i32 @ByteSwap(i32 %0) {
  %2 = alloca i32
  store i32 %0, i32* %2
  %3 = load i32, i32* %2
  %4 = shl i32 %3, 16
  %5 = and i32 %4, -65536
  %6 = load i32, i32* %2
  %7 = lshr i32 %6, 16
  %8 = and i32 %7, 65535
  %9 = or i32 %5, %8
  store i32 %9, i32* %2
  %10 = load i32, i32* %2
  %11 = shl i32 %10, 8
  %12 = and i32 %11, -16711936
  %13 = load i32, i32* %2
  %14 = lshr i32 %13, 8
  %15 = and i32 %14, 16711935
  %16 = or i32 %12, %15
  store i32 %16, i32* %2
  %17 = load i32, i32* %2
  ret i32 %17
}
