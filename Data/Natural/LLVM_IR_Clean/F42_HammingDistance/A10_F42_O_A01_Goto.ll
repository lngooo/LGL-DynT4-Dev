define dso_local i32 @HammingDistance(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %8 = load i32, i32* %3
  %9 = load i32, i32* %4
  %10 = xor i32 %8, %9
  store i32 %10, i32* %5
  store i32 0, i32* %6
  br label %12
12:
  %13 = load i32, i32* %5
  %14 = icmp eq i32 %13, 0
  br i1 %14, label %15, label %16
15:
  br label %28
16:
  %17 = load i32, i32* %5
  %18 = and i32 %17, 1
  %19 = icmp ne i32 %18, 0
  br i1 %19, label %20, label %21
20:
  br label %25
21:
  br label %22
22:
  %23 = load i32, i32* %5
  %24 = lshr i32 %23, 1
  store i32 %24, i32* %5
  br label %12
25:
  %26 = load i32, i32* %6
  %27 = add nsw i32 %26, 1
  store i32 %27, i32* %6
  br label %22
28:
  %29 = load i32, i32* %6
  ret i32 %29
}
