define dso_local i32 @HPr(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %2
  %8 = load i32, i32* %2
  %9 = xor i32 %8, -559038737
  store i32 %9, i32* %3
  %11 = load i32, i32* %2
  %12 = shl i32 %11, 16
  %13 = and i32 %12, -65536
  store i32 %13, i32* %4
  %15 = load i32, i32* %2
  %16 = lshr i32 %15, 16
  %17 = and i32 %16, 65535
  store i32 %17, i32* %5
  %18 = load i32, i32* %3
  %19 = shl i32 %18, 1
  %20 = load i32, i32* %3
  %21 = lshr i32 %20, 31
  %22 = or i32 %19, %21
  store i32 %22, i32* %3
  %24 = load i32, i32* %4
  %25 = load i32, i32* %5
  %26 = or i32 %24, %25
  store i32 %26, i32* %6
  %27 = load i32, i32* %6
  %28 = shl i32 %27, 8
  %29 = and i32 %28, -16711936
  %30 = load i32, i32* %6
  %31 = lshr i32 %30, 8
  %32 = and i32 %31, 16711935
  %33 = or i32 %29, %32
  store i32 %33, i32* %6
  %34 = load i32, i32* %6
  %35 = load i32, i32* %3
  %36 = load i32, i32* %3
  %37 = sub i32 %35, %36
  %38 = add i32 %34, %37
  ret i32 %38
}
