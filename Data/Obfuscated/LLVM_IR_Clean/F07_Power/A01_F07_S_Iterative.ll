define dso_local i32 @Za(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  store i32 1, i32* %5
  store i32 0, i32* %6
  br label %9
9:
  %10 = load i32, i32* %6
  %11 = load i32, i32* %4
  %12 = icmp slt i32 %10, %11
  br i1 %12, label %15, label %13
13:
  br label %22
15:
  %16 = load i32, i32* %3
  %17 = load i32, i32* %5
  %18 = mul nsw i32 %17, %16
  store i32 %18, i32* %5
  br label %19
19:
  %20 = load i32, i32* %6
  %21 = add nsw i32 %20, 1
  store i32 %21, i32* %6
  br label %9
22:
  %23 = load i32, i32* %5
  ret i32 %23
}
