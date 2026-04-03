define dso_local void @tK(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32*
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %13 = load i32, i32* %5
  %14 = load i32, i32* %6
  %15 = icmp sge i32 %13, %14
  br i1 %15, label %16, label %17
16:
  br label %129
17:
  %19 = load i32, i32* %5
  %20 = load i32, i32* %6
  %21 = load i32, i32* %5
  %22 = sub nsw i32 %20, %21
  %23 = sdiv i32 %22, 2
  %24 = add nsw i32 %19, %23
  store i32 %24, i32* %7
  %25 = load i32*, i32** %4
  %26 = load i32, i32* %5
  %27 = load i32, i32* %7
  call void @tK(i32* %25, i32 %26, i32 %27)
  %28 = load i32*, i32** %4
  %29 = load i32, i32* %7
  %30 = add nsw i32 %29, 1
  %31 = load i32, i32* %6
  call void @tK(i32* %28, i32 %30, i32 %31)
  %33 = load i32, i32* %6
  %34 = load i32, i32* %5
  %35 = sub nsw i32 %33, %34
  %36 = add nsw i32 %35, 1
  %37 = mul nsw i32 %36, 4
  %38 = sext i32 %37 to i64
  %39 = call noalias i8* @malloc(i64 %38)
  store i32* %40, i32** %8
  %42 = load i32, i32* %5
  store i32 %42, i32* %9
  %44 = load i32, i32* %7
  %45 = add nsw i32 %44, 1
  store i32 %45, i32* %10
  store i32 0, i32* %11
  br label %47
47:
  %48 = load i32, i32* %9
  %49 = load i32, i32* %7
  %50 = icmp sle i32 %48, %49
  br i1 %50, label %55, label %51
51:
  %52 = load i32, i32* %10
  %53 = load i32, i32* %6
  %54 = icmp sle i32 %52, %53
  br label %55
55:
  %56 = phi i1 [ true, %47 ], [ %54, %51 ]
  br i1 %56, label %57, label %98
57:
  %58 = load i32, i32* %9
  %59 = load i32, i32* %7
  %60 = icmp sle i32 %58, %59
  br i1 %60, label %61, label %84
61:
  %62 = load i32, i32* %10
  %63 = load i32, i32* %6
  %64 = icmp sgt i32 %62, %63
  br i1 %64, label %77, label %65
65:
  %66 = load i32*, i32** %4
  %67 = load i32, i32* %9
  %68 = sext i32 %67 to i64
  %69 = getelementptr inbounds i32, i32* %66, i64 %68
  %70 = load i32, i32* %69
  %71 = load i32*, i32** %4
  %72 = load i32, i32* %10
  %73 = sext i32 %72 to i64
  %74 = getelementptr inbounds i32, i32* %71, i64 %73
  %75 = load i32, i32* %74
  %76 = icmp sle i32 %70, %75
  br i1 %76, label %77, label %84
77:
  %78 = load i32*, i32** %4
  %79 = load i32, i32* %9
  %80 = add nsw i32 %79, 1
  store i32 %80, i32* %9
  %81 = sext i32 %79 to i64
  %82 = getelementptr inbounds i32, i32* %78, i64 %81
  %83 = load i32, i32* %82
  br label %91
84:
  %85 = load i32*, i32** %4
  %86 = load i32, i32* %10
  %87 = add nsw i32 %86, 1
  store i32 %87, i32* %10
  %88 = sext i32 %86 to i64
  %89 = getelementptr inbounds i32, i32* %85, i64 %88
  %90 = load i32, i32* %89
  br label %91
91:
  %92 = phi i32 [ %83, %77 ], [ %90, %84 ]
  %93 = load i32*, i32** %8
  %94 = load i32, i32* %11
  %95 = add nsw i32 %94, 1
  store i32 %95, i32* %11
  %96 = sext i32 %94 to i64
  %97 = getelementptr inbounds i32, i32* %93, i64 %96
  store i32 %92, i32* %97
  br label %47
98:
  store i32 0, i32* %12
  br label %100
100:
  %101 = load i32, i32* %12
  %102 = load i32, i32* %11
  %103 = icmp slt i32 %101, %102
  br i1 %103, label %106, label %104
104:
  br label %121
106:
  %107 = load i32*, i32** %8
  %108 = load i32, i32* %12
  %109 = sext i32 %108 to i64
  %110 = getelementptr inbounds i32, i32* %107, i64 %109
  %111 = load i32, i32* %110
  %112 = load i32*, i32** %4
  %113 = load i32, i32* %5
  %114 = load i32, i32* %12
  %115 = add nsw i32 %113, %114
  %116 = sext i32 %115 to i64
  %117 = getelementptr inbounds i32, i32* %112, i64 %116
  store i32 %111, i32* %117
  br label %118
118:
  %119 = load i32, i32* %12
  %120 = add nsw i32 %119, 1
  store i32 %120, i32* %12
  br label %100
121:
  %122 = load i32*, i32** %8
  call void @free(i8* %123)
  br label %129
129:
  ret void
}
declare noalias i8* @malloc(i64)
declare void @free(i8*)
