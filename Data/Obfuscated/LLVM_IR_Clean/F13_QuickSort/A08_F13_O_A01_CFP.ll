define dso_local void @fvwC(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  store i32 0, i32* %7
  br label %14
14:
  %15 = load i32, i32* %7
  %16 = icmp ne i32 %15, 2
  br i1 %16, label %17, label %114
17:
  %18 = load i32, i32* %7
  switch i32 %18, label %113 [
    i32 0, label %19
    i32 1, label %26
  ]
19:
  %20 = load i32, i32* %5
  %21 = load i32, i32* %6
  %22 = icmp slt i32 %20, %21
  br i1 %22, label %23, label %24
23:
  store i32 1, i32* %7
  br label %25
24:
  store i32 2, i32* %7
  br label %25
25:
  br label %113
26:
  %28 = load i32*, i32** %4
  %29 = load i32, i32* %6
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %28, i64 %30
  %32 = load i32, i32* %31
  store i32 %32, i32* %8
  %34 = load i32, i32* %5
  %35 = sub nsw i32 %34, 1
  store i32 %35, i32* %9
  %37 = load i32, i32* %5
  store i32 %37, i32* %10
  br label %38
38:
  %39 = load i32, i32* %10
  %40 = load i32, i32* %6
  %41 = icmp slt i32 %39, %40
  br i1 %41, label %44, label %42
42:
  br label %80
44:
  %45 = load i32*, i32** %4
  %46 = load i32, i32* %10
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i32, i32* %45, i64 %47
  %49 = load i32, i32* %48
  %50 = load i32, i32* %8
  %51 = icmp slt i32 %49, %50
  br i1 %51, label %52, label %76
52:
  %53 = load i32, i32* %9
  %54 = add nsw i32 %53, 1
  store i32 %54, i32* %9
  %56 = load i32*, i32** %4
  %57 = load i32, i32* %9
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i32, i32* %56, i64 %58
  %60 = load i32, i32* %59
  store i32 %60, i32* %11
  %61 = load i32*, i32** %4
  %62 = load i32, i32* %10
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds i32, i32* %61, i64 %63
  %65 = load i32, i32* %64
  %66 = load i32*, i32** %4
  %67 = load i32, i32* %9
  %68 = sext i32 %67 to i64
  %69 = getelementptr inbounds i32, i32* %66, i64 %68
  store i32 %65, i32* %69
  %70 = load i32, i32* %11
  %71 = load i32*, i32** %4
  %72 = load i32, i32* %10
  %73 = sext i32 %72 to i64
  %74 = getelementptr inbounds i32, i32* %71, i64 %73
  store i32 %70, i32* %74
  br label %76
76:
  br label %77
77:
  %78 = load i32, i32* %10
  %79 = add nsw i32 %78, 1
  store i32 %79, i32* %10
  br label %38
80:
  %82 = load i32*, i32** %4
  %83 = load i32, i32* %9
  %84 = add nsw i32 %83, 1
  %85 = sext i32 %84 to i64
  %86 = getelementptr inbounds i32, i32* %82, i64 %85
  %87 = load i32, i32* %86
  store i32 %87, i32* %12
  %88 = load i32*, i32** %4
  %89 = load i32, i32* %6
  %90 = sext i32 %89 to i64
  %91 = getelementptr inbounds i32, i32* %88, i64 %90
  %92 = load i32, i32* %91
  %93 = load i32*, i32** %4
  %94 = load i32, i32* %9
  %95 = add nsw i32 %94, 1
  %96 = sext i32 %95 to i64
  %97 = getelementptr inbounds i32, i32* %93, i64 %96
  store i32 %92, i32* %97
  %98 = load i32, i32* %12
  %99 = load i32*, i32** %4
  %100 = load i32, i32* %6
  %101 = sext i32 %100 to i64
  %102 = getelementptr inbounds i32, i32* %99, i64 %101
  store i32 %98, i32* %102
  %103 = load i32*, i32** %4
  %104 = load i32, i32* %5
  %105 = load i32, i32* %9
  call void @fvwC(i32* %103, i32 %104, i32 %105)
  %106 = load i32*, i32** %4
  %107 = load i32, i32* %9
  %108 = add nsw i32 %107, 2
  %109 = load i32, i32* %6
  call void @fvwC(i32* %106, i32 %108, i32 %109)
  store i32 2, i32* %7
  br label %113
113:
  br label %14
114:
  ret void
}
