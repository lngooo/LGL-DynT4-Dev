define dso_local i32 @KthSmallest(i32* %0, i32 %1, i32 %2, i32 %3) {
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
  %18 = icmp slt i32 %16, %17
  br i1 %18, label %25, label %19
19:
  %20 = load i32*, i32** %6
  %21 = load i32, i32* %7
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i32, i32* %20, i64 %22
  %24 = load i32, i32* %23
  store i32 %24, i32* %5
  br label %133
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
  %49 = icmp sgt i32 %47, %48
  br i1 %49, label %74, label %50
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
  %102 = xor i32 %99, %101
  %103 = icmp ne i32 %102, 0
  br i1 %103, label %104, label %123
104:
  %105 = load i32, i32* %11
  %106 = load i32, i32* %9
  %107 = sub nsw i32 %106, 1
  %108 = icmp sgt i32 %105, %107
  br i1 %108, label %109, label %116
109:
  %110 = load i32*, i32** %6
  %111 = load i32, i32* %7
  %112 = load i32, i32* %11
  %113 = sub nsw i32 %112, 1
  %114 = load i32, i32* %9
  %115 = call i32 @KthSmallest(i32* %110, i32 %111, i32 %113, i32 %114)
  store i32 %115, i32* %5
  store i32 1, i32* %15
  br label %129
116:
  %117 = load i32*, i32** %6
  %118 = load i32, i32* %11
  %119 = add nsw i32 %118, 1
  %120 = load i32, i32* %8
  %121 = load i32, i32* %9
  %122 = call i32 @KthSmallest(i32* %117, i32 %119, i32 %120, i32 %121)
  store i32 %122, i32* %5
  store i32 1, i32* %15
  br label %129
123:
  %124 = load i32*, i32** %6
  %125 = load i32, i32* %11
  %126 = sext i32 %125 to i64
  %127 = getelementptr inbounds i32, i32* %124, i64 %126
  %128 = load i32, i32* %127
  store i32 %128, i32* %5
  store i32 1, i32* %15
  br label %129
129:
  br label %133
133:
  %134 = load i32, i32* %5
  ret i32 %134
}
