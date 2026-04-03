@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @Zc9(i8** %0, i32 %1, i8* %2) {
  %4 = alloca i8**
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca [128 x i8]
  %8 = alloca [128 x i8]
  %9 = alloca i32
  %10 = alloca i32
  store i8** %0, i8*** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  %11 = load i32, i32* %5
  %12 = icmp sle i32 %11, 0
  br i1 %12, label %13, label %14
13:
  br label %91
14:
  %15 = load i32, i32* %5
  %16 = icmp eq i32 %15, 1
  br i1 %16, label %17, label %23
17:
  %18 = load i8*, i8** %6
  %19 = load i8**, i8*** %4
  %20 = getelementptr inbounds i8*, i8** %19, i64 0
  %21 = load i8*, i8** %20
  %22 = call i8* @strcpy(i8* %18, i8* %21)
  br label %91
23:
  call void @llvm.memset.p0i8.i64(i8* align 16 %25, i8 0, i64 128, i1 false)
  call void @llvm.memset.p0i8.i64(i8* align 16 %27, i8 0, i64 128, i1 false)
  %29 = load i32, i32* %5
  %30 = sdiv i32 %29, 2
  store i32 %30, i32* %9
  %31 = load i8**, i8*** %4
  %32 = load i32, i32* %9
  %33 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 0
  call void @Zc9(i8** %31, i32 %32, i8* %33)
  %34 = load i8**, i8*** %4
  %35 = load i32, i32* %9
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i8*, i8** %34, i64 %36
  %38 = load i32, i32* %5
  %39 = load i32, i32* %9
  %40 = sub nsw i32 %38, %39
  %41 = getelementptr inbounds [128 x i8], [128 x i8]* %8, i64 0, i64 0
  call void @Zc9(i8** %37, i32 %40, i8* %41)
  store i32 0, i32* %10
  br label %43
43:
  %44 = load i32, i32* %10
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 %45
  %47 = load i8, i8* %46
  %48 = sext i8 %47 to i32
  %49 = icmp ne i32 %48, 0
  br i1 %49, label %50, label %69
50:
  %51 = load i32, i32* %10
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds [128 x i8], [128 x i8]* %8, i64 0, i64 %52
  %54 = load i8, i8* %53
  %55 = sext i8 %54 to i32
  %56 = icmp ne i32 %55, 0
  br i1 %56, label %57, label %69
57:
  %58 = load i32, i32* %10
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 %59
  %61 = load i8, i8* %60
  %62 = sext i8 %61 to i32
  %63 = load i32, i32* %10
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds [128 x i8], [128 x i8]* %8, i64 0, i64 %64
  %66 = load i8, i8* %65
  %67 = sext i8 %66 to i32
  %68 = icmp eq i32 %62, %67
  br label %69
69:
  %70 = phi i1 [ false, %50 ], [ false, %43 ], [ %68, %57 ]
  br i1 %70, label %71, label %82
71:
  %72 = load i32, i32* %10
  %73 = sext i32 %72 to i64
  %74 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 %73
  %75 = load i8, i8* %74
  %76 = load i8*, i8** %6
  %77 = load i32, i32* %10
  %78 = sext i32 %77 to i64
  %79 = getelementptr inbounds i8, i8* %76, i64 %78
  store i8 %75, i8* %79
  %80 = load i32, i32* %10
  %81 = add nsw i32 %80, 1
  store i32 %81, i32* %10
  br label %43
82:
  %83 = load i8*, i8** %6
  %84 = load i32, i32* %10
  %85 = sext i32 %84 to i64
  %86 = getelementptr inbounds i8, i8* %83, i64 %85
  store i8 0, i8* %86
  br label %91
91:
  ret void
}
declare i8* @strcpy(i8*, i8*)
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
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
  call void @Zc9(i8** %21, i32 %22, i8* %23)
  %24 = getelementptr inbounds [128 x i8], [128 x i8]* %8, i64 0, i64 0
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i8* %24)
  store i32 0, i32* %3
  br label %29
29:
  %30 = load i32, i32* %3
  ret i32 %30
}
declare i32 @printf(i8*, ...)
