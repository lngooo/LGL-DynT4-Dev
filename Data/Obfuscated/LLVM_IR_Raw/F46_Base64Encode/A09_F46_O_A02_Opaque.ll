@.str = constant [65 x i8] c"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/\00"
@.str.1 = constant [4 x i8] c"%s\0A\00"
define dso_local void @OJ(i8* %0, i32 %1, i8* %2) {
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i8*
  %8 = alloca i32
  store i8* %0, i8** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  %9 = load i32, i32* %5
  %10 = icmp sle i32 %9, 0
  br i1 %10, label %11, label %13
11:
  %12 = load i8*, i8** %6
  store i8 0, i8* %12
  br label %112
13:
  store i8* getelementptr inbounds ([65 x i8], [65 x i8]* @.str, i64 0, i64 0), i8** %7
  %15 = load i32, i32* %5
  %16 = load i32, i32* %5
  %17 = mul nsw i32 %15, %16
  %18 = load i32, i32* %5
  %19 = add nsw i32 %17, %18
  %20 = srem i32 %19, 2
  %21 = icmp eq i32 %20, 0
  br i1 %21, label %22, label %110
22:
  %24 = load i8*, i8** %4
  %25 = getelementptr inbounds i8, i8* %24, i64 0
  %26 = load i8, i8* %25
  %27 = zext i8 %26 to i32
  %28 = shl i32 %27, 16
  %29 = load i32, i32* %5
  %30 = icmp sgt i32 %29, 1
  br i1 %30, label %31, label %37
31:
  %32 = load i8*, i8** %4
  %33 = getelementptr inbounds i8, i8* %32, i64 1
  %34 = load i8, i8* %33
  %35 = zext i8 %34 to i32
  %36 = shl i32 %35, 8
  br label %38
37:
  br label %38
38:
  %39 = phi i32 [ %36, %31 ], [ 0, %37 ]
  %40 = or i32 %28, %39
  %41 = load i32, i32* %5
  %42 = icmp sgt i32 %41, 2
  br i1 %42, label %43, label %48
43:
  %44 = load i8*, i8** %4
  %45 = getelementptr inbounds i8, i8* %44, i64 2
  %46 = load i8, i8* %45
  %47 = zext i8 %46 to i32
  br label %49
48:
  br label %49
49:
  %50 = phi i32 [ %47, %43 ], [ 0, %48 ]
  %51 = or i32 %40, %50
  store i32 %51, i32* %8
  %52 = load i8*, i8** %7
  %53 = load i32, i32* %8
  %54 = lshr i32 %53, 18
  %55 = and i32 %54, 63
  %56 = zext i32 %55 to i64
  %57 = getelementptr inbounds i8, i8* %52, i64 %56
  %58 = load i8, i8* %57
  %59 = load i8*, i8** %6
  %60 = getelementptr inbounds i8, i8* %59, i64 0
  store i8 %58, i8* %60
  %61 = load i8*, i8** %7
  %62 = load i32, i32* %8
  %63 = lshr i32 %62, 12
  %64 = and i32 %63, 63
  %65 = zext i32 %64 to i64
  %66 = getelementptr inbounds i8, i8* %61, i64 %65
  %67 = load i8, i8* %66
  %68 = load i8*, i8** %6
  %69 = getelementptr inbounds i8, i8* %68, i64 1
  store i8 %67, i8* %69
  %70 = load i32, i32* %5
  %71 = icmp sgt i32 %70, 1
  br i1 %71, label %72, label %81
72:
  %73 = load i8*, i8** %7
  %74 = load i32, i32* %8
  %75 = lshr i32 %74, 6
  %76 = and i32 %75, 63
  %77 = zext i32 %76 to i64
  %78 = getelementptr inbounds i8, i8* %73, i64 %77
  %79 = load i8, i8* %78
  %80 = sext i8 %79 to i32
  br label %82
81:
  br label %82
82:
  %83 = phi i32 [ %80, %72 ], [ 61, %81 ]
  %84 = trunc i32 %83 to i8
  %85 = load i8*, i8** %6
  %86 = getelementptr inbounds i8, i8* %85, i64 2
  store i8 %84, i8* %86
  %87 = load i32, i32* %5
  %88 = icmp sgt i32 %87, 2
  br i1 %88, label %89, label %97
89:
  %90 = load i8*, i8** %7
  %91 = load i32, i32* %8
  %92 = and i32 %91, 63
  %93 = zext i32 %92 to i64
  %94 = getelementptr inbounds i8, i8* %90, i64 %93
  %95 = load i8, i8* %94
  %96 = sext i8 %95 to i32
  br label %98
97:
  br label %98
98:
  %99 = phi i32 [ %96, %89 ], [ 61, %97 ]
  %100 = trunc i32 %99 to i8
  %101 = load i8*, i8** %6
  %102 = getelementptr inbounds i8, i8* %101, i64 3
  store i8 %100, i8* %102
  %103 = load i8*, i8** %4
  %104 = getelementptr inbounds i8, i8* %103, i64 3
  %105 = load i32, i32* %5
  %106 = sub nsw i32 %105, 3
  %107 = load i8*, i8** %6
  %108 = getelementptr inbounds i8, i8* %107, i64 4
  call void @OJ(i8* %104, i32 %106, i8* %108)
  br label %110
110:
  br label %112
112:
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
  call void @OJ(i8* %31, i32 %32, i8* %33)
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
