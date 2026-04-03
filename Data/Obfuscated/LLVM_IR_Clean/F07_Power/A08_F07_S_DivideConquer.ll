define dso_local i32 @H(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  %8 = load i32, i32* %5
  %9 = icmp eq i32 %8, 0
  br i1 %9, label %10, label %11
10:
  store i32 1, i32* %3
  br label %32
11:
  %13 = load i32, i32* %4
  %14 = load i32, i32* %5
  %15 = sdiv i32 %14, 2
  %16 = call i32 @H(i32 %13, i32 %15)
  store i32 %16, i32* %6
  %17 = load i32, i32* %5
  %18 = srem i32 %17, 2
  %19 = icmp eq i32 %18, 0
  br i1 %19, label %20, label %24
20:
  %21 = load i32, i32* %6
  %22 = load i32, i32* %6
  %23 = mul nsw i32 %21, %22
  store i32 %23, i32* %3
  store i32 1, i32* %7
  br label %30
24:
  %25 = load i32, i32* %4
  %26 = load i32, i32* %6
  %27 = mul nsw i32 %25, %26
  %28 = load i32, i32* %6
  %29 = mul nsw i32 %27, %28
  store i32 %29, i32* %3
  store i32 1, i32* %7
  br label %30
30:
  br label %32
32:
  %33 = load i32, i32* %3
  ret i32 %33
}
