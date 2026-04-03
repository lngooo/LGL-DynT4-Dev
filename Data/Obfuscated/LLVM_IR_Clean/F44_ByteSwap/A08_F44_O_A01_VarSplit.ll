define dso_local i32 @ogvb(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  %7 = load i32, i32* %2
  %8 = and i32 %7, 255
  %9 = shl i32 %8, 24
  %10 = load i32, i32* %3
  %11 = or i32 %10, %9
  store i32 %11, i32* %3
  %12 = load i32, i32* %2
  %13 = and i32 %12, 65280
  %14 = shl i32 %13, 8
  %15 = load i32, i32* %3
  %16 = or i32 %15, %14
  store i32 %16, i32* %3
  %17 = load i32, i32* %2
  %18 = and i32 %17, 16711680
  %19 = lshr i32 %18, 8
  %20 = load i32, i32* %4
  %21 = or i32 %20, %19
  store i32 %21, i32* %4
  %22 = load i32, i32* %2
  %23 = and i32 %22, -16777216
  %24 = lshr i32 %23, 24
  %25 = load i32, i32* %4
  %26 = or i32 %25, %24
  store i32 %26, i32* %4
  %27 = load i32, i32* %3
  %28 = load i32, i32* %4
  %29 = or i32 %27, %28
  ret i32 %29
}
