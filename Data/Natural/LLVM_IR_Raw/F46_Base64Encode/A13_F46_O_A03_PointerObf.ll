@.str = constant [65 x i8] c"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/\00"
@.str.1 = constant [4 x i8] c"%s\0A\00"
define dso_local void @Base64Encode(i8* %0, i32 %1, i8* %2) {
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i8*
  %8 = alloca i8*
  %9 = alloca i8*
  %10 = alloca i32
  store i8* %0, i8** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  store i8* getelementptr inbounds ([65 x i8], [65 x i8]* @.str, i64 0, i64 0), i8** %7
  %13 = load i8*, i8** %4
  store i8* %13, i8** %8
  %15 = load i8*, i8** %6
  store i8* %15, i8** %9
  br label %16
16:
  %17 = load i8*, i8** %8
  %18 = load i8*, i8** %4
  %19 = load i32, i32* %5
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds i8, i8* %18, i64 %20
  %22 = icmp ult i8* %17, %21
  br i1 %22, label %23, label %121
23:
  %25 = load i8*, i8** %4
  %26 = load i32, i32* %5
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i8, i8* %25, i64 %27
  %29 = load i8*, i8** %8
  %30 = ptrtoint i8* %28 to i64
  %31 = ptrtoint i8* %29 to i64
  %32 = sub i64 %30, %31
  %33 = trunc i64 %32 to i32
  store i32 %33, i32* %10
  %34 = load i8*, i8** %7
  %35 = load i8*, i8** %8
  %36 = load i8, i8* %35
  %37 = zext i8 %36 to i32
  %38 = ashr i32 %37, 2
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8, i8* %34, i64 %39
  %41 = load i8, i8* %40
  %42 = load i8*, i8** %9
  %43 = getelementptr inbounds i8, i8* %42, i32 1
  store i8* %43, i8** %9
  store i8 %41, i8* %42
  %44 = load i8*, i8** %7
  %45 = load i8*, i8** %8
  %46 = load i8, i8* %45
  %47 = zext i8 %46 to i32
  %48 = and i32 %47, 3
  %49 = shl i32 %48, 4
  %50 = load i32, i32* %10
  %51 = icmp sgt i32 %50, 1
  br i1 %51, label %52, label %58
52:
  %53 = load i8*, i8** %8
  %54 = getelementptr inbounds i8, i8* %53, i64 1
  %55 = load i8, i8* %54
  %56 = zext i8 %55 to i32
  %57 = ashr i32 %56, 4
  br label %59
58:
  br label %59
59:
  %60 = phi i32 [ %57, %52 ], [ 0, %58 ]
  %61 = or i32 %49, %60
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i8, i8* %44, i64 %62
  %64 = load i8, i8* %63
  %65 = load i8*, i8** %9
  %66 = getelementptr inbounds i8, i8* %65, i32 1
  store i8* %66, i8** %9
  store i8 %64, i8* %65
  %67 = load i32, i32* %10
  %68 = icmp sgt i32 %67, 1
  br i1 %68, label %69, label %93
69:
  %70 = load i8*, i8** %7
  %71 = load i8*, i8** %8
  %72 = getelementptr inbounds i8, i8* %71, i64 1
  %73 = load i8, i8* %72
  %74 = zext i8 %73 to i32
  %75 = and i32 %74, 15
  %76 = shl i32 %75, 2
  %77 = load i32, i32* %10
  %78 = icmp sgt i32 %77, 2
  br i1 %78, label %79, label %85
79:
  %80 = load i8*, i8** %8
  %81 = getelementptr inbounds i8, i8* %80, i64 2
  %82 = load i8, i8* %81
  %83 = zext i8 %82 to i32
  %84 = ashr i32 %83, 6
  br label %86
85:
  br label %86
86:
  %87 = phi i32 [ %84, %79 ], [ 0, %85 ]
  %88 = or i32 %76, %87
  %89 = sext i32 %88 to i64
  %90 = getelementptr inbounds i8, i8* %70, i64 %89
  %91 = load i8, i8* %90
  %92 = sext i8 %91 to i32
  br label %94
93:
  br label %94
94:
  %95 = phi i32 [ %92, %86 ], [ 61, %93 ]
  %96 = trunc i32 %95 to i8
  %97 = load i8*, i8** %9
  %98 = getelementptr inbounds i8, i8* %97, i32 1
  store i8* %98, i8** %9
  store i8 %96, i8* %97
  %99 = load i32, i32* %10
  %100 = icmp sgt i32 %99, 2
  br i1 %100, label %101, label %112
101:
  %102 = load i8*, i8** %7
  %103 = load i8*, i8** %8
  %104 = getelementptr inbounds i8, i8* %103, i64 2
  %105 = load i8, i8* %104
  %106 = zext i8 %105 to i32
  %107 = and i32 %106, 63
  %108 = sext i32 %107 to i64
  %109 = getelementptr inbounds i8, i8* %102, i64 %108
  %110 = load i8, i8* %109
  %111 = sext i8 %110 to i32
  br label %113
112:
  br label %113
113:
  %114 = phi i32 [ %111, %101 ], [ 61, %112 ]
  %115 = trunc i32 %114 to i8
  %116 = load i8*, i8** %9
  %117 = getelementptr inbounds i8, i8* %116, i32 1
  store i8* %117, i8** %9
  store i8 %115, i8* %116
  %118 = load i8*, i8** %8
  %119 = getelementptr inbounds i8, i8* %118, i64 3
  store i8* %119, i8** %8
  br label %16
121:
  %122 = load i8*, i8** %9
  store i8 0, i8* %122
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
