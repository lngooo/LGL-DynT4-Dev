define dso_local i32 @LinearSearch(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  store i32 0, i32* %8
  %15 = load i32, i32* %6
  %16 = sub nsw i32 %15, 1
  store i32 %16, i32* %9
  br label %17
17:
  %18 = load i32, i32* %8
  %19 = load i32, i32* %9
  %20 = icmp sle i32 %18, %19
  br i1 %20, label %21, label %55
21:
  %23 = load i32*, i32** %5
  %24 = load i32, i32* %8
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i32, i32* %23, i64 %25
  %27 = load i32, i32* %26
  store i32 %27, i32* %10
  %29 = load i32*, i32** %5
  %30 = load i32, i32* %9
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %29, i64 %31
  %33 = load i32, i32* %32
  store i32 %33, i32* %11
  %34 = load i32, i32* %10
  %35 = load i32, i32* %7
  %36 = icmp eq i32 %34, %35
  br i1 %36, label %37, label %39
37:
  %38 = load i32, i32* %8
  store i32 %38, i32* %4
  store i32 1, i32* %12
  br label %50
39:
  %40 = load i32, i32* %11
  %41 = load i32, i32* %7
  %42 = icmp eq i32 %40, %41
  br i1 %42, label %43, label %45
43:
  %44 = load i32, i32* %9
  store i32 %44, i32* %4
  store i32 1, i32* %12
  br label %50
45:
  %46 = load i32, i32* %8
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %8
  %48 = load i32, i32* %9
  %49 = sub nsw i32 %48, 1
  store i32 %49, i32* %9
  store i32 0, i32* %12
  br label %50
50:
  %53 = load i32, i32* %12
  switch i32 %53, label %56 [
    i32 0, label %54
  ]
54:
  br label %17
55:
  store i32 -1, i32* %4
  store i32 1, i32* %12
  br label %56
56:
  %59 = load i32, i32* %4
  ret i32 %59
}
