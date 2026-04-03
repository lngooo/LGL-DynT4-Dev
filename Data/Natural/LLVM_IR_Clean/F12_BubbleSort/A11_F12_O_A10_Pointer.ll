define dso_local void @swp(i32* %0, i32* %1) {
  %3 = alloca i32*
  %4 = alloca i32*
  %5 = alloca i32
  store i32* %0, i32** %3
  store i32* %1, i32** %4
  %7 = load i32*, i32** %3
  %8 = load i32, i32* %7
  store i32 %8, i32* %5
  %9 = load i32*, i32** %4
  %10 = load i32, i32* %9
  %11 = load i32*, i32** %3
  store i32 %10, i32* %11
  %12 = load i32, i32* %5
  %13 = load i32*, i32** %4
  store i32 %12, i32* %13
  ret void
}
define dso_local void @BubbleSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32*
  %8 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  br label %10
10:
  %11 = load i32, i32* %5
  %12 = load i32, i32* %4
  %13 = icmp slt i32 %11, %12
  br i1 %13, label %16, label %14
14:
  store i32 2, i32* %6
  br label %51
16:
  %18 = load i32*, i32** %3
  store i32* %18, i32** %7
  store i32 0, i32* %8
  br label %20
20:
  %21 = load i32, i32* %8
  %22 = load i32, i32* %4
  %23 = load i32, i32* %5
  %24 = sub nsw i32 %22, %23
  %25 = sub nsw i32 %24, 1
  %26 = icmp slt i32 %21, %25
  br i1 %26, label %29, label %27
27:
  store i32 5, i32* %6
  br label %46
29:
  %30 = load i32*, i32** %7
  %31 = load i32, i32* %30
  %32 = load i32*, i32** %7
  %33 = getelementptr inbounds i32, i32* %32, i64 1
  %34 = load i32, i32* %33
  %35 = icmp sgt i32 %31, %34
  br i1 %35, label %36, label %40
36:
  %37 = load i32*, i32** %7
  %38 = load i32*, i32** %7
  %39 = getelementptr inbounds i32, i32* %38, i64 1
  call void @swp(i32* %37, i32* %39)
  br label %40
40:
  %41 = load i32*, i32** %7
  %42 = getelementptr inbounds i32, i32* %41, i32 1
  store i32* %42, i32** %7
  br label %43
43:
  %44 = load i32, i32* %8
  %45 = add nsw i32 %44, 1
  store i32 %45, i32* %8
  br label %20
46:
  br label %48
48:
  %49 = load i32, i32* %5
  %50 = add nsw i32 %49, 1
  store i32 %50, i32* %5
  br label %10
51:
  ret void
}
