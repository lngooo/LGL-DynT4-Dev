define dso_local i32 @dLW(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca [256 x i32]
  %10 = alloca i32
  %11 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  store i32 10, i32* %6
  store i32 20, i32* %7
  %14 = load i8*, i8** %4
  %15 = call i64 @strlen(i8* %14)
  %16 = load i8*, i8** %5
  %17 = call i64 @strlen(i8* %16)
  %18 = icmp ne i64 %15, %17
  br i1 %18, label %19, label %20
19:
  store i32 0, i32* %3
  store i32 1, i32* %8
  br label %87
20:
  call void @llvm.memset.p0i8.i64(i8* align 16 %22, i8 0, i64 1024, i1 false)
  store i32 0, i32* %10
  br label %24
24:
  %25 = load i8*, i8** %4
  %26 = load i32, i32* %10
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i8, i8* %25, i64 %27
  %29 = load i8, i8* %28
  %30 = sext i8 %29 to i32
  %31 = icmp ne i32 %30, 0
  br i1 %31, label %34, label %32
32:
  store i32 2, i32* %8
  br label %64
34:
  %35 = load i32, i32* %6
  %36 = load i32, i32* %7
  %37 = add nsw i32 %35, %36
  %38 = icmp eq i32 %37, 30
  br i1 %38, label %39, label %58
39:
  %40 = load i8*, i8** %4
  %41 = load i32, i32* %10
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %40, i64 %42
  %44 = load i8, i8* %43
  %45 = zext i8 %44 to i64
  %46 = getelementptr inbounds [256 x i32], [256 x i32]* %9, i64 0, i64 %45
  %47 = load i32, i32* %46
  %48 = add nsw i32 %47, 1
  store i32 %48, i32* %46
  %49 = load i8*, i8** %5
  %50 = load i32, i32* %10
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i8, i8* %49, i64 %51
  %53 = load i8, i8* %52
  %54 = zext i8 %53 to i64
  %55 = getelementptr inbounds [256 x i32], [256 x i32]* %9, i64 0, i64 %54
  %56 = load i32, i32* %55
  %57 = add nsw i32 %56, -1
  store i32 %57, i32* %55
  br label %60
58:
  %59 = getelementptr inbounds [256 x i32], [256 x i32]* %9, i64 0, i64 0
  store i32 999, i32* %59
  br label %60
60:
  br label %61
61:
  %62 = load i32, i32* %10
  %63 = add nsw i32 %62, 1
  store i32 %63, i32* %10
  br label %24
64:
  store i32 0, i32* %11
  br label %66
66:
  %67 = load i32, i32* %11
  %68 = icmp slt i32 %67, 256
  br i1 %68, label %70, label %69
69:
  store i32 5, i32* %8
  br label %81
70:
  %71 = load i32, i32* %11
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds [256 x i32], [256 x i32]* %9, i64 0, i64 %72
  %74 = load i32, i32* %73
  %75 = icmp ne i32 %74, 0
  br i1 %75, label %76, label %77
76:
  store i32 0, i32* %3
  store i32 1, i32* %8
  br label %81
77:
  br label %78
78:
  %79 = load i32, i32* %11
  %80 = add nsw i32 %79, 1
  store i32 %80, i32* %11
  br label %66
81:
  %83 = load i32, i32* %8
  switch i32 %83, label %85 [
    i32 5, label %84
  ]
84:
  store i32 1, i32* %3
  store i32 1, i32* %8
  br label %85
85:
  br label %87
87:
  %90 = load i32, i32* %3
  ret i32 %90
}
declare i64 @strlen(i8*)
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
