define dso_local i32 @nqE(i32* %0, i32 %1) {
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
  br label %31
16:
  %18 = load i32*, i32** %3
  %19 = load i32, i32* %6
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds i32, i32* %18, i64 %20
  %22 = load i32, i32* %21
  store i32 %22, i32* %7
  %23 = load i32, i32* %5
  %24 = load i32, i32* %7
  %25 = sub nsw i32 0, %24
  %26 = sub nsw i32 %23, %25
  store i32 %26, i32* %5
  br label %28
28:
  %29 = load i32, i32* %6
  %30 = add nsw i32 %29, 1
  store i32 %30, i32* %6
  br label %10
31:
  %32 = load i32, i32* %5
  ret i32 %32
}
