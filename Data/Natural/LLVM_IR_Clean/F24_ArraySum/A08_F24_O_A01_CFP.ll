define dso_local i32 @ArraySum(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  store i32 0, i32* %7
  br label %11
11:
  %12 = load i32, i32* %5
  %13 = icmp ne i32 %12, 2
  br i1 %13, label %14, label %32
14:
  %15 = load i32, i32* %5
  switch i32 %15, label %31 [
    i32 0, label %16
    i32 1, label %22
  ]
16:
  %17 = load i32, i32* %6
  %18 = load i32, i32* %4
  %19 = icmp slt i32 %17, %18
  %20 = zext i1 %19 to i64
  %21 = select i1 %19, i32 1, i32 2
  store i32 %21, i32* %5
  br label %31
22:
  %23 = load i32*, i32** %3
  %24 = load i32, i32* %6
  %25 = add nsw i32 %24, 1
  store i32 %25, i32* %6
  %26 = sext i32 %24 to i64
  %27 = getelementptr inbounds i32, i32* %23, i64 %26
  %28 = load i32, i32* %27
  %29 = load i32, i32* %7
  %30 = add nsw i32 %29, %28
  store i32 %30, i32* %7
  store i32 0, i32* %5
  br label %31
31:
  br label %11
32:
  %33 = load i32, i32* %7
  ret i32 %33
}
