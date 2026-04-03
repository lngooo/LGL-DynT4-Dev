define dso_local i32 @FindMax(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %9 = load i32*, i32** %3
  store i32* %9, i32** %5
  %11 = load i32*, i32** %3
  %12 = load i32, i32* %11
  store i32 %12, i32* %6
  store i32 1, i32* %7
  br label %14
14:
  %15 = load i32, i32* %7
  %16 = load i32, i32* %4
  %17 = icmp slt i32 %15, %16
  br i1 %17, label %20, label %18
18:
  br label %44
20:
  %21 = load i32*, i32** %5
  %22 = getelementptr inbounds i32, i32* %21, i32 1
  store i32* %22, i32** %5
  %23 = load i32, i32* %4
  %24 = load i32, i32* %4
  %25 = mul nsw i32 %23, %24
  %26 = add nsw i32 %25, 5
  %27 = icmp sgt i32 %26, 0
  br i1 %27, label %28, label %40
28:
  %29 = load i32*, i32** %5
  %30 = load i32, i32* %29
  %31 = load i32, i32* %6
  %32 = icmp sgt i32 %30, %31
  br i1 %32, label %33, label %36
33:
  %34 = load i32*, i32** %5
  %35 = load i32, i32* %34
  br label %38
36:
  %37 = load i32, i32* %6
  br label %38
38:
  %39 = phi i32 [ %35, %33 ], [ %37, %36 ]
  store i32 %39, i32* %6
  br label %40
40:
  br label %41
41:
  %42 = load i32, i32* %7
  %43 = add nsw i32 %42, 1
  store i32 %43, i32* %7
  br label %14
44:
  %45 = load i32, i32* %6
  ret i32 %45
}
