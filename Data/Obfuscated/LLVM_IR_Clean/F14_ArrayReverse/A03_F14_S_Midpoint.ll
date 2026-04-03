define dso_local void @s(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  br label %8
8:
  %9 = load i32, i32* %5
  %10 = load i32, i32* %4
  %11 = sdiv i32 %10, 2
  %12 = icmp slt i32 %9, %11
  br i1 %12, label %15, label %13
13:
  br label %46
15:
  %17 = load i32*, i32** %3
  %18 = load i32, i32* %5
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i32, i32* %17, i64 %19
  %21 = load i32, i32* %20
  store i32 %21, i32* %6
  %22 = load i32*, i32** %3
  %23 = load i32, i32* %4
  %24 = sub nsw i32 %23, 1
  %25 = load i32, i32* %5
  %26 = sub nsw i32 %24, %25
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i32, i32* %22, i64 %27
  %29 = load i32, i32* %28
  %30 = load i32*, i32** %3
  %31 = load i32, i32* %5
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i32, i32* %30, i64 %32
  store i32 %29, i32* %33
  %34 = load i32, i32* %6
  %35 = load i32*, i32** %3
  %36 = load i32, i32* %4
  %37 = sub nsw i32 %36, 1
  %38 = load i32, i32* %5
  %39 = sub nsw i32 %37, %38
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i32, i32* %35, i64 %40
  store i32 %34, i32* %41
  br label %43
43:
  %44 = load i32, i32* %5
  %45 = add nsw i32 %44, 1
  store i32 %45, i32* %5
  br label %8
46:
  ret void
}
