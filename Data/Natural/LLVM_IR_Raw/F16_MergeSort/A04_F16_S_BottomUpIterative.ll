@.str = constant [5 x i8] c"%d%s\00"
@.str.1 = constant [1 x i8] zeroinitializer
@.str.2 = constant [2 x i8] c" \00"
@.str.3 = constant [2 x i8] c"\0A\00"
define dso_local void @MergeSort(i32* %0, i32 %1, i32 %2) {
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
  %14 = alloca i32
  %15 = alloca i32*
  %16 = alloca i32*
  %17 = alloca i32
  %18 = alloca i32
  %19 = alloca i32
  %20 = alloca i32
  %21 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %23 = load i32, i32* %6
  %24 = load i32, i32* %5
  %25 = sub nsw i32 %23, %24
  %26 = add nsw i32 %25, 1
  store i32 %26, i32* %7
  store i32 1, i32* %8
  br label %28
28:
  %29 = load i32, i32* %8
  %30 = load i32, i32* %7
  %31 = sub nsw i32 %30, 1
  %32 = icmp sle i32 %29, %31
  br i1 %32, label %35, label %33
33:
  store i32 2, i32* %9
  br label %249
35:
  store i32 0, i32* %10
  br label %37
37:
  %38 = load i32, i32* %10
  %39 = load i32, i32* %7
  %40 = sub nsw i32 %39, 1
  %41 = icmp slt i32 %38, %40
  br i1 %41, label %44, label %42
42:
  store i32 5, i32* %9
  br label %245
44:
  %46 = load i32, i32* %10
  %47 = load i32, i32* %8
  %48 = add nsw i32 %46, %47
  %49 = sub nsw i32 %48, 1
  store i32 %49, i32* %11
  %51 = load i32, i32* %10
  %52 = load i32, i32* %8
  %53 = mul nsw i32 2, %52
  %54 = add nsw i32 %51, %53
  %55 = sub nsw i32 %54, 1
  %56 = load i32, i32* %7
  %57 = sub nsw i32 %56, 1
  %58 = icmp slt i32 %55, %57
  br i1 %58, label %59, label %65
59:
  %60 = load i32, i32* %10
  %61 = load i32, i32* %8
  %62 = mul nsw i32 2, %61
  %63 = add nsw i32 %60, %62
  %64 = sub nsw i32 %63, 1
  br label %68
65:
  %66 = load i32, i32* %7
  %67 = sub nsw i32 %66, 1
  br label %68
68:
  %69 = phi i32 [ %64, %59 ], [ %67, %65 ]
  store i32 %69, i32* %12
  %70 = load i32, i32* %11
  %71 = load i32, i32* %7
  %72 = icmp sge i32 %70, %71
  br i1 %72, label %73, label %76
73:
  %74 = load i32, i32* %7
  %75 = sub nsw i32 %74, 1
  store i32 %75, i32* %11
  br label %76
76:
  %78 = load i32, i32* %11
  %79 = load i32, i32* %10
  %80 = sub nsw i32 %78, %79
  %81 = add nsw i32 %80, 1
  store i32 %81, i32* %13
  %83 = load i32, i32* %12
  %84 = load i32, i32* %11
  %85 = sub nsw i32 %83, %84
  store i32 %85, i32* %14
  %87 = load i32, i32* %13
  %88 = mul nsw i32 %87, 4
  %89 = sext i32 %88 to i64
  %90 = call noalias i8* @malloc(i64 %89)
  store i32* %91, i32** %15
  %93 = load i32, i32* %14
  %94 = mul nsw i32 %93, 4
  %95 = sext i32 %94 to i64
  %96 = call noalias i8* @malloc(i64 %95)
  store i32* %97, i32** %16
  store i32 0, i32* %17
  br label %99
99:
  %100 = load i32, i32* %17
  %101 = load i32, i32* %13
  %102 = icmp slt i32 %100, %101
  br i1 %102, label %105, label %103
103:
  store i32 8, i32* %9
  br label %120
105:
  %106 = load i32*, i32** %4
  %107 = load i32, i32* %10
  %108 = load i32, i32* %17
  %109 = add nsw i32 %107, %108
  %110 = sext i32 %109 to i64
  %111 = getelementptr inbounds i32, i32* %106, i64 %110
  %112 = load i32, i32* %111
  %113 = load i32*, i32** %15
  %114 = load i32, i32* %17
  %115 = sext i32 %114 to i64
  %116 = getelementptr inbounds i32, i32* %113, i64 %115
  store i32 %112, i32* %116
  br label %117
117:
  %118 = load i32, i32* %17
  %119 = add nsw i32 %118, 1
  store i32 %119, i32* %17
  br label %99
120:
  store i32 0, i32* %18
  br label %122
122:
  %123 = load i32, i32* %18
  %124 = load i32, i32* %14
  %125 = icmp slt i32 %123, %124
  br i1 %125, label %128, label %126
126:
  store i32 11, i32* %9
  br label %144
128:
  %129 = load i32*, i32** %4
  %130 = load i32, i32* %11
  %131 = add nsw i32 %130, 1
  %132 = load i32, i32* %18
  %133 = add nsw i32 %131, %132
  %134 = sext i32 %133 to i64
  %135 = getelementptr inbounds i32, i32* %129, i64 %134
  %136 = load i32, i32* %135
  %137 = load i32*, i32** %16
  %138 = load i32, i32* %18
  %139 = sext i32 %138 to i64
  %140 = getelementptr inbounds i32, i32* %137, i64 %139
  store i32 %136, i32* %140
  br label %141
141:
  %142 = load i32, i32* %18
  %143 = add nsw i32 %142, 1
  store i32 %143, i32* %18
  br label %122
144:
  store i32 0, i32* %19
  store i32 0, i32* %20
  %148 = load i32, i32* %10
  store i32 %148, i32* %21
  br label %149
149:
  %150 = load i32, i32* %19
  %151 = load i32, i32* %13
  %152 = icmp slt i32 %150, %151
  br i1 %152, label %153, label %157
153:
  %154 = load i32, i32* %20
  %155 = load i32, i32* %14
  %156 = icmp slt i32 %154, %155
  br label %157
157:
  %158 = phi i1 [ false, %149 ], [ %156, %153 ]
  br i1 %158, label %159, label %192
159:
  %160 = load i32*, i32** %15
  %161 = load i32, i32* %19
  %162 = sext i32 %161 to i64
  %163 = getelementptr inbounds i32, i32* %160, i64 %162
  %164 = load i32, i32* %163
  %165 = load i32*, i32** %16
  %166 = load i32, i32* %20
  %167 = sext i32 %166 to i64
  %168 = getelementptr inbounds i32, i32* %165, i64 %167
  %169 = load i32, i32* %168
  %170 = icmp sle i32 %164, %169
  br i1 %170, label %171, label %178
171:
  %172 = load i32*, i32** %15
  %173 = load i32, i32* %19
  %174 = add nsw i32 %173, 1
  store i32 %174, i32* %19
  %175 = sext i32 %173 to i64
  %176 = getelementptr inbounds i32, i32* %172, i64 %175
  %177 = load i32, i32* %176
  br label %185
178:
  %179 = load i32*, i32** %16
  %180 = load i32, i32* %20
  %181 = add nsw i32 %180, 1
  store i32 %181, i32* %20
  %182 = sext i32 %180 to i64
  %183 = getelementptr inbounds i32, i32* %179, i64 %182
  %184 = load i32, i32* %183
  br label %185
185:
  %186 = phi i32 [ %177, %171 ], [ %184, %178 ]
  %187 = load i32*, i32** %4
  %188 = load i32, i32* %21
  %189 = add nsw i32 %188, 1
  store i32 %189, i32* %21
  %190 = sext i32 %188 to i64
  %191 = getelementptr inbounds i32, i32* %187, i64 %190
  store i32 %186, i32* %191
  br label %149
192:
  br label %193
193:
  %194 = load i32, i32* %19
  %195 = load i32, i32* %13
  %196 = icmp slt i32 %194, %195
  br i1 %196, label %197, label %209
197:
  %198 = load i32*, i32** %15
  %199 = load i32, i32* %19
  %200 = add nsw i32 %199, 1
  store i32 %200, i32* %19
  %201 = sext i32 %199 to i64
  %202 = getelementptr inbounds i32, i32* %198, i64 %201
  %203 = load i32, i32* %202
  %204 = load i32*, i32** %4
  %205 = load i32, i32* %21
  %206 = add nsw i32 %205, 1
  store i32 %206, i32* %21
  %207 = sext i32 %205 to i64
  %208 = getelementptr inbounds i32, i32* %204, i64 %207
  store i32 %203, i32* %208
  br label %193
209:
  br label %210
210:
  %211 = load i32, i32* %20
  %212 = load i32, i32* %14
  %213 = icmp slt i32 %211, %212
  br i1 %213, label %214, label %226
214:
  %215 = load i32*, i32** %16
  %216 = load i32, i32* %20
  %217 = add nsw i32 %216, 1
  store i32 %217, i32* %20
  %218 = sext i32 %216 to i64
  %219 = getelementptr inbounds i32, i32* %215, i64 %218
  %220 = load i32, i32* %219
  %221 = load i32*, i32** %4
  %222 = load i32, i32* %21
  %223 = add nsw i32 %222, 1
  store i32 %223, i32* %21
  %224 = sext i32 %222 to i64
  %225 = getelementptr inbounds i32, i32* %221, i64 %224
  store i32 %220, i32* %225
  br label %210
226:
  %227 = load i32*, i32** %15
  call void @free(i8* %228)
  %229 = load i32*, i32** %16
  call void @free(i8* %230)
  br label %240
240:
  %241 = load i32, i32* %8
  %242 = mul nsw i32 2, %241
  %243 = load i32, i32* %10
  %244 = add nsw i32 %243, %242
  store i32 %244, i32* %10
  br label %37
245:
  br label %246
246:
  %247 = load i32, i32* %8
  %248 = mul nsw i32 2, %247
  store i32 %248, i32* %8
  br label %28
249:
  ret void
}
declare noalias i8* @malloc(i64)
declare void @free(i8*)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32*
  %8 = alloca i32
  %9 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %10 = load i32, i32* %4
  %11 = icmp slt i32 %10, 2
  br i1 %11, label %12, label %13
12:
  store i32 0, i32* %3
  br label %78
13:
  %15 = load i32, i32* %4
  %16 = sub nsw i32 %15, 1
  store i32 %16, i32* %6
  %18 = load i32, i32* %6
  %19 = sext i32 %18 to i64
  %20 = mul i64 %19, 4
  %21 = call noalias i8* @malloc(i64 %20)
  store i32* %22, i32** %7
  store i32 0, i32* %8
  br label %24
24:
  %25 = load i32, i32* %8
  %26 = load i32, i32* %6
  %27 = icmp slt i32 %25, %26
  br i1 %27, label %30, label %28
28:
  br label %45
30:
  %31 = load i8**, i8*** %5
  %32 = load i32, i32* %8
  %33 = add nsw i32 %32, 1
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i8*, i8** %31, i64 %34
  %36 = load i8*, i8** %35
  %37 = call i32 @atoi(i8* %36)
  %38 = load i32*, i32** %7
  %39 = load i32, i32* %8
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i32, i32* %38, i64 %40
  store i32 %37, i32* %41
  br label %42
42:
  %43 = load i32, i32* %8
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %8
  br label %24
45:
  %46 = load i32*, i32** %7
  %47 = load i32, i32* %6
  %48 = sub nsw i32 %47, 1
  call void @MergeSort(i32* %46, i32 0, i32 %48)
  store i32 0, i32* %9
  br label %50
50:
  %51 = load i32, i32* %9
  %52 = load i32, i32* %6
  %53 = icmp slt i32 %51, %52
  br i1 %53, label %56, label %54
54:
  br label %72
56:
  %57 = load i32*, i32** %7
  %58 = load i32, i32* %9
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i32, i32* %57, i64 %59
  %61 = load i32, i32* %60
  %62 = load i32, i32* %9
  %63 = load i32, i32* %6
  %64 = sub nsw i32 %63, 1
  %65 = icmp eq i32 %62, %64
  %66 = zext i1 %65 to i64
  %67 = select i1 %65, i8* getelementptr inbounds ([1 x i8], [1 x i8]* @.str.1, i64 0, i64 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.2, i64 0, i64 0)
  %68 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %61, i8* %67)
  br label %69
69:
  %70 = load i32, i32* %9
  %71 = add nsw i32 %70, 1
  store i32 %71, i32* %9
  br label %50
72:
  %73 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.3, i64 0, i64 0))
  %74 = load i32*, i32** %7
  call void @free(i8* %75)
  store i32 0, i32* %3
  br label %78
78:
  %79 = load i32, i32* %3
  ret i32 %79
}
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare i64 @strtol(i8*, i8**, i32)
