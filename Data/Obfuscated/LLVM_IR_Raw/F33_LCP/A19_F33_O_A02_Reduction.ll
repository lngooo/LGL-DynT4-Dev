@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @c4(i8** %0, i32 %1, i8* %2) {
  %4 = alloca i8**
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i8** %0, i8*** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  %11 = load i32, i32* %5
  %12 = icmp sle i32 %11, 0
  br i1 %12, label %13, label %14
13:
  br label %117
14:
  store i32 0, i32* %7
  br label %16
16:
  %17 = load i8**, i8*** %4
  %18 = getelementptr inbounds i8*, i8** %17, i64 0
  %19 = load i8*, i8** %18
  %20 = load i32, i32* %7
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i8, i8* %19, i64 %21
  %23 = load i8, i8* %22
  %24 = icmp ne i8 %23, 0
  br i1 %24, label %25, label %39
25:
  %26 = load i8**, i8*** %4
  %27 = getelementptr inbounds i8*, i8** %26, i64 0
  %28 = load i8*, i8** %27
  %29 = load i32, i32* %7
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i8, i8* %28, i64 %30
  %32 = load i8, i8* %31
  %33 = load i8*, i8** %6
  %34 = load i32, i32* %7
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i8, i8* %33, i64 %35
  store i8 %32, i8* %36
  %37 = load i32, i32* %7
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* %7
  br label %16
39:
  %40 = load i8*, i8** %6
  %41 = load i32, i32* %7
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %40, i64 %42
  store i8 0, i8* %43
  store i32 1, i32* %8
  br label %45
45:
  %46 = load i32, i32* %8
  %47 = load i32, i32* %5
  %48 = icmp slt i32 %46, %47
  br i1 %48, label %50, label %49
49:
  store i32 4, i32* %9
  br label %113
50:
  store i32 0, i32* %10
  br label %52
52:
  %53 = load i8*, i8** %6
  %54 = load i32, i32* %10
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i8, i8* %53, i64 %55
  %57 = load i8, i8* %56
  %58 = sext i8 %57 to i32
  %59 = icmp ne i32 %58, 0
  br i1 %59, label %60, label %90
60:
  %61 = load i8**, i8*** %4
  %62 = load i32, i32* %8
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds i8*, i8** %61, i64 %63
  %65 = load i8*, i8** %64
  %66 = load i32, i32* %10
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds i8, i8* %65, i64 %67
  %69 = load i8, i8* %68
  %70 = sext i8 %69 to i32
  %71 = icmp ne i32 %70, 0
  br i1 %71, label %72, label %90
72:
  %73 = load i8*, i8** %6
  %74 = load i32, i32* %10
  %75 = sext i32 %74 to i64
  %76 = getelementptr inbounds i8, i8* %73, i64 %75
  %77 = load i8, i8* %76
  %78 = sext i8 %77 to i32
  %79 = load i8**, i8*** %4
  %80 = load i32, i32* %8
  %81 = sext i32 %80 to i64
  %82 = getelementptr inbounds i8*, i8** %79, i64 %81
  %83 = load i8*, i8** %82
  %84 = load i32, i32* %10
  %85 = sext i32 %84 to i64
  %86 = getelementptr inbounds i8, i8* %83, i64 %85
  %87 = load i8, i8* %86
  %88 = sext i8 %87 to i32
  %89 = icmp eq i32 %78, %88
  br label %90
90:
  %91 = phi i1 [ false, %60 ], [ false, %52 ], [ %89, %72 ]
  br i1 %91, label %92, label %95
92:
  %93 = load i32, i32* %10
  %94 = add nsw i32 %93, 1
  store i32 %94, i32* %10
  br label %52
95:
  %96 = load i8*, i8** %6
  %97 = load i32, i32* %10
  %98 = sext i32 %97 to i64
  %99 = getelementptr inbounds i8, i8* %96, i64 %98
  store i8 0, i8* %99
  %100 = load i8*, i8** %6
  %101 = getelementptr inbounds i8, i8* %100, i64 0
  %102 = load i8, i8* %101
  %103 = icmp ne i8 %102, 0
  br i1 %103, label %105, label %104
104:
  store i32 4, i32* %9
  br label %106
105:
  store i32 0, i32* %9
  br label %106
106:
  %108 = load i32, i32* %9
  switch i32 %108, label %113 [
    i32 0, label %109
  ]
109:
  br label %110
110:
  %111 = load i32, i32* %8
  %112 = add nsw i32 %111, 1
  store i32 %112, i32* %8
  br label %45
113:
  br label %115
115:
  br label %117
117:
  ret void
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i8**
  %8 = alloca [128 x i8]
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %9 = load i32, i32* %4
  %10 = icmp slt i32 %9, 2
  br i1 %10, label %11, label %12
11:
  store i32 0, i32* %3
  br label %29
12:
  %14 = load i32, i32* %4
  %15 = sub nsw i32 %14, 1
  store i32 %15, i32* %6
  %17 = load i8**, i8*** %5
  %18 = getelementptr inbounds i8*, i8** %17, i64 1
  store i8** %18, i8*** %7
  call void @llvm.memset.p0i8.i64(i8* align 16 %20, i8 0, i64 128, i1 false)
  %21 = load i8**, i8*** %7
  %22 = load i32, i32* %6
  %23 = getelementptr inbounds [128 x i8], [128 x i8]* %8, i64 0, i64 0
  call void @c4(i8** %21, i32 %22, i8* %23)
  %24 = getelementptr inbounds [128 x i8], [128 x i8]* %8, i64 0, i64 0
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i8* %24)
  store i32 0, i32* %3
  br label %29
29:
  %30 = load i32, i32* %3
  ret i32 %30
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare i32 @printf(i8*, ...)
