define dso_local void @SelectionSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32*
  %7 = alloca i32*
  %8 = alloca i32*
  %9 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  br label %11
11:
  %12 = load i32, i32* %5
  %13 = load i32, i32* %4
  %14 = icmp slt i32 %12, %13
  br i1 %14, label %17, label %15
15:
  br label %62
17:
  %19 = load i32*, i32** %3
  %20 = load i32, i32* %5
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i32, i32* %19, i64 %21
  store i32* %22, i32** %6
  %24 = load i32*, i32** %6
  %25 = getelementptr inbounds i32, i32* %24, i64 1
  store i32* %25, i32** %7
  %27 = load i32*, i32** %6
  store i32* %27, i32** %8
  br label %28
28:
  %29 = load i32*, i32** %7
  %30 = load i32*, i32** %3
  %31 = load i32, i32* %4
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i32, i32* %30, i64 %32
  %34 = icmp ult i32* %29, %33
  br i1 %34, label %35, label %46
35:
  %36 = load i32*, i32** %7
  %37 = load i32, i32* %36
  %38 = load i32*, i32** %8
  %39 = load i32, i32* %38
  %40 = icmp slt i32 %37, %39
  br i1 %40, label %41, label %43
41:
  %42 = load i32*, i32** %7
  store i32* %42, i32** %8
  br label %43
43:
  %44 = load i32*, i32** %7
  %45 = getelementptr inbounds i32, i32* %44, i32 1
  store i32* %45, i32** %7
  br label %28
46:
  %48 = load i32*, i32** %6
  %49 = load i32, i32* %48
  store i32 %49, i32* %9
  %50 = load i32*, i32** %8
  %51 = load i32, i32* %50
  %52 = load i32*, i32** %6
  store i32 %51, i32* %52
  %53 = load i32, i32* %9
  %54 = load i32*, i32** %8
  store i32 %53, i32* %54
  br label %59
59:
  %60 = load i32, i32* %5
  %61 = add nsw i32 %60, 1
  store i32 %61, i32* %5
  br label %11
62:
  ret void
}
