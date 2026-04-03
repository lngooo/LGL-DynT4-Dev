define dso_local void @InsertionSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32*
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %11 = load i32*, i32** %3
  %12 = getelementptr inbounds i32, i32* %11, i64 1
  store i32* %12, i32** %5
  br label %13
13:
  %14 = load i32*, i32** %5
  %15 = load i32*, i32** %3
  %16 = load i32, i32* %4
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds i32, i32* %15, i64 %17
  %19 = icmp ult i32* %14, %18
  br i1 %19, label %20, label %50
20:
  %21 = load i32*, i32** %5
  %22 = load i32, i32* %21
  store i32 %22, i32* %7
  %23 = load i32*, i32** %5
  %24 = getelementptr inbounds i32, i32* %23, i64 -1
  store i32* %24, i32** %6
  br label %25
25:
  %26 = load i32*, i32** %6
  %27 = load i32*, i32** %3
  %28 = icmp uge i32* %26, %27
  br i1 %28, label %29, label %34
29:
  %30 = load i32*, i32** %6
  %31 = load i32, i32* %30
  %32 = load i32, i32* %7
  %33 = icmp sgt i32 %31, %32
  br label %34
34:
  %35 = phi i1 [ false, %25 ], [ %33, %29 ]
  br i1 %35, label %36, label %43
36:
  %37 = load i32*, i32** %6
  %38 = load i32, i32* %37
  %39 = load i32*, i32** %6
  %40 = getelementptr inbounds i32, i32* %39, i64 1
  store i32 %38, i32* %40
  %41 = load i32*, i32** %6
  %42 = getelementptr inbounds i32, i32* %41, i32 -1
  store i32* %42, i32** %6
  br label %25
43:
  %44 = load i32, i32* %7
  %45 = load i32*, i32** %6
  %46 = getelementptr inbounds i32, i32* %45, i64 1
  store i32 %44, i32* %46
  br label %47
47:
  %48 = load i32*, i32** %5
  %49 = getelementptr inbounds i32, i32* %48, i32 1
  store i32* %49, i32** %5
  br label %13
50:
  ret void
}
