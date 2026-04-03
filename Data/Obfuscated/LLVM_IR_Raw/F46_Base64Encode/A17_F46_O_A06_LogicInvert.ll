@.str = constant [65 x i8] c"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/\00"
@.str.1 = constant [4 x i8] c"%s\0A\00"
define dso_local void @S(i8* %0, i32 %1, i8* %2) {
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
  br label %13
13:
  %14 = load i32, i32* %8
  %15 = load i32, i32* %5
  %16 = icmp slt i32 %14, %15
  br i1 %16, label %17, label %167
17:
  %19 = load i8*, i8** %4
  %20 = load i32, i32* %8
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i8, i8* %19, i64 %21
  %23 = load i8, i8* %22
  %24 = zext i8 %23 to i32
  %25 = shl i32 %24, 16
  %26 = load i32, i32* %8
  %27 = add nsw i32 %26, 1
  %28 = load i32, i32* %5
  %29 = icmp slt i32 %27, %28
  br i1 %29, label %30, label %39
30:
  %31 = load i8*, i8** %4
  %32 = load i32, i32* %8
  %33 = add nsw i32 %32, 1
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i8, i8* %31, i64 %34
  %36 = load i8, i8* %35
  %37 = zext i8 %36 to i32
  %38 = shl i32 %37, 8
  br label %40
39:
  br label %40
40:
  %41 = phi i32 [ %38, %30 ], [ 0, %39 ]
  %42 = or i32 %25, %41
  %43 = load i32, i32* %8
  %44 = add nsw i32 %43, 2
  %45 = load i32, i32* %5
  %46 = icmp slt i32 %44, %45
  br i1 %46, label %47, label %55
47:
  %48 = load i8*, i8** %4
  %49 = load i32, i32* %8
  %50 = add nsw i32 %49, 2
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i8, i8* %48, i64 %51
  %53 = load i8, i8* %52
  %54 = zext i8 %53 to i32
  br label %56
55:
  br label %56
56:
  %57 = phi i32 [ %54, %47 ], [ 0, %55 ]
  %58 = or i32 %42, %57
  store i32 %58, i32* %9
  store i32 0, i32* %10
  br label %60
60:
  %61 = load i32, i32* %10
  %62 = icmp slt i32 %61, 4
  br i1 %62, label %65, label %63
63:
  br label %163
65:
  %66 = load i32, i32* %10
  %67 = icmp eq i32 %66, 0
  br i1 %67, label %68, label %84
68:
  %69 = load i8*, i8** %7
  %70 = load i32, i32* %9
  %71 = lshr i32 %70, 18
  %72 = and i32 %71, 63
  %73 = zext i32 %72 to i64
  %74 = getelementptr inbounds i8, i8* %69, i64 %73
  %75 = load i8, i8* %74
  %76 = load i8*, i8** %6
  %77 = load i32, i32* %8
  %78 = sdiv i32 %77, 3
  %79 = mul nsw i32 %78, 4
  %80 = load i32, i32* %10
  %81 = add nsw i32 %79, %80
  %82 = sext i32 %81 to i64
  %83 = getelementptr inbounds i8, i8* %76, i64 %82
  store i8 %75, i8* %83
  br label %159
84:
  %85 = load i32, i32* %10
  %86 = icmp eq i32 %85, 1
  br i1 %86, label %87, label %103
87:
  %88 = load i8*, i8** %7
  %89 = load i32, i32* %9
  %90 = lshr i32 %89, 12
  %91 = and i32 %90, 63
  %92 = zext i32 %91 to i64
  %93 = getelementptr inbounds i8, i8* %88, i64 %92
  %94 = load i8, i8* %93
  %95 = load i8*, i8** %6
  %96 = load i32, i32* %8
  %97 = sdiv i32 %96, 3
  %98 = mul nsw i32 %97, 4
  %99 = load i32, i32* %10
  %100 = add nsw i32 %98, %99
  %101 = sext i32 %100 to i64
  %102 = getelementptr inbounds i8, i8* %95, i64 %101
  store i8 %94, i8* %102
  br label %158
103:
  %104 = load i32, i32* %10
  %105 = icmp eq i32 %104, 2
  br i1 %105, label %106, label %132
106:
  %107 = load i32, i32* %8
  %108 = add nsw i32 %107, 1
  %109 = load i32, i32* %5
  %110 = icmp slt i32 %108, %109
  br i1 %110, label %111, label %120
111:
  %112 = load i8*, i8** %7
  %113 = load i32, i32* %9
  %114 = lshr i32 %113, 6
  %115 = and i32 %114, 63
  %116 = zext i32 %115 to i64
  %117 = getelementptr inbounds i8, i8* %112, i64 %116
  %118 = load i8, i8* %117
  %119 = sext i8 %118 to i32
  br label %121
120:
  br label %121
121:
  %122 = phi i32 [ %119, %111 ], [ 61, %120 ]
  %123 = trunc i32 %122 to i8
  %124 = load i8*, i8** %6
  %125 = load i32, i32* %8
  %126 = sdiv i32 %125, 3
  %127 = mul nsw i32 %126, 4
  %128 = load i32, i32* %10
  %129 = add nsw i32 %127, %128
  %130 = sext i32 %129 to i64
  %131 = getelementptr inbounds i8, i8* %124, i64 %130
  store i8 %123, i8* %131
  br label %157
132:
  %133 = load i32, i32* %8
  %134 = add nsw i32 %133, 2
  %135 = load i32, i32* %5
  %136 = icmp slt i32 %134, %135
  br i1 %136, label %137, label %145
137:
  %138 = load i8*, i8** %7
  %139 = load i32, i32* %9
  %140 = and i32 %139, 63
  %141 = zext i32 %140 to i64
  %142 = getelementptr inbounds i8, i8* %138, i64 %141
  %143 = load i8, i8* %142
  %144 = sext i8 %143 to i32
  br label %146
145:
  br label %146
146:
  %147 = phi i32 [ %144, %137 ], [ 61, %145 ]
  %148 = trunc i32 %147 to i8
  %149 = load i8*, i8** %6
  %150 = load i32, i32* %8
  %151 = sdiv i32 %150, 3
  %152 = mul nsw i32 %151, 4
  %153 = load i32, i32* %10
  %154 = add nsw i32 %152, %153
  %155 = sext i32 %154 to i64
  %156 = getelementptr inbounds i8, i8* %149, i64 %155
  store i8 %148, i8* %156
  br label %157
157:
  br label %158
158:
  br label %159
159:
  br label %160
160:
  %161 = load i32, i32* %10
  %162 = add nsw i32 %161, 1
  store i32 %162, i32* %10
  br label %60
163:
  %164 = load i32, i32* %8
  %165 = add nsw i32 %164, 3
  store i32 %165, i32* %8
  br label %13
167:
  %168 = load i8*, i8** %6
  %169 = load i32, i32* %5
  %170 = add nsw i32 %169, 2
  %171 = sdiv i32 %170, 3
  %172 = mul nsw i32 %171, 4
  %173 = sext i32 %172 to i64
  %174 = getelementptr inbounds i8, i8* %168, i64 %173
  store i8 0, i8* %174
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
  call void @S(i8* %31, i32 %32, i8* %33)
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
