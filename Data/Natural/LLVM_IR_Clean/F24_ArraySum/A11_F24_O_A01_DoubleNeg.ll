define dso_local i32 @ArraySum(i32* %0, i32 %1) {
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
  %13 = xor i1 %12, true
  %14 = xor i1 %13, true
  br i1 %14, label %15, label %25
15:
  %16 = load i32*, i32** %3
  %17 = load i32, i32* %6
  %18 = sext i32 %17 to i64
  %19 = getelementptr inbounds i32, i32* %16, i64 %18
  %20 = load i32, i32* %19
  %21 = load i32, i32* %5
  %22 = add nsw i32 %21, %20
  store i32 %22, i32* %5
  %23 = load i32, i32* %6
  %24 = add nsw i32 %23, 1
  store i32 %24, i32* %6
  br label %9
25:
  %26 = load i32, i32* %5
  ret i32 %26
}
