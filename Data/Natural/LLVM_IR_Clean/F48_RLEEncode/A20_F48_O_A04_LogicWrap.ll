@.str = constant [3 x i8] c"%d\00"
define dso_local void @RLEEncode(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca [256 x i8]
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  %14 = load i8*, i8** %3
  %15 = call i64 @strlen(i8* %14)
  %16 = trunc i64 %15 to i32
  store i32 %16, i32* %6
  call void @llvm.memset.p0i8.i64(i8* align 16 %18, i8 0, i64 256, i1 false)
  br label %19
19:
  %20 = load i32, i32* %5
  %21 = load i32, i32* %6
  %22 = icmp slt i32 %20, %21
  br i1 %22, label %23, label %82
23:
  store i32 1, i32* %8
  %26 = load i32, i32* %5
  %27 = add nsw i32 %26, 1
  store i32 %27, i32* %9
  br label %28
28:
  %29 = load i32, i32* %9
  %30 = load i32, i32* %6
  %31 = icmp slt i32 %29, %30
  br i1 %31, label %33, label %32
32:
  store i32 4, i32* %10
  br label %55
33:
  %34 = load i8*, i8** %3
  %35 = load i32, i32* %9
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i8, i8* %34, i64 %36
  %38 = load i8, i8* %37
  %39 = sext i8 %38 to i32
  %40 = load i8*, i8** %3
  %41 = load i32, i32* %5
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %40, i64 %42
  %44 = load i8, i8* %43
  %45 = sext i8 %44 to i32
  %46 = icmp eq i32 %39, %45
  br i1 %46, label %47, label %50
47:
  %48 = load i32, i32* %8
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %8
  br label %51
50:
  store i32 4, i32* %10
  br label %55
51:
  br label %52
52:
  %53 = load i32, i32* %9
  %54 = add nsw i32 %53, 1
  store i32 %54, i32* %9
  br label %28
55:
  br label %57
57:
  %59 = getelementptr inbounds [256 x i8], [256 x i8]* %7, i64 0, i64 0
  %60 = call i64 @strlen(i8* %59)
  %61 = trunc i64 %60 to i32
  store i32 %61, i32* %11
  %62 = load i8*, i8** %3
  %63 = load i32, i32* %5
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i8, i8* %62, i64 %64
  %66 = load i8, i8* %65
  %67 = load i32, i32* %11
  %68 = sext i32 %67 to i64
  %69 = getelementptr inbounds [256 x i8], [256 x i8]* %7, i64 0, i64 %68
  store i8 %66, i8* %69
  %70 = getelementptr inbounds [256 x i8], [256 x i8]* %7, i64 0, i64 0
  %71 = load i32, i32* %11
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds i8, i8* %70, i64 %72
  %74 = getelementptr inbounds i8, i8* %73, i64 1
  %75 = load i32, i32* %8
  %76 = call i32 (i8*, i8*, ...) @sprintf(i8* %74, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %75)
  %77 = load i32, i32* %8
  %78 = load i32, i32* %5
  %79 = add nsw i32 %78, %77
  store i32 %79, i32* %5
  br label %19
82:
  %83 = load i8*, i8** %4
  %84 = getelementptr inbounds [256 x i8], [256 x i8]* %7, i64 0, i64 0
  %85 = call i8* @strcpy(i8* %83, i8* %84)
  ret void
}
declare i64 @strlen(i8*)
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare i32 @sprintf(i8*, i8*, ...)
declare i8* @strcpy(i8*, i8*)
