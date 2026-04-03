define dso_local i32 @LinearSearch(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  %8 = load i32, i32* %6
  %9 = icmp sle i32 %8, 0
  br i1 %9, label %10, label %11
10:
  store i32 -1, i32* %4
  br label %29
11:
  %12 = load i32*, i32** %5
  %13 = load i32, i32* %6
  %14 = sub nsw i32 %13, 1
  %15 = sext i32 %14 to i64
  %16 = getelementptr inbounds i32, i32* %12, i64 %15
  %17 = load i32, i32* %16
  %18 = load i32, i32* %7
  %19 = icmp eq i32 %17, %18
  br i1 %19, label %20, label %23
20:
  %21 = load i32, i32* %6
  %22 = sub nsw i32 %21, 1
  store i32 %22, i32* %4
  br label %29
23:
  %24 = load i32*, i32** %5
  %25 = load i32, i32* %6
  %26 = sub nsw i32 %25, 1
  %27 = load i32, i32* %7
  %28 = call i32 @LinearSearch(i32* %24, i32 %26, i32 %27)
  store i32 %28, i32* %4
  br label %29
29:
  %30 = load i32, i32* %4
  ret i32 %30
}
