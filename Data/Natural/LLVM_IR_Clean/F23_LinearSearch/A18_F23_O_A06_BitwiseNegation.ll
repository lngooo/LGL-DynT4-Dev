define dso_local i32 @LinearSearch(i32* %0, i32 %1, i32 %2) {
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
  %14 = icmp slt i32 %12, %13
  br i1 %14, label %16, label %15
15:
  store i32 2, i32* %9
  br label %32
16:
  %17 = load i32*, i32** %5
  %18 = load i32, i32* %8
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i32, i32* %17, i64 %19
  %21 = load i32, i32* %20
  %22 = xor i32 %21, -1
  %23 = load i32, i32* %7
  %24 = xor i32 %23, -1
  %25 = icmp eq i32 %22, %24
  br i1 %25, label %26, label %28
26:
  %27 = load i32, i32* %8
  store i32 %27, i32* %4
  store i32 1, i32* %9
  br label %32
28:
  br label %29
29:
  %30 = load i32, i32* %8
  %31 = add nsw i32 %30, 1
  store i32 %31, i32* %8
  br label %11
32:
  %34 = load i32, i32* %9
  switch i32 %34, label %38 [
    i32 2, label %35
    i32 1, label %36
  ]
35:
  store i32 -1, i32* %4
  br label %36
36:
  %37 = load i32, i32* %4
  ret i32 %37
38:
  unreachable
}
