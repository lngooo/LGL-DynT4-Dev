define dso_local i32 @p(i32 %0, i32 %1) {
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
  store i32 0, i32* %7
  br label %14
14:
  %15 = load i32, i32* %7
  %16 = icmp ne i32 %15, -1
  br i1 %16, label %17, label %36
17:
  %18 = load i32, i32* %7
  switch i32 %18, label %35 [
    i32 0, label %19
    i32 1, label %25
  ]
19:
  %20 = load i32, i32* %5
  %21 = icmp ugt i32 %20, 0
  br i1 %21, label %22, label %23
22:
  store i32 1, i32* %7
  br label %24
23:
  store i32 -1, i32* %7
  br label %24
24:
  br label %35
25:
  %26 = load i32, i32* %5
  %27 = and i32 %26, 1
  %28 = icmp ne i32 %27, 0
  br i1 %28, label %29, label %32
29:
  %30 = load i32, i32* %6
  %31 = add nsw i32 %30, 1
  store i32 %31, i32* %6
  br label %32
32:
  %33 = load i32, i32* %5
  %34 = lshr i32 %33, 1
  store i32 %34, i32* %5
  store i32 0, i32* %7
  br label %35
35:
  br label %14
36:
  %37 = load i32, i32* %6
  ret i32 %37
}
