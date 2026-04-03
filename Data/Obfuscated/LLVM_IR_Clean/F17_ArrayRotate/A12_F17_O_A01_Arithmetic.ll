define dso_local void @Jk1(i32* %0, i32* %1) {
  %3 = alloca i32*
  %4 = alloca i32*
  store i32* %0, i32** %3
  store i32* %1, i32** %4
  br label %5
5:
  %6 = load i32*, i32** %3
  %7 = load i32*, i32** %4
  %8 = icmp ult i32* %6, %7
  br i1 %8, label %9, label %29
9:
  %10 = load i32*, i32** %4
  %11 = load i32, i32* %10
  %12 = load i32*, i32** %3
  %13 = load i32, i32* %12
  %14 = xor i32 %13, %11
  store i32 %14, i32* %12
  %15 = load i32*, i32** %3
  %16 = load i32, i32* %15
  %17 = load i32*, i32** %4
  %18 = load i32, i32* %17
  %19 = xor i32 %18, %16
  store i32 %19, i32* %17
  %20 = load i32*, i32** %4
  %21 = load i32, i32* %20
  %22 = load i32*, i32** %3
  %23 = load i32, i32* %22
  %24 = xor i32 %23, %21
  store i32 %24, i32* %22
  %25 = load i32*, i32** %3
  %26 = getelementptr inbounds i32, i32* %25, i32 1
  store i32* %26, i32** %3
  %27 = load i32*, i32** %4
  %28 = getelementptr inbounds i32, i32* %27, i32 -1
  store i32* %28, i32** %4
  br label %5
29:
  ret void
}
define dso_local void @b1(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %7 = load i32, i32* %5
  %8 = icmp eq i32 %7, 0
  br i1 %8, label %9, label %10
9:
  br label %35
10:
  %11 = load i32, i32* %5
  %12 = load i32, i32* %6
  %13 = srem i32 %12, %11
  store i32 %13, i32* %6
  %14 = load i32*, i32** %4
  %15 = load i32*, i32** %4
  %16 = load i32, i32* %6
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds i32, i32* %15, i64 %17
  %19 = getelementptr inbounds i32, i32* %18, i64 -1
  call void @Jk1(i32* %14, i32* %19)
  %20 = load i32*, i32** %4
  %21 = load i32, i32* %6
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i32, i32* %20, i64 %22
  %24 = load i32*, i32** %4
  %25 = load i32, i32* %5
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i32, i32* %24, i64 %26
  %28 = getelementptr inbounds i32, i32* %27, i64 -1
  call void @Jk1(i32* %23, i32* %28)
  %29 = load i32*, i32** %4
  %30 = load i32*, i32** %4
  %31 = load i32, i32* %5
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i32, i32* %30, i64 %32
  %34 = getelementptr inbounds i32, i32* %33, i64 -1
  call void @Jk1(i32* %29, i32* %34)
  br label %35
35:
  ret void
}
