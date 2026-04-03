define dso_local i32 @Power(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  store i32 1, i32* %5
  store i32 0, i32* %6
  store i32 0, i32* %7
  br label %11
11:
  %12 = load i32, i32* %7
  %13 = load i32, i32* %4
  %14 = icmp slt i32 %12, %13
  br i1 %14, label %17, label %15
15:
  br label %26
17:
  %18 = load i32, i32* %5
  %19 = load i32, i32* %3
  %20 = mul nsw i32 %18, %19
  store i32 %20, i32* %5
  %21 = load i32, i32* %6
  %22 = add nsw i32 %21, 0
  store i32 %22, i32* %6
  br label %23
23:
  %24 = load i32, i32* %7
  %25 = add nsw i32 %24, 1
  store i32 %25, i32* %7
  br label %11
26:
  %27 = load i32, i32* %5
  %28 = load i32, i32* %6
  %29 = add nsw i32 %27, %28
  ret i32 %29
}
