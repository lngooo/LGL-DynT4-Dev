define dso_local i32 @g(i32* %0, i32 %1, i32 %2) {
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
  %23 = load i32, i32* %8
  %24 = load i32, i32* %9
  %25 = add nsw i32 %23, %24
  %26 = sdiv i32 %25, 2
  store i32 %26, i32* %10
  %28 = load i32*, i32** %5
  %29 = load i32, i32* %10
  %30 = add nsw i32 %29, 0
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %28, i64 %31
  %33 = load i32, i32* %32
  store i32 %33, i32* %11
  %34 = load i32, i32* %11
  %35 = load i32, i32* %7
  %36 = icmp eq i32 %34, %35
  br i1 %36, label %37, label %39
37:
  %38 = load i32, i32* %10
  store i32 %38, i32* %4
  store i32 1, i32* %12
  br label %50
39:
  %40 = load i32, i32* %11
  %41 = load i32, i32* %7
  %42 = icmp slt i32 %40, %41
  br i1 %42, label %43, label %46
43:
  %44 = load i32, i32* %10
  %45 = add nsw i32 %44, 1
  store i32 %45, i32* %8
  br label %49
46:
  %47 = load i32, i32* %10
  %48 = sub nsw i32 %47, 1
  store i32 %48, i32* %9
  br label %49
49:
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
