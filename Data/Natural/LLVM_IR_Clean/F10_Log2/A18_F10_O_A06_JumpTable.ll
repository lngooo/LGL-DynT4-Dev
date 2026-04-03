define dso_local i32 @Log2(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32 %0, i32* %3
  store i32 -1, i32* %4
  %10 = load i32, i32* %3
  store i32 %10, i32* %5
  store i32 1, i32* %6
  br label %12
12:
  %13 = load i32, i32* %6
  %14 = load i32, i32* %5
  %15 = icmp ugt i32 %13, %14
  br i1 %15, label %16, label %18
16:
  %17 = load i32, i32* %4
  store i32 %17, i32* %2
  store i32 1, i32* %7
  br label %28
18:
  %19 = load i32, i32* %6
  %20 = mul i32 %19, 2
  store i32 %20, i32* %6
  %21 = load i32, i32* %4
  %22 = add nsw i32 %21, 1
  store i32 %22, i32* %4
  %23 = load i32, i32* %6
  %24 = icmp eq i32 %23, 0
  br i1 %24, label %25, label %27
25:
  %26 = load i32, i32* %4
  store i32 %26, i32* %2
  store i32 1, i32* %7
  br label %28
27:
  br label %12
28:
  %32 = load i32, i32* %2
  ret i32 %32
}
