define dso_local i32 @i(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  %9 = load i32, i32* %4
  %10 = sub nsw i32 %9, 1
  store i32 %10, i32* %6
  br label %11
11:
  %12 = load i32, i32* %6
  %13 = icmp sge i32 %12, 0
  br i1 %13, label %14, label %24
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
  %23 = add nsw i32 %22, -1
  store i32 %23, i32* %6
  br label %11
24:
  %25 = load i32, i32* %5
  ret i32 %25
}
