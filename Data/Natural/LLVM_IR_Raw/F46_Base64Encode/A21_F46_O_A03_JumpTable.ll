@.str = constant [65 x i8] c"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/\00"
@.str.1 = constant [4 x i8] c"%s\0A\00"
define dso_local void @Base64Encode(i8* %0, i32 %1, i8* %2) {
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i8*
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i8* %0, i8** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  store i8* getelementptr inbounds ([65 x i8], [65 x i8]* @.str, i64 0, i64 0), i8** %7
  store i32 0, i32* %8
  br label %15
15:
  %16 = load i32, i32* %8
  %17 = load i32, i32* %5
  %18 = icmp slt i32 %16, %17
  br i1 %18, label %21, label %19
19:
  store i32 2, i32* %9
  br label %170
21:
  %23 = load i8*, i8** %4
  %24 = load i32, i32* %8
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i8, i8* %23, i64 %25
  %27 = load i8, i8* %26
  %28 = zext i8 %27 to i32
  %29 = shl i32 %28, 16
  %30 = load i32, i32* %8
  %31 = add nsw i32 %30, 1
  %32 = load i32, i32* %5
  %33 = icmp slt i32 %31, %32
  br i1 %33, label %34, label %43
34:
  %35 = load i8*, i8** %4
  %36 = load i32, i32* %8
  %37 = add nsw i32 %36, 1
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i8, i8* %35, i64 %38
  %40 = load i8, i8* %39
  %41 = zext i8 %40 to i32
  %42 = shl i32 %41, 8
  br label %44
43:
  br label %44
44:
  %45 = phi i32 [ %42, %34 ], [ 0, %43 ]
  %46 = or i32 %29, %45
  %47 = load i32, i32* %8
  %48 = add nsw i32 %47, 2
  %49 = load i32, i32* %5
  %50 = icmp slt i32 %48, %49
  br i1 %50, label %51, label %59
51:
  %52 = load i8*, i8** %4
  %53 = load i32, i32* %8
  %54 = add nsw i32 %53, 2
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i8, i8* %52, i64 %55
  %57 = load i8, i8* %56
  %58 = zext i8 %57 to i32
  br label %60
59:
  br label %60
60:
  %61 = phi i32 [ %58, %51 ], [ 0, %59 ]
  %62 = or i32 %46, %61
  store i32 %62, i32* %10
  store i32 0, i32* %11
  br label %64
64:
  %65 = load i32, i32* %11
  %66 = icmp slt i32 %65, 4
  br i1 %66, label %69, label %67
67:
  store i32 5, i32* %9
  br label %165
69:
  %71 = load i32, i32* %11
  store i32 %71, i32* %12
  %72 = load i32, i32* %12
  %73 = icmp eq i32 %72, 0
  br i1 %73, label %74, label %88
74:
  %75 = load i8*, i8** %7
  %76 = load i32, i32* %10
  %77 = lshr i32 %76, 18
  %78 = and i32 %77, 63
  %79 = zext i32 %78 to i64
  %80 = getelementptr inbounds i8, i8* %75, i64 %79
  %81 = load i8, i8* %80
  %82 = load i8*, i8** %6
  %83 = load i32, i32* %8
  %84 = sdiv i32 %83, 3
  %85 = mul nsw i32 %84, 4
  %86 = sext i32 %85 to i64
  %87 = getelementptr inbounds i8, i8* %82, i64 %86
  store i8 %81, i8* %87
  br label %160
88:
  %89 = load i32, i32* %12
  %90 = icmp eq i32 %89, 1
  br i1 %90, label %91, label %106
91:
  %92 = load i8*, i8** %7
  %93 = load i32, i32* %10
  %94 = lshr i32 %93, 12
  %95 = and i32 %94, 63
  %96 = zext i32 %95 to i64
  %97 = getelementptr inbounds i8, i8* %92, i64 %96
  %98 = load i8, i8* %97
  %99 = load i8*, i8** %6
  %100 = load i32, i32* %8
  %101 = sdiv i32 %100, 3
  %102 = mul nsw i32 %101, 4
  %103 = add nsw i32 %102, 1
  %104 = sext i32 %103 to i64
  %105 = getelementptr inbounds i8, i8* %99, i64 %104
  store i8 %98, i8* %105
  br label %159
106:
  %107 = load i32, i32* %12
  %108 = icmp eq i32 %107, 2
  br i1 %108, label %109, label %134
109:
  %110 = load i32, i32* %8
  %111 = add nsw i32 %110, 1
  %112 = load i32, i32* %5
  %113 = icmp slt i32 %111, %112
  br i1 %113, label %114, label %123
114:
  %115 = load i8*, i8** %7
  %116 = load i32, i32* %10
  %117 = lshr i32 %116, 6
  %118 = and i32 %117, 63
  %119 = zext i32 %118 to i64
  %120 = getelementptr inbounds i8, i8* %115, i64 %119
  %121 = load i8, i8* %120
  %122 = sext i8 %121 to i32
  br label %124
123:
  br label %124
124:
  %125 = phi i32 [ %122, %114 ], [ 61, %123 ]
  %126 = trunc i32 %125 to i8
  %127 = load i8*, i8** %6
  %128 = load i32, i32* %8
  %129 = sdiv i32 %128, 3
  %130 = mul nsw i32 %129, 4
  %131 = add nsw i32 %130, 2
  %132 = sext i32 %131 to i64
  %133 = getelementptr inbounds i8, i8* %127, i64 %132
  store i8 %126, i8* %133
  br label %158
134:
  %135 = load i32, i32* %8
  %136 = add nsw i32 %135, 2
  %137 = load i32, i32* %5
  %138 = icmp slt i32 %136, %137
  br i1 %138, label %139, label %147
139:
  %140 = load i8*, i8** %7
  %141 = load i32, i32* %10
  %142 = and i32 %141, 63
  %143 = zext i32 %142 to i64
  %144 = getelementptr inbounds i8, i8* %140, i64 %143
  %145 = load i8, i8* %144
  %146 = sext i8 %145 to i32
  br label %148
147:
  br label %148
148:
  %149 = phi i32 [ %146, %139 ], [ 61, %147 ]
  %150 = trunc i32 %149 to i8
  %151 = load i8*, i8** %6
  %152 = load i32, i32* %8
  %153 = sdiv i32 %152, 3
  %154 = mul nsw i32 %153, 4
  %155 = add nsw i32 %154, 3
  %156 = sext i32 %155 to i64
  %157 = getelementptr inbounds i8, i8* %151, i64 %156
  store i8 %150, i8* %157
  br label %158
158:
  br label %159
159:
  br label %160
160:
  br label %162
162:
  %163 = load i32, i32* %11
  %164 = add nsw i32 %163, 1
  store i32 %164, i32* %11
  br label %64
165:
  br label %167
167:
  %168 = load i32, i32* %8
  %169 = add nsw i32 %168, 3
  store i32 %169, i32* %8
  br label %15
170:
  %171 = load i8*, i8** %6
  %172 = load i32, i32* %5
  %173 = add nsw i32 %172, 2
  %174 = sdiv i32 %173, 3
  %175 = mul nsw i32 %174, 4
  %176 = sext i32 %175 to i64
  %177 = getelementptr inbounds i8, i8* %171, i64 %176
  store i8 0, i8* %177
  ret void
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i8*
  %7 = alloca i32
  %8 = alloca [400 x i8]
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %9 = load i32, i32* %4
  %10 = icmp slt i32 %9, 2
  br i1 %10, label %11, label %12
11:
  store i32 1, i32* %3
  br label %39
12:
  %14 = load i8**, i8*** %5
  %15 = getelementptr inbounds i8*, i8** %14, i64 1
  %16 = load i8*, i8** %15
  store i8* %16, i8** %6
  store i32 0, i32* %7
  br label %18
18:
  %19 = load i8*, i8** %6
  %20 = load i32, i32* %7
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i8, i8* %19, i64 %21
  %23 = load i8, i8* %22
  %24 = icmp ne i8 %23, 0
  br i1 %24, label %25, label %28
25:
  %26 = load i32, i32* %7
  %27 = add nsw i32 %26, 1
  store i32 %27, i32* %7
  br label %18
28:
  call void @llvm.memset.p0i8.i64(i8* align 16 %30, i8 0, i64 400, i1 false)
  %31 = load i8*, i8** %6
  %32 = load i32, i32* %7
  %33 = getelementptr inbounds [400 x i8], [400 x i8]* %8, i64 0, i64 0
  call void @Base64Encode(i8* %31, i32 %32, i8* %33)
  %34 = getelementptr inbounds [400 x i8], [400 x i8]* %8, i64 0, i64 0
  %35 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i8* %34)
  store i32 0, i32* %3
  br label %39
39:
  %40 = load i32, i32* %3
  ret i32 %40
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare i32 @printf(i8*, ...)
