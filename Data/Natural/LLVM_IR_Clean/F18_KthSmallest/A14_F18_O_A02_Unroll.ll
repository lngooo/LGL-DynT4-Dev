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
  %16 = alloca i32
  %17 = alloca i32
  store i32* %0, i32** %6
  store i32 %1, i32* %7
  store i32 %2, i32* %8
  store i32 %3, i32* %9
  br label %18
18:
  %19 = load i32, i32* %7
  %20 = load i32, i32* %8
  %21 = icmp sle i32 %19, %20
  br i1 %21, label %22, label %200
22:
  %24 = load i32*, i32** %6
  %25 = load i32, i32* %8
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i32, i32* %24, i64 %26
  %28 = load i32, i32* %27
  store i32 %28, i32* %10
  %30 = load i32, i32* %7
  store i32 %30, i32* %11
  %32 = load i32, i32* %7
  store i32 %32, i32* %12
  br label %33
33:
  %34 = load i32, i32* %12
  %35 = load i32, i32* %8
  %36 = sub nsw i32 %35, 1
  %37 = icmp slt i32 %34, %36
  br i1 %37, label %38, label %109
38:
  %39 = load i32*, i32** %6
  %40 = load i32, i32* %12
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i32, i32* %39, i64 %41
  %43 = load i32, i32* %42
  %44 = load i32, i32* %10
  %45 = icmp sle i32 %43, %44
  br i1 %45, label %46, label %70
46:
  %48 = load i32*, i32** %6
  %49 = load i32, i32* %11
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i32, i32* %48, i64 %50
  %52 = load i32, i32* %51
  store i32 %52, i32* %13
  %53 = load i32*, i32** %6
  %54 = load i32, i32* %12
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i32, i32* %53, i64 %55
  %57 = load i32, i32* %56
  %58 = load i32*, i32** %6
  %59 = load i32, i32* %11
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %58, i64 %60
  store i32 %57, i32* %61
  %62 = load i32, i32* %13
  %63 = load i32*, i32** %6
  %64 = load i32, i32* %12
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i32, i32* %63, i64 %65
  store i32 %62, i32* %66
  %67 = load i32, i32* %11
  %68 = add nsw i32 %67, 1
  store i32 %68, i32* %11
  br label %70
70:
  %71 = load i32*, i32** %6
  %72 = load i32, i32* %12
  %73 = add nsw i32 %72, 1
  %74 = sext i32 %73 to i64
  %75 = getelementptr inbounds i32, i32* %71, i64 %74
  %76 = load i32, i32* %75
  %77 = load i32, i32* %10
  %78 = icmp sle i32 %76, %77
  br i1 %78, label %79, label %105
79:
  %81 = load i32*, i32** %6
  %82 = load i32, i32* %11
  %83 = sext i32 %82 to i64
  %84 = getelementptr inbounds i32, i32* %81, i64 %83
  %85 = load i32, i32* %84
  store i32 %85, i32* %14
  %86 = load i32*, i32** %6
  %87 = load i32, i32* %12
  %88 = add nsw i32 %87, 1
  %89 = sext i32 %88 to i64
  %90 = getelementptr inbounds i32, i32* %86, i64 %89
  %91 = load i32, i32* %90
  %92 = load i32*, i32** %6
  %93 = load i32, i32* %11
  %94 = sext i32 %93 to i64
  %95 = getelementptr inbounds i32, i32* %92, i64 %94
  store i32 %91, i32* %95
  %96 = load i32, i32* %14
  %97 = load i32*, i32** %6
  %98 = load i32, i32* %12
  %99 = add nsw i32 %98, 1
  %100 = sext i32 %99 to i64
  %101 = getelementptr inbounds i32, i32* %97, i64 %100
  store i32 %96, i32* %101
  %102 = load i32, i32* %11
  %103 = add nsw i32 %102, 1
  store i32 %103, i32* %11
  br label %105
105:
  br label %106
106:
  %107 = load i32, i32* %12
  %108 = add nsw i32 %107, 2
  store i32 %108, i32* %12
  br label %33
109:
  br label %110
110:
  %111 = load i32, i32* %12
  %112 = load i32, i32* %8
  %113 = icmp slt i32 %111, %112
  br i1 %113, label %114, label %150
114:
  %115 = load i32*, i32** %6
  %116 = load i32, i32* %12
  %117 = sext i32 %116 to i64
  %118 = getelementptr inbounds i32, i32* %115, i64 %117
  %119 = load i32, i32* %118
  %120 = load i32, i32* %10
  %121 = icmp sle i32 %119, %120
  br i1 %121, label %122, label %146
122:
  %124 = load i32*, i32** %6
  %125 = load i32, i32* %11
  %126 = sext i32 %125 to i64
  %127 = getelementptr inbounds i32, i32* %124, i64 %126
  %128 = load i32, i32* %127
  store i32 %128, i32* %15
  %129 = load i32*, i32** %6
  %130 = load i32, i32* %12
  %131 = sext i32 %130 to i64
  %132 = getelementptr inbounds i32, i32* %129, i64 %131
  %133 = load i32, i32* %132
  %134 = load i32*, i32** %6
  %135 = load i32, i32* %11
  %136 = sext i32 %135 to i64
  %137 = getelementptr inbounds i32, i32* %134, i64 %136
  store i32 %133, i32* %137
  %138 = load i32, i32* %15
  %139 = load i32*, i32** %6
  %140 = load i32, i32* %12
  %141 = sext i32 %140 to i64
  %142 = getelementptr inbounds i32, i32* %139, i64 %141
  store i32 %138, i32* %142
  %143 = load i32, i32* %11
  %144 = add nsw i32 %143, 1
  store i32 %144, i32* %11
  br label %146
146:
  br label %147
147:
  %148 = load i32, i32* %12
  %149 = add nsw i32 %148, 1
  store i32 %149, i32* %12
  br label %110
150:
  %152 = load i32*, i32** %6
  %153 = load i32, i32* %11
  %154 = sext i32 %153 to i64
  %155 = getelementptr inbounds i32, i32* %152, i64 %154
  %156 = load i32, i32* %155
  store i32 %156, i32* %16
  %157 = load i32*, i32** %6
  %158 = load i32, i32* %8
  %159 = sext i32 %158 to i64
  %160 = getelementptr inbounds i32, i32* %157, i64 %159
  %161 = load i32, i32* %160
  %162 = load i32*, i32** %6
  %163 = load i32, i32* %11
  %164 = sext i32 %163 to i64
  %165 = getelementptr inbounds i32, i32* %162, i64 %164
  store i32 %161, i32* %165
  %166 = load i32, i32* %16
  %167 = load i32*, i32** %6
  %168 = load i32, i32* %8
  %169 = sext i32 %168 to i64
  %170 = getelementptr inbounds i32, i32* %167, i64 %169
  store i32 %166, i32* %170
  %171 = load i32, i32* %11
  %172 = load i32, i32* %9
  %173 = sub nsw i32 %172, 1
  %174 = icmp eq i32 %171, %173
  br i1 %174, label %175, label %181
175:
  %176 = load i32*, i32** %6
  %177 = load i32, i32* %11
  %178 = sext i32 %177 to i64
  %179 = getelementptr inbounds i32, i32* %176, i64 %178
  %180 = load i32, i32* %179
  store i32 %180, i32* %5
  store i32 1, i32* %17
  br label %193
181:
  %182 = load i32, i32* %11
  %183 = load i32, i32* %9
  %184 = sub nsw i32 %183, 1
  %185 = icmp sgt i32 %182, %184
  br i1 %185, label %186, label %189
186:
  %187 = load i32, i32* %11
  %188 = sub nsw i32 %187, 1
  store i32 %188, i32* %8
  br label %192
189:
  %190 = load i32, i32* %11
  %191 = add nsw i32 %190, 1
  store i32 %191, i32* %7
  br label %192
192:
  store i32 0, i32* %17
  br label %193
193:
  %198 = load i32, i32* %17
  switch i32 %198, label %203 [
    i32 0, label %199
    i32 1, label %201
  ]
199:
  br label %18
200:
  store i32 -1, i32* %5
  br label %201
201:
  %202 = load i32, i32* %5
  ret i32 %202
203:
  unreachable
}
