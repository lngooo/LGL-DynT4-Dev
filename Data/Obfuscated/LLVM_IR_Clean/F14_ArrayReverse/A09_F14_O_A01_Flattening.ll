define dso_local void @AwI1(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  %11 = load i32, i32* %4
  %12 = sub nsw i32 %11, 1
  store i32 %12, i32* %6
  store i32 0, i32* %7
  br label %14
14:
  %15 = load i32, i32* %7
  %16 = icmp ne i32 %15, -1
  br i1 %16, label %17, label %53
17:
  %18 = load i32, i32* %7
  switch i32 %18, label %52 [
    i32 0, label %19
    i32 1, label %25
    i32 2, label %51
  ]
19:
  %20 = load i32, i32* %5
  %21 = load i32, i32* %6
  %22 = icmp slt i32 %20, %21
  %23 = zext i1 %22 to i64
  %24 = select i1 %22, i32 1, i32 2
  store i32 %24, i32* %7
  br label %52
25:
  %27 = load i32*, i32** %3
  %28 = load i32, i32* %5
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i32, i32* %27, i64 %29
  %31 = load i32, i32* %30
  store i32 %31, i32* %8
  %32 = load i32*, i32** %3
  %33 = load i32, i32* %6
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i32, i32* %32, i64 %34
  %36 = load i32, i32* %35
  %37 = load i32*, i32** %3
  %38 = load i32, i32* %5
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i32, i32* %37, i64 %39
  store i32 %36, i32* %40
  %41 = load i32, i32* %8
  %42 = load i32*, i32** %3
  %43 = load i32, i32* %6
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i32, i32* %42, i64 %44
  store i32 %41, i32* %45
  %46 = load i32, i32* %5
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %5
  %48 = load i32, i32* %6
  %49 = add nsw i32 %48, -1
  store i32 %49, i32* %6
  store i32 0, i32* %7
  br label %52
51:
  store i32 -1, i32* %7
  br label %52
52:
  br label %14
53:
  ret void
}
