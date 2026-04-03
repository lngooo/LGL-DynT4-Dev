define dso_local void @QuickSort(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
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
  %16 = icmp slt i32 %14, %15
  br i1 %16, label %17, label %180
17:
  %19 = load i32*, i32** %4
  %20 = load i32, i32* %6
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i32, i32* %19, i64 %21
  %23 = load i32, i32* %22
  store i32 %23, i32* %7
  %25 = load i32, i32* %5
  %26 = sub nsw i32 %25, 1
  store i32 %26, i32* %8
  %28 = load i32, i32* %5
  store i32 %28, i32* %9
  br label %29
29:
  %30 = load i32, i32* %9
  %31 = load i32, i32* %6
  %32 = sub nsw i32 %31, 1
  %33 = icmp slt i32 %30, %32
  br i1 %33, label %34, label %105
34:
  %35 = load i32*, i32** %4
  %36 = load i32, i32* %9
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i32, i32* %35, i64 %37
  %39 = load i32, i32* %38
  %40 = load i32, i32* %7
  %41 = icmp slt i32 %39, %40
  br i1 %41, label %42, label %66
42:
  %43 = load i32, i32* %8
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %8
  %46 = load i32*, i32** %4
  %47 = load i32, i32* %8
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i32, i32* %46, i64 %48
  %50 = load i32, i32* %49
  store i32 %50, i32* %10
  %51 = load i32*, i32** %4
  %52 = load i32, i32* %9
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds i32, i32* %51, i64 %53
  %55 = load i32, i32* %54
  %56 = load i32*, i32** %4
  %57 = load i32, i32* %8
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i32, i32* %56, i64 %58
  store i32 %55, i32* %59
  %60 = load i32, i32* %10
  %61 = load i32*, i32** %4
  %62 = load i32, i32* %9
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds i32, i32* %61, i64 %63
  store i32 %60, i32* %64
  br label %66
66:
  %67 = load i32*, i32** %4
  %68 = load i32, i32* %9
  %69 = add nsw i32 %68, 1
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds i32, i32* %67, i64 %70
  %72 = load i32, i32* %71
  %73 = load i32, i32* %7
  %74 = icmp slt i32 %72, %73
  br i1 %74, label %75, label %101
75:
  %76 = load i32, i32* %8
  %77 = add nsw i32 %76, 1
  store i32 %77, i32* %8
  %79 = load i32*, i32** %4
  %80 = load i32, i32* %8
  %81 = sext i32 %80 to i64
  %82 = getelementptr inbounds i32, i32* %79, i64 %81
  %83 = load i32, i32* %82
  store i32 %83, i32* %11
  %84 = load i32*, i32** %4
  %85 = load i32, i32* %9
  %86 = add nsw i32 %85, 1
  %87 = sext i32 %86 to i64
  %88 = getelementptr inbounds i32, i32* %84, i64 %87
  %89 = load i32, i32* %88
  %90 = load i32*, i32** %4
  %91 = load i32, i32* %8
  %92 = sext i32 %91 to i64
  %93 = getelementptr inbounds i32, i32* %90, i64 %92
  store i32 %89, i32* %93
  %94 = load i32, i32* %11
  %95 = load i32*, i32** %4
  %96 = load i32, i32* %9
  %97 = add nsw i32 %96, 1
  %98 = sext i32 %97 to i64
  %99 = getelementptr inbounds i32, i32* %95, i64 %98
  store i32 %94, i32* %99
  br label %101
101:
  br label %102
102:
  %103 = load i32, i32* %9
  %104 = add nsw i32 %103, 2
  store i32 %104, i32* %9
  br label %29
105:
  br label %106
106:
  %107 = load i32, i32* %9
  %108 = load i32, i32* %6
  %109 = icmp slt i32 %107, %108
  br i1 %109, label %110, label %146
110:
  %111 = load i32*, i32** %4
  %112 = load i32, i32* %9
  %113 = sext i32 %112 to i64
  %114 = getelementptr inbounds i32, i32* %111, i64 %113
  %115 = load i32, i32* %114
  %116 = load i32, i32* %7
  %117 = icmp slt i32 %115, %116
  br i1 %117, label %118, label %142
118:
  %119 = load i32, i32* %8
  %120 = add nsw i32 %119, 1
  store i32 %120, i32* %8
  %122 = load i32*, i32** %4
  %123 = load i32, i32* %8
  %124 = sext i32 %123 to i64
  %125 = getelementptr inbounds i32, i32* %122, i64 %124
  %126 = load i32, i32* %125
  store i32 %126, i32* %12
  %127 = load i32*, i32** %4
  %128 = load i32, i32* %9
  %129 = sext i32 %128 to i64
  %130 = getelementptr inbounds i32, i32* %127, i64 %129
  %131 = load i32, i32* %130
  %132 = load i32*, i32** %4
  %133 = load i32, i32* %8
  %134 = sext i32 %133 to i64
  %135 = getelementptr inbounds i32, i32* %132, i64 %134
  store i32 %131, i32* %135
  %136 = load i32, i32* %12
  %137 = load i32*, i32** %4
  %138 = load i32, i32* %9
  %139 = sext i32 %138 to i64
  %140 = getelementptr inbounds i32, i32* %137, i64 %139
  store i32 %136, i32* %140
  br label %142
142:
  br label %143
143:
  %144 = load i32, i32* %9
  %145 = add nsw i32 %144, 1
  store i32 %145, i32* %9
  br label %106
146:
  %148 = load i32*, i32** %4
  %149 = load i32, i32* %8
  %150 = add nsw i32 %149, 1
  %151 = sext i32 %150 to i64
  %152 = getelementptr inbounds i32, i32* %148, i64 %151
  %153 = load i32, i32* %152
  store i32 %153, i32* %13
  %154 = load i32*, i32** %4
  %155 = load i32, i32* %6
  %156 = sext i32 %155 to i64
  %157 = getelementptr inbounds i32, i32* %154, i64 %156
  %158 = load i32, i32* %157
  %159 = load i32*, i32** %4
  %160 = load i32, i32* %8
  %161 = add nsw i32 %160, 1
  %162 = sext i32 %161 to i64
  %163 = getelementptr inbounds i32, i32* %159, i64 %162
  store i32 %158, i32* %163
  %164 = load i32, i32* %13
  %165 = load i32*, i32** %4
  %166 = load i32, i32* %6
  %167 = sext i32 %166 to i64
  %168 = getelementptr inbounds i32, i32* %165, i64 %167
  store i32 %164, i32* %168
  %169 = load i32*, i32** %4
  %170 = load i32, i32* %5
  %171 = load i32, i32* %8
  call void @QuickSort(i32* %169, i32 %170, i32 %171)
  %172 = load i32*, i32** %4
  %173 = load i32, i32* %8
  %174 = add nsw i32 %173, 2
  %175 = load i32, i32* %6
  call void @QuickSort(i32* %172, i32 %174, i32 %175)
  br label %180
180:
  ret void
}
