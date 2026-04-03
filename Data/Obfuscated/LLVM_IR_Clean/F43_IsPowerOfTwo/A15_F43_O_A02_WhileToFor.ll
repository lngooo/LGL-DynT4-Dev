define dso_local i32 @QFms(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp eq i32 %4, 0
  br i1 %5, label %6, label %7
6:
  store i32 0, i32* %2
  br label %21
7:
  br label %8
8:
  %9 = load i32, i32* %3
  %10 = urem i32 %9, 2
  %11 = icmp ne i32 %10, 0
  %12 = xor i1 %11, true
  br i1 %12, label %13, label %17
13:
  br label %14
14:
  %15 = load i32, i32* %3
  %16 = lshr i32 %15, 1
  store i32 %16, i32* %3
  br label %8
17:
  %18 = load i32, i32* %3
  %19 = icmp eq i32 %18, 1
  %20 = zext i1 %19 to i32
  store i32 %20, i32* %2
  br label %21
21:
  %22 = load i32, i32* %2
  ret i32 %22
}
