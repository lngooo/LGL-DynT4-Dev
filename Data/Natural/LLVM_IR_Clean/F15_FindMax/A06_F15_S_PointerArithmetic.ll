define dso_local i32 @FindMax(i32* %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32*
  %7 = alloca i32
  %8 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  %9 = load i32, i32* %5
  %10 = icmp sle i32 %9, 0
  br i1 %10, label %11, label %12
11:
  store i32 0, i32* %3
  br label %43
12:
  %14 = load i32*, i32** %4
  store i32* %14, i32** %6
  %16 = load i32*, i32** %6
  %17 = load i32, i32* %16
  store i32 %17, i32* %7
  store i32 1, i32* %8
  br label %19
19:
  %20 = load i32, i32* %8
  %21 = load i32, i32* %5
  %22 = icmp slt i32 %20, %21
  br i1 %22, label %25, label %23
23:
  br label %39
25:
  %26 = load i32*, i32** %6
  %27 = getelementptr inbounds i32, i32* %26, i32 1
  store i32* %27, i32** %6
  %28 = load i32*, i32** %6
  %29 = load i32, i32* %28
  %30 = load i32, i32* %7
  %31 = icmp sgt i32 %29, %30
  br i1 %31, label %32, label %35
32:
  %33 = load i32*, i32** %6
  %34 = load i32, i32* %33
  store i32 %34, i32* %7
  br label %35
35:
  br label %36
36:
  %37 = load i32, i32* %8
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* %8
  br label %19
39:
  %40 = load i32, i32* %7
  store i32 %40, i32* %3
  br label %43
43:
  %44 = load i32, i32* %3
  ret i32 %44
}
