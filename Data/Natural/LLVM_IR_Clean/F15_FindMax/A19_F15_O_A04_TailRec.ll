define dso_local i32 @tr(i32* %0, i32 %1, i32 %2, i32 %3) {
  %5 = alloca i32
  %6 = alloca i32*
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %6
  store i32 %1, i32* %7
  store i32 %2, i32* %8
  store i32 %3, i32* %9
  %10 = load i32, i32* %8
  %11 = load i32, i32* %7
  %12 = icmp eq i32 %10, %11
  br i1 %12, label %13, label %15
13:
  %14 = load i32, i32* %9
  store i32 %14, i32* %5
  br label %38
15:
  %16 = load i32*, i32** %6
  %17 = load i32, i32* %7
  %18 = load i32, i32* %8
  %19 = add nsw i32 %18, 1
  %20 = load i32*, i32** %6
  %21 = load i32, i32* %8
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i32, i32* %20, i64 %22
  %24 = load i32, i32* %23
  %25 = load i32, i32* %9
  %26 = icmp sgt i32 %24, %25
  br i1 %26, label %27, label %33
27:
  %28 = load i32*, i32** %6
  %29 = load i32, i32* %8
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %28, i64 %30
  %32 = load i32, i32* %31
  br label %35
33:
  %34 = load i32, i32* %9
  br label %35
35:
  %36 = phi i32 [ %32, %27 ], [ %34, %33 ]
  %37 = call i32 @tr(i32* %16, i32 %17, i32 %19, i32 %36)
  store i32 %37, i32* %5
  br label %38
38:
  %39 = load i32, i32* %5
  ret i32 %39
}
define dso_local i32 @FindMax(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %5 = load i32*, i32** %3
  %6 = load i32, i32* %4
  %7 = load i32*, i32** %3
  %8 = getelementptr inbounds i32, i32* %7, i64 0
  %9 = load i32, i32* %8
  %10 = call i32 @tr(i32* %5, i32 %6, i32 0, i32 %9)
  ret i32 %10
}
