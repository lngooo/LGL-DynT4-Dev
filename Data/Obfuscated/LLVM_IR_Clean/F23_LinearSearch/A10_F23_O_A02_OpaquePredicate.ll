define dso_local i32 @n3(i32* %0, i32 %1, i32 %2) {
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
  br label %50
13:
  %14 = load i32, i32* %6
  %15 = load i32, i32* %6
  %16 = mul nsw i32 %14, %15
  %17 = load i32, i32* %6
  %18 = add nsw i32 %16, %17
  %19 = srem i32 %18, 2
  %20 = icmp eq i32 %19, 0
  br i1 %20, label %21, label %49
21:
  %23 = load i32*, i32** %5
  %24 = load i32, i32* %6
  %25 = sub nsw i32 %24, 1
  %26 = load i32, i32* %7
  %27 = call i32 @n3(i32* %23, i32 %25, i32 %26)
  store i32 %27, i32* %8
  %28 = load i32, i32* %8
  %29 = icmp ne i32 %28, -1
  br i1 %29, label %30, label %32
30:
  %31 = load i32, i32* %8
  store i32 %31, i32* %4
  store i32 1, i32* %9
  br label %47
32:
  %33 = load i32*, i32** %5
  %34 = load i32, i32* %6
  %35 = sub nsw i32 %34, 1
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i32, i32* %33, i64 %36
  %38 = load i32, i32* %37
  %39 = load i32, i32* %7
  %40 = icmp eq i32 %38, %39
  br i1 %40, label %41, label %44
41:
  %42 = load i32, i32* %6
  %43 = sub nsw i32 %42, 1
  br label %45
44:
  br label %45
45:
  %46 = phi i32 [ %43, %41 ], [ -1, %44 ]
  store i32 %46, i32* %4
  store i32 1, i32* %9
  br label %47
47:
  br label %50
49:
  store i32 -1, i32* %4
  br label %50
50:
  %51 = load i32, i32* %4
  ret i32 %51
}
