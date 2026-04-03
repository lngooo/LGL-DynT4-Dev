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
  %13 = icmp ne i32 %12, -1
  br i1 %13, label %14, label %30
14:
  %15 = load i32, i32* %7
  switch i32 %15, label %29 [
    i32 0, label %16
    i32 1, label %22
    i32 2, label %28
  ]
16:
  %17 = load i32, i32* %6
  %18 = load i32, i32* %4
  %19 = icmp slt i32 %17, %18
  %20 = zext i1 %19 to i64
  %21 = select i1 %19, i32 1, i32 2
  store i32 %21, i32* %7
  br label %29
22:
  %23 = load i32, i32* %3
  %24 = load i32, i32* %5
  %25 = mul nsw i32 %24, %23
  store i32 %25, i32* %5
  %26 = load i32, i32* %6
  %27 = add nsw i32 %26, 1
  store i32 %27, i32* %6
  store i32 0, i32* %7
  br label %29
28:
  store i32 -1, i32* %7
  br label %29
29:
  br label %11
30:
  %31 = load i32, i32* %5
  ret i32 %31
}
