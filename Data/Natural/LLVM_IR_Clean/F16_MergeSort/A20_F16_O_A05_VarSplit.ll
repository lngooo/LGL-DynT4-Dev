define dso_local void @MergeSort(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32*
  %12 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %13 = load i32, i32* %5
  %14 = load i32, i32* %6
  %15 = icmp slt i32 %13, %14
  br i1 %15, label %16, label %156
16:
  %18 = load i32, i32* %5
  %19 = load i32, i32* %6
  %20 = add nsw i32 %18, %19
  %21 = sdiv i32 %20, 2
  store i32 %21, i32* %7
  %22 = load i32*, i32** %4
  %23 = load i32, i32* %5
  %24 = load i32, i32* %7
  call void @MergeSort(i32* %22, i32 %23, i32 %24)
  %25 = load i32*, i32** %4
  %26 = load i32, i32* %7
  %27 = add nsw i32 %26, 1
  %28 = load i32, i32* %6
  call void @MergeSort(i32* %25, i32 %27, i32 %28)
  store i32 0, i32* %8
  %31 = load i32, i32* %5
  store i32 %31, i32* %9
  %33 = load i32, i32* %7
  %34 = add nsw i32 %33, 1
  store i32 %34, i32* %10
  %36 = load i32, i32* %6
  %37 = load i32, i32* %5
  %38 = sub nsw i32 %36, %37
  %39 = add nsw i32 %38, 1
  %40 = mul nsw i32 %39, 4
  %41 = sext i32 %40 to i64
  %42 = call noalias i8* @malloc(i64 %41)
  store i32* %43, i32** %11
  br label %44
44:
  %45 = load i32, i32* %9
  %46 = load i32, i32* %7
  %47 = icmp sle i32 %45, %46
  br i1 %47, label %48, label %52
48:
  %49 = load i32, i32* %10
  %50 = load i32, i32* %6
  %51 = icmp sle i32 %49, %50
  br label %52
52:
  %53 = phi i1 [ false, %44 ], [ %51, %48 ]
  br i1 %53, label %54, label %91
54:
  %55 = load i32*, i32** %4
  %56 = load i32, i32* %9
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i32, i32* %55, i64 %57
  %59 = load i32, i32* %58
  %60 = load i32*, i32** %4
  %61 = load i32, i32* %10
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i32, i32* %60, i64 %62
  %64 = load i32, i32* %63
  %65 = icmp sle i32 %59, %64
  br i1 %65, label %66, label %78
66:
  %67 = load i32*, i32** %4
  %68 = load i32, i32* %9
  %69 = add nsw i32 %68, 1
  store i32 %69, i32* %9
  %70 = sext i32 %68 to i64
  %71 = getelementptr inbounds i32, i32* %67, i64 %70
  %72 = load i32, i32* %71
  %73 = load i32*, i32** %11
  %74 = load i32, i32* %8
  %75 = add nsw i32 %74, 1
  store i32 %75, i32* %8
  %76 = sext i32 %74 to i64
  %77 = getelementptr inbounds i32, i32* %73, i64 %76
  store i32 %72, i32* %77
  br label %90
78:
  %79 = load i32*, i32** %4
  %80 = load i32, i32* %10
  %81 = add nsw i32 %80, 1
  store i32 %81, i32* %10
  %82 = sext i32 %80 to i64
  %83 = getelementptr inbounds i32, i32* %79, i64 %82
  %84 = load i32, i32* %83
  %85 = load i32*, i32** %11
  %86 = load i32, i32* %8
  %87 = add nsw i32 %86, 1
  store i32 %87, i32* %8
  %88 = sext i32 %86 to i64
  %89 = getelementptr inbounds i32, i32* %85, i64 %88
  store i32 %84, i32* %89
  br label %90
90:
  br label %44
91:
  br label %92
92:
  %93 = load i32, i32* %9
  %94 = load i32, i32* %7
  %95 = icmp sle i32 %93, %94
  br i1 %95, label %96, label %108
96:
  %97 = load i32*, i32** %4
  %98 = load i32, i32* %9
  %99 = add nsw i32 %98, 1
  store i32 %99, i32* %9
  %100 = sext i32 %98 to i64
  %101 = getelementptr inbounds i32, i32* %97, i64 %100
  %102 = load i32, i32* %101
  %103 = load i32*, i32** %11
  %104 = load i32, i32* %8
  %105 = add nsw i32 %104, 1
  store i32 %105, i32* %8
  %106 = sext i32 %104 to i64
  %107 = getelementptr inbounds i32, i32* %103, i64 %106
  store i32 %102, i32* %107
  br label %92
108:
  br label %109
109:
  %110 = load i32, i32* %10
  %111 = load i32, i32* %6
  %112 = icmp sle i32 %110, %111
  br i1 %112, label %113, label %125
113:
  %114 = load i32*, i32** %4
  %115 = load i32, i32* %10
  %116 = add nsw i32 %115, 1
  store i32 %116, i32* %10
  %117 = sext i32 %115 to i64
  %118 = getelementptr inbounds i32, i32* %114, i64 %117
  %119 = load i32, i32* %118
  %120 = load i32*, i32** %11
  %121 = load i32, i32* %8
  %122 = add nsw i32 %121, 1
  store i32 %122, i32* %8
  %123 = sext i32 %121 to i64
  %124 = getelementptr inbounds i32, i32* %120, i64 %123
  store i32 %119, i32* %124
  br label %109
125:
  store i32 0, i32* %12
  br label %127
127:
  %128 = load i32, i32* %12
  %129 = load i32, i32* %8
  %130 = icmp slt i32 %128, %129
  br i1 %130, label %133, label %131
131:
  br label %148
133:
  %134 = load i32*, i32** %11
  %135 = load i32, i32* %12
  %136 = sext i32 %135 to i64
  %137 = getelementptr inbounds i32, i32* %134, i64 %136
  %138 = load i32, i32* %137
  %139 = load i32*, i32** %4
  %140 = load i32, i32* %5
  %141 = load i32, i32* %12
  %142 = add nsw i32 %140, %141
  %143 = sext i32 %142 to i64
  %144 = getelementptr inbounds i32, i32* %139, i64 %143
  store i32 %138, i32* %144
  br label %145
145:
  %146 = load i32, i32* %12
  %147 = add nsw i32 %146, 1
  store i32 %147, i32* %12
  br label %127
148:
  %149 = load i32*, i32** %11
  call void @free(i8* %150)
  br label %156
156:
  ret void
}
declare noalias i8* @malloc(i64)
declare void @free(i8*)
