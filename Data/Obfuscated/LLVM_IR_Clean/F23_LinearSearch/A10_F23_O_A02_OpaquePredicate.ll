define dso_local i32 @qFF3(i32* %0, i32 %1, i32 %2) {
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
  br label %38
11:
  %12 = load i32, i32* %6
  %13 = load i32, i32* %6
  %14 = mul nsw i32 %12, %13
  %15 = load i32, i32* %6
  %16 = add nsw i32 %14, %15
  %17 = srem i32 %16, 2
  %18 = icmp eq i32 %17, 0
  br i1 %18, label %19, label %37
19:
  %20 = load i32*, i32** %5
  %21 = load i32, i32* %6
  %22 = sub nsw i32 %21, 1
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i32, i32* %20, i64 %23
  %25 = load i32, i32* %24
  %26 = load i32, i32* %7
  %27 = icmp eq i32 %25, %26
  br i1 %27, label %28, label %31
28:
  %29 = load i32, i32* %6
  %30 = sub nsw i32 %29, 1
  store i32 %30, i32* %4
  br label %38
31:
  %32 = load i32*, i32** %5
  %33 = load i32, i32* %6
  %34 = sub nsw i32 %33, 1
  %35 = load i32, i32* %7
  %36 = call i32 @qFF3(i32* %32, i32 %34, i32 %35)
  store i32 %36, i32* %4
  br label %38
37:
  store i32 -1, i32* %4
  br label %38
38:
  %39 = load i32, i32* %4
  ret i32 %39
}
