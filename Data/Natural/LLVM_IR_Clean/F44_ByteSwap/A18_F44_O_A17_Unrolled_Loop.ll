define dso_local i32 @ByteSwap(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  %7 = load i32, i32* %2
  %8 = lshr i32 %7, 0
  %9 = and i32 %8, 255
  store i32 %9, i32* %4
  %10 = load i32, i32* %4
  %11 = shl i32 %10, 24
  %12 = load i32, i32* %3
  %13 = or i32 %12, %11
  store i32 %13, i32* %3
  %14 = load i32, i32* %2
  %15 = lshr i32 %14, 8
  %16 = and i32 %15, 255
  store i32 %16, i32* %4
  %17 = load i32, i32* %4
  %18 = shl i32 %17, 16
  %19 = load i32, i32* %3
  %20 = or i32 %19, %18
  store i32 %20, i32* %3
  %21 = load i32, i32* %2
  %22 = lshr i32 %21, 16
  %23 = and i32 %22, 255
  store i32 %23, i32* %4
  %24 = load i32, i32* %4
  %25 = shl i32 %24, 8
  %26 = load i32, i32* %3
  %27 = or i32 %26, %25
  store i32 %27, i32* %3
  %28 = load i32, i32* %2
  %29 = lshr i32 %28, 24
  %30 = and i32 %29, 255
  store i32 %30, i32* %4
  %31 = load i32, i32* %4
  %32 = shl i32 %31, 0
  %33 = load i32, i32* %3
  %34 = or i32 %33, %32
  store i32 %34, i32* %3
  %35 = load i32, i32* %3
  ret i32 %35
}
