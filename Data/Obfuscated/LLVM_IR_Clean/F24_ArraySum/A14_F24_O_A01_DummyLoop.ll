define dso_local i32 @rz(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  br label %11
11:
  %12 = load i32, i32* %6
  %13 = load i32, i32* %4
  %14 = icmp slt i32 %12, %13
  br i1 %14, label %17, label %15
15:
  store i32 2, i32* %7
  br label %39
17:
  store i32 0, i32* %8
  br label %19
19:
  %20 = load i32, i32* %8
  %21 = icmp slt i32 %20, 1
  br i1 %21, label %24, label %22
22:
  store i32 5, i32* %7
  br label %35
24:
  %25 = load i32*, i32** %3
  %26 = load i32, i32* %6
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i32, i32* %25, i64 %27
  %29 = load i32, i32* %28
  %30 = load i32, i32* %5
  %31 = add nsw i32 %30, %29
  store i32 %31, i32* %5
  br label %32
32:
  %33 = load i32, i32* %8
  %34 = add nsw i32 %33, 1
  store i32 %34, i32* %8
  br label %19
35:
  br label %36
36:
  %37 = load i32, i32* %6
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* %6
  br label %11
39:
  %40 = load i32, i32* %5
  store i32 1, i32* %7
  ret i32 %40
}
