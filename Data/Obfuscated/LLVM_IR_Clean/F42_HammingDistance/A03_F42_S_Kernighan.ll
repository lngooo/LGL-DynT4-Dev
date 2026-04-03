define dso_local i32 @f(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %8 = load i32, i32* %3
  %9 = load i32, i32* %4
  %10 = xor i32 %8, %9
  store i32 %10, i32* %5
  store i32 0, i32* %6
  br label %12
12:
  %13 = load i32, i32* %5
  %14 = icmp ne i32 %13, 0
  br i1 %14, label %15, label %22
15:
  %16 = load i32, i32* %5
  %17 = sub i32 %16, 1
  %18 = load i32, i32* %5
  %19 = and i32 %18, %17
  store i32 %19, i32* %5
  %20 = load i32, i32* %6
  %21 = add nsw i32 %20, 1
  store i32 %21, i32* %6
  br label %12
22:
  %23 = load i32, i32* %6
  ret i32 %23
}
