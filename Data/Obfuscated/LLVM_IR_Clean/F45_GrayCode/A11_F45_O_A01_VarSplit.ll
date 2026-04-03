define dso_local i32 @LazD(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %2
  %7 = load i32, i32* %2
  %8 = and i32 %7, -65536
  store i32 %8, i32* %3
  %10 = load i32, i32* %2
  %11 = and i32 %10, 65535
  store i32 %11, i32* %4
  %13 = load i32, i32* %3
  %14 = load i32, i32* %4
  %15 = or i32 %13, %14
  %16 = lshr i32 %15, 1
  store i32 %16, i32* %5
  %17 = load i32, i32* %3
  %18 = load i32, i32* %4
  %19 = or i32 %17, %18
  %20 = load i32, i32* %5
  %21 = xor i32 %19, %20
  ret i32 %21
}
