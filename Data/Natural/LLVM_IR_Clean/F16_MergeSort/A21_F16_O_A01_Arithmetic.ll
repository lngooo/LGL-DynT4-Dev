define dso_local void @MergeSort(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32*
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca i32
  %14 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %15 = load i32, i32* %5
  %16 = load i32, i32* %6
  %17 = icmp slt i32 %15, %16
  br i1 %17, label %18, label %140
18:
  %20 = load i32, i32* %5
  %21 = load i32, i32* %6
  %22 = load i32, i32* %5
  %23 = sub nsw i32 %21, %22
  %24 = sdiv i32 %23, 2
  %25 = add nsw i32 %20, %24
  store i32 %25, i32* %7
  %26 = load i32*, i32** %4
  %27 = load i32, i32* %5
  %28 = load i32, i32* %7
  call void @MergeSort(i32* %26, i32 %27, i32 %28)
  %29 = load i32*, i32** %4
  %30 = load i32, i32* %7
  %31 = add nsw i32 %30, 1
  %32 = load i32, i32* %6
  call void @MergeSort(i32* %29, i32 %31, i32 %32)
  %34 = load i32, i32* %6
  %35 = load i32, i32* %5
  %36 = sub nsw i32 %34, %35
  %37 = add nsw i32 %36, 1
  store i32 %37, i32* %8
  %39 = load i32, i32* %8
  %40 = sext i32 %39 to i64
  %41 = mul i64 %40, 4
  %42 = call noalias i8* @malloc(i64 %41)
  store i32* %43, i32** %9
  %45 = load i32, i32* %5
  store i32 %45, i32* %10
  %47 = load i32, i32* %7
  %48 = add nsw i32 %47, 1
  store i32 %48, i32* %11
  store i32 0, i32* %12
  br label %50
50:
  %51 = load i32, i32* %12
  %52 = load i32, i32* %8
  %53 = icmp slt i32 %51, %52
  br i1 %53, label %54, label %108
54:
  %56 = load i32, i32* %10
  %57 = load i32, i32* %7
  %58 = icmp sle i32 %56, %57
  br i1 %58, label %59, label %77
59:
  %60 = load i32, i32* %11
  %61 = load i32, i32* %6
  %62 = icmp sgt i32 %60, %61
  br i1 %62, label %75, label %63
63:
  %64 = load i32*, i32** %4
  %65 = load i32, i32* %10
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds i32, i32* %64, i64 %66
  %68 = load i32, i32* %67
  %69 = load i32*, i32** %4
  %70 = load i32, i32* %11
  %71 = sext i32 %70 to i64
  %72 = getelementptr inbounds i32, i32* %69, i64 %71
  %73 = load i32, i32* %72
  %74 = icmp sle i32 %68, %73
  br label %75
75:
  %76 = phi i1 [ true, %59 ], [ %74, %63 ]
  br label %77
77:
  %78 = phi i1 [ false, %54 ], [ %76, %75 ]
  %79 = zext i1 %78 to i32
  store i32 %79, i32* %13
  %80 = load i32, i32* %13
  %81 = icmp ne i32 %80, 0
  br i1 %81, label %82, label %94
82:
  %83 = load i32*, i32** %4
  %84 = load i32, i32* %10
  %85 = add nsw i32 %84, 1
  store i32 %85, i32* %10
  %86 = sext i32 %84 to i64
  %87 = getelementptr inbounds i32, i32* %83, i64 %86
  %88 = load i32, i32* %87
  %89 = load i32*, i32** %9
  %90 = load i32, i32* %12
  %91 = add nsw i32 %90, 1
  store i32 %91, i32* %12
  %92 = sext i32 %90 to i64
  %93 = getelementptr inbounds i32, i32* %89, i64 %92
  store i32 %88, i32* %93
  br label %106
94:
  %95 = load i32*, i32** %4
  %96 = load i32, i32* %11
  %97 = add nsw i32 %96, 1
  store i32 %97, i32* %11
  %98 = sext i32 %96 to i64
  %99 = getelementptr inbounds i32, i32* %95, i64 %98
  %100 = load i32, i32* %99
  %101 = load i32*, i32** %9
  %102 = load i32, i32* %12
  %103 = add nsw i32 %102, 1
  store i32 %103, i32* %12
  %104 = sext i32 %102 to i64
  %105 = getelementptr inbounds i32, i32* %101, i64 %104
  store i32 %100, i32* %105
  br label %106
106:
  br label %50
108:
  store i32 0, i32* %14
  br label %110
110:
  %111 = load i32, i32* %14
  %112 = load i32, i32* %8
  %113 = icmp slt i32 %111, %112
  br i1 %113, label %116, label %114
114:
  br label %131
116:
  %117 = load i32*, i32** %9
  %118 = load i32, i32* %14
  %119 = sext i32 %118 to i64
  %120 = getelementptr inbounds i32, i32* %117, i64 %119
  %121 = load i32, i32* %120
  %122 = load i32*, i32** %4
  %123 = load i32, i32* %5
  %124 = load i32, i32* %14
  %125 = add nsw i32 %123, %124
  %126 = sext i32 %125 to i64
  %127 = getelementptr inbounds i32, i32* %122, i64 %126
  store i32 %121, i32* %127
  br label %128
128:
  %129 = load i32, i32* %14
  %130 = add nsw i32 %129, 1
  store i32 %130, i32* %14
  br label %110
131:
  %132 = load i32*, i32** %9
  call void @free(i8* %133)
  br label %140
140:
  ret void
}
declare noalias i8* @malloc(i64)
declare void @free(i8*)
