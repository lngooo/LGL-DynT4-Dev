define dso_local i32 @Wi(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i32, i32* %4
  %9 = icmp slt i32 %8, 32
  br i1 %9, label %12, label %10
10:
  br label %25
12:
  %13 = load i32, i32* %2
  %14 = urem i32 %13, 2
  %15 = icmp ne i32 %14, 0
  br i1 %15, label %16, label %19
16:
  %17 = load i32, i32* %3
  %18 = add nsw i32 %17, 1
  store i32 %18, i32* %3
  br label %19
19:
  %20 = load i32, i32* %2
  %21 = udiv i32 %20, 2
  store i32 %21, i32* %2
  br label %22
22:
  %23 = load i32, i32* %4
  %24 = add nsw i32 %23, 1
  store i32 %24, i32* %4
  br label %7
25:
  %26 = load i32, i32* %3
  ret i32 %26
}
