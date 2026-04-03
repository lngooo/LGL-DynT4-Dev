define dso_local i32 @h(i32* %0, i32 %1, i32 %2, i32 %3) {
  %5 = alloca i32
  %6 = alloca i32*
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca i32
  %14 = alloca i32
  %15 = alloca i32
  %16 = alloca i32
  store i32* %0, i32** %6
  store i32 %1, i32* %7
  store i32 %2, i32* %8
  store i32 %3, i32* %9
  %17 = load i32, i32* %7
  %18 = load i32, i32* %8
  %19 = icmp sgt i32 %17, %18
  br i1 %19, label %20, label %21
20:
  store i32 -1, i32* %5
  br label %141
21:
  %23 = load i32*, i32** %6
  %24 = load i32, i32* %8
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i32, i32* %23, i64 %25
  %27 = load i32, i32* %26
  store i32 %27, i32* %10
  %29 = load i32, i32* %7
  store i32 %29, i32* %11
  %31 = load i32, i32* %7
  store i32 %31, i32* %12
  br label %32
32:
  %33 = load i32, i32* %12
  %34 = load i32, i32* %8
  %35 = icmp slt i32 %33, %34
  br i1 %35, label %38, label %36
36:
  store i32 2, i32* %13
  br label %85
38:
  store i32 0, i32* %14
  br label %40
40:
  %41 = load i32, i32* %14
  %42 = icmp slt i32 %41, 1
  br i1 %42, label %45, label %43
43:
  store i32 5, i32* %13
  br label %81
45:
  %46 = load i32*, i32** %6
  %47 = load i32, i32* %12
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i32, i32* %46, i64 %48
  %50 = load i32, i32* %49
  %51 = load i32, i32* %10
  %52 = icmp sle i32 %50, %51
  br i1 %52, label %53, label %77
53:
  %55 = load i32*, i32** %6
  %56 = load i32, i32* %11
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i32, i32* %55, i64 %57
  %59 = load i32, i32* %58
  store i32 %59, i32* %15
  %60 = load i32*, i32** %6
  %61 = load i32, i32* %12
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i32, i32* %60, i64 %62
  %64 = load i32, i32* %63
  %65 = load i32*, i32** %6
  %66 = load i32, i32* %11
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds i32, i32* %65, i64 %67
  store i32 %64, i32* %68
  %69 = load i32, i32* %15
  %70 = load i32*, i32** %6
  %71 = load i32, i32* %12
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds i32, i32* %70, i64 %72
  store i32 %69, i32* %73
  %74 = load i32, i32* %11
  %75 = add nsw i32 %74, 1
  store i32 %75, i32* %11
  br label %77
77:
  br label %78
78:
  %79 = load i32, i32* %14
  %80 = add nsw i32 %79, 1
  store i32 %80, i32* %14
  br label %40
81:
  br label %82
82:
  %83 = load i32, i32* %12
  %84 = add nsw i32 %83, 1
  store i32 %84, i32* %12
  br label %32
85:
  %87 = load i32*, i32** %6
  %88 = load i32, i32* %11
  %89 = sext i32 %88 to i64
  %90 = getelementptr inbounds i32, i32* %87, i64 %89
  %91 = load i32, i32* %90
  store i32 %91, i32* %16
  %92 = load i32*, i32** %6
  %93 = load i32, i32* %8
  %94 = sext i32 %93 to i64
  %95 = getelementptr inbounds i32, i32* %92, i64 %94
  %96 = load i32, i32* %95
  %97 = load i32*, i32** %6
  %98 = load i32, i32* %11
  %99 = sext i32 %98 to i64
  %100 = getelementptr inbounds i32, i32* %97, i64 %99
  store i32 %96, i32* %100
  %101 = load i32, i32* %16
  %102 = load i32*, i32** %6
  %103 = load i32, i32* %8
  %104 = sext i32 %103 to i64
  %105 = getelementptr inbounds i32, i32* %102, i64 %104
  store i32 %101, i32* %105
  %106 = load i32, i32* %11
  %107 = load i32, i32* %9
  %108 = sub nsw i32 %107, 1
  %109 = icmp eq i32 %106, %108
  br i1 %109, label %110, label %116
110:
  %111 = load i32*, i32** %6
  %112 = load i32, i32* %11
  %113 = sext i32 %112 to i64
  %114 = getelementptr inbounds i32, i32* %111, i64 %113
  %115 = load i32, i32* %114
  store i32 %115, i32* %5
  store i32 1, i32* %13
  br label %137
116:
  %117 = load i32, i32* %11
  %118 = load i32, i32* %9
  %119 = sub nsw i32 %118, 1
  %120 = icmp sgt i32 %117, %119
  br i1 %120, label %121, label %128
121:
  %122 = load i32*, i32** %6
  %123 = load i32, i32* %7
  %124 = load i32, i32* %11
  %125 = sub nsw i32 %124, 1
  %126 = load i32, i32* %9
  %127 = call i32 @h(i32* %122, i32 %123, i32 %125, i32 %126)
  br label %135
128:
  %129 = load i32*, i32** %6
  %130 = load i32, i32* %11
  %131 = add nsw i32 %130, 1
  %132 = load i32, i32* %8
  %133 = load i32, i32* %9
  %134 = call i32 @h(i32* %129, i32 %131, i32 %132, i32 %133)
  br label %135
135:
  %136 = phi i32 [ %127, %121 ], [ %134, %128 ]
  store i32 %136, i32* %5
  store i32 1, i32* %13
  br label %137
137:
  br label %141
141:
  %142 = load i32, i32* %5
  ret i32 %142
}
