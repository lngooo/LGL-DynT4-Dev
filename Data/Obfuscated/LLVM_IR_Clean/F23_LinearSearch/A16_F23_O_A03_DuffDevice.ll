define dso_local i32 @WpdW6(i32* %0, i32 %1, i32 %2) {
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
  %11 = load i32, i32* %6
  %12 = icmp sle i32 %11, 0
  br i1 %12, label %13, label %14
13:
  store i32 -1, i32* %4
  br label %58
14:
  store i32 0, i32* %8
  %17 = load i32, i32* %6
  %18 = add nsw i32 %17, 1
  %19 = sdiv i32 %18, 2
  store i32 %19, i32* %9
  %20 = load i32, i32* %6
  %21 = srem i32 %20, 2
  switch i32 %21, label %54 [
    i32 0, label %22
    i32 1, label %36
  ]
22:
  br label %23
23:
  %24 = load i32*, i32** %5
  %25 = load i32, i32* %8
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i32, i32* %24, i64 %26
  %28 = load i32, i32* %27
  %29 = load i32, i32* %7
  %30 = icmp eq i32 %28, %29
  br i1 %30, label %31, label %33
31:
  %32 = load i32, i32* %8
  store i32 %32, i32* %4
  store i32 1, i32* %10
  br label %55
33:
  %34 = load i32, i32* %8
  %35 = add nsw i32 %34, 1
  store i32 %35, i32* %8
  br label %36
36:
  %37 = load i32*, i32** %5
  %38 = load i32, i32* %8
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i32, i32* %37, i64 %39
  %41 = load i32, i32* %40
  %42 = load i32, i32* %7
  %43 = icmp eq i32 %41, %42
  br i1 %43, label %44, label %46
44:
  %45 = load i32, i32* %8
  store i32 %45, i32* %4
  store i32 1, i32* %10
  br label %55
46:
  %47 = load i32, i32* %8
  %48 = add nsw i32 %47, 1
  store i32 %48, i32* %8
  br label %49
49:
  %50 = load i32, i32* %9
  %51 = add nsw i32 %50, -1
  store i32 %51, i32* %9
  %52 = icmp sgt i32 %51, 0
  br i1 %52, label %23, label %53
53:
  br label %54
54:
  store i32 -1, i32* %4
  store i32 1, i32* %10
  br label %55
55:
  br label %58
58:
  %59 = load i32, i32* %4
  ret i32 %59
}
