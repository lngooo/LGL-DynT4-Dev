define dso_local i32 @l(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  store i32 0, i32* %8
  br label %11
11:
  %12 = load i32, i32* %8
  %13 = load i32, i32* %6
  %14 = icmp sge i32 %12, %13
  br i1 %14, label %15, label %16
15:
  br label %30
16:
  %17 = load i32*, i32** %5
  %18 = load i32, i32* %8
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i32, i32* %17, i64 %19
  %21 = load i32, i32* %20
  %22 = load i32, i32* %7
  %23 = icmp eq i32 %21, %22
  br i1 %23, label %24, label %25
24:
  br label %28
25:
  %26 = load i32, i32* %8
  %27 = add nsw i32 %26, 1
  store i32 %27, i32* %8
  br label %11
28:
  %29 = load i32, i32* %8
  store i32 %29, i32* %4
  store i32 1, i32* %9
  br label %31
30:
  store i32 -1, i32* %4
  store i32 1, i32* %9
  br label %31
31:
  %33 = load i32, i32* %4
  ret i32 %33
}
