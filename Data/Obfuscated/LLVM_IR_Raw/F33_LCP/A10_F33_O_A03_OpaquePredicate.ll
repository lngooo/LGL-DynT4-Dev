@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @H(i8** %0, i32 %1, i8* %2) {
  %4 = alloca i8**
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca [128 x i8]
  %8 = alloca [128 x i8]
  %9 = alloca i32
  store i8** %0, i8*** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  %10 = load i32, i32* %5
  %11 = icmp sle i32 %10, 0
  br i1 %11, label %12, label %13
12:
  br label %95
13:
  %14 = load i32, i32* %5
  %15 = load i32, i32* %5
  %16 = mul nsw i32 %14, %15
  %17 = add nsw i32 %16, 1
  %18 = icmp sgt i32 %17, 0
  br i1 %18, label %19, label %95
19:
  %20 = load i32, i32* %5
  %21 = icmp eq i32 %20, 1
  br i1 %21, label %22, label %28
22:
  %23 = load i8*, i8** %6
  %24 = load i8**, i8*** %4
  %25 = getelementptr inbounds i8*, i8** %24, i64 0
  %26 = load i8*, i8** %25
  %27 = call i8* @strcpy(i8* %23, i8* %26)
  br label %95
28:
  call void @llvm.memset.p0i8.i64(i8* align 16 %30, i8 0, i64 128, i1 false)
  call void @llvm.memset.p0i8.i64(i8* align 16 %32, i8 0, i64 128, i1 false)
  %33 = load i8**, i8*** %4
  %34 = load i32, i32* %5
  %35 = sdiv i32 %34, 2
  %36 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 0
  call void @H(i8** %33, i32 %35, i8* %36)
  %37 = load i8**, i8*** %4
  %38 = load i32, i32* %5
  %39 = sdiv i32 %38, 2
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8*, i8** %37, i64 %40
  %42 = load i32, i32* %5
  %43 = load i32, i32* %5
  %44 = sdiv i32 %43, 2
  %45 = sub nsw i32 %42, %44
  %46 = getelementptr inbounds [128 x i8], [128 x i8]* %8, i64 0, i64 0
  call void @H(i8** %41, i32 %45, i8* %46)
  store i32 0, i32* %9
  br label %48
48:
  %49 = load i32, i32* %9
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 %50
  %52 = load i8, i8* %51
  %53 = sext i8 %52 to i32
  %54 = icmp ne i32 %53, 0
  br i1 %54, label %55, label %74
55:
  %56 = load i32, i32* %9
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds [128 x i8], [128 x i8]* %8, i64 0, i64 %57
  %59 = load i8, i8* %58
  %60 = sext i8 %59 to i32
  %61 = icmp ne i32 %60, 0
  br i1 %61, label %62, label %74
62:
  %63 = load i32, i32* %9
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 %64
  %66 = load i8, i8* %65
  %67 = sext i8 %66 to i32
  %68 = load i32, i32* %9
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds [128 x i8], [128 x i8]* %8, i64 0, i64 %69
  %71 = load i8, i8* %70
  %72 = sext i8 %71 to i32
  %73 = icmp eq i32 %67, %72
  br label %74
74:
  %75 = phi i1 [ false, %55 ], [ false, %48 ], [ %73, %62 ]
  br i1 %75, label %76, label %87
76:
  %77 = load i32, i32* %9
  %78 = sext i32 %77 to i64
  %79 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 %78
  %80 = load i8, i8* %79
  %81 = load i8*, i8** %6
  %82 = load i32, i32* %9
  %83 = sext i32 %82 to i64
  %84 = getelementptr inbounds i8, i8* %81, i64 %83
  store i8 %80, i8* %84
  %85 = load i32, i32* %9
  %86 = add nsw i32 %85, 1
  store i32 %86, i32* %9
  br label %48
87:
  %88 = load i8*, i8** %6
  %89 = load i32, i32* %9
  %90 = sext i32 %89 to i64
  %91 = getelementptr inbounds i8, i8* %88, i64 %90
  store i8 0, i8* %91
  br label %95
95:
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
  call void @H(i8** %21, i32 %22, i8* %23)
  %24 = getelementptr inbounds [128 x i8], [128 x i8]* %8, i64 0, i64 0
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i8* %24)
  store i32 0, i32* %3
  br label %29
29:
  %30 = load i32, i32* %3
  ret i32 %30
}
declare i32 @printf(i8*, ...)
