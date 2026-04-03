define dso_local i32 @Gkdh(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32*
  %7 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  store i32 1, i32* %5
  store i32* %5, i32** %6
  store i32 0, i32* %7
  br label %11
11:
  %12 = load i32, i32* %7
  %13 = load i32, i32* %4
  %14 = icmp slt i32 %12, %13
  br i1 %14, label %17, label %15
15:
  br label %25
17:
  %18 = load i32, i32* %3
  %19 = load i32*, i32** %6
  %20 = load i32, i32* %19
  %21 = mul nsw i32 %20, %18
  store i32 %21, i32* %19
  br label %22
22:
  %23 = load i32, i32* %7
  %24 = add nsw i32 %23, 1
  store i32 %24, i32* %7
  br label %11
25:
  %26 = load i32, i32* %5
  ret i32 %26
}
