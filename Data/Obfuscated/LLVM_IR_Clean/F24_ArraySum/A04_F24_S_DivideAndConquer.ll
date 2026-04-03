define dso_local i32 @pLJL(i32* %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  %7 = load i32, i32* %5
  %8 = icmp sle i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store i32 0, i32* %3
  br label %34
10:
  %11 = load i32, i32* %5
  %12 = icmp eq i32 %11, 1
  br i1 %12, label %13, label %17
13:
  %14 = load i32*, i32** %4
  %15 = getelementptr inbounds i32, i32* %14, i64 0
  %16 = load i32, i32* %15
  store i32 %16, i32* %3
  br label %34
17:
  %19 = load i32, i32* %5
  %20 = sdiv i32 %19, 2
  store i32 %20, i32* %6
  %21 = load i32*, i32** %4
  %22 = load i32, i32* %6
  %23 = call i32 @pLJL(i32* %21, i32 %22)
  %24 = load i32*, i32** %4
  %25 = load i32, i32* %6
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i32, i32* %24, i64 %26
  %28 = load i32, i32* %5
  %29 = load i32, i32* %6
  %30 = sub nsw i32 %28, %29
  %31 = call i32 @pLJL(i32* %27, i32 %30)
  %32 = add nsw i32 %23, %31
  store i32 %32, i32* %3
  br label %34
34:
  %35 = load i32, i32* %3
  ret i32 %35
}
