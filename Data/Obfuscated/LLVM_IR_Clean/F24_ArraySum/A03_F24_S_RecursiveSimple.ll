define dso_local i32 @bUQ(i32* %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32*
  %5 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  %6 = load i32, i32* %5
  %7 = icmp sle i32 %6, 0
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %21
9:
  %10 = load i32*, i32** %4
  %11 = load i32, i32* %5
  %12 = sub nsw i32 %11, 1
  %13 = sext i32 %12 to i64
  %14 = getelementptr inbounds i32, i32* %10, i64 %13
  %15 = load i32, i32* %14
  %16 = load i32*, i32** %4
  %17 = load i32, i32* %5
  %18 = sub nsw i32 %17, 1
  %19 = call i32 @bUQ(i32* %16, i32 %18)
  %20 = add nsw i32 %15, %19
  store i32 %20, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
