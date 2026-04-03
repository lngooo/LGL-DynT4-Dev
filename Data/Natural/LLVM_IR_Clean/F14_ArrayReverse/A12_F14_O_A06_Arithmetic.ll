define dso_local void @ArrayReverse(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32*
  %8 = alloca i32*
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %10 = load i32*, i32** %3
  store i32* %10, i32** %5
  store i32 0, i32* %6
  br label %12
12:
  %13 = load i32, i32* %6
  %14 = load i32, i32* %4
  %15 = ashr i32 %14, 1
  %16 = icmp slt i32 %13, %15
  br i1 %16, label %19, label %17
17:
  br label %53
19:
  %21 = load i32*, i32** %5
  %22 = load i32, i32* %6
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i32, i32* %21, i64 %23
  store i32* %24, i32** %7
  %26 = load i32*, i32** %5
  %27 = load i32, i32* %4
  %28 = sub nsw i32 %27, 1
  %29 = load i32, i32* %6
  %30 = sub nsw i32 %28, %29
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %26, i64 %31
  store i32* %32, i32** %8
  %33 = load i32*, i32** %8
  %34 = load i32, i32* %33
  %35 = load i32*, i32** %7
  %36 = load i32, i32* %35
  %37 = xor i32 %36, %34
  store i32 %37, i32* %35
  %38 = load i32*, i32** %7
  %39 = load i32, i32* %38
  %40 = load i32*, i32** %8
  %41 = load i32, i32* %40
  %42 = xor i32 %41, %39
  store i32 %42, i32* %40
  %43 = load i32*, i32** %8
  %44 = load i32, i32* %43
  %45 = load i32*, i32** %7
  %46 = load i32, i32* %45
  %47 = xor i32 %46, %44
  store i32 %47, i32* %45
  br label %50
50:
  %51 = load i32, i32* %6
  %52 = add nsw i32 %51, 1
  store i32 %52, i32* %6
  br label %12
53:
  ret void
}
