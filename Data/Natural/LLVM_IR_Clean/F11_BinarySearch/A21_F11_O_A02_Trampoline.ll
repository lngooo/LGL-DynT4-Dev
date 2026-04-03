define dso_local i32 @BinarySearch(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  store i32 0, i32* %8
  %14 = load i32, i32* %6
  %15 = sub nsw i32 %14, 1
  store i32 %15, i32* %9
  br label %16
16:
  %17 = load i32, i32* %8
  %18 = load i32, i32* %9
  %19 = icmp sle i32 %17, %18
  br i1 %19, label %20, label %55
20:
  %22 = load i32, i32* %8
  %23 = load i32, i32* %9
  %24 = load i32, i32* %8
  %25 = sub nsw i32 %23, %24
  %26 = sdiv i32 %25, 2
  %27 = add nsw i32 %22, %26
  store i32 %27, i32* %10
  %28 = load i32*, i32** %5
  %29 = load i32, i32* %10
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %28, i64 %30
  %32 = load i32, i32* %31
  %33 = load i32, i32* %7
  %34 = icmp eq i32 %32, %33
  br i1 %34, label %35, label %37
35:
  %36 = load i32, i32* %10
  store i32 %36, i32* %4
  store i32 1, i32* %11
  br label %51
37:
  %38 = load i32*, i32** %5
  %39 = load i32, i32* %10
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i32, i32* %38, i64 %40
  %42 = load i32, i32* %41
  %43 = load i32, i32* %7
  %44 = icmp slt i32 %42, %43
  br i1 %44, label %45, label %48
45:
  %46 = load i32, i32* %10
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %8
  store i32 2, i32* %11
  br label %51
48:
  %49 = load i32, i32* %10
  %50 = sub nsw i32 %49, 1
  store i32 %50, i32* %9
  store i32 0, i32* %11
  br label %51
51:
  %53 = load i32, i32* %11
  switch i32 %53, label %56 [
    i32 0, label %54
    i32 2, label %16
  ]
54:
  br label %16
55:
  store i32 -1, i32* %4
  store i32 1, i32* %11
  br label %56
56:
  %59 = load i32, i32* %4
  ret i32 %59
}
