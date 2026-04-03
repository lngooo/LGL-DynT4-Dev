define dso_local i32 @uUIC(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 1, i32* %5
  %10 = load i32*, i32** %3
  %11 = getelementptr inbounds i32, i32* %10, i64 0
  %12 = load i32, i32* %11
  store i32 %12, i32* %6
  store i32 0, i32* %7
  br label %14
14:
  %15 = load i32, i32* %7
  %16 = icmp ne i32 %15, 3
  br i1 %16, label %17, label %44
17:
  %18 = load i32, i32* %7
  switch i32 %18, label %43 [
    i32 0, label %19
    i32 1, label %25
    i32 2, label %40
  ]
19:
  %20 = load i32, i32* %5
  %21 = load i32, i32* %4
  %22 = icmp slt i32 %20, %21
  %23 = zext i1 %22 to i64
  %24 = select i1 %22, i32 1, i32 3
  store i32 %24, i32* %7
  br label %43
25:
  %26 = load i32*, i32** %3
  %27 = load i32, i32* %5
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i32, i32* %26, i64 %28
  %30 = load i32, i32* %29
  %31 = load i32, i32* %6
  %32 = icmp sgt i32 %30, %31
  br i1 %32, label %33, label %39
33:
  %34 = load i32*, i32** %3
  %35 = load i32, i32* %5
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i32, i32* %34, i64 %36
  %38 = load i32, i32* %37
  store i32 %38, i32* %6
  br label %39
39:
  store i32 2, i32* %7
  br label %43
40:
  %41 = load i32, i32* %5
  %42 = add nsw i32 %41, 1
  store i32 %42, i32* %5
  store i32 0, i32* %7
  br label %43
43:
  br label %14
44:
  %45 = load i32, i32* %6
  ret i32 %45
}
