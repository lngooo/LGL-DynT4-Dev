define dso_local i32 @TTr(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  %10 = load i32, i32* %6
  %11 = icmp sle i32 %10, 0
  br i1 %11, label %12, label %13
12:
  store i32 -1, i32* %4
  br label %42
13:
  %15 = load i32*, i32** %5
  %16 = getelementptr inbounds i32, i32* %15, i64 0
  %17 = load i32, i32* %16
  %18 = load i32, i32* %7
  %19 = icmp eq i32 %17, %18
  %20 = zext i1 %19 to i64
  %21 = select i1 %19, i32 0, i32 -2
  store i32 %21, i32* %8
  %22 = load i32, i32* %8
  %23 = icmp eq i32 %22, 0
  br i1 %23, label %24, label %25
24:
  store i32 0, i32* %4
  store i32 1, i32* %9
  br label %40
25:
  %26 = load i32*, i32** %5
  %27 = getelementptr inbounds i32, i32* %26, i64 1
  %28 = load i32, i32* %6
  %29 = sub nsw i32 %28, 1
  %30 = load i32, i32* %7
  %31 = call i32 @TTr(i32* %27, i32 %29, i32 %30)
  store i32 %31, i32* %8
  %32 = load i32, i32* %8
  %33 = icmp eq i32 %32, -1
  br i1 %33, label %34, label %35
34:
  br label %38
35:
  %36 = load i32, i32* %8
  %37 = add nsw i32 %36, 1
  br label %38
38:
  %39 = phi i32 [ -1, %34 ], [ %37, %35 ]
  store i32 %39, i32* %4
  store i32 1, i32* %9
  br label %40
40:
  br label %42
42:
  %43 = load i32, i32* %4
  ret i32 %43
}
