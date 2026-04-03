define dso_local void @ArrayReverse(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32*
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %9 = load i32*, i32** %3
  store i32* %9, i32** %5
  %11 = load i32*, i32** %3
  %12 = load i32, i32* %4
  %13 = sext i32 %12 to i64
  %14 = getelementptr inbounds i32, i32* %11, i64 %13
  %15 = getelementptr inbounds i32, i32* %14, i64 -1
  store i32* %15, i32** %6
  br label %16
16:
  %17 = load i32*, i32** %5
  %18 = load i32*, i32** %6
  %19 = icmp ult i32* %17, %18
  br i1 %19, label %20, label %34
20:
  %22 = load i32*, i32** %5
  %23 = load i32, i32* %22
  store i32 %23, i32* %7
  %24 = load i32*, i32** %6
  %25 = load i32, i32* %24
  %26 = load i32*, i32** %5
  store i32 %25, i32* %26
  %27 = load i32, i32* %7
  %28 = load i32*, i32** %6
  store i32 %27, i32* %28
  %29 = load i32*, i32** %5
  %30 = getelementptr inbounds i32, i32* %29, i32 1
  store i32* %30, i32** %5
  %31 = load i32*, i32** %6
  %32 = getelementptr inbounds i32, i32* %31, i32 -1
  store i32* %32, i32** %6
  br label %16
34:
  ret void
}
