define dso_local i32 @PhN6(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  store i32 1, i32* %5
  store i32 0, i32* %6
  store i32 10, i32* %7
  br label %11
11:
  %12 = load i32, i32* %7
  %13 = icmp ne i32 %12, 0
  br i1 %13, label %14, label %29
14:
  %15 = load i32, i32* %7
  switch i32 %15, label %28 [
    i32 10, label %16
    i32 20, label %22
  ]
16:
  %17 = load i32, i32* %6
  %18 = load i32, i32* %4
  %19 = icmp slt i32 %17, %18
  %20 = zext i1 %19 to i64
  %21 = select i1 %19, i32 20, i32 0
  store i32 %21, i32* %7
  br label %28
22:
  %23 = load i32, i32* %3
  %24 = load i32, i32* %5
  %25 = mul nsw i32 %24, %23
  store i32 %25, i32* %5
  %26 = load i32, i32* %6
  %27 = add nsw i32 %26, 1
  store i32 %27, i32* %6
  store i32 10, i32* %7
  br label %28
28:
  br label %11
29:
  %30 = load i32, i32* %5
  ret i32 %30
}
