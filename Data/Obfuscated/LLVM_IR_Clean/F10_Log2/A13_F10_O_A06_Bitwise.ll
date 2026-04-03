define dso_local i32 @ItC5(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  store i32 -1, i32* %3
  store i32 1, i32* %4
  br label %7
7:
  %8 = load i32, i32* %4
  %9 = load i32, i32* %2
  %10 = icmp ugt i32 %8, %9
  %11 = xor i1 %10, true
  br i1 %11, label %12, label %21
12:
  %13 = load i32, i32* %4
  %14 = shl i32 %13, 1
  store i32 %14, i32* %4
  %15 = load i32, i32* %3
  %16 = add nsw i32 %15, 1
  store i32 %16, i32* %3
  %17 = load i32, i32* %4
  %18 = icmp eq i32 %17, 0
  br i1 %18, label %19, label %20
19:
  br label %21
20:
  br label %7
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
