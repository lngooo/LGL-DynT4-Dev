define dso_local i32 @r(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %3
  %5 = load i32, i32* %3
  %6 = icmp eq i32 %5, 0
  br i1 %6, label %7, label %8
7:
  store i32 0, i32* %2
  br label %31
8:
  store i32 10, i32* %4
  br label %10
10:
  %11 = load i32, i32* %3
  %12 = urem i32 %11, 2
  %13 = icmp eq i32 %12, 0
  br i1 %13, label %14, label %26
14:
  %15 = load i32, i32* %4
  %16 = load i32, i32* %4
  %17 = mul nsw i32 %15, %16
  %18 = srem i32 %17, 2
  %19 = icmp eq i32 %18, 1
  br i1 %19, label %20, label %23
20:
  %21 = load i32, i32* %3
  %22 = add i32 %21, 777
  store i32 %22, i32* %3
  br label %23
23:
  %24 = load i32, i32* %3
  %25 = udiv i32 %24, 2
  store i32 %25, i32* %3
  br label %10
26:
  %27 = load i32, i32* %3
  %28 = icmp eq i32 %27, 1
  %29 = zext i1 %28 to i32
  store i32 %29, i32* %2
  br label %31
31:
  %32 = load i32, i32* %2
  ret i32 %32
}
