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
  %10 = icmp sle i32 %9, 0
  br i1 %10, label %11, label %12
11:
  br label %73
12:
  %13 = load i32, i32* %5
  %14 = icmp eq i32 %13, 1
  br i1 %14, label %15, label %21
15:
  %16 = load i8*, i8** %6
  %17 = load i8**, i8*** %4
  %18 = getelementptr inbounds i8*, i8** %17, i64 0
  %19 = load i8*, i8** %18
  %20 = call i8* @strcpy(i8* %16, i8* %19)
  br label %73
21:
  call void @llvm.memset.p0i8.i64(i8* align 16 %23, i8 0, i64 128, i1 false)
  %24 = load i8**, i8*** %4
  %25 = load i32, i32* %5
  %26 = sub nsw i32 %25, 1
  %27 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 0
  call void @LCP(i8** %24, i32 %26, i8* %27)
  store i32 -1, i32* %8
  br label %29
29:
  %30 = load i32, i32* %8
  %31 = add nsw i32 %30, 1
  store i32 %31, i32* %8
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 %32
  %34 = load i8, i8* %33
  %35 = sext i8 %34 to i32
  %36 = icmp ne i32 %35, 0
  br i1 %36, label %37, label %55
37:
  %38 = load i8**, i8*** %4
  %39 = load i32, i32* %5
  %40 = sub nsw i32 %39, 1
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i8*, i8** %38, i64 %41
  %43 = load i8*, i8** %42
  %44 = load i32, i32* %8
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i8, i8* %43, i64 %45
  %47 = load i8, i8* %46
  %48 = sext i8 %47 to i32
  %49 = load i32, i32* %8
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 %50
  %52 = load i8, i8* %51
  %53 = sext i8 %52 to i32
  %54 = icmp eq i32 %48, %53
  br label %55
55:
  %56 = phi i1 [ false, %29 ], [ %54, %37 ]
  br i1 %56, label %57, label %66
57:
  %58 = load i32, i32* %8
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 %59
  %61 = load i8, i8* %60
  %62 = load i8*, i8** %6
  %63 = load i32, i32* %8
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i8, i8* %62, i64 %64
  store i8 %61, i8* %65
  br label %29
66:
  %67 = load i8*, i8** %6
  %68 = load i32, i32* %8
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i8, i8* %67, i64 %69
  store i8 0, i8* %70
  br label %73
73:
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
