define dso_local i32 @Log2(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i32, i32* %3
  %9 = icmp ne i32 %8, 2
  br i1 %9, label %10, label %23
10:
  %11 = load i32, i32* %3
  switch i32 %11, label %22 [
    i32 0, label %12
    i32 1, label %19
  ]
12:
  %13 = load i32, i32* %2
  %14 = ashr i32 %13, 1
  store i32 %14, i32* %2
  %15 = load i32, i32* %2
  %16 = icmp sgt i32 %15, 0
  %17 = zext i1 %16 to i64
  %18 = select i1 %16, i32 1, i32 2
  store i32 %18, i32* %3
  br label %22
19:
  %20 = load i32, i32* %4
  %21 = add nsw i32 %20, 1
  store i32 %21, i32* %4
  store i32 0, i32* %3
  br label %22
22:
  br label %7
23:
  %24 = load i32, i32* %4
  ret i32 %24
}
