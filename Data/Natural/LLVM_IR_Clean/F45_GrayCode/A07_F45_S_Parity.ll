define dso_local i32 @GrayCode(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 0, i32* %6
  br label %11
11:
  %12 = load i32, i32* %6
  %13 = icmp slt i32 %12, 32
  br i1 %13, label %16, label %14
14:
  br label %38
16:
  %17 = load i32, i32* %2
  %18 = load i32, i32* %6
  %19 = lshr i32 %17, %18
  %20 = and i32 %19, 1
  store i32 %20, i32* %4
  %21 = load i32, i32* %2
  %22 = load i32, i32* %6
  %23 = add nsw i32 %22, 1
  %24 = lshr i32 %21, %23
  %25 = and i32 %24, 1
  store i32 %25, i32* %5
  %26 = load i32, i32* %4
  %27 = load i32, i32* %5
  %28 = icmp ne i32 %26, %27
  br i1 %28, label %29, label %34
29:
  %30 = load i32, i32* %6
  %31 = shl i32 1, %30
  %32 = load i32, i32* %3
  %33 = or i32 %32, %31
  store i32 %33, i32* %3
  br label %34
34:
  br label %35
35:
  %36 = load i32, i32* %6
  %37 = add nsw i32 %36, 1
  store i32 %37, i32* %6
  br label %11
38:
  %39 = load i32, i32* %3
  ret i32 %39
}
