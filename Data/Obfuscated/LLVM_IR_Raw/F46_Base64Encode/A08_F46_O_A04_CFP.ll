@.str = constant [65 x i8] c"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/\00"
@.str.1 = constant [4 x i8] c"%s\0A\00"
define dso_local void @BPD(i8* %0, i32 %1, i8* %2) {
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
  store i32 0, i32* %10
  br label %15
15:
  %16 = load i32, i32* %8
  %17 = icmp ne i32 %16, -1
  br i1 %17, label %18, label %167
18:
  %19 = load i32, i32* %8
  switch i32 %19, label %166 [
    i32 0, label %20
    i32 1, label %26
    i32 2, label %83
    i32 3, label %125
    i32 4, label %138
    i32 5, label %158
  ]
20:
  %21 = load i32, i32* %9
  %22 = load i32, i32* %5
  %23 = icmp slt i32 %21, %22
  %24 = zext i1 %23 to i64
  %25 = select i1 %23, i32 1, i32 -1
  store i32 %25, i32* %8
  br label %166
26:
  %27 = load i8*, i8** %7
  %28 = load i8*, i8** %4
  %29 = load i32, i32* %9
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i8, i8* %28, i64 %30
  %32 = load i8, i8* %31
  %33 = zext i8 %32 to i32
  %34 = ashr i32 %33, 2
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i8, i8* %27, i64 %35
  %37 = load i8, i8* %36
  %38 = load i8*, i8** %6
  %39 = load i32, i32* %10
  %40 = add nsw i32 %39, 1
  store i32 %40, i32* %10
  %41 = sext i32 %39 to i64
  %42 = getelementptr inbounds i8, i8* %38, i64 %41
  store i8 %37, i8* %42
  %43 = load i8*, i8** %7
  %44 = load i8*, i8** %4
  %45 = load i32, i32* %9
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i8, i8* %44, i64 %46
  %48 = load i8, i8* %47
  %49 = zext i8 %48 to i32
  %50 = and i32 %49, 3
  %51 = shl i32 %50, 4
  %52 = load i32, i32* %9
  %53 = add nsw i32 %52, 1
  %54 = load i32, i32* %5
  %55 = icmp slt i32 %53, %54
  br i1 %55, label %56, label %65
56:
  %57 = load i8*, i8** %4
  %58 = load i32, i32* %9
  %59 = add nsw i32 %58, 1
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i8, i8* %57, i64 %60
  %62 = load i8, i8* %61
  %63 = zext i8 %62 to i32
  %64 = ashr i32 %63, 4
  br label %66
65:
  br label %66
66:
  %67 = phi i32 [ %64, %56 ], [ 0, %65 ]
  %68 = or i32 %51, %67
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i8, i8* %43, i64 %69
  %71 = load i8, i8* %70
  %72 = load i8*, i8** %6
  %73 = load i32, i32* %10
  %74 = add nsw i32 %73, 1
  store i32 %74, i32* %10
  %75 = sext i32 %73 to i64
  %76 = getelementptr inbounds i8, i8* %72, i64 %75
  store i8 %71, i8* %76
  %77 = load i32, i32* %9
  %78 = add nsw i32 %77, 1
  %79 = load i32, i32* %5
  %80 = icmp slt i32 %78, %79
  %81 = zext i1 %80 to i64
  %82 = select i1 %80, i32 2, i32 3
  store i32 %82, i32* %8
  br label %166
83:
  %84 = load i8*, i8** %7
  %85 = load i8*, i8** %4
  %86 = load i32, i32* %9
  %87 = add nsw i32 %86, 1
  %88 = sext i32 %87 to i64
  %89 = getelementptr inbounds i8, i8* %85, i64 %88
  %90 = load i8, i8* %89
  %91 = zext i8 %90 to i32
  %92 = and i32 %91, 15
  %93 = shl i32 %92, 2
  %94 = load i32, i32* %9
  %95 = add nsw i32 %94, 2
  %96 = load i32, i32* %5
  %97 = icmp slt i32 %95, %96
  br i1 %97, label %98, label %107
98:
  %99 = load i8*, i8** %4
  %100 = load i32, i32* %9
  %101 = add nsw i32 %100, 2
  %102 = sext i32 %101 to i64
  %103 = getelementptr inbounds i8, i8* %99, i64 %102
  %104 = load i8, i8* %103
  %105 = zext i8 %104 to i32
  %106 = ashr i32 %105, 6
  br label %108
107:
  br label %108
108:
  %109 = phi i32 [ %106, %98 ], [ 0, %107 ]
  %110 = or i32 %93, %109
  %111 = sext i32 %110 to i64
  %112 = getelementptr inbounds i8, i8* %84, i64 %111
  %113 = load i8, i8* %112
  %114 = load i8*, i8** %6
  %115 = load i32, i32* %10
  %116 = add nsw i32 %115, 1
  store i32 %116, i32* %10
  %117 = sext i32 %115 to i64
  %118 = getelementptr inbounds i8, i8* %114, i64 %117
  store i8 %113, i8* %118
  %119 = load i32, i32* %9
  %120 = add nsw i32 %119, 2
  %121 = load i32, i32* %5
  %122 = icmp slt i32 %120, %121
  %123 = zext i1 %122 to i64
  %124 = select i1 %122, i32 4, i32 5
  store i32 %124, i32* %8
  br label %166
125:
  %126 = load i8*, i8** %6
  %127 = load i32, i32* %10
  %128 = add nsw i32 %127, 1
  store i32 %128, i32* %10
  %129 = sext i32 %127 to i64
  %130 = getelementptr inbounds i8, i8* %126, i64 %129
  store i8 61, i8* %130
  %131 = load i8*, i8** %6
  %132 = load i32, i32* %10
  %133 = add nsw i32 %132, 1
  store i32 %133, i32* %10
  %134 = sext i32 %132 to i64
  %135 = getelementptr inbounds i8, i8* %131, i64 %134
  store i8 61, i8* %135
  %136 = load i32, i32* %9
  %137 = add nsw i32 %136, 3
  store i32 %137, i32* %9
  store i32 0, i32* %8
  br label %166
138:
  %139 = load i8*, i8** %7
  %140 = load i8*, i8** %4
  %141 = load i32, i32* %9
  %142 = add nsw i32 %141, 2
  %143 = sext i32 %142 to i64
  %144 = getelementptr inbounds i8, i8* %140, i64 %143
  %145 = load i8, i8* %144
  %146 = zext i8 %145 to i32
  %147 = and i32 %146, 63
  %148 = sext i32 %147 to i64
  %149 = getelementptr inbounds i8, i8* %139, i64 %148
  %150 = load i8, i8* %149
  %151 = load i8*, i8** %6
  %152 = load i32, i32* %10
  %153 = add nsw i32 %152, 1
  store i32 %153, i32* %10
  %154 = sext i32 %152 to i64
  %155 = getelementptr inbounds i8, i8* %151, i64 %154
  store i8 %150, i8* %155
  %156 = load i32, i32* %9
  %157 = add nsw i32 %156, 3
  store i32 %157, i32* %9
  store i32 0, i32* %8
  br label %166
158:
  %159 = load i8*, i8** %6
  %160 = load i32, i32* %10
  %161 = add nsw i32 %160, 1
  store i32 %161, i32* %10
  %162 = sext i32 %160 to i64
  %163 = getelementptr inbounds i8, i8* %159, i64 %162
  store i8 61, i8* %163
  %164 = load i32, i32* %9
  %165 = add nsw i32 %164, 3
  store i32 %165, i32* %9
  store i32 0, i32* %8
  br label %166
166:
  br label %15
167:
  %168 = load i8*, i8** %6
  %169 = load i32, i32* %10
  %170 = sext i32 %169 to i64
  %171 = getelementptr inbounds i8, i8* %168, i64 %170
  store i8 0, i8* %171
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
  call void @BPD(i8* %31, i32 %32, i8* %33)
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
