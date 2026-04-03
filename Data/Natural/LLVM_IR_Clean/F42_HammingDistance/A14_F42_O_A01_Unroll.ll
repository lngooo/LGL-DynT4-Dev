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
  %14 = icmp ugt i32 %13, 0
  br i1 %14, label %15, label %38
15:
  %16 = load i32, i32* %5
  %17 = and i32 %16, 1
  %18 = icmp ne i32 %17, 0
  br i1 %18, label %19, label %22
19:
  %20 = load i32, i32* %6
  %21 = add nsw i32 %20, 1
  store i32 %21, i32* %6
  br label %22
22:
  %23 = load i32, i32* %5
  %24 = lshr i32 %23, 1
  store i32 %24, i32* %5
  %25 = load i32, i32* %5
  %26 = icmp eq i32 %25, 0
  br i1 %26, label %27, label %28
27:
  br label %38
28:
  %29 = load i32, i32* %5
  %30 = and i32 %29, 1
  %31 = icmp ne i32 %30, 0
  br i1 %31, label %32, label %35
32:
  %33 = load i32, i32* %6
  %34 = add nsw i32 %33, 1
  store i32 %34, i32* %6
  br label %35
35:
  %36 = load i32, i32* %5
  %37 = lshr i32 %36, 1
  store i32 %37, i32* %5
  br label %12
38:
  %39 = load i32, i32* %6
  ret i32 %39
}
