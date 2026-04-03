define dso_local i32 @FVG(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32 %0, i32* %3
  %9 = load i32, i32* %3
  %10 = and i32 %9, -65536
  store i32 %10, i32* %4
  %12 = load i32, i32* %3
  %13 = and i32 %12, 65535
  store i32 %13, i32* %5
  %15 = load i32, i32* %4
  %16 = load i32, i32* %5
  %17 = or i32 %15, %16
  store i32 %17, i32* %6
  %18 = load i32, i32* %6
  %19 = icmp eq i32 %18, 0
  br i1 %19, label %20, label %21
20:
  store i32 0, i32* %2
  store i32 1, i32* %7
  br label %28
21:
  %22 = load i32, i32* %6
  %23 = load i32, i32* %6
  %24 = sub i32 %23, 1
  %25 = and i32 %22, %24
  %26 = icmp eq i32 %25, 0
  %27 = zext i1 %26 to i32
  store i32 %27, i32* %2
  store i32 1, i32* %7
  br label %28
28:
  %32 = load i32, i32* %2
  ret i32 %32
}
