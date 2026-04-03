@__const.djh6.hruL = constant [26 x i32] [i32 2, i32 3, i32 5, i32 7, i32 11, i32 13, i32 17, i32 19, i32 23, i32 29, i32 31, i32 37, i32 41, i32 43, i32 47, i32 53, i32 59, i32 61, i32 67, i32 71, i32 73, i32 79, i32 83, i32 89, i32 97, i32 101]
@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @djh6(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca [26 x i32]
  %7 = alloca i32
  %8 = alloca i64
  %9 = alloca i64
  %10 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %13 = load i8*, i8** %4
  %14 = call i64 @strlen(i8* %13)
  %15 = load i8*, i8** %5
  %16 = call i64 @strlen(i8* %15)
  %17 = icmp ne i64 %14, %16
  br i1 %17, label %18, label %19
18:
  store i32 0, i32* %3
  store i32 1, i32* %7
  br label %69
19:
  store i64 1, i64* %8
  store i64 1, i64* %9
  store i32 0, i32* %10
  br label %23
23:
  %24 = load i8*, i8** %4
  %25 = load i32, i32* %10
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i8, i8* %24, i64 %26
  %28 = load i8, i8* %27
  %29 = icmp ne i8 %28, 0
  br i1 %29, label %32, label %30
30:
  store i32 2, i32* %7
  br label %62
32:
  %33 = load i8*, i8** %4
  %34 = load i32, i32* %10
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i8, i8* %33, i64 %35
  %37 = load i8, i8* %36
  %38 = sext i8 %37 to i32
  %39 = srem i32 %38, 26
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds [26 x i32], [26 x i32]* %6, i64 0, i64 %40
  %42 = load i32, i32* %41
  %43 = sext i32 %42 to i64
  %44 = load i64, i64* %8
  %45 = mul nsw i64 %44, %43
  store i64 %45, i64* %8
  %46 = load i8*, i8** %5
  %47 = load i32, i32* %10
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i8, i8* %46, i64 %48
  %50 = load i8, i8* %49
  %51 = sext i8 %50 to i32
  %52 = srem i32 %51, 26
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds [26 x i32], [26 x i32]* %6, i64 0, i64 %53
  %55 = load i32, i32* %54
  %56 = sext i32 %55 to i64
  %57 = load i64, i64* %9
  %58 = mul nsw i64 %57, %56
  store i64 %58, i64* %9
  br label %59
59:
  %60 = load i32, i32* %10
  %61 = add nsw i32 %60, 1
  store i32 %61, i32* %10
  br label %23
62:
  %63 = load i64, i64* %8
  %64 = load i64, i64* %9
  %65 = icmp eq i64 %63, %64
  %66 = zext i1 %65 to i32
  store i32 %66, i32* %3
  store i32 1, i32* %7
  br label %69
69:
  %71 = load i32, i32* %3
  ret i32 %71
}
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
declare i64 @strlen(i8*)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 3
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %18
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 2
  %15 = load i8*, i8** %14
  %16 = call i32 @djh6(i8* %12, i8* %15)
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %16)
  store i32 0, i32* %3
  br label %18
18:
  %19 = load i32, i32* %3
  ret i32 %19
}
declare i32 @printf(i8*, ...)
