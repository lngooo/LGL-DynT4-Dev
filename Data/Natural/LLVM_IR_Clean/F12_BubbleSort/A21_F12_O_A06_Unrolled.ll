define dso_local void @BubbleSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  br label %11
11:
  %12 = load i32, i32* %5
  %13 = load i32, i32* %4
  %14 = icmp slt i32 %12, %13
  br i1 %14, label %17, label %15
15:
  br label %161
17:
  store i32 0, i32* %6
  br label %19
19:
  %20 = load i32, i32* %6
  %21 = load i32, i32* %4
  %22 = load i32, i32* %5
  %23 = sub nsw i32 %21, %22
  %24 = sub nsw i32 %23, 2
  %25 = icmp slt i32 %20, %24
  br i1 %25, label %26, label %107
26:
  %27 = load i32*, i32** %3
  %28 = load i32, i32* %6
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i32, i32* %27, i64 %29
  %31 = load i32, i32* %30
  %32 = load i32*, i32** %3
  %33 = load i32, i32* %6
  %34 = add nsw i32 %33, 1
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i32, i32* %32, i64 %35
  %37 = load i32, i32* %36
  %38 = icmp sgt i32 %31, %37
  br i1 %38, label %39, label %63
39:
  %41 = load i32*, i32** %3
  %42 = load i32, i32* %6
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i32, i32* %41, i64 %43
  %45 = load i32, i32* %44
  store i32 %45, i32* %7
  %46 = load i32*, i32** %3
  %47 = load i32, i32* %6
  %48 = add nsw i32 %47, 1
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds i32, i32* %46, i64 %49
  %51 = load i32, i32* %50
  %52 = load i32*, i32** %3
  %53 = load i32, i32* %6
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i32, i32* %52, i64 %54
  store i32 %51, i32* %55
  %56 = load i32, i32* %7
  %57 = load i32*, i32** %3
  %58 = load i32, i32* %6
  %59 = add nsw i32 %58, 1
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %57, i64 %60
  store i32 %56, i32* %61
  br label %63
63:
  %64 = load i32*, i32** %3
  %65 = load i32, i32* %6
  %66 = add nsw i32 %65, 1
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds i32, i32* %64, i64 %67
  %69 = load i32, i32* %68
  %70 = load i32*, i32** %3
  %71 = load i32, i32* %6
  %72 = add nsw i32 %71, 2
  %73 = sext i32 %72 to i64
  %74 = getelementptr inbounds i32, i32* %70, i64 %73
  %75 = load i32, i32* %74
  %76 = icmp sgt i32 %69, %75
  br i1 %76, label %77, label %103
77:
  %79 = load i32*, i32** %3
  %80 = load i32, i32* %6
  %81 = add nsw i32 %80, 1
  %82 = sext i32 %81 to i64
  %83 = getelementptr inbounds i32, i32* %79, i64 %82
  %84 = load i32, i32* %83
  store i32 %84, i32* %8
  %85 = load i32*, i32** %3
  %86 = load i32, i32* %6
  %87 = add nsw i32 %86, 2
  %88 = sext i32 %87 to i64
  %89 = getelementptr inbounds i32, i32* %85, i64 %88
  %90 = load i32, i32* %89
  %91 = load i32*, i32** %3
  %92 = load i32, i32* %6
  %93 = add nsw i32 %92, 1
  %94 = sext i32 %93 to i64
  %95 = getelementptr inbounds i32, i32* %91, i64 %94
  store i32 %90, i32* %95
  %96 = load i32, i32* %8
  %97 = load i32*, i32** %3
  %98 = load i32, i32* %6
  %99 = add nsw i32 %98, 2
  %100 = sext i32 %99 to i64
  %101 = getelementptr inbounds i32, i32* %97, i64 %100
  store i32 %96, i32* %101
  br label %103
103:
  br label %104
104:
  %105 = load i32, i32* %6
  %106 = add nsw i32 %105, 2
  store i32 %106, i32* %6
  br label %19
107:
  br label %108
108:
  %109 = load i32, i32* %6
  %110 = load i32, i32* %4
  %111 = load i32, i32* %5
  %112 = sub nsw i32 %110, %111
  %113 = sub nsw i32 %112, 1
  %114 = icmp slt i32 %109, %113
  br i1 %114, label %115, label %156
115:
  %116 = load i32*, i32** %3
  %117 = load i32, i32* %6
  %118 = sext i32 %117 to i64
  %119 = getelementptr inbounds i32, i32* %116, i64 %118
  %120 = load i32, i32* %119
  %121 = load i32*, i32** %3
  %122 = load i32, i32* %6
  %123 = add nsw i32 %122, 1
  %124 = sext i32 %123 to i64
  %125 = getelementptr inbounds i32, i32* %121, i64 %124
  %126 = load i32, i32* %125
  %127 = icmp sgt i32 %120, %126
  br i1 %127, label %128, label %152
128:
  %130 = load i32*, i32** %3
  %131 = load i32, i32* %6
  %132 = sext i32 %131 to i64
  %133 = getelementptr inbounds i32, i32* %130, i64 %132
  %134 = load i32, i32* %133
  store i32 %134, i32* %9
  %135 = load i32*, i32** %3
  %136 = load i32, i32* %6
  %137 = add nsw i32 %136, 1
  %138 = sext i32 %137 to i64
  %139 = getelementptr inbounds i32, i32* %135, i64 %138
  %140 = load i32, i32* %139
  %141 = load i32*, i32** %3
  %142 = load i32, i32* %6
  %143 = sext i32 %142 to i64
  %144 = getelementptr inbounds i32, i32* %141, i64 %143
  store i32 %140, i32* %144
  %145 = load i32, i32* %9
  %146 = load i32*, i32** %3
  %147 = load i32, i32* %6
  %148 = add nsw i32 %147, 1
  %149 = sext i32 %148 to i64
  %150 = getelementptr inbounds i32, i32* %146, i64 %149
  store i32 %145, i32* %150
  br label %152
152:
  br label %153
153:
  %154 = load i32, i32* %6
  %155 = add nsw i32 %154, 1
  store i32 %155, i32* %6
  br label %108
156:
  br label %158
158:
  %159 = load i32, i32* %5
  %160 = add nsw i32 %159, 1
  store i32 %160, i32* %5
  br label %11
161:
  ret void
}
