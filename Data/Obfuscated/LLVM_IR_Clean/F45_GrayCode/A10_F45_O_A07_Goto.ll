define dso_local i32 @GC(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %9
9:
  %10 = load i32, i32* %4
  %11 = icmp sge i32 %10, 32
  br i1 %11, label %12, label %13
12:
  br label %44
13:
  %15 = load i32, i32* %2
  %16 = load i32, i32* %4
  %17 = lshr i32 %15, %16
  %18 = and i32 %17, 1
  store i32 %18, i32* %5
  %20 = load i32, i32* %4
  %21 = icmp eq i32 %20, 31
  br i1 %21, label %22, label %23
22:
  br label %29
23:
  %24 = load i32, i32* %2
  %25 = load i32, i32* %4
  %26 = add nsw i32 %25, 1
  %27 = lshr i32 %24, %26
  %28 = and i32 %27, 1
  br label %29
29:
  %30 = phi i32 [ 0, %22 ], [ %28, %23 ]
  store i32 %30, i32* %6
  %31 = load i32, i32* %5
  %32 = load i32, i32* %6
  %33 = icmp ne i32 %31, %32
  br i1 %33, label %34, label %39
34:
  %35 = load i32, i32* %4
  %36 = shl i32 1, %35
  %37 = load i32, i32* %3
  %38 = or i32 %37, %36
  store i32 %38, i32* %3
  br label %39
39:
  %42 = load i32, i32* %4
  %43 = add nsw i32 %42, 1
  store i32 %43, i32* %4
  br label %9
44:
  %45 = load i32, i32* %3
  ret i32 %45
}
