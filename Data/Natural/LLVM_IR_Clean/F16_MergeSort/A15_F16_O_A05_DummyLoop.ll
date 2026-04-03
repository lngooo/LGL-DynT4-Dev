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
  %13 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %14 = load i32, i32* %5
  %15 = load i32, i32* %6
  %16 = icmp sge i32 %14, %15
  br i1 %16, label %17, label %18
17:
  br label %165
18:
  %20 = load i32, i32* %5
  %21 = load i32, i32* %6
  %22 = add nsw i32 %20, %21
  %23 = sdiv i32 %22, 2
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
  store i32 0, i32* %12
  br label %47
47:
  %48 = load i32, i32* %12
  %49 = icmp slt i32 %48, 1
  br i1 %49, label %52, label %50
50:
  br label %100
52:
  br label %53
53:
  %54 = load i32, i32* %9
  %55 = load i32, i32* %7
  %56 = icmp sle i32 %54, %55
  br i1 %56, label %57, label %61
57:
  %58 = load i32, i32* %10
  %59 = load i32, i32* %6
  %60 = icmp sle i32 %58, %59
  br label %61
61:
  %62 = phi i1 [ false, %53 ], [ %60, %57 ]
  br i1 %62, label %63, label %96
63:
  %64 = load i32*, i32** %4
  %65 = load i32, i32* %9
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds i32, i32* %64, i64 %66
  %68 = load i32, i32* %67
  %69 = load i32*, i32** %4
  %70 = load i32, i32* %10
  %71 = sext i32 %70 to i64
  %72 = getelementptr inbounds i32, i32* %69, i64 %71
  %73 = load i32, i32* %72
  %74 = icmp sle i32 %68, %73
  br i1 %74, label %75, label %82
75:
  %76 = load i32*, i32** %4
  %77 = load i32, i32* %9
  %78 = add nsw i32 %77, 1
  store i32 %78, i32* %9
  %79 = sext i32 %77 to i64
  %80 = getelementptr inbounds i32, i32* %76, i64 %79
  %81 = load i32, i32* %80
  br label %89
82:
  %83 = load i32*, i32** %4
  %84 = load i32, i32* %10
  %85 = add nsw i32 %84, 1
  store i32 %85, i32* %10
  %86 = sext i32 %84 to i64
  %87 = getelementptr inbounds i32, i32* %83, i64 %86
  %88 = load i32, i32* %87
  br label %89
89:
  %90 = phi i32 [ %81, %75 ], [ %88, %82 ]
  %91 = load i32*, i32** %8
  %92 = load i32, i32* %11
  %93 = add nsw i32 %92, 1
  store i32 %93, i32* %11
  %94 = sext i32 %92 to i64
  %95 = getelementptr inbounds i32, i32* %91, i64 %94
  store i32 %90, i32* %95
  br label %53
96:
  br label %97
97:
  %98 = load i32, i32* %12
  %99 = add nsw i32 %98, 1
  store i32 %99, i32* %12
  br label %47
100:
  br label %101
101:
  %102 = load i32, i32* %9
  %103 = load i32, i32* %7
  %104 = icmp sle i32 %102, %103
  br i1 %104, label %105, label %117
105:
  %106 = load i32*, i32** %4
  %107 = load i32, i32* %9
  %108 = add nsw i32 %107, 1
  store i32 %108, i32* %9
  %109 = sext i32 %107 to i64
  %110 = getelementptr inbounds i32, i32* %106, i64 %109
  %111 = load i32, i32* %110
  %112 = load i32*, i32** %8
  %113 = load i32, i32* %11
  %114 = add nsw i32 %113, 1
  store i32 %114, i32* %11
  %115 = sext i32 %113 to i64
  %116 = getelementptr inbounds i32, i32* %112, i64 %115
  store i32 %111, i32* %116
  br label %101
117:
  br label %118
118:
  %119 = load i32, i32* %10
  %120 = load i32, i32* %6
  %121 = icmp sle i32 %119, %120
  br i1 %121, label %122, label %134
122:
  %123 = load i32*, i32** %4
  %124 = load i32, i32* %10
  %125 = add nsw i32 %124, 1
  store i32 %125, i32* %10
  %126 = sext i32 %124 to i64
  %127 = getelementptr inbounds i32, i32* %123, i64 %126
  %128 = load i32, i32* %127
  %129 = load i32*, i32** %8
  %130 = load i32, i32* %11
  %131 = add nsw i32 %130, 1
  store i32 %131, i32* %11
  %132 = sext i32 %130 to i64
  %133 = getelementptr inbounds i32, i32* %129, i64 %132
  store i32 %128, i32* %133
  br label %118
134:
  store i32 0, i32* %13
  br label %136
136:
  %137 = load i32, i32* %13
  %138 = load i32, i32* %11
  %139 = icmp slt i32 %137, %138
  br i1 %139, label %142, label %140
140:
  br label %157
142:
  %143 = load i32*, i32** %8
  %144 = load i32, i32* %13
  %145 = sext i32 %144 to i64
  %146 = getelementptr inbounds i32, i32* %143, i64 %145
  %147 = load i32, i32* %146
  %148 = load i32*, i32** %4
  %149 = load i32, i32* %5
  %150 = load i32, i32* %13
  %151 = add nsw i32 %149, %150
  %152 = sext i32 %151 to i64
  %153 = getelementptr inbounds i32, i32* %148, i64 %152
  store i32 %147, i32* %153
  br label %154
154:
  %155 = load i32, i32* %13
  %156 = add nsw i32 %155, 1
  store i32 %156, i32* %13
  br label %136
157:
  %158 = load i32*, i32** %8
  call void @free(i8* %159)
  br label %165
165:
  ret void
}
declare noalias i8* @malloc(i64)
declare void @free(i8*)
