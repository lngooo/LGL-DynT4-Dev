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
  br i1 %15, label %18, label %16
16:
  br label %138
18:
  %20 = load i8*, i8** %4
  %21 = load i32, i32* %8
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i8, i8* %20, i64 %22
  %24 = load i8, i8* %23
  %25 = zext i8 %24 to i32
  %26 = shl i32 %25, 16
  %27 = load i32, i32* %8
  %28 = add nsw i32 %27, 1
  %29 = load i32, i32* %5
  %30 = icmp slt i32 %28, %29
  br i1 %30, label %31, label %39
31:
  %32 = load i8*, i8** %4
  %33 = load i32, i32* %8
  %34 = add nsw i32 %33, 1
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i8, i8* %32, i64 %35
  %37 = load i8, i8* %36
  %38 = zext i8 %37 to i32
  br label %40
39:
  br label %40
40:
  %41 = phi i32 [ %38, %31 ], [ 0, %39 ]
  %42 = shl i32 %41, 8
  %43 = xor i32 %26, %42
  %44 = load i32, i32* %8
  %45 = add nsw i32 %44, 2
  %46 = load i32, i32* %5
  %47 = icmp slt i32 %45, %46
  br i1 %47, label %48, label %56
48:
  %49 = load i8*, i8** %4
  %50 = load i32, i32* %8
  %51 = add nsw i32 %50, 2
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i8, i8* %49, i64 %52
  %54 = load i8, i8* %53
  %55 = zext i8 %54 to i32
  br label %57
56:
  br label %57
57:
  %58 = phi i32 [ %55, %48 ], [ 0, %56 ]
  %59 = xor i32 %43, %58
  store i32 %59, i32* %9
  %60 = load i8*, i8** %7
  %61 = load i32, i32* %9
  %62 = lshr i32 %61, 18
  %63 = and i32 %62, 63
  %64 = zext i32 %63 to i64
  %65 = getelementptr inbounds i8, i8* %60, i64 %64
  %66 = load i8, i8* %65
  %67 = load i8*, i8** %6
  %68 = load i32, i32* %8
  %69 = sdiv i32 %68, 3
  %70 = mul nsw i32 %69, 4
  %71 = sext i32 %70 to i64
  %72 = getelementptr inbounds i8, i8* %67, i64 %71
  store i8 %66, i8* %72
  %73 = load i8*, i8** %7
  %74 = load i32, i32* %9
  %75 = lshr i32 %74, 12
  %76 = and i32 %75, 63
  %77 = zext i32 %76 to i64
  %78 = getelementptr inbounds i8, i8* %73, i64 %77
  %79 = load i8, i8* %78
  %80 = load i8*, i8** %6
  %81 = load i32, i32* %8
  %82 = sdiv i32 %81, 3
  %83 = mul nsw i32 %82, 4
  %84 = add nsw i32 %83, 1
  %85 = sext i32 %84 to i64
  %86 = getelementptr inbounds i8, i8* %80, i64 %85
  store i8 %79, i8* %86
  %87 = load i32, i32* %8
  %88 = add nsw i32 %87, 1
  %89 = load i32, i32* %5
  %90 = icmp slt i32 %88, %89
  br i1 %90, label %91, label %100
91:
  %92 = load i8*, i8** %7
  %93 = load i32, i32* %9
  %94 = lshr i32 %93, 6
  %95 = and i32 %94, 63
  %96 = zext i32 %95 to i64
  %97 = getelementptr inbounds i8, i8* %92, i64 %96
  %98 = load i8, i8* %97
  %99 = sext i8 %98 to i32
  br label %101
100:
  br label %101
101:
  %102 = phi i32 [ %99, %91 ], [ 61, %100 ]
  %103 = trunc i32 %102 to i8
  %104 = load i8*, i8** %6
  %105 = load i32, i32* %8
  %106 = sdiv i32 %105, 3
  %107 = mul nsw i32 %106, 4
  %108 = add nsw i32 %107, 2
  %109 = sext i32 %108 to i64
  %110 = getelementptr inbounds i8, i8* %104, i64 %109
  store i8 %103, i8* %110
  %111 = load i32, i32* %8
  %112 = add nsw i32 %111, 2
  %113 = load i32, i32* %5
  %114 = icmp slt i32 %112, %113
  br i1 %114, label %115, label %123
115:
  %116 = load i8*, i8** %7
  %117 = load i32, i32* %9
  %118 = and i32 %117, 63
  %119 = zext i32 %118 to i64
  %120 = getelementptr inbounds i8, i8* %116, i64 %119
  %121 = load i8, i8* %120
  %122 = sext i8 %121 to i32
  br label %124
123:
  br label %124
124:
  %125 = phi i32 [ %122, %115 ], [ 61, %123 ]
  %126 = trunc i32 %125 to i8
  %127 = load i8*, i8** %6
  %128 = load i32, i32* %8
  %129 = sdiv i32 %128, 3
  %130 = mul nsw i32 %129, 4
  %131 = add nsw i32 %130, 3
  %132 = sext i32 %131 to i64
  %133 = getelementptr inbounds i8, i8* %127, i64 %132
  store i8 %126, i8* %133
  br label %135
135:
  %136 = load i32, i32* %8
  %137 = add nsw i32 %136, 3
  store i32 %137, i32* %8
  br label %12
138:
  %139 = load i8*, i8** %6
  %140 = load i32, i32* %5
  %141 = add nsw i32 %140, 2
  %142 = sdiv i32 %141, 3
  %143 = mul nsw i32 %142, 4
  %144 = sext i32 %143 to i64
  %145 = getelementptr inbounds i8, i8* %139, i64 %144
  store i8 0, i8* %145
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
