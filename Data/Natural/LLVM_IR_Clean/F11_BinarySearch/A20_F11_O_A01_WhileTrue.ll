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
  br label %17
17:
  %18 = load i32, i32* %8
  %19 = load i32, i32* %9
  %20 = icmp sgt i32 %18, %19
  br i1 %20, label %21, label %22
21:
  store i32 -1, i32* %4
  store i32 1, i32* %10
  br label %58
22:
  %24 = load i32, i32* %8
  %25 = load i32, i32* %9
  %26 = load i32, i32* %8
  %27 = sub nsw i32 %25, %26
  %28 = sdiv i32 %27, 2
  %29 = add nsw i32 %24, %28
  store i32 %29, i32* %11
  %30 = load i32*, i32** %5
  %31 = load i32, i32* %11
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i32, i32* %30, i64 %32
  %34 = load i32, i32* %33
  %35 = load i32, i32* %7
  %36 = icmp eq i32 %34, %35
  br i1 %36, label %37, label %39
37:
  %38 = load i32, i32* %11
  store i32 %38, i32* %4
  store i32 1, i32* %10
  br label %54
39:
  %40 = load i32*, i32** %5
  %41 = load i32, i32* %11
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i32, i32* %40, i64 %42
  %44 = load i32, i32* %43
  %45 = load i32, i32* %7
  %46 = icmp slt i32 %44, %45
  br i1 %46, label %47, label %50
47:
  %48 = load i32, i32* %11
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %8
  br label %53
50:
  %51 = load i32, i32* %11
  %52 = sub nsw i32 %51, 1
  store i32 %52, i32* %9
  br label %53
53:
  store i32 0, i32* %10
  br label %54
54:
  %56 = load i32, i32* %10
  switch i32 %56, label %58 [
    i32 0, label %57
  ]
57:
  br label %16
58:
  %61 = load i32, i32* %4
  ret i32 %61
}
