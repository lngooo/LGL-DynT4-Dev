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
  %12 = icmp sge i32 %10, %11
  br i1 %12, label %13, label %14
13:
  br label %24
14:
  %15 = load i32*, i32** %3
  %16 = load i32, i32* %6
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds i32, i32* %15, i64 %17
  %19 = load i32, i32* %18
  %20 = load i32, i32* %5
  %21 = add nsw i32 %20, %19
  store i32 %21, i32* %5
  %22 = load i32, i32* %6
  %23 = add nsw i32 %22, 1
  store i32 %23, i32* %6
  br label %9
24:
  %25 = load i32, i32* %5
  ret i32 %25
}
