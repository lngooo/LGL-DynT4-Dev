define dso_local i32 @FindMax(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %9 = load i32*, i32** %3
  %10 = getelementptr inbounds i32, i32* %9, i64 0
  %11 = load i32, i32* %10
  store i32 %11, i32* %5
  %13 = load i32*, i32** %3
  %14 = getelementptr inbounds i32, i32* %13, i64 0
  %15 = load i32, i32* %14
  store i32 %15, i32* %6
  store i32 0, i32* %7
  br label %17
17:
  %18 = load i32, i32* %7
  %19 = load i32, i32* %4
  %20 = icmp slt i32 %18, %19
  br i1 %20, label %23, label %21
21:
  br label %47
23:
  %24 = load i32*, i32** %3
  %25 = load i32, i32* %7
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i32, i32* %24, i64 %26
  %28 = load i32, i32* %27
  %29 = load i32, i32* %5
  %30 = icmp sgt i32 %28, %29
  br i1 %30, label %31, label %37
31:
  %32 = load i32*, i32** %3
  %33 = load i32, i32* %7
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i32, i32* %32, i64 %34
  %36 = load i32, i32* %35
  store i32 %36, i32* %5
  br label %37
37:
  %38 = load i32, i32* %5
  %39 = load i32, i32* %6
  %40 = icmp sgt i32 %38, %39
  br i1 %40, label %41, label %43
41:
  %42 = load i32, i32* %5
  store i32 %42, i32* %6
  br label %43
43:
  br label %44
44:
  %45 = load i32, i32* %7
  %46 = add nsw i32 %45, 1
  store i32 %46, i32* %7
  br label %17
47:
  %48 = load i32, i32* %6
  ret i32 %48
}
