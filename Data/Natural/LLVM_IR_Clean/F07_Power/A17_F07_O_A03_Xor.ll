define dso_local i32 @Power(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  store i32 1, i32* %5
  br label %7
7:
  %8 = load i32, i32* %4
  %9 = xor i32 %8, 0
  %10 = icmp ne i32 %9, 0
  br i1 %10, label %11, label %25
11:
  %12 = load i32, i32* %4
  %13 = and i32 %12, 1
  %14 = icmp ne i32 %13, 0
  br i1 %14, label %15, label %19
15:
  %16 = load i32, i32* %3
  %17 = load i32, i32* %5
  %18 = mul nsw i32 %17, %16
  store i32 %18, i32* %5
  br label %19
19:
  %20 = load i32, i32* %3
  %21 = load i32, i32* %3
  %22 = mul nsw i32 %21, %20
  store i32 %22, i32* %3
  %23 = load i32, i32* %4
  %24 = ashr i32 %23, 1
  store i32 %24, i32* %4
  br label %7
25:
  %26 = load i32, i32* %5
  ret i32 %26
}
