define dso_local i32 @Nruy(i32* %0, i32 %1, i32 %2) {
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
  br label %17
17:
  %18 = load i32, i32* %8
  %19 = load i32, i32* %9
  %20 = icmp sgt i32 %18, %19
  br i1 %20, label %21, label %22
21:
  br label %53
22:
  %23 = load i32, i32* %8
  %24 = load i32, i32* %9
  %25 = load i32, i32* %8
  %26 = sub nsw i32 %24, %25
  %27 = sdiv i32 %26, 2
  %28 = add nsw i32 %23, %27
  store i32 %28, i32* %10
  %29 = load i32*, i32** %5
  %30 = load i32, i32* %10
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %29, i64 %31
  %33 = load i32, i32* %32
  %34 = load i32, i32* %7
  %35 = icmp eq i32 %33, %34
  br i1 %35, label %36, label %37
36:
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
  br label %17
48:
  %49 = load i32, i32* %10
  %50 = sub nsw i32 %49, 1
  store i32 %50, i32* %9
  br label %17
51:
  %52 = load i32, i32* %10
  store i32 %52, i32* %4
  store i32 1, i32* %11
  br label %54
53:
  store i32 -1, i32* %4
  store i32 1, i32* %11
  br label %54
54:
  %58 = load i32, i32* %4
  ret i32 %58
}
