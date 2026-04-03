%struct.Word = type { i32, i32 }
@.str = constant [2 x i8] c" \00"
@.str.1 = constant [4 x i8] c"%s\0A\00"
define dso_local void @ReverseWords(i8* %0) {
  %2 = alloca i8*
  %3 = alloca [64 x %struct.Word]
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca [256 x i8]
  %9 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %4
  %13 = load i8*, i8** %2
  %14 = call i64 @strlen(i8* %13)
  %15 = trunc i64 %14 to i32
  store i32 %15, i32* %5
  store i32 0, i32* %6
  store i32 0, i32* %7
  br label %18
18:
  %19 = load i32, i32* %7
  %20 = load i32, i32* %5
  %21 = icmp sle i32 %19, %20
  br i1 %21, label %24, label %22
22:
  br label %60
24:
  %25 = load i8*, i8** %2
  %26 = load i32, i32* %7
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i8, i8* %25, i64 %27
  %29 = load i8, i8* %28
  %30 = sext i8 %29 to i32
  %31 = icmp eq i32 %30, 32
  br i1 %31, label %40, label %32
32:
  %33 = load i8*, i8** %2
  %34 = load i32, i32* %7
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i8, i8* %33, i64 %35
  %37 = load i8, i8* %36
  %38 = sext i8 %37 to i32
  %39 = icmp eq i32 %38, 0
  br i1 %39, label %40, label %56
40:
  %41 = load i32, i32* %6
  %42 = load i32, i32* %4
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds [64 x %struct.Word], [64 x %struct.Word]* %3, i64 0, i64 %43
  %45 = getelementptr inbounds %struct.Word, %struct.Word* %44, i32 0, i32 0
  store i32 %41, i32* %45
  %46 = load i32, i32* %7
  %47 = load i32, i32* %6
  %48 = sub nsw i32 %46, %47
  %49 = load i32, i32* %4
  %50 = add nsw i32 %49, 1
  store i32 %50, i32* %4
  %51 = sext i32 %49 to i64
  %52 = getelementptr inbounds [64 x %struct.Word], [64 x %struct.Word]* %3, i64 0, i64 %51
  %53 = getelementptr inbounds %struct.Word, %struct.Word* %52, i32 0, i32 1
  store i32 %48, i32* %53
  %54 = load i32, i32* %7
  %55 = add nsw i32 %54, 1
  store i32 %55, i32* %6
  br label %56
56:
  br label %57
57:
  %58 = load i32, i32* %7
  %59 = add nsw i32 %58, 1
  store i32 %59, i32* %7
  br label %18
60:
  call void @llvm.memset.p0i8.i64(i8* align 16 %62, i8 0, i64 256, i1 false)
  %64 = load i32, i32* %4
  %65 = sub nsw i32 %64, 1
  store i32 %65, i32* %9
  br label %66
66:
  %67 = load i32, i32* %9
  %68 = icmp sge i32 %67, 0
  br i1 %68, label %71, label %69
69:
  br label %97
71:
  %72 = getelementptr inbounds [256 x i8], [256 x i8]* %8, i64 0, i64 0
  %73 = load i8*, i8** %2
  %74 = load i32, i32* %9
  %75 = sext i32 %74 to i64
  %76 = getelementptr inbounds [64 x %struct.Word], [64 x %struct.Word]* %3, i64 0, i64 %75
  %77 = getelementptr inbounds %struct.Word, %struct.Word* %76, i32 0, i32 0
  %78 = load i32, i32* %77
  %79 = sext i32 %78 to i64
  %80 = getelementptr inbounds i8, i8* %73, i64 %79
  %81 = load i32, i32* %9
  %82 = sext i32 %81 to i64
  %83 = getelementptr inbounds [64 x %struct.Word], [64 x %struct.Word]* %3, i64 0, i64 %82
  %84 = getelementptr inbounds %struct.Word, %struct.Word* %83, i32 0, i32 1
  %85 = load i32, i32* %84
  %86 = sext i32 %85 to i64
  %87 = call i8* @strncat(i8* %72, i8* %80, i64 %86)
  %88 = load i32, i32* %9
  %89 = icmp sgt i32 %88, 0
  br i1 %89, label %90, label %93
90:
  %91 = getelementptr inbounds [256 x i8], [256 x i8]* %8, i64 0, i64 0
  %92 = call i8* @strcat(i8* %91, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  br label %93
93:
  br label %94
94:
  %95 = load i32, i32* %9
  %96 = add nsw i32 %95, -1
  store i32 %96, i32* %9
  br label %66
97:
  %98 = load i8*, i8** %2
  %99 = getelementptr inbounds [256 x i8], [256 x i8]* %8, i64 0, i64 0
  %100 = call i8* @strcpy(i8* %98, i8* %99)
  ret void
}
declare i64 @strlen(i8*)
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare i8* @strncat(i8*, i8*, i64)
declare i8* @strcat(i8*, i8*)
declare i8* @strcpy(i8*, i8*)
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
  call void @ReverseWords(i8* %41)
  %42 = getelementptr inbounds [512 x i8], [512 x i8]* %6, i64 0, i64 0
  %43 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i8* %42)
  store i32 0, i32* %3
  br label %45
45:
  %46 = load i32, i32* %3
  ret i32 %46
}
declare i32 @printf(i8*, ...)
