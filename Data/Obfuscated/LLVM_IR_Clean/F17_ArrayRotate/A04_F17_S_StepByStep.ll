define dso_local void @jfQ(i32* %0, i32 %1) {
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
  store i32 0, i32* %6
  br label %12
12:
  %13 = load i32, i32* %6
  %14 = load i32, i32* %4
  %15 = sub nsw i32 %14, 1
  %16 = icmp slt i32 %13, %15
  br i1 %16, label %17, label %31
17:
  %18 = load i32*, i32** %3
  %19 = load i32, i32* %6
  %20 = add nsw i32 %19, 1
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i32, i32* %18, i64 %21
  %23 = load i32, i32* %22
  %24 = load i32*, i32** %3
  %25 = load i32, i32* %6
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i32, i32* %24, i64 %26
  store i32 %23, i32* %27
  br label %28
28:
  %29 = load i32, i32* %6
  %30 = add nsw i32 %29, 1
  store i32 %30, i32* %6
  br label %12
31:
  %32 = load i32, i32* %5
  %33 = load i32*, i32** %3
  %34 = load i32, i32* %4
  %35 = sub nsw i32 %34, 1
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i32, i32* %33, i64 %36
  store i32 %32, i32* %37
  ret void
}
define dso_local void @w1(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %8 = load i32, i32* %5
  %9 = icmp eq i32 %8, 0
  br i1 %9, label %10, label %11
10:
  br label %28
11:
  %12 = load i32, i32* %6
  %13 = load i32, i32* %5
  %14 = srem i32 %12, %13
  store i32 %14, i32* %6
  store i32 0, i32* %7
  br label %16
16:
  %17 = load i32, i32* %7
  %18 = load i32, i32* %6
  %19 = icmp slt i32 %17, %18
  br i1 %19, label %22, label %20
20:
  br label %28
22:
  %23 = load i32*, i32** %4
  %24 = load i32, i32* %5
  call void @jfQ(i32* %23, i32 %24)
  br label %25
25:
  %26 = load i32, i32* %7
  %27 = add nsw i32 %26, 1
  store i32 %27, i32* %7
  br label %16
28:
  ret void
}
