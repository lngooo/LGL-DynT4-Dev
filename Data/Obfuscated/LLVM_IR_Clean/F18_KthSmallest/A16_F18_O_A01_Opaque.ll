define dso_local i32 @V(i32* %0, i32 %1, i32 %2, i32 %3) {
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
  store i32* %0, i32** %6
  store i32 %1, i32* %7
  store i32 %2, i32* %8
  store i32 %3, i32* %9
  %16 = load i32, i32* %7
  %17 = load i32, i32* %8
  %18 = icmp sle i32 %16, %17
  br i1 %18, label %19, label %135
19:
  %20 = load i32, i32* %7
  %21 = load i32, i32* %8
  %22 = mul nsw i32 %20, %21
  %23 = add nsw i32 %22, 1
  %24 = icmp ne i32 %23, 2147483647
  br i1 %24, label %25, label %134
25:
  %27 = load i32*, i32** %6
  %28 = load i32, i32* %8
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i32, i32* %27, i64 %29
  %31 = load i32, i32* %30
  store i32 %31, i32* %10
  %33 = load i32, i32* %7
  store i32 %33, i32* %11
  %35 = load i32, i32* %7
  store i32 %35, i32* %12
  br label %36
36:
  %37 = load i32, i32* %12
  %38 = load i32, i32* %8
  %39 = icmp slt i32 %37, %38
  br i1 %39, label %42, label %40
40:
  br label %78
42:
  %43 = load i32*, i32** %6
  %44 = load i32, i32* %12
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i32, i32* %43, i64 %45
  %47 = load i32, i32* %46
  %48 = load i32, i32* %10
  %49 = icmp sle i32 %47, %48
  br i1 %49, label %50, label %74
50:
  %52 = load i32*, i32** %6
  %53 = load i32, i32* %11
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i32, i32* %52, i64 %54
  %56 = load i32, i32* %55
  store i32 %56, i32* %13
  %57 = load i32*, i32** %6
  %58 = load i32, i32* %12
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i32, i32* %57, i64 %59
  %61 = load i32, i32* %60
  %62 = load i32*, i32** %6
  %63 = load i32, i32* %11
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i32, i32* %62, i64 %64
  store i32 %61, i32* %65
  %66 = load i32, i32* %13
  %67 = load i32*, i32** %6
  %68 = load i32, i32* %12
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i32, i32* %67, i64 %69
  store i32 %66, i32* %70
  %71 = load i32, i32* %11
  %72 = add nsw i32 %71, 1
  store i32 %72, i32* %11
  br label %74
74:
  br label %75
75:
  %76 = load i32, i32* %12
  %77 = add nsw i32 %76, 1
  store i32 %77, i32* %12
  br label %36
78:
  %80 = load i32*, i32** %6
  %81 = load i32, i32* %11
  %82 = sext i32 %81 to i64
  %83 = getelementptr inbounds i32, i32* %80, i64 %82
  %84 = load i32, i32* %83
  store i32 %84, i32* %14
  %85 = load i32*, i32** %6
  %86 = load i32, i32* %8
  %87 = sext i32 %86 to i64
  %88 = getelementptr inbounds i32, i32* %85, i64 %87
  %89 = load i32, i32* %88
  %90 = load i32*, i32** %6
  %91 = load i32, i32* %11
  %92 = sext i32 %91 to i64
  %93 = getelementptr inbounds i32, i32* %90, i64 %92
  store i32 %89, i32* %93
  %94 = load i32, i32* %14
  %95 = load i32*, i32** %6
  %96 = load i32, i32* %8
  %97 = sext i32 %96 to i64
  %98 = getelementptr inbounds i32, i32* %95, i64 %97
  store i32 %94, i32* %98
  %99 = load i32, i32* %11
  %100 = load i32, i32* %9
  %101 = sub nsw i32 %100, 1
  %102 = icmp eq i32 %99, %101
  br i1 %102, label %103, label %109
103:
  %104 = load i32*, i32** %6
  %105 = load i32, i32* %11
  %106 = sext i32 %105 to i64
  %107 = getelementptr inbounds i32, i32* %104, i64 %106
  %108 = load i32, i32* %107
  store i32 %108, i32* %5
  store i32 1, i32* %15
  br label %130
109:
  %110 = load i32, i32* %11
  %111 = load i32, i32* %9
  %112 = sub nsw i32 %111, 1
  %113 = icmp sgt i32 %110, %112
  br i1 %113, label %114, label %121
114:
  %115 = load i32*, i32** %6
  %116 = load i32, i32* %7
  %117 = load i32, i32* %11
  %118 = sub nsw i32 %117, 1
  %119 = load i32, i32* %9
  %120 = call i32 @V(i32* %115, i32 %116, i32 %118, i32 %119)
  br label %128
121:
  %122 = load i32*, i32** %6
  %123 = load i32, i32* %11
  %124 = add nsw i32 %123, 1
  %125 = load i32, i32* %8
  %126 = load i32, i32* %9
  %127 = call i32 @V(i32* %122, i32 %124, i32 %125, i32 %126)
  br label %128
128:
  %129 = phi i32 [ %120, %114 ], [ %127, %121 ]
  store i32 %129, i32* %5
  store i32 1, i32* %15
  br label %130
130:
  br label %136
134:
  br label %135
135:
  store i32 -1, i32* %5
  br label %136
136:
  %137 = load i32, i32* %5
  ret i32 %137
}
