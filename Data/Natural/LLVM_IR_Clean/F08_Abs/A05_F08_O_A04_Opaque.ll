define dso_local i32 @Abs(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %3
  %7 = load i32, i32* %3
  %8 = ashr i32 %7, 31
  store i32 %8, i32* %4
  %9 = load i32, i32* %3
  %10 = load i32, i32* %3
  %11 = mul nsw i32 %9, %10
  %12 = add nsw i32 %11, 1
  %13 = icmp sgt i32 %12, 0
  br i1 %13, label %14, label %20
14:
  %15 = load i32, i32* %3
  %16 = load i32, i32* %4
  %17 = xor i32 %15, %16
  %18 = load i32, i32* %4
  %19 = sub nsw i32 %17, %18
  store i32 %19, i32* %2
  store i32 1, i32* %5
  br label %21
20:
  store i32 0, i32* %2
  store i32 1, i32* %5
  br label %21
21:
  %23 = load i32, i32* %2
  ret i32 %23
}
