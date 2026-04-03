define dso_local i32 @S0(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32*
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  %12 = load i32*, i32** %5
  store i32* %12, i32** %8
  store i32 0, i32* %9
  br label %14
14:
  %15 = load i32, i32* %9
  %16 = load i32, i32* %6
  %17 = icmp slt i32 %15, %16
  br i1 %17, label %19, label %18
18:
  store i32 2, i32* %10
  br label %33
19:
  %20 = load i32*, i32** %8
  %21 = load i32, i32* %9
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i32, i32* %20, i64 %22
  %24 = load i32, i32* %23
  %25 = load i32, i32* %7
  %26 = icmp eq i32 %24, %25
  br i1 %26, label %27, label %29
27:
  %28 = load i32, i32* %9
  store i32 %28, i32* %4
  store i32 1, i32* %10
  br label %33
29:
  br label %30
30:
  %31 = load i32, i32* %9
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %9
  br label %14
33:
  %35 = load i32, i32* %10
  switch i32 %35, label %37 [
    i32 2, label %36
  ]
36:
  store i32 -1, i32* %4
  store i32 1, i32* %10
  br label %37
37:
  %39 = load i32, i32* %4
  ret i32 %39
}
