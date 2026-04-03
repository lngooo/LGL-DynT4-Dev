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
  %13 = load i32, i32* %5
  %14 = icmp sle i32 %13, 0
  br i1 %14, label %15, label %17
15:
  %16 = load i8*, i8** %6
  store i8 0, i8* %16
  store i32 1, i32* %8
  br label %143
17:
  store i32 0, i32* %9
  store i32 0, i32* %10
  br label %20
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
  br i1 %32, label %33, label %42
33:
  %34 = load i8*, i8** %4
  %35 = load i32, i32* %9
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
  %62 = load i8*, i8** %7
  %63 = load i32, i32* %11
  %64 = lshr i32 %63, 18
  %65 = and i32 %64, 63
  %66 = zext i32 %65 to i64
  %67 = getelementptr inbounds i8, i8* %62, i64 %66
  %68 = load i8, i8* %67
  %69 = load i8*, i8** %6
  %70 = load i32, i32* %10
  %71 = add nsw i32 %70, 1
  store i32 %71, i32* %10
  %72 = sext i32 %70 to i64
  %73 = getelementptr inbounds i8, i8* %69, i64 %72
  store i8 %68, i8* %73
  %74 = load i8*, i8** %7
  %75 = load i32, i32* %11
  %76 = lshr i32 %75, 12
  %77 = and i32 %76, 63
  %78 = zext i32 %77 to i64
  %79 = getelementptr inbounds i8, i8* %74, i64 %78
  %80 = load i8, i8* %79
  %81 = load i8*, i8** %6
  %82 = load i32, i32* %10
  %83 = add nsw i32 %82, 1
  store i32 %83, i32* %10
  %84 = sext i32 %82 to i64
  %85 = getelementptr inbounds i8, i8* %81, i64 %84
  store i8 %80, i8* %85
  %86 = load i32, i32* %9
  %87 = add nsw i32 %86, 1
  %88 = load i32, i32* %5
  %89 = icmp slt i32 %87, %88
  br i1 %89, label %90, label %99
90:
  %91 = load i8*, i8** %7
  %92 = load i32, i32* %11
  %93 = lshr i32 %92, 6
  %94 = and i32 %93, 63
  %95 = zext i32 %94 to i64
  %96 = getelementptr inbounds i8, i8* %91, i64 %95
  %97 = load i8, i8* %96
  %98 = sext i8 %97 to i32
  br label %100
99:
  br label %100
100:
  %101 = phi i32 [ %98, %90 ], [ 61, %99 ]
  %102 = trunc i32 %101 to i8
  %103 = load i8*, i8** %6
  %104 = load i32, i32* %10
  %105 = add nsw i32 %104, 1
  store i32 %105, i32* %10
  %106 = sext i32 %104 to i64
  %107 = getelementptr inbounds i8, i8* %103, i64 %106
  store i8 %102, i8* %107
  %108 = load i32, i32* %9
  %109 = add nsw i32 %108, 2
  %110 = load i32, i32* %5
  %111 = icmp slt i32 %109, %110
  br i1 %111, label %112, label %120
112:
  %113 = load i8*, i8** %7
  %114 = load i32, i32* %11
  %115 = and i32 %114, 63
  %116 = zext i32 %115 to i64
  %117 = getelementptr inbounds i8, i8* %113, i64 %116
  %118 = load i8, i8* %117
  %119 = sext i8 %118 to i32
  br label %121
120:
  br label %121
121:
  %122 = phi i32 [ %119, %112 ], [ 61, %120 ]
  %123 = trunc i32 %122 to i8
  %124 = load i8*, i8** %6
  %125 = load i32, i32* %10
  %126 = add nsw i32 %125, 1
  store i32 %126, i32* %10
  %127 = sext i32 %125 to i64
  %128 = getelementptr inbounds i8, i8* %124, i64 %127
  store i8 %123, i8* %128
  %129 = load i32, i32* %9
  %130 = add nsw i32 %129, 3
  store i32 %130, i32* %9
  br label %132
132:
  %133 = load i32, i32* %9
  %134 = load i32, i32* %5
  %135 = icmp slt i32 %133, %134
  br i1 %135, label %20, label %136
136:
  %137 = load i8*, i8** %6
  %138 = load i32, i32* %10
  %139 = sext i32 %138 to i64
  %140 = getelementptr inbounds i8, i8* %137, i64 %139
  store i8 0, i8* %140
  store i32 0, i32* %8
  br label %143
143:
  %145 = load i32, i32* %8
  switch i32 %145, label %147 [
    i32 0, label %146
    i32 1, label %146
  ]
146:
  ret void
147:
  unreachable
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
