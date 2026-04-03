define dso_local i32 @gEK(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  store i32 0, i32* %8
  store i32 0, i32* %9
  br label %13
13:
  %14 = load i32, i32* %8
  %15 = icmp ne i32 %14, 3
  br i1 %15, label %16, label %39
16:
  %17 = load i32, i32* %8
  switch i32 %17, label %38 [
    i32 0, label %18
    i32 1, label %24
    i32 2, label %37
  ]
18:
  %19 = load i32, i32* %9
  %20 = load i32, i32* %6
  %21 = icmp slt i32 %19, %20
  %22 = zext i1 %21 to i64
  %23 = select i1 %21, i32 1, i32 2
  store i32 %23, i32* %8
  br label %38
24:
  %25 = load i32*, i32** %5
  %26 = load i32, i32* %9
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i32, i32* %25, i64 %27
  %29 = load i32, i32* %28
  %30 = load i32, i32* %7
  %31 = icmp eq i32 %29, %30
  br i1 %31, label %32, label %34
32:
  %33 = load i32, i32* %9
  store i32 %33, i32* %4
  store i32 1, i32* %10
  br label %40
34:
  %35 = load i32, i32* %9
  %36 = add nsw i32 %35, 1
  store i32 %36, i32* %9
  store i32 0, i32* %8
  br label %38
37:
  store i32 -1, i32* %4
  store i32 1, i32* %10
  br label %40
38:
  br label %13
39:
  store i32 -1, i32* %4
  store i32 1, i32* %10
  br label %40
40:
  %43 = load i32, i32* %4
  ret i32 %43
}
