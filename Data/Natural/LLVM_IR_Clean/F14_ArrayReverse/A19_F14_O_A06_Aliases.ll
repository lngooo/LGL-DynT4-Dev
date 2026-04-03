define dso_local void @ArrayReverse(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32*
  %8 = alloca i32*
  %9 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %11 = load i32*, i32** %3
  store i32* %11, i32** %5
  store i32 0, i32* %6
  br label %13
13:
  %14 = load i32, i32* %6
  %15 = load i32, i32* %4
  %16 = sdiv i32 %15, 2
  %17 = icmp slt i32 %14, %16
  br i1 %17, label %20, label %18
18:
  br label %48
20:
  %22 = load i32*, i32** %5
  %23 = load i32, i32* %6
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i32, i32* %22, i64 %24
  store i32* %25, i32** %7
  %27 = load i32*, i32** %5
  %28 = load i32, i32* %4
  %29 = sub nsw i32 %28, 1
  %30 = load i32, i32* %6
  %31 = sub nsw i32 %29, %30
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i32, i32* %27, i64 %32
  store i32* %33, i32** %8
  %35 = load i32*, i32** %7
  %36 = load i32, i32* %35
  store i32 %36, i32* %9
  %37 = load i32*, i32** %8
  %38 = load i32, i32* %37
  %39 = load i32*, i32** %7
  store i32 %38, i32* %39
  %40 = load i32, i32* %9
  %41 = load i32*, i32** %8
  store i32 %40, i32* %41
  br label %45
45:
  %46 = load i32, i32* %6
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %6
  br label %13
48:
  ret void
}
