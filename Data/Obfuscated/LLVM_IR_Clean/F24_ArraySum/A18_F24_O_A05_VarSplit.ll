define dso_local i32 @Swc(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  store i32 0, i32* %7
  br label %11
11:
  %12 = load i32, i32* %7
  %13 = load i32, i32* %4
  %14 = icmp slt i32 %12, %13
  br i1 %14, label %17, label %15
15:
  br label %41
17:
  %18 = load i32, i32* %7
  %19 = srem i32 %18, 2
  %20 = icmp eq i32 %19, 0
  br i1 %20, label %21, label %29
21:
  %22 = load i32*, i32** %3
  %23 = load i32, i32* %7
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i32, i32* %22, i64 %24
  %26 = load i32, i32* %25
  %27 = load i32, i32* %5
  %28 = add nsw i32 %27, %26
  store i32 %28, i32* %5
  br label %37
29:
  %30 = load i32*, i32** %3
  %31 = load i32, i32* %7
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i32, i32* %30, i64 %32
  %34 = load i32, i32* %33
  %35 = load i32, i32* %6
  %36 = add nsw i32 %35, %34
  store i32 %36, i32* %6
  br label %37
37:
  br label %38
38:
  %39 = load i32, i32* %7
  %40 = add nsw i32 %39, 1
  store i32 %40, i32* %7
  br label %11
41:
  %42 = load i32, i32* %5
  %43 = load i32, i32* %6
  %44 = add nsw i32 %42, %43
  ret i32 %44
}
