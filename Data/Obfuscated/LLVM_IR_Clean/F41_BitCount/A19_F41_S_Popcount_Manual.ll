define dso_local i32 @h0(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %2
  %5 = load i32, i32* %2
  %6 = load i32, i32* %2
  %7 = lshr i32 %6, 1
  %8 = and i32 %7, -613566757
  %9 = sub i32 %5, %8
  %10 = load i32, i32* %2
  %11 = lshr i32 %10, 2
  %12 = and i32 %11, 1227133513
  %13 = sub i32 %9, %12
  store i32 %13, i32* %3
  %14 = load i32, i32* %3
  %15 = load i32, i32* %3
  %16 = lshr i32 %15, 3
  %17 = add i32 %14, %16
  %18 = and i32 %17, -954437177
  %19 = urem i32 %18, 63
  ret i32 %19
}
