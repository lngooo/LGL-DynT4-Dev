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
  %18 = icmp sgt i32 %16, %17
  br i1 %18, label %19, label %20
19:
  store i32 -1, i32* %5
  br label %129
20:
  %22 = load i32*, i32** %6
  %23 = load i32, i32* %8
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i32, i32* %22, i64 %24
  %26 = load i32, i32* %25
  store i32 %26, i32* %10
  %28 = load i32, i32* %7
  store i32 %28, i32* %11
  %30 = load i32, i32* %7
  store i32 %30, i32* %12
  br label %31
31:
  %32 = load i32, i32* %12
  %33 = load i32, i32* %8
  %34 = icmp slt i32 %32, %33
  br i1 %34, label %37, label %35
35:
  br label %73
37:
  %38 = load i32*, i32** %6
  %39 = load i32, i32* %12
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i32, i32* %38, i64 %40
  %42 = load i32, i32* %41
  %43 = load i32, i32* %10
  %44 = icmp sle i32 %42, %43
  br i1 %44, label %45, label %69
45:
  %47 = load i32*, i32** %6
  %48 = load i32, i32* %11
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds i32, i32* %47, i64 %49
  %51 = load i32, i32* %50
  store i32 %51, i32* %13
  %52 = load i32*, i32** %6
  %53 = load i32, i32* %12
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i32, i32* %52, i64 %54
  %56 = load i32, i32* %55
  %57 = load i32*, i32** %6
  %58 = load i32, i32* %11
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i32, i32* %57, i64 %59
  store i32 %56, i32* %60
  %61 = load i32, i32* %13
  %62 = load i32*, i32** %6
  %63 = load i32, i32* %12
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i32, i32* %62, i64 %64
  store i32 %61, i32* %65
  %66 = load i32, i32* %11
  %67 = add nsw i32 %66, 1
  store i32 %67, i32* %11
  br label %69
69:
  br label %70
70:
  %71 = load i32, i32* %12
  %72 = add nsw i32 %71, 1
  store i32 %72, i32* %12
  br label %31
73:
  %75 = load i32*, i32** %6
  %76 = load i32, i32* %11
  %77 = sext i32 %76 to i64
  %78 = getelementptr inbounds i32, i32* %75, i64 %77
  %79 = load i32, i32* %78
  store i32 %79, i32* %14
  %80 = load i32*, i32** %6
  %81 = load i32, i32* %8
  %82 = sext i32 %81 to i64
  %83 = getelementptr inbounds i32, i32* %80, i64 %82
  %84 = load i32, i32* %83
  %85 = load i32*, i32** %6
  %86 = load i32, i32* %11
  %87 = sext i32 %86 to i64
  %88 = getelementptr inbounds i32, i32* %85, i64 %87
  store i32 %84, i32* %88
  %89 = load i32, i32* %14
  %90 = load i32*, i32** %6
  %91 = load i32, i32* %8
  %92 = sext i32 %91 to i64
  %93 = getelementptr inbounds i32, i32* %90, i64 %92
  store i32 %89, i32* %93
  %94 = load i32, i32* %11
  %95 = load i32, i32* %9
  %96 = sub nsw i32 %95, 1
  %97 = icmp eq i32 %94, %96
  br i1 %97, label %98, label %104
98:
  %99 = load i32*, i32** %6
  %100 = load i32, i32* %11
  %101 = sext i32 %100 to i64
  %102 = getelementptr inbounds i32, i32* %99, i64 %101
  %103 = load i32, i32* %102
  store i32 %103, i32* %5
  store i32 1, i32* %15
  br label %125
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
  br label %123
116:
  %117 = load i32*, i32** %6
  %118 = load i32, i32* %11
  %119 = add nsw i32 %118, 1
  %120 = load i32, i32* %8
  %121 = load i32, i32* %9
  %122 = call i32 @KthSmallest(i32* %117, i32 %119, i32 %120, i32 %121)
  br label %123
123:
  %124 = phi i32 [ %115, %109 ], [ %122, %116 ]
  store i32 %124, i32* %5
  store i32 1, i32* %15
  br label %125
125:
  br label %129
129:
  %130 = load i32, i32* %5
  ret i32 %130
}
