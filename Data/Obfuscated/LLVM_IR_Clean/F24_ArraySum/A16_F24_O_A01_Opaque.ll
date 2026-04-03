define dso_local i32 @U5(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  br label %9
9:
  %10 = load i32, i32* %6
  %11 = load i32, i32* %4
  %12 = icmp slt i32 %10, %11
  br i1 %12, label %15, label %13
13:
  br label %33
15:
  %16 = load i32, i32* %6
  %17 = load i32, i32* %6
  %18 = mul nsw i32 %16, %17
  %19 = add nsw i32 %18, 1
  %20 = icmp sgt i32 %19, 0
  br i1 %20, label %21, label %29
21:
  %22 = load i32*, i32** %3
  %23 = load i32, i32* %6
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i32, i32* %22, i64 %24
  %26 = load i32, i32* %25
  %27 = load i32, i32* %5
  %28 = add nsw i32 %27, %26
  store i32 %28, i32* %5
  br label %29
29:
  br label %30
30:
  %31 = load i32, i32* %6
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %6
  br label %9
33:
  %34 = load i32, i32* %5
  ret i32 %34
}
