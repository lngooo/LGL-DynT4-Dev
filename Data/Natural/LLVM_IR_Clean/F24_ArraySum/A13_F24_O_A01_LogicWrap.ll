define dso_local i32 @ArraySum(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  br label %10
10:
  %11 = load i32, i32* %6
  %12 = load i32, i32* %4
  %13 = icmp slt i32 %11, %12
  br i1 %13, label %16, label %14
14:
  br label %35
16:
  %18 = load i32*, i32** %3
  %19 = load i32, i32* %6
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds i32, i32* %18, i64 %20
  %22 = load i32, i32* %21
  store i32 %22, i32* %7
  %23 = load i32, i32* %7
  %24 = icmp ne i32 %23, 0
  br i1 %24, label %26, label %25
25:
  br i1 true, label %26, label %30
26:
  %27 = load i32, i32* %7
  %28 = load i32, i32* %5
  %29 = add nsw i32 %28, %27
  store i32 %29, i32* %5
  br label %30
30:
  br label %32
32:
  %33 = load i32, i32* %6
  %34 = add nsw i32 %33, 1
  store i32 %34, i32* %6
  br label %10
35:
  %36 = load i32, i32* %5
  ret i32 %36
}
