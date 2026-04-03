@__const.ReverseWords.sp = constant [2 x i8] c" \00"
define dso_local void @ReverseWords(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca [256 x i8]
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca [2 x i8]
  store i8* %0, i8** %2
  %10 = load i8*, i8** %2
  %11 = call i64 @strlen(i8* %10)
  %12 = trunc i64 %11 to i32
  store i32 %12, i32* %3
  %14 = getelementptr inbounds [256 x i8], [256 x i8]* %4, i64 0, i64 0
  call void @llvm.memset.p0i8.i64(i8* align 16 %14, i8 0, i64 256, i1 false)
  %16 = load i32, i32* %3
  store i32 %16, i32* %5
  %18 = load i32, i32* %3
  %19 = sub nsw i32 %18, 1
  store i32 %19, i32* %6
  br label %20
20:
  %21 = load i32, i32* %6
  %22 = icmp sge i32 %21, -1
  br i1 %22, label %25, label %23
23:
  br label %74
25:
  %27 = load i32, i32* %6
  %28 = icmp sge i32 %27, 0
  br i1 %28, label %29, label %37
29:
  %30 = load i8*, i8** %2
  %31 = load i32, i32* %6
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i8, i8* %30, i64 %32
  %34 = load i8, i8* %33
  %35 = sext i8 %34 to i32
  %36 = xor i32 %35, 32
  br label %38
37:
  br label %38
38:
  %39 = phi i32 [ %36, %29 ], [ -1, %37 ]
  store i32 %39, i32* %7
  %40 = load i32, i32* %7
  %41 = icmp eq i32 %40, 0
  br i1 %41, label %45, label %42
42:
  %43 = load i32, i32* %6
  %44 = icmp eq i32 %43, -1
  br i1 %44, label %45, label %69
45:
  %46 = getelementptr inbounds [256 x i8], [256 x i8]* %4, i64 0, i64 0
  %47 = load i8*, i8** %2
  %48 = load i32, i32* %6
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds i8, i8* %47, i64 %49
  %51 = getelementptr inbounds i8, i8* %50, i64 1
  %52 = load i32, i32* %5
  %53 = load i32, i32* %6
  %54 = sub nsw i32 %52, %53
  %55 = sub nsw i32 %54, 1
  %56 = sext i32 %55 to i64
  %57 = call i8* @strncat(i8* %46, i8* %51, i64 %56)
  %58 = load i32, i32* %6
  %59 = icmp ne i32 %58, -1
  br i1 %59, label %60, label %67
60:
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %62, i8* align 1 getelementptr inbounds ([2 x i8], [2 x i8]* @__const.ReverseWords.sp, i32 0, i32 0), i64 2, i1 false)
  %63 = getelementptr inbounds [256 x i8], [256 x i8]* %4, i64 0, i64 0
  %64 = getelementptr inbounds [2 x i8], [2 x i8]* %8, i64 0, i64 0
  %65 = call i8* @strcat(i8* %63, i8* %64)
  br label %67
67:
  %68 = load i32, i32* %6
  store i32 %68, i32* %5
  br label %69
69:
  br label %71
71:
  %72 = load i32, i32* %6
  %73 = add nsw i32 %72, -1
  store i32 %73, i32* %6
  br label %20
74:
  %75 = load i8*, i8** %2
  %76 = getelementptr inbounds [256 x i8], [256 x i8]* %4, i64 0, i64 0
  %77 = call i8* @strcpy(i8* %75, i8* %76)
  ret void
}
declare i64 @strlen(i8*)
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare i8* @strncat(i8*, i8*, i64)
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
declare i8* @strcat(i8*, i8*)
declare i8* @strcpy(i8*, i8*)
