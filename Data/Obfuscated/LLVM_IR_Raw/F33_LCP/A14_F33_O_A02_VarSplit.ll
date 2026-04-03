@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @C(i8** %0, i32 %1, i8* %2) {
  %4 = alloca i8**
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca [128 x i8]
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i8** %0, i8*** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  %13 = load i32, i32* %5
  %14 = icmp sle i32 %13, 0
  br i1 %14, label %15, label %16
15:
  br label %102
16:
  store i32 0, i32* %7
  store i32 0, i32* %8
  %20 = getelementptr inbounds [128 x i8], [128 x i8]* %9, i64 0, i64 0
  %21 = load i8**, i8*** %4
  %22 = getelementptr inbounds i8*, i8** %21, i64 0
  %23 = load i8*, i8** %22
  %24 = call i8* @strcpy(i8* %20, i8* %23)
  store i32 1, i32* %10
  br label %26
26:
  %27 = load i32, i32* %10
  %28 = load i32, i32* %5
  %29 = icmp slt i32 %27, %28
  br i1 %29, label %32, label %30
30:
  br label %95
32:
  store i32 0, i32* %11
  store i32 0, i32* %12
  br label %35
35:
  %36 = load i32, i32* %11
  %37 = load i32, i32* %12
  %38 = add nsw i32 %36, %37
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds [128 x i8], [128 x i8]* %9, i64 0, i64 %39
  %41 = load i8, i8* %40
  %42 = sext i8 %41 to i32
  %43 = icmp ne i32 %42, 0
  br i1 %43, label %44, label %79
44:
  %45 = load i8**, i8*** %4
  %46 = load i32, i32* %10
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i8*, i8** %45, i64 %47
  %49 = load i8*, i8** %48
  %50 = load i32, i32* %11
  %51 = load i32, i32* %12
  %52 = add nsw i32 %50, %51
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds i8, i8* %49, i64 %53
  %55 = load i8, i8* %54
  %56 = sext i8 %55 to i32
  %57 = icmp ne i32 %56, 0
  br i1 %57, label %58, label %79
58:
  %59 = load i32, i32* %11
  %60 = load i32, i32* %12
  %61 = add nsw i32 %59, %60
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds [128 x i8], [128 x i8]* %9, i64 0, i64 %62
  %64 = load i8, i8* %63
  %65 = sext i8 %64 to i32
  %66 = load i8**, i8*** %4
  %67 = load i32, i32* %10
  %68 = sext i32 %67 to i64
  %69 = getelementptr inbounds i8*, i8** %66, i64 %68
  %70 = load i8*, i8** %69
  %71 = load i32, i32* %11
  %72 = load i32, i32* %12
  %73 = add nsw i32 %71, %72
  %74 = sext i32 %73 to i64
  %75 = getelementptr inbounds i8, i8* %70, i64 %74
  %76 = load i8, i8* %75
  %77 = sext i8 %76 to i32
  %78 = icmp eq i32 %65, %77
  br label %79
79:
  %80 = phi i1 [ false, %44 ], [ false, %35 ], [ %78, %58 ]
  br i1 %80, label %81, label %84
81:
  %82 = load i32, i32* %11
  %83 = add nsw i32 %82, 1
  store i32 %83, i32* %11
  br label %35
84:
  %85 = load i32, i32* %11
  %86 = load i32, i32* %12
  %87 = add nsw i32 %85, %86
  %88 = sext i32 %87 to i64
  %89 = getelementptr inbounds [128 x i8], [128 x i8]* %9, i64 0, i64 %88
  store i8 0, i8* %89
  br label %92
92:
  %93 = load i32, i32* %10
  %94 = add nsw i32 %93, 1
  store i32 %94, i32* %10
  br label %26
95:
  %96 = load i8*, i8** %6
  %97 = getelementptr inbounds [128 x i8], [128 x i8]* %9, i64 0, i64 0
  %98 = call i8* @strcpy(i8* %96, i8* %97)
  br label %102
102:
  ret void
}
declare i8* @strcpy(i8*, i8*)
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
  call void @C(i8** %21, i32 %22, i8* %23)
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
