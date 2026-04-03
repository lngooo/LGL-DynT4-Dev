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
  br i1 %15, label %16, label %153
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
  %30 = load i32, i32* %6
  %31 = load i32, i32* %5
  %32 = sub nsw i32 %30, %31
  %33 = add nsw i32 %32, 1
  %34 = mul nsw i32 %33, 4
  %35 = sext i32 %34 to i64
  %36 = call noalias i8* @malloc(i64 %35)
  store i32* %37, i32** %8
  %39 = load i32, i32* %5
  store i32 %39, i32* %9
  %41 = load i32, i32* %7
  %42 = add nsw i32 %41, 1
  store i32 %42, i32* %10
  store i32 0, i32* %11
  br label %44
44:
  %45 = load i32, i32* %9
  %46 = load i32, i32* %7
  %47 = icmp sle i32 %45, %46
  br i1 %47, label %48, label %88
48:
  %49 = load i32, i32* %10
  %50 = load i32, i32* %6
  %51 = icmp sle i32 %49, %50
  br i1 %51, label %52, label %88
52:
  %53 = load i32*, i32** %4
  %54 = load i32, i32* %9
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i32, i32* %53, i64 %55
  %57 = load i32, i32* %56
  %58 = load i32*, i32** %4
  %59 = load i32, i32* %10
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %58, i64 %60
  %62 = load i32, i32* %61
  %63 = icmp sle i32 %57, %62
  br i1 %63, label %64, label %76
64:
  %65 = load i32*, i32** %4
  %66 = load i32, i32* %9
  %67 = add nsw i32 %66, 1
  store i32 %67, i32* %9
  %68 = sext i32 %66 to i64
  %69 = getelementptr inbounds i32, i32* %65, i64 %68
  %70 = load i32, i32* %69
  %71 = load i32*, i32** %8
  %72 = load i32, i32* %11
  %73 = add nsw i32 %72, 1
  store i32 %73, i32* %11
  %74 = sext i32 %72 to i64
  %75 = getelementptr inbounds i32, i32* %71, i64 %74
  store i32 %70, i32* %75
  br label %44
76:
  %77 = load i32*, i32** %4
  %78 = load i32, i32* %10
  %79 = add nsw i32 %78, 1
  store i32 %79, i32* %10
  %80 = sext i32 %78 to i64
  %81 = getelementptr inbounds i32, i32* %77, i64 %80
  %82 = load i32, i32* %81
  %83 = load i32*, i32** %8
  %84 = load i32, i32* %11
  %85 = add nsw i32 %84, 1
  store i32 %85, i32* %11
  %86 = sext i32 %84 to i64
  %87 = getelementptr inbounds i32, i32* %83, i64 %86
  store i32 %82, i32* %87
  br label %44
88:
  br label %89
89:
  %90 = load i32, i32* %9
  %91 = load i32, i32* %7
  %92 = icmp sle i32 %90, %91
  br i1 %92, label %93, label %105
93:
  %94 = load i32*, i32** %4
  %95 = load i32, i32* %9
  %96 = add nsw i32 %95, 1
  store i32 %96, i32* %9
  %97 = sext i32 %95 to i64
  %98 = getelementptr inbounds i32, i32* %94, i64 %97
  %99 = load i32, i32* %98
  %100 = load i32*, i32** %8
  %101 = load i32, i32* %11
  %102 = add nsw i32 %101, 1
  store i32 %102, i32* %11
  %103 = sext i32 %101 to i64
  %104 = getelementptr inbounds i32, i32* %100, i64 %103
  store i32 %99, i32* %104
  br label %89
105:
  br label %106
106:
  %107 = load i32, i32* %10
  %108 = load i32, i32* %6
  %109 = icmp sle i32 %107, %108
  br i1 %109, label %110, label %122
110:
  %111 = load i32*, i32** %4
  %112 = load i32, i32* %10
  %113 = add nsw i32 %112, 1
  store i32 %113, i32* %10
  %114 = sext i32 %112 to i64
  %115 = getelementptr inbounds i32, i32* %111, i64 %114
  %116 = load i32, i32* %115
  %117 = load i32*, i32** %8
  %118 = load i32, i32* %11
  %119 = add nsw i32 %118, 1
  store i32 %119, i32* %11
  %120 = sext i32 %118 to i64
  %121 = getelementptr inbounds i32, i32* %117, i64 %120
  store i32 %116, i32* %121
  br label %106
122:
  store i32 0, i32* %12
  br label %124
124:
  %125 = load i32, i32* %12
  %126 = load i32, i32* %11
  %127 = icmp slt i32 %125, %126
  br i1 %127, label %130, label %128
128:
  br label %145
130:
  %131 = load i32*, i32** %8
  %132 = load i32, i32* %12
  %133 = sext i32 %132 to i64
  %134 = getelementptr inbounds i32, i32* %131, i64 %133
  %135 = load i32, i32* %134
  %136 = load i32*, i32** %4
  %137 = load i32, i32* %5
  %138 = load i32, i32* %12
  %139 = add nsw i32 %137, %138
  %140 = sext i32 %139 to i64
  %141 = getelementptr inbounds i32, i32* %136, i64 %140
  store i32 %135, i32* %141
  br label %142
142:
  %143 = load i32, i32* %12
  %144 = add nsw i32 %143, 1
  store i32 %144, i32* %12
  br label %124
145:
  %146 = load i32*, i32** %8
  call void @free(i8* %147)
  br label %153
153:
  ret void
}
declare noalias i8* @malloc(i64)
declare void @free(i8*)
