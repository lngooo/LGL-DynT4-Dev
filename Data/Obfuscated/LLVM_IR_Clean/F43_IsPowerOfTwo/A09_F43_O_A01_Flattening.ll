define dso_local i32 @z4(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  store i32 1, i32* %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i32, i32* %3
  %9 = icmp ne i32 %8, 0
  br i1 %9, label %10, label %26
10:
  %11 = load i32, i32* %3
  switch i32 %11, label %25 [
    i32 1, label %12
    i32 2, label %17
    i32 3, label %18
  ]
12:
  %13 = load i32, i32* %2
  %14 = icmp eq i32 %13, 0
  %15 = zext i1 %14 to i64
  %16 = select i1 %14, i32 2, i32 3
  store i32 %16, i32* %3
  br label %25
17:
  store i32 0, i32* %4
  store i32 0, i32* %3
  br label %25
18:
  %19 = load i32, i32* %2
  %20 = load i32, i32* %2
  %21 = sub i32 %20, 1
  %22 = and i32 %19, %21
  %23 = icmp eq i32 %22, 0
  %24 = zext i1 %23 to i32
  store i32 %24, i32* %4
  store i32 0, i32* %3
  br label %25
25:
  br label %7
26:
  %27 = load i32, i32* %4
  ret i32 %27
}
