define dso_local i32 @KthSmallest(i32* %0, i32 %1, i32 %2, i32 %3) {
  %5 = alloca i32
  %6 = alloca i32*
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca double
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
  br label %80
38:
  %40 = load i32*, i32** %6
  %41 = load i32, i32* %12
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i32, i32* %40, i64 %42
  %44 = load i32, i32* %43
  %45 = sitofp i32 %44 to double
  %46 = load i32, i32* %10
  %47 = sitofp i32 %46 to double
  %48 = fsub double %45, %47
  store double %48, double* %13
  %49 = load double, double* %13
  %50 = fcmp ole double %49, 0.000000e+00
  br i1 %50, label %51, label %75
51:
  %53 = load i32*, i32** %6
  %54 = load i32, i32* %11
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i32, i32* %53, i64 %55
  %57 = load i32, i32* %56
  store i32 %57, i32* %14
  %58 = load i32*, i32** %6
  %59 = load i32, i32* %12
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %58, i64 %60
  %62 = load i32, i32* %61
  %63 = load i32*, i32** %6
  %64 = load i32, i32* %11
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i32, i32* %63, i64 %65
  store i32 %62, i32* %66
  %67 = load i32, i32* %14
  %68 = load i32*, i32** %6
  %69 = load i32, i32* %12
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds i32, i32* %68, i64 %70
  store i32 %67, i32* %71
  %72 = load i32, i32* %11
  %73 = add nsw i32 %72, 1
  store i32 %73, i32* %11
  br label %75
75:
  br label %77
77:
  %78 = load i32, i32* %12
  %79 = add nsw i32 %78, 1
  store i32 %79, i32* %12
  br label %32
80:
  %82 = load i32*, i32** %6
  %83 = load i32, i32* %11
  %84 = sext i32 %83 to i64
  %85 = getelementptr inbounds i32, i32* %82, i64 %84
  %86 = load i32, i32* %85
  store i32 %86, i32* %15
  %87 = load i32*, i32** %6
  %88 = load i32, i32* %8
  %89 = sext i32 %88 to i64
  %90 = getelementptr inbounds i32, i32* %87, i64 %89
  %91 = load i32, i32* %90
  %92 = load i32*, i32** %6
  %93 = load i32, i32* %11
  %94 = sext i32 %93 to i64
  %95 = getelementptr inbounds i32, i32* %92, i64 %94
  store i32 %91, i32* %95
  %96 = load i32, i32* %15
  %97 = load i32*, i32** %6
  %98 = load i32, i32* %8
  %99 = sext i32 %98 to i64
  %100 = getelementptr inbounds i32, i32* %97, i64 %99
  store i32 %96, i32* %100
  %101 = load i32, i32* %11
  %102 = load i32, i32* %9
  %103 = sub nsw i32 %102, 1
  %104 = sub nsw i32 %101, %103
  %105 = sitofp i32 %104 to double
  %106 = call double @pow(double %105, double 2.000000e+00)
  %107 = call double @sqrt(double %106)
  %108 = fptosi double %107 to i32
  %109 = icmp eq i32 %108, 0
  br i1 %109, label %110, label %116
110:
  %111 = load i32*, i32** %6
  %112 = load i32, i32* %11
  %113 = sext i32 %112 to i64
  %114 = getelementptr inbounds i32, i32* %111, i64 %113
  %115 = load i32, i32* %114
  store i32 %115, i32* %5
  store i32 1, i32* %16
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
  %127 = call i32 @KthSmallest(i32* %122, i32 %123, i32 %125, i32 %126)
  br label %135
128:
  %129 = load i32*, i32** %6
  %130 = load i32, i32* %11
  %131 = add nsw i32 %130, 1
  %132 = load i32, i32* %8
  %133 = load i32, i32* %9
  %134 = call i32 @KthSmallest(i32* %129, i32 %131, i32 %132, i32 %133)
  br label %135
135:
  %136 = phi i32 [ %127, %121 ], [ %134, %128 ]
  store i32 %136, i32* %5
  store i32 1, i32* %16
  br label %137
137:
  br label %141
141:
  %142 = load i32, i32* %5
  ret i32 %142
}
declare double @sqrt(double)
declare double @pow(double, double)
