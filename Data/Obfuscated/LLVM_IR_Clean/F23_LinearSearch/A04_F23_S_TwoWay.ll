define dso_local i32 @n(i32* %0, i32 %1, i32 %2) {
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
  %13 = load i32, i32* %6
  %14 = sub nsw i32 %13, 1
  store i32 %14, i32* %9
  br label %15
15:
  %16 = load i32, i32* %8
  %17 = load i32, i32* %9
  %18 = icmp sle i32 %16, %17
  br i1 %18, label %19, label %44
19:
  %20 = load i32*, i32** %5
  %21 = load i32, i32* %8
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i32, i32* %20, i64 %22
  %24 = load i32, i32* %23
  %25 = load i32, i32* %7
  %26 = icmp eq i32 %24, %25
  br i1 %26, label %27, label %29
27:
  %28 = load i32, i32* %8
  store i32 %28, i32* %4
  store i32 1, i32* %10
  br label %45
29:
  %30 = load i32*, i32** %5
  %31 = load i32, i32* %9
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i32, i32* %30, i64 %32
  %34 = load i32, i32* %33
  %35 = load i32, i32* %7
  %36 = icmp eq i32 %34, %35
  br i1 %36, label %37, label %39
37:
  %38 = load i32, i32* %9
  store i32 %38, i32* %4
  store i32 1, i32* %10
  br label %45
39:
  %40 = load i32, i32* %8
  %41 = add nsw i32 %40, 1
  store i32 %41, i32* %8
  %42 = load i32, i32* %9
  %43 = add nsw i32 %42, -1
  store i32 %43, i32* %9
  br label %15
44:
  store i32 -1, i32* %4
  store i32 1, i32* %10
  br label %45
45:
  %48 = load i32, i32* %4
  ret i32 %48
}
