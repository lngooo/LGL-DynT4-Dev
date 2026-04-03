define dso_local i32 @HammingDistance(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %9 = load i32, i32* %3
  %10 = load i32, i32* %4
  %11 = xor i32 %9, %10
  store i32 %11, i32* %5
  store i32 0, i32* %6
  store i32 14, i32* %7
  br label %14
14:
  %15 = load i32, i32* %5
  %16 = icmp ne i32 %15, 0
  br i1 %16, label %17, label %36
17:
  %18 = load i32, i32* %7
  %19 = load i32, i32* %7
  %20 = mul nsw i32 %18, %19
  %21 = load i32, i32* %7
  %22 = add nsw i32 %20, %21
  %23 = srem i32 %22, 2
  %24 = icmp eq i32 %23, 0
  br i1 %24, label %25, label %32
25:
  %26 = load i32, i32* %5
  %27 = sub i32 %26, 1
  %28 = load i32, i32* %5
  %29 = and i32 %28, %27
  store i32 %29, i32* %5
  %30 = load i32, i32* %6
  %31 = add nsw i32 %30, 1
  store i32 %31, i32* %6
  br label %35
32:
  %33 = load i32, i32* %6
  %34 = add nsw i32 %33, 99
  store i32 %34, i32* %6
  br label %35
35:
  br label %14
36:
  %37 = load i32, i32* %6
  ret i32 %37
}
