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
  br i1 %12, label %13, label %17
13:
  %14 = load i32, i32* %5
  ret i32 %14
17:
  %18 = load i32*, i32** %3
  %19 = load i32, i32* %6
  %20 = add nsw i32 %19, 1
  store i32 %20, i32* %6
  %21 = sext i32 %19 to i64
  %22 = getelementptr inbounds i32, i32* %18, i64 %21
  %23 = load i32, i32* %22
  %24 = load i32, i32* %5
  %25 = add nsw i32 %24, %23
  store i32 %25, i32* %5
  br label %9
}
