define dso_local i32 @HammingDistance(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %8 = load i32, i32* %3
  %9 = load i32, i32* %4
  %10 = add i32 %8, %9
  %11 = load i32, i32* %3
  %12 = load i32, i32* %4
  %13 = and i32 %11, %12
  %14 = mul i32 2, %13
  %15 = sub i32 %10, %14
  store i32 %15, i32* %5
  store i32 0, i32* %6
  br label %17
17:
  %18 = load i32, i32* %5
  %19 = icmp ne i32 %18, 0
  br i1 %19, label %20, label %27
20:
  %21 = load i32, i32* %5
  %22 = urem i32 %21, 2
  %23 = load i32, i32* %6
  %24 = add i32 %23, %22
  store i32 %24, i32* %6
  %25 = load i32, i32* %5
  %26 = udiv i32 %25, 2
  store i32 %26, i32* %5
  br label %17
27:
  %28 = load i32, i32* %6
  ret i32 %28
}
