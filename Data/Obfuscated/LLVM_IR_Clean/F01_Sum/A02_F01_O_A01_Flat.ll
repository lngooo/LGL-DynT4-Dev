define dso_local i32 @I(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 1, i32* %4
  store i32 0, i32* %5
  br label %9
9:
  %10 = load i32, i32* %5
  %11 = icmp ne i32 %10, 2
  br i1 %11, label %12, label %28
12:
  %13 = load i32, i32* %5
  switch i32 %13, label %27 [
    i32 0, label %14
    i32 1, label %21
  ]
14:
  %15 = load i32, i32* %4
  %16 = load i32, i32* %2
  %17 = icmp sle i32 %15, %16
  br i1 %17, label %18, label %19
18:
  store i32 1, i32* %5
  br label %20
19:
  store i32 2, i32* %5
  br label %20
20:
  br label %27
21:
  %22 = load i32, i32* %4
  %23 = load i32, i32* %3
  %24 = add nsw i32 %23, %22
  store i32 %24, i32* %3
  %25 = load i32, i32* %4
  %26 = add nsw i32 %25, 1
  store i32 %26, i32* %4
  store i32 0, i32* %5
  br label %27
27:
  br label %9
28:
  %29 = load i32, i32* %3
  ret i32 %29
}
