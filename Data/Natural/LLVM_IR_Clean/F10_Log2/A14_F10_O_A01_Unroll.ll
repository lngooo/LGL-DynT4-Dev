define dso_local i32 @Log2(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  br label %5
5:
  %6 = load i32, i32* %2
  %7 = icmp sge i32 %6, 4
  br i1 %7, label %8, label %13
8:
  %9 = load i32, i32* %2
  %10 = ashr i32 %9, 2
  store i32 %10, i32* %2
  %11 = load i32, i32* %3
  %12 = add nsw i32 %11, 2
  store i32 %12, i32* %3
  br label %5
13:
  br label %14
14:
  %15 = load i32, i32* %2
  %16 = icmp sge i32 %15, 2
  br i1 %16, label %17, label %22
17:
  %18 = load i32, i32* %2
  %19 = ashr i32 %18, 1
  store i32 %19, i32* %2
  %20 = load i32, i32* %3
  %21 = add nsw i32 %20, 1
  store i32 %21, i32* %3
  br label %14
22:
  %23 = load i32, i32* %3
  ret i32 %23
}
