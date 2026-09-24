define dso_local i32 @xNo(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp sle i32 %6, 1
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %2
  br label %32
9:
  store i32 2, i32* %4
  br label %11
11:
  %12 = load i32, i32* %4
  %13 = load i32, i32* %4
  %14 = mul nsw i32 %12, %13
  %15 = load i32, i32* %3
  %16 = icmp sle i32 %14, %15
  br i1 %16, label %18, label %17
17:
  store i32 2, i32* %5
  br label %28
18:
  %19 = load i32, i32* %3
  %20 = load i32, i32* %4
  %21 = srem i32 %19, %20
  %22 = icmp eq i32 %21, 0
  br i1 %22, label %23, label %24
23:
  store i32 0, i32* %2
  store i32 1, i32* %5
  br label %28
24:
  br label %25
25:
  %26 = load i32, i32* %4
  %27 = add nsw i32 %26, 1
  store i32 %27, i32* %4
  br label %11
28:
  %30 = load i32, i32* %5
  switch i32 %30, label %34 [
    i32 2, label %31
    i32 1, label %32
  ]
31:
  store i32 1, i32* %2
  br label %32
32:
  %33 = load i32, i32* %2
  ret i32 %33
34:
  unreachable
}
