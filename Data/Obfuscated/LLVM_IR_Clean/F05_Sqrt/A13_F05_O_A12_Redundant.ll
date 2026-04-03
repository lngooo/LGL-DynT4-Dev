define dso_local i32 @Si(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 1, i32* %4
  store i32 100, i32* %5
  br label %10
10:
  %11 = load i32, i32* %2
  %12 = load i32, i32* %4
  %13 = icmp sge i32 %11, %12
  br i1 %13, label %14, label %37
14:
  %16 = load i32, i32* %4
  %17 = add nsw i32 %16, 2
  store i32 %17, i32* %6
  %18 = load i32, i32* %2
  %19 = load i32, i32* %4
  %20 = sub nsw i32 %18, %19
  store i32 %20, i32* %2
  %21 = load i32, i32* %6
  store i32 %21, i32* %4
  %22 = load i32, i32* %3
  %23 = add nsw i32 %22, 1
  store i32 %23, i32* %3
  %24 = load i32, i32* %5
  %25 = srem i32 %24, 2
  %26 = icmp eq i32 %25, 0
  br i1 %26, label %27, label %30
27:
  %28 = load i32, i32* %5
  %29 = sdiv i32 %28, 2
  br label %34
30:
  %31 = load i32, i32* %5
  %32 = mul nsw i32 %31, 3
  %33 = add nsw i32 %32, 1
  br label %34
34:
  %35 = phi i32 [ %29, %27 ], [ %33, %30 ]
  store i32 %35, i32* %5
  br label %10
37:
  %38 = load i32, i32* %3
  ret i32 %38
}
