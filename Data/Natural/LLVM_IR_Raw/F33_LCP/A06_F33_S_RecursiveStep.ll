@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @LCP(i8** %0, i32 %1, i8* %2) {
  %4 = alloca i8**
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca [128 x i8]
  %8 = alloca i32
  store i8** %0, i8*** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  %9 = load i32, i32* %5
  %10 = icmp eq i32 %9, 1
  br i1 %10, label %11, label %17
11:
  %12 = load i8*, i8** %6
  %13 = load i8**, i8*** %4
  %14 = getelementptr inbounds i8*, i8** %13, i64 0
  %15 = load i8*, i8** %14
  %16 = call i8* @strcpy(i8* %12, i8* %15)
  br label %83
17:
  call void @llvm.memset.p0i8.i64(i8* align 16 %19, i8 0, i64 128, i1 false)
  %20 = load i8**, i8*** %4
  %21 = load i32, i32* %5
  %22 = sub nsw i32 %21, 1
  %23 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 0
  call void @LCP(i8** %20, i32 %22, i8* %23)
  store i32 0, i32* %8
  br label %25
25:
  %26 = load i32, i32* %8
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 %27
  %29 = load i8, i8* %28
  %30 = sext i8 %29 to i32
  %31 = icmp ne i32 %30, 0
  br i1 %31, label %32, label %63
32:
  %33 = load i8**, i8*** %4
  %34 = load i32, i32* %5
  %35 = sub nsw i32 %34, 1
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i8*, i8** %33, i64 %36
  %38 = load i8*, i8** %37
  %39 = load i32, i32* %8
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8, i8* %38, i64 %40
  %42 = load i8, i8* %41
  %43 = sext i8 %42 to i32
  %44 = icmp ne i32 %43, 0
  br i1 %44, label %45, label %63
45:
  %46 = load i32, i32* %8
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 %47
  %49 = load i8, i8* %48
  %50 = sext i8 %49 to i32
  %51 = load i8**, i8*** %4
  %52 = load i32, i32* %5
  %53 = sub nsw i32 %52, 1
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i8*, i8** %51, i64 %54
  %56 = load i8*, i8** %55
  %57 = load i32, i32* %8
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i8, i8* %56, i64 %58
  %60 = load i8, i8* %59
  %61 = sext i8 %60 to i32
  %62 = icmp eq i32 %50, %61
  br label %63
63:
  %64 = phi i1 [ false, %32 ], [ false, %25 ], [ %62, %45 ]
  br i1 %64, label %65, label %76
65:
  %66 = load i32, i32* %8
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 %67
  %69 = load i8, i8* %68
  %70 = load i8*, i8** %6
  %71 = load i32, i32* %8
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds i8, i8* %70, i64 %72
  store i8 %69, i8* %73
  %74 = load i32, i32* %8
  %75 = add nsw i32 %74, 1
  store i32 %75, i32* %8
  br label %25
76:
  %77 = load i8*, i8** %6
  %78 = load i32, i32* %8
  %79 = sext i32 %78 to i64
  %80 = getelementptr inbounds i8, i8* %77, i64 %79
  store i8 0, i8* %80
  br label %83
83:
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
  call void @LCP(i8** %21, i32 %22, i8* %23)
  %24 = getelementptr inbounds [128 x i8], [128 x i8]* %8, i64 0, i64 0
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i8* %24)
  store i32 0, i32* %3
  br label %29
29:
  %30 = load i32, i32* %3
  ret i32 %30
}
declare i32 @printf(i8*, ...)
