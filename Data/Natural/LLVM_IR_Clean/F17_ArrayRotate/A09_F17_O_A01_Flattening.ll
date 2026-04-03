define dso_local void @rev(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  store i32 0, i32* %7
  br label %10
10:
  %11 = load i32, i32* %7
  %12 = icmp ne i32 %11, -1
  br i1 %12, label %13, label %48
13:
  %14 = load i32, i32* %7
  switch i32 %14, label %47 [
    i32 0, label %15
    i32 1, label %21
  ]
15:
  %16 = load i32, i32* %5
  %17 = load i32, i32* %6
  %18 = icmp slt i32 %16, %17
  %19 = zext i1 %18 to i64
  %20 = select i1 %18, i32 1, i32 -1
  store i32 %20, i32* %7
  br label %47
21:
  %23 = load i32*, i32** %4
  %24 = load i32, i32* %5
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i32, i32* %23, i64 %25
  %27 = load i32, i32* %26
  store i32 %27, i32* %8
  %28 = load i32*, i32** %4
  %29 = load i32, i32* %6
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %28, i64 %30
  %32 = load i32, i32* %31
  %33 = load i32*, i32** %4
  %34 = load i32, i32* %5
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i32, i32* %33, i64 %35
  store i32 %32, i32* %36
  %37 = load i32, i32* %8
  %38 = load i32*, i32** %4
  %39 = load i32, i32* %6
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i32, i32* %38, i64 %40
  store i32 %37, i32* %41
  %42 = load i32, i32* %5
  %43 = add nsw i32 %42, 1
  store i32 %43, i32* %5
  %44 = load i32, i32* %6
  %45 = add nsw i32 %44, -1
  store i32 %45, i32* %6
  store i32 0, i32* %7
  br label %47
47:
  br label %10
48:
  ret void
}
define dso_local void @ArrayRotate(i32* %0, i32 %1, i32 %2) {
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
  br label %44
11:
  %12 = load i32, i32* %5
  %13 = load i32, i32* %6
  %14 = srem i32 %13, %12
  store i32 %14, i32* %6
  store i32 1, i32* %7
  br label %16
16:
  %17 = load i32, i32* %7
  %18 = icmp sle i32 %17, 3
  br i1 %18, label %19, label %42
19:
  %20 = load i32, i32* %7
  %21 = icmp eq i32 %20, 1
  br i1 %21, label %22, label %26
22:
  %23 = load i32*, i32** %4
  %24 = load i32, i32* %6
  %25 = sub nsw i32 %24, 1
  call void @rev(i32* %23, i32 0, i32 %25)
  br label %39
26:
  %27 = load i32, i32* %7
  %28 = icmp eq i32 %27, 2
  br i1 %28, label %29, label %34
29:
  %30 = load i32*, i32** %4
  %31 = load i32, i32* %6
  %32 = load i32, i32* %5
  %33 = sub nsw i32 %32, 1
  call void @rev(i32* %30, i32 %31, i32 %33)
  br label %38
34:
  %35 = load i32*, i32** %4
  %36 = load i32, i32* %5
  %37 = sub nsw i32 %36, 1
  call void @rev(i32* %35, i32 0, i32 %37)
  br label %38
38:
  br label %39
39:
  %40 = load i32, i32* %7
  %41 = add nsw i32 %40, 1
  store i32 %41, i32* %7
  br label %16
42:
  br label %44
44:
  ret void
}
