define dso_local i32 @EXU(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i32, i32* %4
  %9 = icmp sge i32 %8, 32
  br i1 %9, label %10, label %11
10:
  br label %30
11:
  %12 = load i32, i32* %2
  %13 = load i32, i32* %4
  %14 = lshr i32 %12, %13
  %15 = and i32 %14, 1
  %16 = load i32, i32* %2
  %17 = load i32, i32* %4
  %18 = add nsw i32 %17, 1
  %19 = lshr i32 %16, %18
  %20 = and i32 %19, 1
  %21 = icmp ne i32 %15, %20
  br i1 %21, label %22, label %27
22:
  %23 = load i32, i32* %4
  %24 = shl i32 1, %23
  %25 = load i32, i32* %3
  %26 = or i32 %25, %24
  store i32 %26, i32* %3
  br label %27
27:
  %28 = load i32, i32* %4
  %29 = add nsw i32 %28, 1
  store i32 %29, i32* %4
  br label %7
30:
  %31 = load i32, i32* %3
  ret i32 %31
}
