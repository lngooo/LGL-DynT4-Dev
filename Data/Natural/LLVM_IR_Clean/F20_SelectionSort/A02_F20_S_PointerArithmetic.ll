define dso_local void @SelectionSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32*
  %7 = alloca i32*
  %8 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %12 = load i32*, i32** %3
  store i32* %12, i32** %5
  br label %13
13:
  %14 = load i32*, i32** %5
  %15 = load i32*, i32** %3
  %16 = load i32, i32* %4
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds i32, i32* %15, i64 %17
  %19 = getelementptr inbounds i32, i32* %18, i64 -1
  %20 = icmp ult i32* %14, %19
  br i1 %20, label %21, label %57
21:
  %22 = load i32*, i32** %5
  store i32* %22, i32** %7
  %23 = load i32*, i32** %5
  %24 = getelementptr inbounds i32, i32* %23, i64 1
  store i32* %24, i32** %6
  br label %25
25:
  %26 = load i32*, i32** %6
  %27 = load i32*, i32** %3
  %28 = load i32, i32* %4
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i32, i32* %27, i64 %29
  %31 = icmp ult i32* %26, %30
  br i1 %31, label %32, label %44
32:
  %33 = load i32*, i32** %6
  %34 = load i32, i32* %33
  %35 = load i32*, i32** %7
  %36 = load i32, i32* %35
  %37 = icmp slt i32 %34, %36
  br i1 %37, label %38, label %40
38:
  %39 = load i32*, i32** %6
  store i32* %39, i32** %7
  br label %40
40:
  br label %41
41:
  %42 = load i32*, i32** %6
  %43 = getelementptr inbounds i32, i32* %42, i32 1
  store i32* %43, i32** %6
  br label %25
44:
  %46 = load i32*, i32** %7
  %47 = load i32, i32* %46
  store i32 %47, i32* %8
  %48 = load i32*, i32** %5
  %49 = load i32, i32* %48
  %50 = load i32*, i32** %7
  store i32 %49, i32* %50
  %51 = load i32, i32* %8
  %52 = load i32*, i32** %5
  store i32 %51, i32* %52
  br label %54
54:
  %55 = load i32*, i32** %5
  %56 = getelementptr inbounds i32, i32* %55, i32 1
  store i32* %56, i32** %5
  br label %13
57:
  ret void
}
