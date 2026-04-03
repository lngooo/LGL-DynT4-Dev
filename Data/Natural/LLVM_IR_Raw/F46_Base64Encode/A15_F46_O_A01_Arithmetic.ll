@.str = constant [65 x i8] c"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/\00"
@.str.1 = constant [4 x i8] c"%s\0A\00"
define dso_local void @Base64Encode(i8* %0, i32 %1, i8* %2) {
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i8*
  %8 = alloca i32
  %9 = alloca i32
  store i8* %0, i8** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  store i8* getelementptr inbounds ([65 x i8], [65 x i8]* @.str, i64 0, i64 0), i8** %7
  store i32 0, i32* %8
  br label %12
12:
  %13 = load i32, i32* %8
  %14 = load i32, i32* %5
  %15 = icmp slt i32 %13, %14
  br i1 %15, label %16, label %135
16:
  %18 = load i8*, i8** %4
  %19 = load i32, i32* %8
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds i8, i8* %18, i64 %20
  %22 = load i8, i8* %21
  %23 = zext i8 %22 to i32
  %24 = mul nsw i32 %23, 65536
  %25 = load i32, i32* %8
  %26 = add nsw i32 %25, 1
  %27 = load i32, i32* %5
  %28 = icmp slt i32 %26, %27
  br i1 %28, label %29, label %37
29:
  %30 = load i8*, i8** %4
  %31 = load i32, i32* %8
  %32 = add nsw i32 %31, 1
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8, i8* %30, i64 %33
  %35 = load i8, i8* %34
  %36 = zext i8 %35 to i32
  br label %38
37:
  br label %38
38:
  %39 = phi i32 [ %36, %29 ], [ 0, %37 ]
  %40 = mul nsw i32 %39, 256
  %41 = add nsw i32 %24, %40
  %42 = load i32, i32* %8
  %43 = add nsw i32 %42, 2
  %44 = load i32, i32* %5
  %45 = icmp slt i32 %43, %44
  br i1 %45, label %46, label %54
46:
  %47 = load i8*, i8** %4
  %48 = load i32, i32* %8
  %49 = add nsw i32 %48, 2
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i8, i8* %47, i64 %50
  %52 = load i8, i8* %51
  %53 = zext i8 %52 to i32
  br label %55
54:
  br label %55
55:
  %56 = phi i32 [ %53, %46 ], [ 0, %54 ]
  %57 = add nsw i32 %41, %56
  store i32 %57, i32* %9
  %58 = load i8*, i8** %7
  %59 = load i32, i32* %9
  %60 = sdiv i32 %59, 262144
  %61 = srem i32 %60, 64
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i8, i8* %58, i64 %62
  %64 = load i8, i8* %63
  %65 = load i8*, i8** %6
  %66 = load i32, i32* %8
  %67 = sdiv i32 %66, 3
  %68 = mul nsw i32 %67, 4
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i8, i8* %65, i64 %69
  store i8 %64, i8* %70
  %71 = load i8*, i8** %7
  %72 = load i32, i32* %9
  %73 = sdiv i32 %72, 4096
  %74 = srem i32 %73, 64
  %75 = sext i32 %74 to i64
  %76 = getelementptr inbounds i8, i8* %71, i64 %75
  %77 = load i8, i8* %76
  %78 = load i8*, i8** %6
  %79 = load i32, i32* %8
  %80 = sdiv i32 %79, 3
  %81 = mul nsw i32 %80, 4
  %82 = add nsw i32 %81, 1
  %83 = sext i32 %82 to i64
  %84 = getelementptr inbounds i8, i8* %78, i64 %83
  store i8 %77, i8* %84
  %85 = load i32, i32* %8
  %86 = add nsw i32 %85, 1
  %87 = load i32, i32* %5
  %88 = icmp slt i32 %86, %87
  br i1 %88, label %89, label %98
89:
  %90 = load i8*, i8** %7
  %91 = load i32, i32* %9
  %92 = sdiv i32 %91, 64
  %93 = srem i32 %92, 64
  %94 = sext i32 %93 to i64
  %95 = getelementptr inbounds i8, i8* %90, i64 %94
  %96 = load i8, i8* %95
  %97 = sext i8 %96 to i32
  br label %99
98:
  br label %99
99:
  %100 = phi i32 [ %97, %89 ], [ 61, %98 ]
  %101 = trunc i32 %100 to i8
  %102 = load i8*, i8** %6
  %103 = load i32, i32* %8
  %104 = sdiv i32 %103, 3
  %105 = mul nsw i32 %104, 4
  %106 = add nsw i32 %105, 2
  %107 = sext i32 %106 to i64
  %108 = getelementptr inbounds i8, i8* %102, i64 %107
  store i8 %101, i8* %108
  %109 = load i32, i32* %8
  %110 = add nsw i32 %109, 2
  %111 = load i32, i32* %5
  %112 = icmp slt i32 %110, %111
  br i1 %112, label %113, label %121
113:
  %114 = load i8*, i8** %7
  %115 = load i32, i32* %9
  %116 = srem i32 %115, 64
  %117 = sext i32 %116 to i64
  %118 = getelementptr inbounds i8, i8* %114, i64 %117
  %119 = load i8, i8* %118
  %120 = sext i8 %119 to i32
  br label %122
121:
  br label %122
122:
  %123 = phi i32 [ %120, %113 ], [ 61, %121 ]
  %124 = trunc i32 %123 to i8
  %125 = load i8*, i8** %6
  %126 = load i32, i32* %8
  %127 = sdiv i32 %126, 3
  %128 = mul nsw i32 %127, 4
  %129 = add nsw i32 %128, 3
  %130 = sext i32 %129 to i64
  %131 = getelementptr inbounds i8, i8* %125, i64 %130
  store i8 %124, i8* %131
  %132 = load i32, i32* %8
  %133 = add nsw i32 %132, 3
  store i32 %133, i32* %8
  br label %12
135:
  %136 = load i8*, i8** %6
  %137 = load i32, i32* %5
  %138 = add nsw i32 %137, 2
  %139 = sdiv i32 %138, 3
  %140 = mul nsw i32 %139, 4
  %141 = sext i32 %140 to i64
  %142 = getelementptr inbounds i8, i8* %136, i64 %141
  store i8 0, i8* %142
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
