define dso_local i32 @m(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 1, i32* %4
  br label %7
7:
  %8 = load i32, i32* %4
  %9 = icmp ne i32 %8, 0
  br i1 %9, label %10, label %27
10:
  %11 = load i32, i32* %4
  switch i32 %11, label %26 [
    i32 1, label %12
    i32 2, label %18
    i32 3, label %23
  ]
12:
  %13 = load i32, i32* %2
  %14 = icmp ugt i32 %13, 0
  br i1 %14, label %15, label %16
15:
  store i32 2, i32* %4
  br label %17
16:
  store i32 0, i32* %4
  br label %17
17:
  br label %26
18:
  %19 = load i32, i32* %2
  %20 = and i32 %19, 1
  %21 = load i32, i32* %3
  %22 = add i32 %21, %20
  store i32 %22, i32* %3
  store i32 3, i32* %4
  br label %26
23:
  %24 = load i32, i32* %2
  %25 = lshr i32 %24, 1
  store i32 %25, i32* %2
  store i32 1, i32* %4
  br label %26
26:
  br label %7
27:
  %28 = load i32, i32* %3
  ret i32 %28
}
