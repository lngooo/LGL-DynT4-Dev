define dso_local void @e(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  %10 = load i32, i32* %4
  %11 = sub nsw i32 %10, 1
  store i32 %11, i32* %6
  br label %12
12:
  br label %13
13:
  %14 = load i32, i32* %5
  %15 = load i32, i32* %6
  %16 = icmp slt i32 %14, %15
  br i1 %16, label %18, label %17
17:
  br label %44
18:
  %20 = load i32*, i32** %3
  %21 = load i32, i32* %5
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i32, i32* %20, i64 %22
  %24 = load i32, i32* %23
  store i32 %24, i32* %7
  %25 = load i32*, i32** %3
  %26 = load i32, i32* %6
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i32, i32* %25, i64 %27
  %29 = load i32, i32* %28
  %30 = load i32*, i32** %3
  %31 = load i32, i32* %5
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i32, i32* %30, i64 %32
  store i32 %29, i32* %33
  %34 = load i32, i32* %7
  %35 = load i32*, i32** %3
  %36 = load i32, i32* %6
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i32, i32* %35, i64 %37
  store i32 %34, i32* %38
  %39 = load i32, i32* %5
  %40 = add nsw i32 %39, 1
  store i32 %40, i32* %5
  %41 = load i32, i32* %6
  %42 = add nsw i32 %41, -1
  store i32 %42, i32* %6
  br label %12
44:
  ret void
}
