define dso_local i32 @xfvh(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %3
  %7 = load i32, i32* %3
  %8 = icmp eq i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store i32 0, i32* %2
  br label %38
10:
  store i32 0, i32* %4
  store i32 0, i32* %5
  br label %13
13:
  %14 = load i32, i32* %5
  %15 = icmp slt i32 %14, 32
  br i1 %15, label %18, label %16
16:
  br label %32
18:
  %20 = load i32, i32* %3
  %21 = load i32, i32* %5
  %22 = lshr i32 %20, %21
  %23 = and i32 %22, 1
  store i32 %23, i32* %6
  %24 = load i32, i32* %4
  %25 = load i32, i32* %6
  %26 = add nsw i32 %24, %25
  %27 = mul nsw i32 %26, 1
  store i32 %27, i32* %4
  br label %29
29:
  %30 = load i32, i32* %5
  %31 = add nsw i32 %30, 1
  store i32 %31, i32* %5
  br label %13
32:
  %33 = load i32, i32* %4
  %34 = xor i32 %33, 1
  %35 = icmp eq i32 %34, 0
  %36 = zext i1 %35 to i32
  store i32 %36, i32* %2
  br label %38
38:
  %39 = load i32, i32* %2
  ret i32 %39
}
