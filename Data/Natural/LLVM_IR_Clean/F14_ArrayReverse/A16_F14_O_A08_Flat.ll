define dso_local void @ArrayReverse(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %8 = load i32, i32* %4
  %9 = icmp slt i32 %8, 2
  br i1 %9, label %10, label %11
10:
  br label %60
11:
  store i32 0, i32* %5
  store i32 10, i32* %6
  br label %14
14:
  %15 = load i32, i32* %6
  %16 = icmp ne i32 %15, 0
  br i1 %16, label %17, label %57
17:
  %18 = load i32, i32* %6
  switch i32 %18, label %56 [
    i32 10, label %19
    i32 20, label %49
  ]
19:
  %21 = load i32*, i32** %3
  %22 = load i32, i32* %5
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i32, i32* %21, i64 %23
  %25 = load i32, i32* %24
  store i32 %25, i32* %7
  %26 = load i32*, i32** %3
  %27 = load i32, i32* %4
  %28 = sub nsw i32 %27, 1
  %29 = load i32, i32* %5
  %30 = sub nsw i32 %28, %29
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %26, i64 %31
  %33 = load i32, i32* %32
  %34 = load i32*, i32** %3
  %35 = load i32, i32* %5
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i32, i32* %34, i64 %36
  store i32 %33, i32* %37
  %38 = load i32, i32* %7
  %39 = load i32*, i32** %3
  %40 = load i32, i32* %4
  %41 = sub nsw i32 %40, 1
  %42 = load i32, i32* %5
  %43 = sub nsw i32 %41, %42
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i32, i32* %39, i64 %44
  store i32 %38, i32* %45
  %46 = load i32, i32* %5
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %5
  store i32 20, i32* %6
  br label %56
49:
  %50 = load i32, i32* %5
  %51 = load i32, i32* %4
  %52 = sdiv i32 %51, 2
  %53 = icmp slt i32 %50, %52
  %54 = zext i1 %53 to i64
  %55 = select i1 %53, i32 10, i32 0
  store i32 %55, i32* %6
  br label %56
56:
  br label %14
57:
  br label %60
60:
  ret void
}
