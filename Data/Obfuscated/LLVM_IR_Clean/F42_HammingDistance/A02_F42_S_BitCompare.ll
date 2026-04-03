define dso_local i32 @M(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  br label %9
9:
  %10 = load i32, i32* %6
  %11 = icmp slt i32 %10, 32
  br i1 %11, label %14, label %12
12:
  br label %31
14:
  %15 = load i32, i32* %3
  %16 = load i32, i32* %6
  %17 = shl i32 1, %16
  %18 = and i32 %15, %17
  %19 = load i32, i32* %4
  %20 = load i32, i32* %6
  %21 = shl i32 1, %20
  %22 = and i32 %19, %21
  %23 = icmp ne i32 %18, %22
  br i1 %23, label %24, label %27
24:
  %25 = load i32, i32* %5
  %26 = add nsw i32 %25, 1
  store i32 %26, i32* %5
  br label %27
27:
  br label %28
28:
  %29 = load i32, i32* %6
  %30 = add nsw i32 %29, 1
  store i32 %30, i32* %6
  br label %9
31:
  %32 = load i32, i32* %5
  ret i32 %32
}
