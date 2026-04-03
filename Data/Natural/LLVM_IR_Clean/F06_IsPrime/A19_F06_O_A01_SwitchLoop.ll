define dso_local i32 @IsPrime(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %2
  br label %30
9:
  store i32 2, i32* %4
  br label %11
11:
  br label %12
12:
  %13 = load i32, i32* %4
  %14 = load i32, i32* %4
  %15 = mul nsw i32 %13, %14
  %16 = load i32, i32* %3
  %17 = icmp sgt i32 %15, %16
  br i1 %17, label %18, label %19
18:
  store i32 1, i32* %2
  store i32 1, i32* %5
  br label %28
19:
  %20 = load i32, i32* %3
  %21 = load i32, i32* %4
  %22 = srem i32 %20, %21
  switch i32 %22, label %24 [
    i32 0, label %23
  ]
23:
  store i32 0, i32* %2
  store i32 1, i32* %5
  br label %28
24:
  %25 = load i32, i32* %4
  %26 = add nsw i32 %25, 1
  store i32 %26, i32* %4
  br label %27
27:
  br label %11
28:
  br label %30
30:
  %31 = load i32, i32* %2
  ret i32 %31
}
