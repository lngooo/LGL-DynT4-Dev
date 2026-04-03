%struct.anon = type { i24 }
@.str = constant [65 x i8] c"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/\00"
@.str.1 = constant [4 x i8] c"%s\0A\00"
define dso_local void @Base64Encode(i8* %0, i32 %1, i8* %2) {
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i8*
  %8 = alloca %struct.anon
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  store i8* %0, i8** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  store i8* getelementptr inbounds ([65 x i8], [65 x i8]* @.str, i64 0, i64 0), i8** %7
  store i32 0, i32* %9
  store i32 0, i32* %10
  br label %16
16:
  %17 = load i32, i32* %9
  %18 = load i32, i32* %5
  %19 = icmp slt i32 %17, %18
  br i1 %19, label %20, label %170
20:
  %22 = load i8*, i8** %4
  %23 = load i32, i32* %9
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i8, i8* %22, i64 %24
  %26 = load i8, i8* %25
  %27 = zext i8 %26 to i32
  %28 = shl i32 %27, 16
  %29 = load i32, i32* %9
  %30 = add nsw i32 %29, 1
  %31 = load i32, i32* %5
  %32 = icmp slt i32 %30, %31
  br i1 %32, label %33, label %41
33:
  %34 = load i8*, i8** %4
  %35 = load i32, i32* %9
  %36 = add nsw i32 %35, 1
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i8, i8* %34, i64 %37
  %39 = load i8, i8* %38
  %40 = zext i8 %39 to i32
  br label %42
41:
  br label %42
42:
  %43 = phi i32 [ %40, %33 ], [ 0, %41 ]
  %44 = shl i32 %43, 8
  %45 = or i32 %28, %44
  %46 = load i32, i32* %9
  %47 = add nsw i32 %46, 2
  %48 = load i32, i32* %5
  %49 = icmp slt i32 %47, %48
  br i1 %49, label %50, label %58
50:
  %51 = load i8*, i8** %4
  %52 = load i32, i32* %9
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
  store i32 %61, i32* %11
  %62 = load i32, i32* %11
  %63 = lshr i32 %62, 18
  %64 = and i32 %63, 63
  %66 = load i32, i32* %65
  %67 = and i32 %64, 63
  %68 = and i32 %66, -64
  %69 = or i32 %68, %67
  store i32 %69, i32* %65
  %70 = load i32, i32* %11
  %71 = lshr i32 %70, 12
  %72 = and i32 %71, 63
  %74 = load i32, i32* %73
  %75 = and i32 %72, 63
  %76 = shl i32 %75, 6
  %77 = and i32 %74, -4033
  %78 = or i32 %77, %76
  store i32 %78, i32* %73
  %79 = load i32, i32* %11
  %80 = lshr i32 %79, 6
  %81 = and i32 %80, 63
  %83 = load i32, i32* %82
  %84 = and i32 %81, 63
  %85 = shl i32 %84, 12
  %86 = and i32 %83, -258049
  %87 = or i32 %86, %85
  store i32 %87, i32* %82
  %88 = load i32, i32* %11
  %89 = and i32 %88, 63
  %91 = load i32, i32* %90
  %92 = and i32 %89, 63
  %93 = shl i32 %92, 18
  %94 = and i32 %91, -16515073
  %95 = or i32 %94, %93
  store i32 %95, i32* %90
  %96 = load i8*, i8** %7
  %98 = load i32, i32* %97
  %99 = and i32 %98, 63
  %100 = zext i32 %99 to i64
  %101 = getelementptr inbounds i8, i8* %96, i64 %100
  %102 = load i8, i8* %101
  %103 = load i8*, i8** %6
  %104 = load i32, i32* %10
  %105 = add nsw i32 %104, 1
  store i32 %105, i32* %10
  %106 = sext i32 %104 to i64
  %107 = getelementptr inbounds i8, i8* %103, i64 %106
  store i8 %102, i8* %107
  %108 = load i8*, i8** %7
  %110 = load i32, i32* %109
  %111 = lshr i32 %110, 6
  %112 = and i32 %111, 63
  %113 = zext i32 %112 to i64
  %114 = getelementptr inbounds i8, i8* %108, i64 %113
  %115 = load i8, i8* %114
  %116 = load i8*, i8** %6
  %117 = load i32, i32* %10
  %118 = add nsw i32 %117, 1
  store i32 %118, i32* %10
  %119 = sext i32 %117 to i64
  %120 = getelementptr inbounds i8, i8* %116, i64 %119
  store i8 %115, i8* %120
  %121 = load i32, i32* %9
  %122 = add nsw i32 %121, 1
  %123 = load i32, i32* %5
  %124 = icmp slt i32 %122, %123
  br i1 %124, label %125, label %135
125:
  %126 = load i8*, i8** %7
  %128 = load i32, i32* %127
  %129 = lshr i32 %128, 12
  %130 = and i32 %129, 63
  %131 = zext i32 %130 to i64
  %132 = getelementptr inbounds i8, i8* %126, i64 %131
  %133 = load i8, i8* %132
  %134 = sext i8 %133 to i32
  br label %136
135:
  br label %136
136:
  %137 = phi i32 [ %134, %125 ], [ 61, %135 ]
  %138 = trunc i32 %137 to i8
  %139 = load i8*, i8** %6
  %140 = load i32, i32* %10
  %141 = add nsw i32 %140, 1
  store i32 %141, i32* %10
  %142 = sext i32 %140 to i64
  %143 = getelementptr inbounds i8, i8* %139, i64 %142
  store i8 %138, i8* %143
  %144 = load i32, i32* %9
  %145 = add nsw i32 %144, 2
  %146 = load i32, i32* %5
  %147 = icmp slt i32 %145, %146
  br i1 %147, label %148, label %158
148:
  %149 = load i8*, i8** %7
  %151 = load i32, i32* %150
  %152 = lshr i32 %151, 18
  %153 = and i32 %152, 63
  %154 = zext i32 %153 to i64
  %155 = getelementptr inbounds i8, i8* %149, i64 %154
  %156 = load i8, i8* %155
  %157 = sext i8 %156 to i32
  br label %159
158:
  br label %159
159:
  %160 = phi i32 [ %157, %148 ], [ 61, %158 ]
  %161 = trunc i32 %160 to i8
  %162 = load i8*, i8** %6
  %163 = load i32, i32* %10
  %164 = add nsw i32 %163, 1
  store i32 %164, i32* %10
  %165 = sext i32 %163 to i64
  %166 = getelementptr inbounds i8, i8* %162, i64 %165
  store i8 %161, i8* %166
  %167 = load i32, i32* %9
  %168 = add nsw i32 %167, 3
  store i32 %168, i32* %9
  br label %16
170:
  %171 = load i8*, i8** %6
  %172 = load i32, i32* %10
  %173 = sext i32 %172 to i64
  %174 = getelementptr inbounds i8, i8* %171, i64 %173
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
