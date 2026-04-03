define dso_local i32 @T(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %8 = load i32*, i32** %3
  %9 = getelementptr inbounds i32, i32* %8, i64 0
  %10 = load i32, i32* %9
  store i32 %10, i32* %5
  store i32 1, i32* %6
  br label %12
12:
  %13 = load i32, i32* %6
  %14 = load i32, i32* %4
  %15 = icmp slt i32 %13, %14
  br i1 %15, label %18, label %16
16:
  br label %38
18:
  %19 = load i32*, i32** %3
  %20 = load i32, i32* %6
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i32, i32* %19, i64 %21
  %23 = load i32, i32* %22
  %24 = load i32, i32* %5
  %25 = icmp sgt i32 %23, %24
  %26 = zext i1 %25 to i32
  switch i32 %26, label %33 [
    i32 1, label %27
  ]
27:
  %28 = load i32*, i32** %3
  %29 = load i32, i32* %6
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %28, i64 %30
  %32 = load i32, i32* %31
  store i32 %32, i32* %5
  br label %34
33:
  br label %34
34:
  br label %35
35:
  %36 = load i32, i32* %6
  %37 = add nsw i32 %36, 1
  store i32 %37, i32* %6
  br label %12
38:
  %39 = load i32, i32* %5
  ret i32 %39
}
