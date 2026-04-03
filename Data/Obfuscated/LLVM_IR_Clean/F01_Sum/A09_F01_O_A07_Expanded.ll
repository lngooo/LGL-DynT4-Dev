define dso_local i32 @Tb(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %3
  %7 = load i32, i32* %3
  %8 = icmp slt i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store i32 0, i32* %2
  br label %26
10:
  %12 = load i32, i32* %3
  %13 = load i32, i32* %3
  %14 = mul nsw i32 %12, %13
  store i32 %14, i32* %4
  %16 = load i32, i32* %4
  %17 = load i32, i32* %3
  %18 = add nsw i32 %16, %17
  store i32 %18, i32* %5
  %20 = load i32, i32* %5
  %21 = sdiv i32 %20, 2
  store i32 %21, i32* %6
  %22 = load i32, i32* %6
  store i32 %22, i32* %2
  br label %26
26:
  %27 = load i32, i32* %2
  ret i32 %27
}
