define dso_local i32 @u(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i32, i32* %3
  %9 = icmp ne i32 %8, 3
  br i1 %9, label %10, label %23
10:
  %11 = load i32, i32* %3
  switch i32 %11, label %22 [
    i32 0, label %12
    i32 1, label %17
    i32 2, label %20
  ]
12:
  %13 = load i32, i32* %2
  %14 = icmp slt i32 %13, 0
  %15 = zext i1 %14 to i64
  %16 = select i1 %14, i32 1, i32 2
  store i32 %16, i32* %3
  br label %22
17:
  %18 = load i32, i32* %2
  %19 = sub nsw i32 0, %18
  store i32 %19, i32* %4
  store i32 3, i32* %3
  br label %22
20:
  %21 = load i32, i32* %2
  store i32 %21, i32* %4
  store i32 3, i32* %3
  br label %22
22:
  br label %7
23:
  %24 = load i32, i32* %4
  ret i32 %24
}
