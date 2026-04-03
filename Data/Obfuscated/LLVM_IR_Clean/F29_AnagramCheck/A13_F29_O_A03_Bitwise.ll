@__const.uz.OGN = constant [26 x i32] [i32 2, i32 3, i32 5, i32 7, i32 11, i32 13, i32 17, i32 19, i32 23, i32 29, i32 31, i32 37, i32 41, i32 43, i32 47, i32 53, i32 59, i32 61, i32 67, i32 71, i32 73, i32 79, i32 83, i32 89, i32 97, i32 101]
define dso_local i32 @uz(i8* %0, i8* %1) {
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
  br label %70
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
  %33 = load i64, i64* %8
  %34 = load i8*, i8** %4
  %35 = load i32, i32* %10
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i8, i8* %34, i64 %36
  %38 = load i8, i8* %37
  %39 = sext i8 %38 to i32
  %40 = srem i32 %39, 26
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds [26 x i32], [26 x i32]* %6, i64 0, i64 %41
  %43 = load i32, i32* %42
  %44 = sext i32 %43 to i64
  %45 = mul nsw i64 %33, %44
  store i64 %45, i64* %8
  %46 = load i64, i64* %9
  %47 = load i8*, i8** %5
  %48 = load i32, i32* %10
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds i8, i8* %47, i64 %49
  %51 = load i8, i8* %50
  %52 = sext i8 %51 to i32
  %53 = srem i32 %52, 26
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds [26 x i32], [26 x i32]* %6, i64 0, i64 %54
  %56 = load i32, i32* %55
  %57 = sext i32 %56 to i64
  %58 = mul nsw i64 %46, %57
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
  %66 = zext i1 %65 to i64
  %67 = select i1 %65, i32 1, i32 0
  store i32 %67, i32* %3
  store i32 1, i32* %7
  br label %70
70:
  %72 = load i32, i32* %3
  ret i32 %72
}
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
declare i64 @strlen(i8*)
