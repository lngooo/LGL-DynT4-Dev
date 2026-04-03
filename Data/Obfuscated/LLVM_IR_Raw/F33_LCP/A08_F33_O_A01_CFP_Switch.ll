@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @Vt(i8** %0, i32 %1, i8* %2) {
  %4 = alloca i8**
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i8** %0, i8*** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  store i32 0, i32* %7
  store i32 0, i32* %8
  br label %12
12:
  %13 = load i32, i32* %7
  %14 = icmp ne i32 %13, 3
  br i1 %14, label %15, label %87
15:
  %16 = load i32, i32* %7
  switch i32 %16, label %86 [
    i32 0, label %17
    i32 1, label %34
  ]
17:
  %18 = load i32, i32* %5
  %19 = icmp sgt i32 %18, 0
  br i1 %19, label %20, label %30
20:
  %21 = load i8**, i8*** %4
  %22 = getelementptr inbounds i8*, i8** %21, i64 0
  %23 = load i8*, i8** %22
  %24 = load i32, i32* %8
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i8, i8* %23, i64 %25
  %27 = load i8, i8* %26
  %28 = sext i8 %27 to i32
  %29 = icmp ne i32 %28, 0
  br label %30
30:
  %31 = phi i1 [ false, %17 ], [ %29, %20 ]
  %32 = zext i1 %31 to i64
  %33 = select i1 %31, i32 1, i32 3
  store i32 %33, i32* %7
  br label %86
34:
  store i32 1, i32* %9
  br label %36
36:
  %37 = load i32, i32* %9
  %38 = load i32, i32* %5
  %39 = icmp slt i32 %37, %38
  br i1 %39, label %40, label %60
40:
  %41 = load i8**, i8*** %4
  %42 = load i32, i32* %9
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i8*, i8** %41, i64 %43
  %45 = load i8*, i8** %44
  %46 = load i32, i32* %8
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i8, i8* %45, i64 %47
  %49 = load i8, i8* %48
  %50 = sext i8 %49 to i32
  %51 = load i8**, i8*** %4
  %52 = getelementptr inbounds i8*, i8** %51, i64 0
  %53 = load i8*, i8** %52
  %54 = load i32, i32* %8
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i8, i8* %53, i64 %55
  %57 = load i8, i8* %56
  %58 = sext i8 %57 to i32
  %59 = icmp eq i32 %50, %58
  br label %60
60:
  %61 = phi i1 [ false, %36 ], [ %59, %40 ]
  br i1 %61, label %62, label %65
62:
  %63 = load i32, i32* %9
  %64 = add nsw i32 %63, 1
  store i32 %64, i32* %9
  br label %36
65:
  %66 = load i32, i32* %9
  %67 = load i32, i32* %5
  %68 = icmp eq i32 %66, %67
  br i1 %68, label %69, label %83
69:
  %70 = load i8**, i8*** %4
  %71 = getelementptr inbounds i8*, i8** %70, i64 0
  %72 = load i8*, i8** %71
  %73 = load i32, i32* %8
  %74 = sext i32 %73 to i64
  %75 = getelementptr inbounds i8, i8* %72, i64 %74
  %76 = load i8, i8* %75
  %77 = load i8*, i8** %6
  %78 = load i32, i32* %8
  %79 = sext i32 %78 to i64
  %80 = getelementptr inbounds i8, i8* %77, i64 %79
  store i8 %76, i8* %80
  %81 = load i32, i32* %8
  %82 = add nsw i32 %81, 1
  store i32 %82, i32* %8
  store i32 0, i32* %7
  br label %84
83:
  store i32 3, i32* %7
  br label %84
84:
  br label %86
86:
  br label %12
87:
  %88 = load i8*, i8** %6
  %89 = load i32, i32* %8
  %90 = sext i32 %89 to i64
  %91 = getelementptr inbounds i8, i8* %88, i64 %90
  store i8 0, i8* %91
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
  call void @Vt(i8** %21, i32 %22, i8* %23)
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
