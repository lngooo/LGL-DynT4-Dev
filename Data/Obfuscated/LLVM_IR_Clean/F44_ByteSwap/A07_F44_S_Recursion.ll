define dso_local i32 @pv3(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  %6 = load i32, i32* %5
  %7 = icmp eq i32 %6, 0
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %22
9:
  %10 = load i32, i32* %4
  %11 = and i32 %10, 255
  %12 = load i32, i32* %5
  %13 = sub nsw i32 %12, 1
  %14 = mul nsw i32 8, %13
  %15 = shl i32 %11, %14
  %16 = load i32, i32* %4
  %17 = lshr i32 %16, 8
  %18 = load i32, i32* %5
  %19 = sub nsw i32 %18, 1
  %20 = call i32 @pv3(i32 %17, i32 %19)
  %21 = or i32 %15, %20
  store i32 %21, i32* %3
  br label %22
22:
  %23 = load i32, i32* %3
  ret i32 %23
}
define dso_local i32 @Ut(i32 %0) {
  %2 = alloca i32
  store i32 %0, i32* %2
  %3 = load i32, i32* %2
  %4 = call i32 @pv3(i32 %3, i32 4)
  ret i32 %4
}
