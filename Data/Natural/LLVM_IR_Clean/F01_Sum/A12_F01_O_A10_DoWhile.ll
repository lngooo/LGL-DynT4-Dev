define dso_local i32 @Sum(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp sle i32 %6, 0
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %2
  br label %26
9:
  store i32 0, i32* %4
  store i32 1, i32* %5
  br label %12
12:
  %13 = load i32, i32* %5
  %14 = load i32, i32* %4
  %15 = add nsw i32 %14, %13
  store i32 %15, i32* %4
  %16 = load i32, i32* %5
  %17 = add nsw i32 %16, 1
  store i32 %17, i32* %5
  br label %18
18:
  %19 = load i32, i32* %5
  %20 = load i32, i32* %3
  %21 = icmp sle i32 %19, %20
  br i1 %21, label %12, label %22
22:
  %23 = load i32, i32* %4
  store i32 %23, i32* %2
  br label %26
26:
  %27 = load i32, i32* %2
  ret i32 %27
}
