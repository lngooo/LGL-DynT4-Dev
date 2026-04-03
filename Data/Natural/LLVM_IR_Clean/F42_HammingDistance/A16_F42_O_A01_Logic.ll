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
  %15 = xor i1 %14, true
  br i1 %15, label %16, label %26
16:
  %17 = load i32, i32* %5
  %18 = and i32 %17, 1
  %19 = icmp ne i32 %18, 0
  br i1 %19, label %20, label %23
20:
  %21 = load i32, i32* %6
  %22 = add nsw i32 %21, 1
  store i32 %22, i32* %6
  br label %23
23:
  %24 = load i32, i32* %5
  %25 = lshr i32 %24, 1
  store i32 %25, i32* %5
  br label %12
26:
  %27 = load i32, i32* %6
  ret i32 %27
}
