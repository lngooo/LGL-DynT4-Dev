define dso_local i32 @GrayCode(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 0, i32* %6
  br label %11
11:
  %12 = load i32, i32* %6
  %13 = icmp slt i32 %12, 32
  br i1 %13, label %16, label %14
14:
  br label %44
16:
  %17 = load i32, i32* %2
  %18 = load i32, i32* %6
  %19 = lshr i32 %17, %18
  %20 = and i32 %19, 1
  store i32 %20, i32* %4
  %21 = load i32, i32* %6
  %22 = icmp eq i32 %21, 31
  br i1 %22, label %23, label %24
23:
  br label %30
24:
  %25 = load i32, i32* %2
  %26 = load i32, i32* %6
  %27 = add nsw i32 %26, 1
  %28 = lshr i32 %25, %27
  %29 = and i32 %28, 1
  br label %30
30:
  %31 = phi i32 [ 0, %23 ], [ %29, %24 ]
  store i32 %31, i32* %5
  %32 = load i32, i32* %4
  %33 = load i32, i32* %5
  %34 = icmp ne i32 %32, %33
  br i1 %34, label %35, label %40
35:
  %36 = load i32, i32* %6
  %37 = shl i32 1, %36
  %38 = load i32, i32* %3
  %39 = or i32 %38, %37
  store i32 %39, i32* %3
  br label %40
40:
  br label %41
41:
  %42 = load i32, i32* %6
  %43 = add nsw i32 %42, 1
  store i32 %43, i32* %6
  br label %11
44:
  %45 = load i32, i32* %3
  ret i32 %45
}
