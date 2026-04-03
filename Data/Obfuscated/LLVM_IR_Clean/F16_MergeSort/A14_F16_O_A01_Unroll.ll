define dso_local void @Ek(i32* %0, i32 %1, i32 %2) {
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
  br i1 %15, label %16, label %232
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
  call void @Ek(i32* %24, i32 %25, i32 %26)
  %27 = load i32*, i32** %4
  %28 = load i32, i32* %7
  %29 = add nsw i32 %28, 1
  %30 = load i32, i32* %6
  call void @Ek(i32* %27, i32 %29, i32 %30)
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
  %49 = sub nsw i32 %48, 1
  %50 = icmp sle i32 %47, %49
  br i1 %50, label %51, label %56
51:
  %52 = load i32, i32* %10
  %53 = load i32, i32* %6
  %54 = sub nsw i32 %53, 1
  %55 = icmp sle i32 %52, %54
  br label %56
56:
  %57 = phi i1 [ false, %46 ], [ %55, %51 ]
  br i1 %57, label %58, label %123
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
  %91 = load i32*, i32** %4
  %92 = load i32, i32* %9
  %93 = sext i32 %92 to i64
  %94 = getelementptr inbounds i32, i32* %91, i64 %93
  %95 = load i32, i32* %94
  %96 = load i32*, i32** %4
  %97 = load i32, i32* %10
  %98 = sext i32 %97 to i64
  %99 = getelementptr inbounds i32, i32* %96, i64 %98
  %100 = load i32, i32* %99
  %101 = icmp sle i32 %95, %100
  br i1 %101, label %102, label %109
102:
  %103 = load i32*, i32** %4
  %104 = load i32, i32* %9
  %105 = add nsw i32 %104, 1
  store i32 %105, i32* %9
  %106 = sext i32 %104 to i64
  %107 = getelementptr inbounds i32, i32* %103, i64 %106
  %108 = load i32, i32* %107
  br label %116
109:
  %110 = load i32*, i32** %4
  %111 = load i32, i32* %10
  %112 = add nsw i32 %111, 1
  store i32 %112, i32* %10
  %113 = sext i32 %111 to i64
  %114 = getelementptr inbounds i32, i32* %110, i64 %113
  %115 = load i32, i32* %114
  br label %116
116:
  %117 = phi i32 [ %108, %102 ], [ %115, %109 ]
  %118 = load i32*, i32** %8
  %119 = load i32, i32* %11
  %120 = add nsw i32 %119, 1
  store i32 %120, i32* %11
  %121 = sext i32 %119 to i64
  %122 = getelementptr inbounds i32, i32* %118, i64 %121
  store i32 %117, i32* %122
  br label %46
123:
  br label %124
124:
  %125 = load i32, i32* %9
  %126 = load i32, i32* %7
  %127 = icmp sle i32 %125, %126
  br i1 %127, label %128, label %132
128:
  %129 = load i32, i32* %10
  %130 = load i32, i32* %6
  %131 = icmp sle i32 %129, %130
  br label %132
132:
  %133 = phi i1 [ false, %124 ], [ %131, %128 ]
  br i1 %133, label %134, label %167
134:
  %135 = load i32*, i32** %4
  %136 = load i32, i32* %9
  %137 = sext i32 %136 to i64
  %138 = getelementptr inbounds i32, i32* %135, i64 %137
  %139 = load i32, i32* %138
  %140 = load i32*, i32** %4
  %141 = load i32, i32* %10
  %142 = sext i32 %141 to i64
  %143 = getelementptr inbounds i32, i32* %140, i64 %142
  %144 = load i32, i32* %143
  %145 = icmp sle i32 %139, %144
  br i1 %145, label %146, label %153
146:
  %147 = load i32*, i32** %4
  %148 = load i32, i32* %9
  %149 = add nsw i32 %148, 1
  store i32 %149, i32* %9
  %150 = sext i32 %148 to i64
  %151 = getelementptr inbounds i32, i32* %147, i64 %150
  %152 = load i32, i32* %151
  br label %160
153:
  %154 = load i32*, i32** %4
  %155 = load i32, i32* %10
  %156 = add nsw i32 %155, 1
  store i32 %156, i32* %10
  %157 = sext i32 %155 to i64
  %158 = getelementptr inbounds i32, i32* %154, i64 %157
  %159 = load i32, i32* %158
  br label %160
160:
  %161 = phi i32 [ %152, %146 ], [ %159, %153 ]
  %162 = load i32*, i32** %8
  %163 = load i32, i32* %11
  %164 = add nsw i32 %163, 1
  store i32 %164, i32* %11
  %165 = sext i32 %163 to i64
  %166 = getelementptr inbounds i32, i32* %162, i64 %165
  store i32 %161, i32* %166
  br label %124
167:
  br label %168
168:
  %169 = load i32, i32* %9
  %170 = load i32, i32* %7
  %171 = icmp sle i32 %169, %170
  br i1 %171, label %172, label %184
172:
  %173 = load i32*, i32** %4
  %174 = load i32, i32* %9
  %175 = add nsw i32 %174, 1
  store i32 %175, i32* %9
  %176 = sext i32 %174 to i64
  %177 = getelementptr inbounds i32, i32* %173, i64 %176
  %178 = load i32, i32* %177
  %179 = load i32*, i32** %8
  %180 = load i32, i32* %11
  %181 = add nsw i32 %180, 1
  store i32 %181, i32* %11
  %182 = sext i32 %180 to i64
  %183 = getelementptr inbounds i32, i32* %179, i64 %182
  store i32 %178, i32* %183
  br label %168
184:
  br label %185
185:
  %186 = load i32, i32* %10
  %187 = load i32, i32* %6
  %188 = icmp sle i32 %186, %187
  br i1 %188, label %189, label %201
189:
  %190 = load i32*, i32** %4
  %191 = load i32, i32* %10
  %192 = add nsw i32 %191, 1
  store i32 %192, i32* %10
  %193 = sext i32 %191 to i64
  %194 = getelementptr inbounds i32, i32* %190, i64 %193
  %195 = load i32, i32* %194
  %196 = load i32*, i32** %8
  %197 = load i32, i32* %11
  %198 = add nsw i32 %197, 1
  store i32 %198, i32* %11
  %199 = sext i32 %197 to i64
  %200 = getelementptr inbounds i32, i32* %196, i64 %199
  store i32 %195, i32* %200
  br label %185
201:
  store i32 0, i32* %12
  br label %203
203:
  %204 = load i32, i32* %12
  %205 = load i32, i32* %11
  %206 = icmp slt i32 %204, %205
  br i1 %206, label %209, label %207
207:
  br label %224
209:
  %210 = load i32*, i32** %8
  %211 = load i32, i32* %12
  %212 = sext i32 %211 to i64
  %213 = getelementptr inbounds i32, i32* %210, i64 %212
  %214 = load i32, i32* %213
  %215 = load i32*, i32** %4
  %216 = load i32, i32* %5
  %217 = load i32, i32* %12
  %218 = add nsw i32 %216, %217
  %219 = sext i32 %218 to i64
  %220 = getelementptr inbounds i32, i32* %215, i64 %219
  store i32 %214, i32* %220
  br label %221
221:
  %222 = load i32, i32* %12
  %223 = add nsw i32 %222, 1
  store i32 %223, i32* %12
  br label %203
224:
  %225 = load i32*, i32** %8
  call void @free(i8* %226)
  br label %232
232:
  ret void
}
declare noalias i8* @malloc(i64)
declare void @free(i8*)
