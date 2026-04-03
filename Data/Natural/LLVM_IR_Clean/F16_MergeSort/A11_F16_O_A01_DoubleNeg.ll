define dso_local void @MergeSort(i32* %0, i32 %1, i32 %2) {
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
  %15 = icmp slt i32 %13, %14
  br i1 %15, label %16, label %160
16:
  %18 = load i32, i32* %5
  %19 = load i32, i32* %6
  %20 = load i32, i32* %5
  %21 = sub nsw i32 %19, %20
  %22 = sdiv i32 %21, 2
  %23 = add nsw i32 %18, %22
  store i32 %23, i32* %7
  %24 = load i32*, i32** %4
  %25 = load i32, i32* %5
  %26 = load i32, i32* %7
  call void @MergeSort(i32* %24, i32 %25, i32 %26)
  %27 = load i32*, i32** %4
  %28 = load i32, i32* %7
  %29 = add nsw i32 %28, 1
  %30 = load i32, i32* %6
  call void @MergeSort(i32* %27, i32 %29, i32 %30)
  %32 = load i32, i32* %6
  %33 = load i32, i32* %5
  %34 = sub nsw i32 %32, %33
  %35 = add nsw i32 %34, 1
  %36 = mul nsw i32 %35, 4
  %37 = sext i32 %36 to i64
  %38 = call noalias i8* @malloc(i64 %37)
  store i32* %39, i32** %8
  %41 = load i32, i32* %5
  store i32 %41, i32* %9
  %43 = load i32, i32* %7
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %10
  store i32 0, i32* %11
  br label %46
46:
  %47 = load i32, i32* %9
  %48 = load i32, i32* %7
  %49 = icmp sle i32 %47, %48
  br i1 %49, label %50, label %56
50:
  %51 = load i32, i32* %10
  %52 = load i32, i32* %6
  %53 = icmp sle i32 %51, %52
  %54 = xor i1 %53, true
  %55 = xor i1 %54, true
  br label %56
56:
  %57 = phi i1 [ false, %46 ], [ %55, %50 ]
  br i1 %57, label %58, label %91
58:
  %59 = load i32*, i32** %4
  %60 = load i32, i32* %9
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i32, i32* %59, i64 %61
  %63 = load i32, i32* %62
  %64 = load i32*, i32** %4
  %65 = load i32, i32* %10
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds i32, i32* %64, i64 %66
  %68 = load i32, i32* %67
  %69 = icmp sle i32 %63, %68
  br i1 %69, label %70, label %77
70:
  %71 = load i32*, i32** %4
  %72 = load i32, i32* %9
  %73 = add nsw i32 %72, 1
  store i32 %73, i32* %9
  %74 = sext i32 %72 to i64
  %75 = getelementptr inbounds i32, i32* %71, i64 %74
  %76 = load i32, i32* %75
  br label %84
77:
  %78 = load i32*, i32** %4
  %79 = load i32, i32* %10
  %80 = add nsw i32 %79, 1
  store i32 %80, i32* %10
  %81 = sext i32 %79 to i64
  %82 = getelementptr inbounds i32, i32* %78, i64 %81
  %83 = load i32, i32* %82
  br label %84
84:
  %85 = phi i32 [ %76, %70 ], [ %83, %77 ]
  %86 = load i32*, i32** %8
  %87 = load i32, i32* %11
  %88 = add nsw i32 %87, 1
  store i32 %88, i32* %11
  %89 = sext i32 %87 to i64
  %90 = getelementptr inbounds i32, i32* %86, i64 %89
  store i32 %85, i32* %90
  br label %46
91:
  br label %92
92:
  %93 = load i32, i32* %9
  %94 = load i32, i32* %7
  %95 = icmp sle i32 %93, %94
  %96 = xor i1 %95, true
  %97 = xor i1 %96, true
  br i1 %97, label %98, label %110
98:
  %99 = load i32*, i32** %4
  %100 = load i32, i32* %9
  %101 = add nsw i32 %100, 1
  store i32 %101, i32* %9
  %102 = sext i32 %100 to i64
  %103 = getelementptr inbounds i32, i32* %99, i64 %102
  %104 = load i32, i32* %103
  %105 = load i32*, i32** %8
  %106 = load i32, i32* %11
  %107 = add nsw i32 %106, 1
  store i32 %107, i32* %11
  %108 = sext i32 %106 to i64
  %109 = getelementptr inbounds i32, i32* %105, i64 %108
  store i32 %104, i32* %109
  br label %92
110:
  br label %111
111:
  %112 = load i32, i32* %10
  %113 = load i32, i32* %6
  %114 = icmp sle i32 %112, %113
  %115 = xor i1 %114, true
  %116 = xor i1 %115, true
  br i1 %116, label %117, label %129
117:
  %118 = load i32*, i32** %4
  %119 = load i32, i32* %10
  %120 = add nsw i32 %119, 1
  store i32 %120, i32* %10
  %121 = sext i32 %119 to i64
  %122 = getelementptr inbounds i32, i32* %118, i64 %121
  %123 = load i32, i32* %122
  %124 = load i32*, i32** %8
  %125 = load i32, i32* %11
  %126 = add nsw i32 %125, 1
  store i32 %126, i32* %11
  %127 = sext i32 %125 to i64
  %128 = getelementptr inbounds i32, i32* %124, i64 %127
  store i32 %123, i32* %128
  br label %111
129:
  store i32 0, i32* %12
  br label %131
131:
  %132 = load i32, i32* %12
  %133 = load i32, i32* %11
  %134 = icmp slt i32 %132, %133
  br i1 %134, label %137, label %135
135:
  br label %152
137:
  %138 = load i32*, i32** %8
  %139 = load i32, i32* %12
  %140 = sext i32 %139 to i64
  %141 = getelementptr inbounds i32, i32* %138, i64 %140
  %142 = load i32, i32* %141
  %143 = load i32*, i32** %4
  %144 = load i32, i32* %5
  %145 = load i32, i32* %12
  %146 = add nsw i32 %144, %145
  %147 = sext i32 %146 to i64
  %148 = getelementptr inbounds i32, i32* %143, i64 %147
  store i32 %142, i32* %148
  br label %149
149:
  %150 = load i32, i32* %12
  %151 = add nsw i32 %150, 1
  store i32 %151, i32* %12
  br label %131
152:
  %153 = load i32*, i32** %8
  call void @free(i8* %154)
  br label %160
160:
  ret void
}
declare noalias i8* @malloc(i64)
declare void @free(i8*)
