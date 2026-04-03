define dso_local i32 @ByteSwap(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %2
  %11 = load i32, i32* %2
  %12 = lshr i32 %11, 0
  %13 = and i32 %12, 255
  store i32 %13, i32* %3
  %14 = load i32, i32* %2
  %15 = lshr i32 %14, 8
  %16 = and i32 %15, 255
  store i32 %16, i32* %4
  %17 = load i32, i32* %2
  %18 = lshr i32 %17, 16
  %19 = and i32 %18, 255
  store i32 %19, i32* %5
  %20 = load i32, i32* %2
  %21 = lshr i32 %20, 24
  %22 = and i32 %21, 255
  store i32 %22, i32* %6
  %23 = load i32, i32* %3
  %24 = shl i32 %23, 24
  %25 = load i32, i32* %4
  %26 = shl i32 %25, 16
  %27 = or i32 %24, %26
  %28 = load i32, i32* %5
  %29 = shl i32 %28, 8
  %30 = or i32 %27, %29
  %31 = load i32, i32* %6
  %32 = or i32 %30, %31
  ret i32 %32
}
