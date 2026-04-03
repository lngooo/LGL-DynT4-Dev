define dso_local i32 @Log2(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  %7 = load i32, i32* %2
  store i32 %7, i32* %4
  br label %8
8:
  %9 = load i32, i32* %4
  %10 = icmp uge i32 %9, 2
  br i1 %10, label %11, label %19
11:
  %12 = load i32, i32* %4
  %13 = load i32, i32* %4
  %14 = urem i32 %13, 2
  %15 = sub i32 %12, %14
  %16 = udiv i32 %15, 2
  store i32 %16, i32* %4
  %17 = load i32, i32* %3
  %18 = add nsw i32 %17, 1
  store i32 %18, i32* %3
  br label %8
19:
  %20 = load i32, i32* %3
  ret i32 %20
}
