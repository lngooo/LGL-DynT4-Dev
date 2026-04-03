@.str = constant [2 x i8] c" \00"
@.str.1 = constant [4 x i8] c"%s\0A\00"
define dso_local void @ykEL(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i8* %0, i8** %2
  %10 = load i8*, i8** %2
  %11 = call i64 @strlen(i8* %10)
  %12 = trunc i64 %11 to i32
  store i32 %12, i32* %3
  %14 = load i32, i32* %3
  %15 = add nsw i32 %14, 1
  %16 = sext i32 %15 to i64
  %17 = call noalias i8* @calloc(i64 %16, i64 1)
  store i8* %17, i8** %4
  store i32 0, i32* %5
  %20 = load i32, i32* %3
  %21 = sub nsw i32 %20, 1
  store i32 %21, i32* %6
  br label %22
22:
  %23 = load i32, i32* %6
  %24 = icmp sge i32 %23, 0
  br i1 %24, label %27, label %25
25:
  br label %80
27:
  %28 = load i8*, i8** %2
  %29 = load i32, i32* %6
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i8, i8* %28, i64 %30
  %32 = load i8, i8* %31
  %33 = sext i8 %32 to i32
  %34 = icmp eq i32 %33, 32
  br i1 %34, label %35, label %76
35:
  %37 = load i32, i32* %6
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* %7
  br label %39
39:
  %40 = load i8*, i8** %2
  %41 = load i32, i32* %7
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %40, i64 %42
  %44 = load i8, i8* %43
  %45 = sext i8 %44 to i32
  %46 = icmp ne i32 %45, 32
  br i1 %46, label %47, label %55
47:
  %48 = load i8*, i8** %2
  %49 = load i32, i32* %7
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i8, i8* %48, i64 %50
  %52 = load i8, i8* %51
  %53 = sext i8 %52 to i32
  %54 = icmp ne i32 %53, 0
  br label %55
55:
  %56 = phi i1 [ false, %39 ], [ %54, %47 ]
  br i1 %56, label %57, label %69
57:
  %58 = load i8*, i8** %2
  %59 = load i32, i32* %7
  %60 = add nsw i32 %59, 1
  store i32 %60, i32* %7
  %61 = sext i32 %59 to i64
  %62 = getelementptr inbounds i8, i8* %58, i64 %61
  %63 = load i8, i8* %62
  %64 = load i8*, i8** %4
  %65 = load i32, i32* %5
  %66 = add nsw i32 %65, 1
  store i32 %66, i32* %5
  %67 = sext i32 %65 to i64
  %68 = getelementptr inbounds i8, i8* %64, i64 %67
  store i8 %63, i8* %68
  br label %39
69:
  %70 = load i8*, i8** %4
  %71 = load i32, i32* %5
  %72 = add nsw i32 %71, 1
  store i32 %72, i32* %5
  %73 = sext i32 %71 to i64
  %74 = getelementptr inbounds i8, i8* %70, i64 %73
  store i8 32, i8* %74
  br label %76
76:
  br label %77
77:
  %78 = load i32, i32* %6
  %79 = add nsw i32 %78, -1
  store i32 %79, i32* %6
  br label %22
80:
  store i32 0, i32* %8
  br label %82
82:
  %83 = load i8*, i8** %2
  %84 = load i32, i32* %8
  %85 = sext i32 %84 to i64
  %86 = getelementptr inbounds i8, i8* %83, i64 %85
  %87 = load i8, i8* %86
  %88 = sext i8 %87 to i32
  %89 = icmp ne i32 %88, 32
  br i1 %89, label %90, label %98
90:
  %91 = load i8*, i8** %2
  %92 = load i32, i32* %8
  %93 = sext i32 %92 to i64
  %94 = getelementptr inbounds i8, i8* %91, i64 %93
  %95 = load i8, i8* %94
  %96 = sext i8 %95 to i32
  %97 = icmp ne i32 %96, 0
  br label %98
98:
  %99 = phi i1 [ false, %82 ], [ %97, %90 ]
  br i1 %99, label %100, label %112
100:
  %101 = load i8*, i8** %2
  %102 = load i32, i32* %8
  %103 = add nsw i32 %102, 1
  store i32 %103, i32* %8
  %104 = sext i32 %102 to i64
  %105 = getelementptr inbounds i8, i8* %101, i64 %104
  %106 = load i8, i8* %105
  %107 = load i8*, i8** %4
  %108 = load i32, i32* %5
  %109 = add nsw i32 %108, 1
  store i32 %109, i32* %5
  %110 = sext i32 %108 to i64
  %111 = getelementptr inbounds i8, i8* %107, i64 %110
  store i8 %106, i8* %111
  br label %82
112:
  %113 = load i8*, i8** %4
  %114 = load i32, i32* %5
  %115 = sext i32 %114 to i64
  %116 = getelementptr inbounds i8, i8* %113, i64 %115
  store i8 0, i8* %116
  %117 = load i8*, i8** %2
  %118 = load i8*, i8** %4
  %119 = call i8* @strcpy(i8* %117, i8* %118)
  %120 = load i8*, i8** %4
  call void @free(i8* %120)
  ret void
}
declare i64 @strlen(i8*)
declare noalias i8* @calloc(i64, i64)
declare i8* @strcpy(i8*, i8*)
declare void @free(i8*)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca [512 x i8]
  %7 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %8 = load i32, i32* %4
  %9 = icmp slt i32 %8, 2
  br i1 %9, label %10, label %11
10:
  store i32 0, i32* %3
  br label %45
11:
  call void @llvm.memset.p0i8.i64(i8* align 16 %13, i8 0, i64 512, i1 false)
  store i32 1, i32* %7
  br label %15
15:
  %16 = load i32, i32* %7
  %17 = load i32, i32* %4
  %18 = icmp slt i32 %16, %17
  br i1 %18, label %21, label %19
19:
  br label %40
21:
  %22 = getelementptr inbounds [512 x i8], [512 x i8]* %6, i64 0, i64 0
  %23 = load i8**, i8*** %5
  %24 = load i32, i32* %7
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i8*, i8** %23, i64 %25
  %27 = load i8*, i8** %26
  %28 = call i8* @strcat(i8* %22, i8* %27)
  %29 = load i32, i32* %7
  %30 = load i32, i32* %4
  %31 = sub nsw i32 %30, 1
  %32 = icmp slt i32 %29, %31
  br i1 %32, label %33, label %36
33:
  %34 = getelementptr inbounds [512 x i8], [512 x i8]* %6, i64 0, i64 0
  %35 = call i8* @strcat(i8* %34, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  br label %36
36:
  br label %37
37:
  %38 = load i32, i32* %7
  %39 = add nsw i32 %38, 1
  store i32 %39, i32* %7
  br label %15
40:
  %41 = getelementptr inbounds [512 x i8], [512 x i8]* %6, i64 0, i64 0
  call void @ykEL(i8* %41)
  %42 = getelementptr inbounds [512 x i8], [512 x i8]* %6, i64 0, i64 0
  %43 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i8* %42)
  store i32 0, i32* %3
  br label %45
45:
  %46 = load i32, i32* %3
  ret i32 %46
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare i8* @strcat(i8*, i8*)
declare i32 @printf(i8*, ...)
