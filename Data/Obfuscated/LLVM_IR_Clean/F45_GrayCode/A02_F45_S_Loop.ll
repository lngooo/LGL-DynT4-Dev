define dso_local i32 @i(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i32, i32* %4
  %9 = icmp slt i32 %8, 31
  br i1 %9, label %12, label %10
10:
  br label %33
12:
  %13 = load i32, i32* %2
  %14 = load i32, i32* %4
  %15 = lshr i32 %13, %14
  %16 = and i32 %15, 1
  %17 = load i32, i32* %2
  %18 = load i32, i32* %4
  %19 = add nsw i32 %18, 1
  %20 = lshr i32 %17, %19
  %21 = and i32 %20, 1
  %22 = xor i32 %16, %21
  %23 = icmp ne i32 %22, 0
  br i1 %23, label %24, label %29
24:
  %25 = load i32, i32* %4
  %26 = shl i32 1, %25
  %27 = load i32, i32* %3
  %28 = or i32 %27, %26
  store i32 %28, i32* %3
  br label %29
29:
  br label %30
30:
  %31 = load i32, i32* %4
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %4
  br label %7
33:
  %34 = load i32, i32* %2
  %35 = and i32 %34, -2147483648
  %36 = load i32, i32* %3
  %37 = or i32 %36, %35
  store i32 %37, i32* %3
  %38 = load i32, i32* %3
  ret i32 %38
}
