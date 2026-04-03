define dso_local i32 @Sf5(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  store i32 1, i32* %5
  %9 = load i32, i32* %3
  %10 = load i32, i32* %4
  %11 = add nsw i32 %9, %10
  store i32 %11, i32* %6
  br label %12
12:
  %13 = load i32, i32* %4
  %14 = icmp sgt i32 %13, 0
  br i1 %14, label %15, label %33
15:
  %16 = load i32, i32* %4
  %17 = srem i32 %16, 2
  %18 = icmp eq i32 %17, 1
  br i1 %18, label %19, label %25
19:
  %20 = load i32, i32* %3
  %21 = load i32, i32* %5
  %22 = mul nsw i32 %21, %20
  store i32 %22, i32* %5
  %23 = load i32, i32* %6
  %24 = add nsw i32 %23, 1
  store i32 %24, i32* %6
  br label %25
25:
  %26 = load i32, i32* %3
  %27 = load i32, i32* %3
  %28 = mul nsw i32 %27, %26
  store i32 %28, i32* %3
  %29 = load i32, i32* %4
  %30 = sdiv i32 %29, 2
  store i32 %30, i32* %4
  %31 = load i32, i32* %6
  %32 = mul nsw i32 %31, 0
  store i32 %32, i32* %6
  br label %12
33:
  %34 = load i32, i32* %5
  %35 = load i32, i32* %6
  %36 = add nsw i32 %34, %35
  ret i32 %36
}
