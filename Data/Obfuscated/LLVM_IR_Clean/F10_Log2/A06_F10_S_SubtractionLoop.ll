define dso_local i32 @LCz7(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  store i32 -1, i32* %3
  store i32 1, i32* %4
  br label %7
7:
  %8 = load i32, i32* %4
  %9 = load i32, i32* %2
  %10 = icmp ule i32 %8, %9
  br i1 %10, label %11, label %14
11:
  %12 = load i32, i32* %4
  %13 = icmp ugt i32 %12, 0
  br label %14
14:
  %15 = phi i1 [ false, %7 ], [ %13, %11 ]
  br i1 %15, label %16, label %26
16:
  %17 = load i32, i32* %4
  %18 = shl i32 %17, 1
  store i32 %18, i32* %4
  %19 = load i32, i32* %3
  %20 = add nsw i32 %19, 1
  store i32 %20, i32* %3
  %21 = load i32, i32* %4
  %22 = load i32, i32* %2
  %23 = icmp ugt i32 %21, %22
  br i1 %23, label %24, label %25
24:
  br label %26
25:
  br label %7
26:
  %27 = load i32, i32* %3
  ret i32 %27
}
