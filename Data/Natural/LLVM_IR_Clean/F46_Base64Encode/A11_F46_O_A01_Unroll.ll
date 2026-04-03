@.str = constant [65 x i8] c"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/\00"
define dso_local void @Base64Encode(i8* %0, i32 %1, i8* %2) {
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i8*
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i8* %0, i8** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  store i8* getelementptr inbounds ([65 x i8], [65 x i8]* @.str, i64 0, i64 0), i8** %7
  store i32 0, i32* %8
  store i32 0, i32* %9
  br label %14
14:
  %15 = load i32, i32* %8
  %16 = add nsw i32 %15, 5
  %17 = load i32, i32* %5
  %18 = icmp slt i32 %16, %17
  br i1 %18, label %19, label %120
19:
  store i32 0, i32* %10
  br label %21
21:
  %22 = load i32, i32* %10
  %23 = icmp slt i32 %22, 2
  br i1 %23, label %26, label %24
24:
  br label %119
26:
  %27 = load i8*, i8** %7
  %28 = load i8*, i8** %4
  %29 = load i32, i32* %8
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i8, i8* %28, i64 %30
  %32 = load i8, i8* %31
  %33 = zext i8 %32 to i32
  %34 = ashr i32 %33, 2
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i8, i8* %27, i64 %35
  %37 = load i8, i8* %36
  %38 = load i8*, i8** %6
  %39 = load i32, i32* %9
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8, i8* %38, i64 %40
  store i8 %37, i8* %41
  %42 = load i8*, i8** %7
  %43 = load i8*, i8** %4
  %44 = load i32, i32* %8
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i8, i8* %43, i64 %45
  %47 = load i8, i8* %46
  %48 = zext i8 %47 to i32
  %49 = and i32 %48, 3
  %50 = shl i32 %49, 4
  %51 = load i8*, i8** %4
  %52 = load i32, i32* %8
  %53 = add nsw i32 %52, 1
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i8, i8* %51, i64 %54
  %56 = load i8, i8* %55
  %57 = zext i8 %56 to i32
  %58 = ashr i32 %57, 4
  %59 = or i32 %50, %58
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i8, i8* %42, i64 %60
  %62 = load i8, i8* %61
  %63 = load i8*, i8** %6
  %64 = load i32, i32* %9
  %65 = add nsw i32 %64, 1
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds i8, i8* %63, i64 %66
  store i8 %62, i8* %67
  %68 = load i8*, i8** %7
  %69 = load i8*, i8** %4
  %70 = load i32, i32* %8
  %71 = add nsw i32 %70, 1
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds i8, i8* %69, i64 %72
  %74 = load i8, i8* %73
  %75 = zext i8 %74 to i32
  %76 = and i32 %75, 15
  %77 = shl i32 %76, 2
  %78 = load i8*, i8** %4
  %79 = load i32, i32* %8
  %80 = add nsw i32 %79, 2
  %81 = sext i32 %80 to i64
  %82 = getelementptr inbounds i8, i8* %78, i64 %81
  %83 = load i8, i8* %82
  %84 = zext i8 %83 to i32
  %85 = ashr i32 %84, 6
  %86 = or i32 %77, %85
  %87 = sext i32 %86 to i64
  %88 = getelementptr inbounds i8, i8* %68, i64 %87
  %89 = load i8, i8* %88
  %90 = load i8*, i8** %6
  %91 = load i32, i32* %9
  %92 = add nsw i32 %91, 2
  %93 = sext i32 %92 to i64
  %94 = getelementptr inbounds i8, i8* %90, i64 %93
  store i8 %89, i8* %94
  %95 = load i8*, i8** %7
  %96 = load i8*, i8** %4
  %97 = load i32, i32* %8
  %98 = add nsw i32 %97, 2
  %99 = sext i32 %98 to i64
  %100 = getelementptr inbounds i8, i8* %96, i64 %99
  %101 = load i8, i8* %100
  %102 = zext i8 %101 to i32
  %103 = and i32 %102, 63
  %104 = sext i32 %103 to i64
  %105 = getelementptr inbounds i8, i8* %95, i64 %104
  %106 = load i8, i8* %105
  %107 = load i8*, i8** %6
  %108 = load i32, i32* %9
  %109 = add nsw i32 %108, 3
  %110 = sext i32 %109 to i64
  %111 = getelementptr inbounds i8, i8* %107, i64 %110
  store i8 %106, i8* %111
  %112 = load i32, i32* %8
  %113 = add nsw i32 %112, 3
  store i32 %113, i32* %8
  %114 = load i32, i32* %9
  %115 = add nsw i32 %114, 4
  store i32 %115, i32* %9
  br label %116
116:
  %117 = load i32, i32* %10
  %118 = add nsw i32 %117, 1
  store i32 %118, i32* %10
  br label %21
119:
  br label %14
120:
  br label %121
121:
  %122 = load i32, i32* %8
  %123 = load i32, i32* %5
  %124 = icmp slt i32 %122, %123
  br i1 %124, label %125, label %250
125:
  %126 = load i8*, i8** %7
  %127 = load i8*, i8** %4
  %128 = load i32, i32* %8
  %129 = sext i32 %128 to i64
  %130 = getelementptr inbounds i8, i8* %127, i64 %129
  %131 = load i8, i8* %130
  %132 = zext i8 %131 to i32
  %133 = ashr i32 %132, 2
  %134 = sext i32 %133 to i64
  %135 = getelementptr inbounds i8, i8* %126, i64 %134
  %136 = load i8, i8* %135
  %137 = load i8*, i8** %6
  %138 = load i32, i32* %9
  %139 = add nsw i32 %138, 1
  store i32 %139, i32* %9
  %140 = sext i32 %138 to i64
  %141 = getelementptr inbounds i8, i8* %137, i64 %140
  store i8 %136, i8* %141
  %142 = load i8*, i8** %7
  %143 = load i8*, i8** %4
  %144 = load i32, i32* %8
  %145 = sext i32 %144 to i64
  %146 = getelementptr inbounds i8, i8* %143, i64 %145
  %147 = load i8, i8* %146
  %148 = zext i8 %147 to i32
  %149 = and i32 %148, 3
  %150 = shl i32 %149, 4
  %151 = load i32, i32* %8
  %152 = add nsw i32 %151, 1
  %153 = load i32, i32* %5
  %154 = icmp slt i32 %152, %153
  br i1 %154, label %155, label %164
155:
  %156 = load i8*, i8** %4
  %157 = load i32, i32* %8
  %158 = add nsw i32 %157, 1
  %159 = sext i32 %158 to i64
  %160 = getelementptr inbounds i8, i8* %156, i64 %159
  %161 = load i8, i8* %160
  %162 = zext i8 %161 to i32
  %163 = ashr i32 %162, 4
  br label %165
164:
  br label %165
165:
  %166 = phi i32 [ %163, %155 ], [ 0, %164 ]
  %167 = or i32 %150, %166
  %168 = sext i32 %167 to i64
  %169 = getelementptr inbounds i8, i8* %142, i64 %168
  %170 = load i8, i8* %169
  %171 = load i8*, i8** %6
  %172 = load i32, i32* %9
  %173 = add nsw i32 %172, 1
  store i32 %173, i32* %9
  %174 = sext i32 %172 to i64
  %175 = getelementptr inbounds i8, i8* %171, i64 %174
  store i8 %170, i8* %175
  %176 = load i32, i32* %8
  %177 = add nsw i32 %176, 1
  %178 = load i32, i32* %5
  %179 = icmp slt i32 %177, %178
  br i1 %179, label %180, label %212
180:
  %181 = load i8*, i8** %7
  %182 = load i8*, i8** %4
  %183 = load i32, i32* %8
  %184 = add nsw i32 %183, 1
  %185 = sext i32 %184 to i64
  %186 = getelementptr inbounds i8, i8* %182, i64 %185
  %187 = load i8, i8* %186
  %188 = zext i8 %187 to i32
  %189 = and i32 %188, 15
  %190 = shl i32 %189, 2
  %191 = load i32, i32* %8
  %192 = add nsw i32 %191, 2
  %193 = load i32, i32* %5
  %194 = icmp slt i32 %192, %193
  br i1 %194, label %195, label %204
195:
  %196 = load i8*, i8** %4
  %197 = load i32, i32* %8
  %198 = add nsw i32 %197, 2
  %199 = sext i32 %198 to i64
  %200 = getelementptr inbounds i8, i8* %196, i64 %199
  %201 = load i8, i8* %200
  %202 = zext i8 %201 to i32
  %203 = ashr i32 %202, 6
  br label %205
204:
  br label %205
205:
  %206 = phi i32 [ %203, %195 ], [ 0, %204 ]
  %207 = or i32 %190, %206
  %208 = sext i32 %207 to i64
  %209 = getelementptr inbounds i8, i8* %181, i64 %208
  %210 = load i8, i8* %209
  %211 = sext i8 %210 to i32
  br label %213
212:
  br label %213
213:
  %214 = phi i32 [ %211, %205 ], [ 61, %212 ]
  %215 = trunc i32 %214 to i8
  %216 = load i8*, i8** %6
  %217 = load i32, i32* %9
  %218 = add nsw i32 %217, 1
  store i32 %218, i32* %9
  %219 = sext i32 %217 to i64
  %220 = getelementptr inbounds i8, i8* %216, i64 %219
  store i8 %215, i8* %220
  %221 = load i32, i32* %8
  %222 = add nsw i32 %221, 2
  %223 = load i32, i32* %5
  %224 = icmp slt i32 %222, %223
  br i1 %224, label %225, label %239
225:
  %226 = load i8*, i8** %7
  %227 = load i8*, i8** %4
  %228 = load i32, i32* %8
  %229 = add nsw i32 %228, 2
  %230 = sext i32 %229 to i64
  %231 = getelementptr inbounds i8, i8* %227, i64 %230
  %232 = load i8, i8* %231
  %233 = zext i8 %232 to i32
  %234 = and i32 %233, 63
  %235 = sext i32 %234 to i64
  %236 = getelementptr inbounds i8, i8* %226, i64 %235
  %237 = load i8, i8* %236
  %238 = sext i8 %237 to i32
  br label %240
239:
  br label %240
240:
  %241 = phi i32 [ %238, %225 ], [ 61, %239 ]
  %242 = trunc i32 %241 to i8
  %243 = load i8*, i8** %6
  %244 = load i32, i32* %9
  %245 = add nsw i32 %244, 1
  store i32 %245, i32* %9
  %246 = sext i32 %244 to i64
  %247 = getelementptr inbounds i8, i8* %243, i64 %246
  store i8 %242, i8* %247
  %248 = load i32, i32* %8
  %249 = add nsw i32 %248, 3
  store i32 %249, i32* %8
  br label %121
250:
  %251 = load i8*, i8** %6
  %252 = load i32, i32* %9
  %253 = sext i32 %252 to i64
  %254 = getelementptr inbounds i8, i8* %251, i64 %253
  store i8 0, i8* %254
  ret void
}
