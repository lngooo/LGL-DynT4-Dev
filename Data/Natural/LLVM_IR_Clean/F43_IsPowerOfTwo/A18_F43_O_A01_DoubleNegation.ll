define dso_local i32 @IsPowerOfTwo(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp ne i32 %4, 0
  br i1 %5, label %7, label %6
6:
  store i32 0, i32* %2
  br label %16
7:
  %8 = load i32, i32* %3
  %9 = load i32, i32* %3
  %10 = sub i32 %9, 1
  %11 = and i32 %8, %10
  %12 = icmp eq i32 %11, 0
  %13 = xor i1 %12, true
  %14 = xor i1 %13, true
  %15 = zext i1 %14 to i32
  store i32 %15, i32* %2
  br label %16
16:
  %17 = load i32, i32* %2
  ret i32 %17
}
