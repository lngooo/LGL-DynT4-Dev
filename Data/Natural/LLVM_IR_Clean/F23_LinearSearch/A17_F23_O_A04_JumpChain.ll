define dso_local i32 @LinearSearch(i32* %0, i32 %1, i32 %2) {
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
  br i1 %18, label %19, label %46
19:
  %20 = load i32*, i32** %5
  %21 = load i32, i32* %8
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i32, i32* %20, i64 %22
  %24 = load i32, i32* %23
  %25 = load i32, i32* %7
  %26 = icmp ne i32 %24, %25
  br i1 %26, label %27, label %28
27:
  br label %30
28:
  %29 = load i32, i32* %8
  store i32 %29, i32* %4
  store i32 1, i32* %10
  br label %47
30:
  %31 = load i32*, i32** %5
  %32 = load i32, i32* %9
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i32, i32* %31, i64 %33
  %35 = load i32, i32* %34
  %36 = load i32, i32* %7
  %37 = icmp ne i32 %35, %36
  br i1 %37, label %38, label %39
38:
  br label %41
39:
  %40 = load i32, i32* %9
  store i32 %40, i32* %4
  store i32 1, i32* %10
  br label %47
41:
  %42 = load i32, i32* %8
  %43 = add nsw i32 %42, 1
  store i32 %43, i32* %8
  %44 = load i32, i32* %9
  %45 = add nsw i32 %44, -1
  store i32 %45, i32* %9
  br label %15
46:
  store i32 -1, i32* %4
  store i32 1, i32* %10
  br label %47
47:
  %50 = load i32, i32* %4
  ret i32 %50
}
