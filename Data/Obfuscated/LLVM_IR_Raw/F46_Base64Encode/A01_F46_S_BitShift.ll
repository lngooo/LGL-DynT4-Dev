@__const.rc.c = constant [65 x i8] c"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/\00"
@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @rc(i8* %0, i32 %1, i8* %2) {
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca [65 x i8]
  %8 = alloca i32
  %9 = alloca i32
  store i8* %0, i8** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 16 %11, i8* align 16 getelementptr inbounds ([65 x i8], [65 x i8]* @__const.rc.c, i32 0, i32 0), i64 65, i1 false)
  store i32 0, i32* %8
  store i32 0, i32* %9
  br label %14
14:
  %15 = load i32, i32* %8
  %16 = load i32, i32* %5
  %17 = icmp slt i32 %15, %16
  br i1 %17, label %18, label %141
18:
  %19 = load i8*, i8** %4
  %20 = load i32, i32* %8
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i8, i8* %19, i64 %21
  %23 = load i8, i8* %22
  %24 = zext i8 %23 to i32
  %25 = ashr i32 %24, 2
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds [65 x i8], [65 x i8]* %7, i64 0, i64 %26
  %28 = load i8, i8* %27
  %29 = load i8*, i8** %6
  %30 = load i32, i32* %9
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i8, i8* %29, i64 %31
  store i8 %28, i8* %32
  %33 = load i8*, i8** %4
  %34 = load i32, i32* %8
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i8, i8* %33, i64 %35
  %37 = load i8, i8* %36
  %38 = zext i8 %37 to i32
  %39 = and i32 %38, 3
  %40 = shl i32 %39, 4
  %41 = load i32, i32* %8
  %42 = add nsw i32 %41, 1
  %43 = load i32, i32* %5
  %44 = icmp slt i32 %42, %43
  br i1 %44, label %45, label %54
45:
  %46 = load i8*, i8** %4
  %47 = load i32, i32* %8
  %48 = add nsw i32 %47, 1
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds i8, i8* %46, i64 %49
  %51 = load i8, i8* %50
  %52 = zext i8 %51 to i32
  %53 = ashr i32 %52, 4
  br label %55
54:
  br label %55
55:
  %56 = phi i32 [ %53, %45 ], [ 0, %54 ]
  %57 = or i32 %40, %56
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds [65 x i8], [65 x i8]* %7, i64 0, i64 %58
  %60 = load i8, i8* %59
  %61 = load i8*, i8** %6
  %62 = load i32, i32* %9
  %63 = add nsw i32 %62, 1
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i8, i8* %61, i64 %64
  store i8 %60, i8* %65
  %66 = load i32, i32* %8
  %67 = add nsw i32 %66, 1
  %68 = load i32, i32* %5
  %69 = icmp slt i32 %67, %68
  br i1 %69, label %70, label %101
70:
  %71 = load i8*, i8** %4
  %72 = load i32, i32* %8
  %73 = add nsw i32 %72, 1
  %74 = sext i32 %73 to i64
  %75 = getelementptr inbounds i8, i8* %71, i64 %74
  %76 = load i8, i8* %75
  %77 = zext i8 %76 to i32
  %78 = and i32 %77, 15
  %79 = shl i32 %78, 2
  %80 = load i32, i32* %8
  %81 = add nsw i32 %80, 2
  %82 = load i32, i32* %5
  %83 = icmp slt i32 %81, %82
  br i1 %83, label %84, label %93
84:
  %85 = load i8*, i8** %4
  %86 = load i32, i32* %8
  %87 = add nsw i32 %86, 2
  %88 = sext i32 %87 to i64
  %89 = getelementptr inbounds i8, i8* %85, i64 %88
  %90 = load i8, i8* %89
  %91 = zext i8 %90 to i32
  %92 = ashr i32 %91, 6
  br label %94
93:
  br label %94
94:
  %95 = phi i32 [ %92, %84 ], [ 0, %93 ]
  %96 = or i32 %79, %95
  %97 = sext i32 %96 to i64
  %98 = getelementptr inbounds [65 x i8], [65 x i8]* %7, i64 0, i64 %97
  %99 = load i8, i8* %98
  %100 = sext i8 %99 to i32
  br label %102
101:
  br label %102
102:
  %103 = phi i32 [ %100, %94 ], [ 61, %101 ]
  %104 = trunc i32 %103 to i8
  %105 = load i8*, i8** %6
  %106 = load i32, i32* %9
  %107 = add nsw i32 %106, 2
  %108 = sext i32 %107 to i64
  %109 = getelementptr inbounds i8, i8* %105, i64 %108
  store i8 %104, i8* %109
  %110 = load i32, i32* %8
  %111 = add nsw i32 %110, 2
  %112 = load i32, i32* %5
  %113 = icmp slt i32 %111, %112
  br i1 %113, label %114, label %127
114:
  %115 = load i8*, i8** %4
  %116 = load i32, i32* %8
  %117 = add nsw i32 %116, 2
  %118 = sext i32 %117 to i64
  %119 = getelementptr inbounds i8, i8* %115, i64 %118
  %120 = load i8, i8* %119
  %121 = zext i8 %120 to i32
  %122 = and i32 %121, 63
  %123 = sext i32 %122 to i64
  %124 = getelementptr inbounds [65 x i8], [65 x i8]* %7, i64 0, i64 %123
  %125 = load i8, i8* %124
  %126 = sext i8 %125 to i32
  br label %128
127:
  br label %128
128:
  %129 = phi i32 [ %126, %114 ], [ 61, %127 ]
  %130 = trunc i32 %129 to i8
  %131 = load i8*, i8** %6
  %132 = load i32, i32* %9
  %133 = add nsw i32 %132, 3
  %134 = sext i32 %133 to i64
  %135 = getelementptr inbounds i8, i8* %131, i64 %134
  store i8 %130, i8* %135
  br label %136
136:
  %137 = load i32, i32* %8
  %138 = add nsw i32 %137, 3
  store i32 %138, i32* %8
  %139 = load i32, i32* %9
  %140 = add nsw i32 %139, 4
  store i32 %140, i32* %9
  br label %14
141:
  %142 = load i8*, i8** %6
  %143 = load i32, i32* %9
  %144 = sext i32 %143 to i64
  %145 = getelementptr inbounds i8, i8* %142, i64 %144
  store i8 0, i8* %145
  ret void
}
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
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
  call void @rc(i8* %31, i32 %32, i8* %33)
  %34 = getelementptr inbounds [400 x i8], [400 x i8]* %8, i64 0, i64 0
  %35 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i8* %34)
  store i32 0, i32* %3
  br label %39
39:
  %40 = load i32, i32* %3
  ret i32 %40
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare i32 @printf(i8*, ...)
