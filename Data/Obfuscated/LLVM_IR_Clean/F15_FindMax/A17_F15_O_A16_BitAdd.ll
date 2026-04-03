define dso_local i32 @G(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  br label %6
6:
  %7 = load i32, i32* %4
  %8 = icmp ne i32 %7, 0
  br i1 %8, label %9, label %21
9:
  %11 = load i32, i32* %3
  %12 = xor i32 %11, -1
  %13 = load i32, i32* %4
  %14 = and i32 %12, %13
  store i32 %14, i32* %5
  %15 = load i32, i32* %3
  %16 = load i32, i32* %4
  %17 = xor i32 %15, %16
  store i32 %17, i32* %3
  %18 = load i32, i32* %5
  %19 = shl i32 %18, 1
  store i32 %19, i32* %4
  br label %6
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
define dso_local i32 @rcp9(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %8 = load i32*, i32** %3
  %9 = load i32, i32* %4
  %10 = call i32 @G(i32 %9, i32 1)
  %11 = sext i32 %10 to i64
  %12 = getelementptr inbounds i32, i32* %8, i64 %11
  %13 = load i32, i32* %12
  store i32 %13, i32* %5
  %15 = load i32, i32* %4
  %16 = call i32 @G(i32 %15, i32 2)
  store i32 %16, i32* %6
  br label %17
17:
  %18 = load i32, i32* %6
  %19 = icmp sge i32 %18, 0
  br i1 %19, label %22, label %20
20:
  br label %40
22:
  %23 = load i32*, i32** %3
  %24 = load i32, i32* %6
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i32, i32* %23, i64 %25
  %27 = load i32, i32* %26
  %28 = load i32, i32* %5
  %29 = icmp sgt i32 %27, %28
  br i1 %29, label %30, label %36
30:
  %31 = load i32*, i32** %3
  %32 = load i32, i32* %6
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i32, i32* %31, i64 %33
  %35 = load i32, i32* %34
  store i32 %35, i32* %5
  br label %36
36:
  br label %37
37:
  %38 = load i32, i32* %6
  %39 = call i32 @G(i32 %38, i32 1)
  store i32 %39, i32* %6
  br label %17
40:
  %41 = load i32, i32* %5
  ret i32 %41
}
