define dso_local i32 @b_m(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %5 = load i32, i32* %3
  %6 = load i32, i32* %3
  %7 = load i32, i32* %4
  %8 = xor i32 %6, %7
  %9 = load i32, i32* %3
  %10 = load i32, i32* %4
  %11 = icmp slt i32 %9, %10
  %12 = zext i1 %11 to i32
  %13 = sub nsw i32 0, %12
  %14 = and i32 %8, %13
  %15 = xor i32 %5, %14
  ret i32 %15
}
define dso_local i32 @FindMax(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32 (i32, i32)*
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 (i32, i32)* @b_m, i32 (i32, i32)** %5
  %10 = load i32*, i32** %3
  %11 = getelementptr inbounds i32, i32* %10, i64 0
  %12 = load i32, i32* %11
  store i32 %12, i32* %6
  store i32 1, i32* %7
  br label %14
14:
  %15 = load i32, i32* %7
  %16 = load i32, i32* %4
  %17 = icmp slt i32 %15, %16
  br i1 %17, label %20, label %18
18:
  br label %32
20:
  %21 = load i32 (i32, i32)*, i32 (i32, i32)** %5
  %22 = load i32, i32* %6
  %23 = load i32*, i32** %3
  %24 = load i32, i32* %7
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i32, i32* %23, i64 %25
  %27 = load i32, i32* %26
  %28 = call i32 %21(i32 %22, i32 %27)
  store i32 %28, i32* %6
  br label %29
29:
  %30 = load i32, i32* %7
  %31 = add nsw i32 %30, 1
  store i32 %31, i32* %7
  br label %14
32:
  %33 = load i32, i32* %6
  ret i32 %33
}
