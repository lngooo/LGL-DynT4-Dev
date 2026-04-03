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
  br label %31
16:
  %17 = load i32*, i32** %5
  %18 = load i32, i32* %8
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i32, i32* %17, i64 %19
  %21 = load i32, i32* %20
  %22 = load i32, i32* %7
  %23 = xor i32 %21, %22
  %24 = icmp ne i32 %23, 0
  br i1 %24, label %27, label %25
25:
  %26 = load i32, i32* %8
  store i32 %26, i32* %4
  store i32 1, i32* %9
  br label %31
27:
  br label %28
28:
  %29 = load i32, i32* %8
  %30 = add nsw i32 %29, 1
  store i32 %30, i32* %8
  br label %11
31:
  %33 = load i32, i32* %9
  switch i32 %33, label %37 [
    i32 2, label %34
    i32 1, label %35
  ]
34:
  store i32 -1, i32* %4
  br label %35
35:
  %36 = load i32, i32* %4
  ret i32 %36
37:
  unreachable
}
