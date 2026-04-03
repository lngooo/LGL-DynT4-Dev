define dso_local i32 @GrayCode(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  store i32 1, i32* %4
  br label %7
7:
  %8 = load i32, i32* %4
  %9 = icmp ne i32 %8, 0
  br i1 %9, label %10, label %18
10:
  %11 = load i32, i32* %4
  switch i32 %11, label %17 [
    i32 1, label %12
  ]
12:
  %13 = load i32, i32* %2
  %14 = load i32, i32* %2
  %15 = lshr i32 %14, 1
  %16 = xor i32 %13, %15
  store i32 %16, i32* %3
  store i32 0, i32* %4
  br label %17
17:
  br label %7
18:
  %19 = load i32, i32* %3
  ret i32 %19
}
