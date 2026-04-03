define dso_local void @ArrayReverse(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  %10 = load i32, i32* %4
  %11 = sub nsw i32 %10, 1
  store i32 %11, i32* %6
  br label %12
12:
  %13 = load i32, i32* %5
  %14 = load i32, i32* %6
  %15 = icmp slt i32 %13, %14
  br i1 %15, label %16, label %42
16:
  %18 = load i32*, i32** %3
  %19 = load i32, i32* %5
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds i32, i32* %18, i64 %20
  %22 = load i32, i32* %21
  store i32 %22, i32* %7
  %23 = load i32*, i32** %3
  %24 = load i32, i32* %6
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i32, i32* %23, i64 %25
  %27 = load i32, i32* %26
  %28 = load i32*, i32** %3
  %29 = load i32, i32* %5
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %28, i64 %30
  store i32 %27, i32* %31
  %32 = load i32, i32* %7
  %33 = load i32*, i32** %3
  %34 = load i32, i32* %6
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i32, i32* %33, i64 %35
  store i32 %32, i32* %36
  %37 = load i32, i32* %5
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* %5
  %39 = load i32, i32* %6
  %40 = add nsw i32 %39, -1
  store i32 %40, i32* %6
  br label %12
42:
  ret void
}
