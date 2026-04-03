define dso_local i32 @xiA5(i32 %0) {
  %2 = alloca i32
  store i32 %0, i32* %2
  %3 = load i32, i32* %2
  %4 = and i32 %3, 1431655765
  %5 = load i32, i32* %2
  %6 = lshr i32 %5, 1
  %7 = and i32 %6, 1431655765
  %8 = add i32 %4, %7
  store i32 %8, i32* %2
  %9 = load i32, i32* %2
  %10 = and i32 %9, 858993459
  %11 = load i32, i32* %2
  %12 = lshr i32 %11, 2
  %13 = and i32 %12, 858993459
  %14 = add i32 %10, %13
  store i32 %14, i32* %2
  %15 = load i32, i32* %2
  %16 = and i32 %15, 252645135
  %17 = load i32, i32* %2
  %18 = lshr i32 %17, 4
  %19 = and i32 %18, 252645135
  %20 = add i32 %16, %19
  store i32 %20, i32* %2
  %21 = load i32, i32* %2
  %22 = and i32 %21, 16711935
  %23 = load i32, i32* %2
  %24 = lshr i32 %23, 8
  %25 = and i32 %24, 16711935
  %26 = add i32 %22, %25
  store i32 %26, i32* %2
  %27 = load i32, i32* %2
  %28 = and i32 %27, 65535
  %29 = load i32, i32* %2
  %30 = lshr i32 %29, 16
  %31 = and i32 %30, 65535
  %32 = add i32 %28, %31
  store i32 %32, i32* %2
  %33 = load i32, i32* %2
  ret i32 %33
}
