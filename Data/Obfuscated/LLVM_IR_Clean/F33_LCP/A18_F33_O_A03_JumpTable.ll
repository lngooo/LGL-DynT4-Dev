define dso_local void @e3(i8** %0, i32 %1, i8* %2) {
  %4 = alloca i8**
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca [128 x i8]
  %8 = alloca [128 x i8]
  %9 = alloca i32
  store i8** %0, i8*** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  %10 = load i32, i32* %5
  %11 = icmp sle i32 %10, 1
  br i1 %11, label %12, label %22
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
  br label %21
21:
  br label %80
22:
  call void @llvm.memset.p0i8.i64(i8* align 16 %24, i8 0, i64 128, i1 false)
  call void @llvm.memset.p0i8.i64(i8* align 16 %26, i8 0, i64 128, i1 false)
  %27 = load i8**, i8*** %4
  %28 = load i32, i32* %5
  %29 = sdiv i32 %28, 2
  %30 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 0
  call void @e3(i8** %27, i32 %29, i8* %30)
  %31 = load i8**, i8*** %4
  %32 = load i32, i32* %5
  %33 = sdiv i32 %32, 2
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i8*, i8** %31, i64 %34
  %36 = load i32, i32* %5
  %37 = load i32, i32* %5
  %38 = sdiv i32 %37, 2
  %39 = sub nsw i32 %36, %38
  %40 = getelementptr inbounds [128 x i8], [128 x i8]* %8, i64 0, i64 0
  call void @e3(i8** %35, i32 %39, i8* %40)
  store i32 0, i32* %9
  br label %42
42:
  %43 = load i32, i32* %9
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 %44
  %46 = load i8, i8* %45
  %47 = sext i8 %46 to i32
  %48 = icmp ne i32 %47, 0
  br i1 %48, label %49, label %72
49:
  %50 = load i32, i32* %9
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 %51
  %53 = load i8, i8* %52
  %54 = sext i8 %53 to i32
  %55 = load i32, i32* %9
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds [128 x i8], [128 x i8]* %8, i64 0, i64 %56
  %58 = load i8, i8* %57
  %59 = sext i8 %58 to i32
  %60 = icmp eq i32 %54, %59
  br i1 %60, label %61, label %72
61:
  %62 = load i32, i32* %9
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 %63
  %65 = load i8, i8* %64
  %66 = load i8*, i8** %6
  %67 = load i32, i32* %9
  %68 = sext i32 %67 to i64
  %69 = getelementptr inbounds i8, i8* %66, i64 %68
  store i8 %65, i8* %69
  %70 = load i32, i32* %9
  %71 = add nsw i32 %70, 1
  store i32 %71, i32* %9
  br label %42
72:
  %73 = load i8*, i8** %6
  %74 = load i32, i32* %9
  %75 = sext i32 %74 to i64
  %76 = getelementptr inbounds i8, i8* %73, i64 %75
  store i8 0, i8* %76
  br label %80
80:
  ret void
}
declare i8* @strcpy(i8*, i8*)
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
