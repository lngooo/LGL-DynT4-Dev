@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @R3(i8** %0, i32 %1, i8* %2) {
  %4 = alloca i8**
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i32
  %8 = alloca i32
  store i8** %0, i8*** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  %9 = load i32, i32* %5
  %10 = icmp sle i32 %9, 0
  br i1 %10, label %11, label %12
11:
  br label %79
12:
  %13 = load i8*, i8** %6
  %14 = load i8**, i8*** %4
  %15 = getelementptr inbounds i8*, i8** %14, i64 0
  %16 = load i8*, i8** %15
  %17 = call i8* @strcpy(i8* %13, i8* %16)
  store i32 1, i32* %7
  br label %19
19:
  %20 = load i32, i32* %7
  %21 = load i32, i32* %5
  %22 = icmp slt i32 %20, %21
  br i1 %22, label %25, label %23
23:
  br label %79
25:
  store i32 0, i32* %8
  br label %27
27:
  %28 = load i8*, i8** %6
  %29 = load i32, i32* %8
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i8, i8* %28, i64 %30
  %32 = load i8, i8* %31
  %33 = sext i8 %32 to i32
  %34 = icmp ne i32 %33, 0
  br i1 %34, label %35, label %65
35:
  %36 = load i8**, i8*** %4
  %37 = load i32, i32* %7
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i8*, i8** %36, i64 %38
  %40 = load i8*, i8** %39
  %41 = load i32, i32* %8
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %40, i64 %42
  %44 = load i8, i8* %43
  %45 = sext i8 %44 to i32
  %46 = icmp ne i32 %45, 0
  br i1 %46, label %47, label %65
47:
  %48 = load i8*, i8** %6
  %49 = load i32, i32* %8
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i8, i8* %48, i64 %50
  %52 = load i8, i8* %51
  %53 = sext i8 %52 to i32
  %54 = load i8**, i8*** %4
  %55 = load i32, i32* %7
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i8*, i8** %54, i64 %56
  %58 = load i8*, i8** %57
  %59 = load i32, i32* %8
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i8, i8* %58, i64 %60
  %62 = load i8, i8* %61
  %63 = sext i8 %62 to i32
  %64 = icmp eq i32 %53, %63
  br label %65
65:
  %66 = phi i1 [ false, %35 ], [ false, %27 ], [ %64, %47 ]
  br i1 %66, label %67, label %70
67:
  %68 = load i32, i32* %8
  %69 = add nsw i32 %68, 1
  store i32 %69, i32* %8
  br label %27
70:
  %71 = load i8*, i8** %6
  %72 = load i32, i32* %8
  %73 = sext i32 %72 to i64
  %74 = getelementptr inbounds i8, i8* %71, i64 %73
  store i8 0, i8* %74
  br label %76
76:
  %77 = load i32, i32* %7
  %78 = add nsw i32 %77, 1
  store i32 %78, i32* %7
  br label %19
79:
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
  call void @R3(i8** %21, i32 %22, i8* %23)
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
