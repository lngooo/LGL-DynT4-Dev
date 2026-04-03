define dso_local i32 @FindMax(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %14 = load i32, i32* %4
  %15 = sext i32 %14 to i64
  %16 = mul i64 %15, 4
  %17 = call noalias i8* @malloc(i64 %16)
  store i32* %18, i32** %5
  store i32 0, i32* %6
  br label %20
20:
  %21 = load i32, i32* %6
  %22 = load i32, i32* %4
  %23 = icmp slt i32 %21, %22
  br i1 %23, label %26, label %24
24:
  br label %39
26:
  %27 = load i32*, i32** %3
  %28 = load i32, i32* %6
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i32, i32* %27, i64 %29
  %31 = load i32, i32* %30
  %32 = load i32*, i32** %5
  %33 = load i32, i32* %6
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i32, i32* %32, i64 %34
  store i32 %31, i32* %35
  br label %36
36:
  %37 = load i32, i32* %6
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* %6
  br label %20
39:
  store i32 1, i32* %7
  br label %41
41:
  %42 = load i32, i32* %7
  %43 = load i32, i32* %4
  %44 = icmp slt i32 %42, %43
  br i1 %44, label %47, label %45
45:
  store i32 5, i32* %8
  br label %103
47:
  %49 = load i32, i32* %7
  store i32 %49, i32* %9
  br label %50
50:
  %51 = load i32, i32* %9
  %52 = icmp sgt i32 %51, 0
  br i1 %52, label %53, label %98
53:
  %55 = load i32, i32* %9
  %56 = sub nsw i32 %55, 1
  %57 = sdiv i32 %56, 2
  store i32 %57, i32* %10
  %58 = load i32*, i32** %5
  %59 = load i32, i32* %9
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %58, i64 %60
  %62 = load i32, i32* %61
  %63 = load i32*, i32** %5
  %64 = load i32, i32* %10
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i32, i32* %63, i64 %65
  %67 = load i32, i32* %66
  %68 = icmp sgt i32 %62, %67
  br i1 %68, label %69, label %92
69:
  %71 = load i32*, i32** %5
  %72 = load i32, i32* %9
  %73 = sext i32 %72 to i64
  %74 = getelementptr inbounds i32, i32* %71, i64 %73
  %75 = load i32, i32* %74
  store i32 %75, i32* %11
  %76 = load i32*, i32** %5
  %77 = load i32, i32* %10
  %78 = sext i32 %77 to i64
  %79 = getelementptr inbounds i32, i32* %76, i64 %78
  %80 = load i32, i32* %79
  %81 = load i32*, i32** %5
  %82 = load i32, i32* %9
  %83 = sext i32 %82 to i64
  %84 = getelementptr inbounds i32, i32* %81, i64 %83
  store i32 %80, i32* %84
  %85 = load i32, i32* %11
  %86 = load i32*, i32** %5
  %87 = load i32, i32* %10
  %88 = sext i32 %87 to i64
  %89 = getelementptr inbounds i32, i32* %86, i64 %88
  store i32 %85, i32* %89
  %90 = load i32, i32* %10
  store i32 %90, i32* %9
  br label %93
92:
  store i32 9, i32* %8
  br label %94
93:
  store i32 0, i32* %8
  br label %94
94:
  %96 = load i32, i32* %8
  switch i32 %96, label %113 [
    i32 0, label %97
    i32 9, label %98
  ]
97:
  br label %50
98:
  br label %100
100:
  %101 = load i32, i32* %7
  %102 = add nsw i32 %101, 1
  store i32 %102, i32* %7
  br label %41
103:
  %105 = load i32*, i32** %5
  %106 = getelementptr inbounds i32, i32* %105, i64 0
  %107 = load i32, i32* %106
  store i32 %107, i32* %12
  %108 = load i32*, i32** %5
  call void @free(i8* %109)
  %110 = load i32, i32* %12
  store i32 1, i32* %8
  ret i32 %110
113:
  unreachable
}
declare noalias i8* @malloc(i64)
declare void @free(i8*)
