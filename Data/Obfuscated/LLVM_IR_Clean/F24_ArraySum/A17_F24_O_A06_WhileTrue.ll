define dso_local i32 @x0(i32* %0, i32 %1) {
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
  br label %12
12:
  %13 = load i32, i32* %6
  %14 = icmp slt i32 %13, 0
  br i1 %14, label %15, label %16
15:
  br label %25
16:
  %17 = load i32*, i32** %3
  %18 = load i32, i32* %6
  %19 = add nsw i32 %18, -1
  store i32 %19, i32* %6
  %20 = sext i32 %18 to i64
  %21 = getelementptr inbounds i32, i32* %17, i64 %20
  %22 = load i32, i32* %21
  %23 = load i32, i32* %5
  %24 = add nsw i32 %23, %22
  store i32 %24, i32* %5
  br label %11
25:
  %26 = load i32, i32* %5
  ret i32 %26
}
