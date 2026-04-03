define dso_local i32 @FindMax(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 1, i32* %5
  %9 = load i32*, i32** %3
  %10 = getelementptr inbounds i32, i32* %9, i64 0
  %11 = load i32, i32* %10
  store i32 %11, i32* %6
  br label %12
12:
  %13 = load i32, i32* %5
  %14 = load i32, i32* %4
  %15 = icmp sge i32 %13, %14
  br i1 %15, label %16, label %17
16:
  br label %35
17:
  %18 = load i32*, i32** %3
  %19 = load i32, i32* %5
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds i32, i32* %18, i64 %20
  %22 = load i32, i32* %21
  %23 = load i32, i32* %6
  %24 = icmp sle i32 %22, %23
  br i1 %24, label %25, label %26
25:
  br label %32
26:
  %27 = load i32*, i32** %3
  %28 = load i32, i32* %5
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i32, i32* %27, i64 %29
  %31 = load i32, i32* %30
  store i32 %31, i32* %6
  br label %32
32:
  %33 = load i32, i32* %5
  %34 = add nsw i32 %33, 1
  store i32 %34, i32* %5
  br label %12
35:
  %36 = load i32, i32* %6
  ret i32 %36
}
