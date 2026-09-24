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
  store i8* %0, i8** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  store i8* getelementptr inbounds ([65 x i8], [65 x i8]* @.str, i64 0, i64 0), i8** %7
  store i32 0, i32* %8
  br label %14
14:
  %15 = load i32, i32* %8
  %16 = load i32, i32* %5
  %17 = icmp slt i32 %15, %16
  br i1 %17, label %20, label %18
18:
  store i32 2, i32* %9
  br label %157
20:
  %22 = load i8*, i8** %4
  %23 = load i32, i32* %8
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i8, i8* %22, i64 %24
  %26 = load i8, i8* %25
  %27 = zext i8 %26 to i32
  %28 = shl i32 %27, 16
  %29 = load i32, i32* %8
  %30 = add nsw i32 %29, 1
  %31 = load i32, i32* %5
  %32 = icmp slt i32 %30, %31
  br i1 %32, label %33, label %42
33:
  %34 = load i8*, i8** %4
  %35 = load i32, i32* %8
  %36 = add nsw i32 %35, 1
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i8, i8* %34, i64 %37
  %39 = load i8, i8* %38
  %40 = zext i8 %39 to i32
  %41 = shl i32 %40, 8
  br label %43
42:
  br label %43
43:
  %44 = phi i32 [ %41, %33 ], [ 0, %42 ]
  %45 = or i32 %28, %44
  %46 = load i32, i32* %8
  %47 = add nsw i32 %46, 2
  %48 = load i32, i32* %5
  %49 = icmp slt i32 %47, %48
  br i1 %49, label %50, label %58
50:
  %51 = load i8*, i8** %4
  %52 = load i32, i32* %8
  %53 = add nsw i32 %52, 2
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i8, i8* %51, i64 %54
  %56 = load i8, i8* %55
  %57 = zext i8 %56 to i32
  br label %59
58:
  br label %59
59:
  %60 = phi i32 [ %57, %50 ], [ 0, %58 ]
  %61 = or i32 %45, %60
  store i32 %61, i32* %10
  store i32 0, i32* %11
  br label %63
63:
  %64 = load i32, i32* %11
  %65 = icmp slt i32 %64, 4
  br i1 %65, label %68, label %66
66:
  store i32 5, i32* %9
  br label %152
68:
  %69 = load i32, i32* %11
  switch i32 %69, label %124 [
    i32 0, label %70
    i32 1, label %84
    i32 2, label %99
  ]
70:
  %71 = load i8*, i8** %7
  %72 = load i32, i32* %10
  %73 = lshr i32 %72, 18
  %74 = and i32 %73, 63
  %75 = zext i32 %74 to i64
  %76 = getelementptr inbounds i8, i8* %71, i64 %75
  %77 = load i8, i8* %76
  %78 = load i8*, i8** %6
  %79 = load i32, i32* %8
  %80 = sdiv i32 %79, 3
  %81 = mul nsw i32 %80, 4
  %82 = sext i32 %81 to i64
  %83 = getelementptr inbounds i8, i8* %78, i64 %82
  store i8 %77, i8* %83
  br label %148
84:
  %85 = load i8*, i8** %7
  %86 = load i32, i32* %10
  %87 = lshr i32 %86, 12
  %88 = and i32 %87, 63
  %89 = zext i32 %88 to i64
  %90 = getelementptr inbounds i8, i8* %85, i64 %89
  %91 = load i8, i8* %90
  %92 = load i8*, i8** %6
  %93 = load i32, i32* %8
  %94 = sdiv i32 %93, 3
  %95 = mul nsw i32 %94, 4
  %96 = add nsw i32 %95, 1
  %97 = sext i32 %96 to i64
  %98 = getelementptr inbounds i8, i8* %92, i64 %97
  store i8 %91, i8* %98
  br label %148
99:
  %100 = load i32, i32* %8
  %101 = add nsw i32 %100, 1
  %102 = load i32, i32* %5
  %103 = icmp slt i32 %101, %102
  br i1 %103, label %104, label %113
104:
  %105 = load i8*, i8** %7
  %106 = load i32, i32* %10
  %107 = lshr i32 %106, 6
  %108 = and i32 %107, 63
  %109 = zext i32 %108 to i64
  %110 = getelementptr inbounds i8, i8* %105, i64 %109
  %111 = load i8, i8* %110
  %112 = sext i8 %111 to i32
  br label %114
113:
  br label %114
114:
  %115 = phi i32 [ %112, %104 ], [ 61, %113 ]
  %116 = trunc i32 %115 to i8
  %117 = load i8*, i8** %6
  %118 = load i32, i32* %8
  %119 = sdiv i32 %118, 3
  %120 = mul nsw i32 %119, 4
  %121 = add nsw i32 %120, 2
  %122 = sext i32 %121 to i64
  %123 = getelementptr inbounds i8, i8* %117, i64 %122
  store i8 %116, i8* %123
  br label %148
124:
  %125 = load i32, i32* %8
  %126 = add nsw i32 %125, 2
  %127 = load i32, i32* %5
  %128 = icmp slt i32 %126, %127
  br i1 %128, label %129, label %137
129:
  %130 = load i8*, i8** %7
  %131 = load i32, i32* %10
  %132 = and i32 %131, 63
  %133 = zext i32 %132 to i64
  %134 = getelementptr inbounds i8, i8* %130, i64 %133
  %135 = load i8, i8* %134
  %136 = sext i8 %135 to i32
  br label %138
137:
  br label %138
138:
  %139 = phi i32 [ %136, %129 ], [ 61, %137 ]
  %140 = trunc i32 %139 to i8
  %141 = load i8*, i8** %6
  %142 = load i32, i32* %8
  %143 = sdiv i32 %142, 3
  %144 = mul nsw i32 %143, 4
  %145 = add nsw i32 %144, 3
  %146 = sext i32 %145 to i64
  %147 = getelementptr inbounds i8, i8* %141, i64 %146
  store i8 %140, i8* %147
  br label %148
148:
  br label %149
149:
  %150 = load i32, i32* %11
  %151 = add nsw i32 %150, 1
  store i32 %151, i32* %11
  br label %63
152:
  br label %154
154:
  %155 = load i32, i32* %8
  %156 = add nsw i32 %155, 3
  store i32 %156, i32* %8
  br label %14
157:
  %158 = load i8*, i8** %6
  %159 = load i32, i32* %5
  %160 = add nsw i32 %159, 2
  %161 = sdiv i32 %160, 3
  %162 = mul nsw i32 %161, 4
  %163 = sext i32 %162 to i64
  %164 = getelementptr inbounds i8, i8* %158, i64 %163
  store i8 0, i8* %164
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
