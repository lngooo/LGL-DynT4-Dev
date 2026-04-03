define dso_local i32 @AnagramCheck(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca [256 x i32]
  %7 = alloca [256 x i32]
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %11 = load i8*, i8** %4
  %12 = call i64 @strlen(i8* %11)
  %13 = load i8*, i8** %5
  %14 = call i64 @strlen(i8* %13)
  %15 = icmp ne i64 %12, %14
  br i1 %15, label %16, label %17
16:
  store i32 0, i32* %3
  br label %82
17:
  call void @llvm.memset.p0i8.i64(i8* align 16 %19, i8 0, i64 1024, i1 false)
  call void @llvm.memset.p0i8.i64(i8* align 16 %21, i8 0, i64 1024, i1 false)
  store i32 0, i32* %8
  br label %23
23:
  %24 = load i8*, i8** %4
  %25 = load i32, i32* %8
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i8, i8* %24, i64 %26
  %28 = load i8, i8* %27
  %29 = icmp ne i8 %28, 0
  br i1 %29, label %32, label %30
30:
  br label %54
32:
  %33 = load i8*, i8** %4
  %34 = load i32, i32* %8
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i8, i8* %33, i64 %35
  %37 = load i8, i8* %36
  %38 = zext i8 %37 to i64
  %39 = getelementptr inbounds [256 x i32], [256 x i32]* %6, i64 0, i64 %38
  %40 = load i32, i32* %39
  %41 = add nsw i32 %40, 1
  store i32 %41, i32* %39
  %42 = load i8*, i8** %5
  %43 = load i32, i32* %8
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i8, i8* %42, i64 %44
  %46 = load i8, i8* %45
  %47 = zext i8 %46 to i64
  %48 = getelementptr inbounds [256 x i32], [256 x i32]* %7, i64 0, i64 %47
  %49 = load i32, i32* %48
  %50 = add nsw i32 %49, 1
  store i32 %50, i32* %48
  br label %51
51:
  %52 = load i32, i32* %8
  %53 = add nsw i32 %52, 1
  store i32 %53, i32* %8
  br label %23
54:
  store i32 0, i32* %9
  br label %56
56:
  %57 = load i32, i32* %9
  %58 = icmp slt i32 %57, 256
  br i1 %58, label %60, label %59
59:
  store i32 5, i32* %10
  br label %75
60:
  %61 = load i32, i32* %9
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds [256 x i32], [256 x i32]* %6, i64 0, i64 %62
  %64 = load i32, i32* %63
  %65 = load i32, i32* %9
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds [256 x i32], [256 x i32]* %7, i64 0, i64 %66
  %68 = load i32, i32* %67
  %69 = icmp ne i32 %64, %68
  br i1 %69, label %70, label %71
70:
  store i32 0, i32* %3
  store i32 1, i32* %10
  br label %75
71:
  br label %72
72:
  %73 = load i32, i32* %9
  %74 = add nsw i32 %73, 1
  store i32 %74, i32* %9
  br label %56
75:
  %77 = load i32, i32* %10
  switch i32 %77, label %79 [
    i32 5, label %78
  ]
78:
  store i32 1, i32* %3
  store i32 1, i32* %10
  br label %79
79:
  br label %82
82:
  %83 = load i32, i32* %3
  ret i32 %83
}
declare i64 @strlen(i8*)
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
