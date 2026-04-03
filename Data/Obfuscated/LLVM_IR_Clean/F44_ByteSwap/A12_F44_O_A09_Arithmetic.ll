define dso_local i32 @F(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %2
  %8 = load i32, i32* %2
  %9 = urem i32 %8, 256
  store i32 %9, i32* %3
  %11 = load i32, i32* %2
  %12 = udiv i32 %11, 256
  %13 = urem i32 %12, 256
  store i32 %13, i32* %4
  %15 = load i32, i32* %2
  %16 = udiv i32 %15, 65536
  %17 = urem i32 %16, 256
  store i32 %17, i32* %5
  %19 = load i32, i32* %2
  %20 = udiv i32 %19, 16777216
  store i32 %20, i32* %6
  %21 = load i32, i32* %3
  %22 = mul i32 %21, 16777216
  %23 = load i32, i32* %4
  %24 = mul i32 %23, 65536
  %25 = add i32 %22, %24
  %26 = load i32, i32* %5
  %27 = mul i32 %26, 256
  %28 = add i32 %25, %27
  %29 = load i32, i32* %6
  %30 = add i32 %28, %29
  ret i32 %30
}
