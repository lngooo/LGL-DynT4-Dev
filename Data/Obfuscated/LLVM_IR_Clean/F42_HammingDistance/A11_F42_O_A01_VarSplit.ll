define dso_local i32 @E(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %10 = load i32, i32* %3
  %11 = load i32, i32* %4
  %12 = xor i32 %10, %11
  store i32 %12, i32* %5
  store i32 0, i32* %6
  store i32 0, i32* %7
  store i32 0, i32* %8
  br label %16
16:
  %17 = load i32, i32* %5
  %18 = icmp ugt i32 %17, 0
  br i1 %18, label %19, label %39
19:
  %20 = load i32, i32* %5
  %21 = and i32 %20, 1
  %22 = icmp ne i32 %21, 0
  br i1 %22, label %23, label %34
23:
  %24 = load i32, i32* %8
  %25 = srem i32 %24, 2
  %26 = icmp eq i32 %25, 0
  br i1 %26, label %27, label %30
27:
  %28 = load i32, i32* %6
  %29 = add nsw i32 %28, 1
  store i32 %29, i32* %6
  br label %33
30:
  %31 = load i32, i32* %7
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %7
  br label %33
33:
  br label %34
34:
  %35 = load i32, i32* %5
  %36 = lshr i32 %35, 1
  store i32 %36, i32* %5
  %37 = load i32, i32* %8
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* %8
  br label %16
39:
  %40 = load i32, i32* %6
  %41 = load i32, i32* %7
  %42 = add nsw i32 %40, %41
  ret i32 %42
}
