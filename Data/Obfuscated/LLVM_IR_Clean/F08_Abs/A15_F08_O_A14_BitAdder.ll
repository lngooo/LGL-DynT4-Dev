define dso_local i32 @nczl(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  br label %6
6:
  %7 = load i32, i32* %4
  %8 = icmp ne i32 %7, 0
  br i1 %8, label %9, label %20
9:
  %11 = load i32, i32* %3
  %12 = load i32, i32* %4
  %13 = and i32 %11, %12
  store i32 %13, i32* %5
  %14 = load i32, i32* %3
  %15 = load i32, i32* %4
  %16 = xor i32 %14, %15
  store i32 %16, i32* %3
  %17 = load i32, i32* %5
  %18 = shl i32 %17, 1
  store i32 %18, i32* %4
  br label %6
20:
  %21 = load i32, i32* %3
  ret i32 %21
}
define dso_local i32 @O(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp sge i32 %4, 0
  br i1 %5, label %6, label %8
6:
  %7 = load i32, i32* %3
  store i32 %7, i32* %2
  br label %12
8:
  %9 = load i32, i32* %3
  %10 = xor i32 %9, -1
  %11 = call i32 @nczl(i32 %10, i32 1)
  store i32 %11, i32* %2
  br label %12
12:
  %13 = load i32, i32* %2
  ret i32 %13
}
