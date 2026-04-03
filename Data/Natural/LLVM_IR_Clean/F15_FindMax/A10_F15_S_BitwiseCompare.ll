define dso_local i32 @bit_max(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %5 = load i32, i32* %3
  %6 = load i32, i32* %3
  %7 = load i32, i32* %4
  %8 = sub nsw i32 %6, %7
  %9 = load i32, i32* %3
  %10 = load i32, i32* %4
  %11 = sub nsw i32 %9, %10
  %12 = ashr i32 %11, 31
  %13 = and i32 %8, %12
  %14 = sub nsw i32 %5, %13
  ret i32 %14
}
define dso_local i32 @FindMax(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %8 = load i32*, i32** %3
  %9 = getelementptr inbounds i32, i32* %8, i64 0
  %10 = load i32, i32* %9
  store i32 %10, i32* %5
  store i32 1, i32* %6
  br label %12
12:
  %13 = load i32, i32* %6
  %14 = load i32, i32* %4
  %15 = icmp slt i32 %13, %14
  br i1 %15, label %18, label %16
16:
  br label %29
18:
  %19 = load i32, i32* %5
  %20 = load i32*, i32** %3
  %21 = load i32, i32* %6
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i32, i32* %20, i64 %22
  %24 = load i32, i32* %23
  %25 = call i32 @bit_max(i32 %19, i32 %24)
  store i32 %25, i32* %5
  br label %26
26:
  %27 = load i32, i32* %6
  %28 = add nsw i32 %27, 1
  store i32 %28, i32* %6
  br label %12
29:
  %30 = load i32, i32* %5
  ret i32 %30
}
