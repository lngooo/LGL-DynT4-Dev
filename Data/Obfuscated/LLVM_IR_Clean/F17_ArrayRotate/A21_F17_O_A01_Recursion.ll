define dso_local void @IeM(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %8 = load i32, i32* %5
  %9 = load i32, i32* %6
  %10 = icmp sge i32 %8, %9
  br i1 %10, label %11, label %12
11:
  br label %39
12:
  %14 = load i32*, i32** %4
  %15 = load i32, i32* %5
  %16 = sext i32 %15 to i64
  %17 = getelementptr inbounds i32, i32* %14, i64 %16
  %18 = load i32, i32* %17
  store i32 %18, i32* %7
  %19 = load i32*, i32** %4
  %20 = load i32, i32* %6
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i32, i32* %19, i64 %21
  %23 = load i32, i32* %22
  %24 = load i32*, i32** %4
  %25 = load i32, i32* %5
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i32, i32* %24, i64 %26
  store i32 %23, i32* %27
  %28 = load i32, i32* %7
  %29 = load i32*, i32** %4
  %30 = load i32, i32* %6
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %29, i64 %31
  store i32 %28, i32* %32
  %33 = load i32*, i32** %4
  %34 = load i32, i32* %5
  %35 = add nsw i32 %34, 1
  %36 = load i32, i32* %6
  %37 = sub nsw i32 %36, 1
  call void @IeM(i32* %33, i32 %35, i32 %37)
  br label %39
39:
  ret void
}
define dso_local void @CDKj(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %7 = load i32, i32* %5
  %8 = icmp eq i32 %7, 0
  br i1 %8, label %9, label %10
9:
  br label %24
10:
  %11 = load i32, i32* %5
  %12 = load i32, i32* %6
  %13 = srem i32 %12, %11
  store i32 %13, i32* %6
  %14 = load i32*, i32** %4
  %15 = load i32, i32* %6
  %16 = sub nsw i32 %15, 1
  call void @IeM(i32* %14, i32 0, i32 %16)
  %17 = load i32*, i32** %4
  %18 = load i32, i32* %6
  %19 = load i32, i32* %5
  %20 = sub nsw i32 %19, 1
  call void @IeM(i32* %17, i32 %18, i32 %20)
  %21 = load i32*, i32** %4
  %22 = load i32, i32* %5
  %23 = sub nsw i32 %22, 1
  call void @IeM(i32* %21, i32 0, i32 %23)
  br label %24
24:
  ret void
}
