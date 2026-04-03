@.str = constant [2 x i8] c" \00"
define dso_local void @WFI(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca [256 x i8]
  store i8* %0, i8** %2
  store i32 0, i32* %3
  %11 = load i8*, i8** %2
  %12 = call i64 @strlen(i8* %11)
  %13 = trunc i64 %12 to i32
  store i32 %13, i32* %5
  call void @llvm.memset.p0i8.i64(i8* align 16 %16, i8 0, i64 256, i1 false)
  br label %17
17:
  %18 = load i32, i32* %3
  %19 = icmp ne i32 %18, 99
  br i1 %19, label %20, label %71
20:
  %21 = load i32, i32* %3
  switch i32 %21, label %70 [
    i32 0, label %22
    i32 1, label %26
    i32 2, label %31
    i32 3, label %63
    i32 4, label %66
  ]
22:
  %23 = load i32, i32* %5
  store i32 %23, i32* %6
  %24 = load i32, i32* %5
  %25 = sub nsw i32 %24, 1
  store i32 %25, i32* %4
  store i32 1, i32* %3
  br label %70
26:
  %27 = load i32, i32* %4
  %28 = icmp sge i32 %27, -1
  %29 = zext i1 %28 to i64
  %30 = select i1 %28, i32 2, i32 4
  store i32 %30, i32* %3
  br label %70
31:
  %32 = load i32, i32* %4
  %33 = icmp eq i32 %32, -1
  br i1 %33, label %42, label %34
34:
  %35 = load i8*, i8** %2
  %36 = load i32, i32* %4
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i8, i8* %35, i64 %37
  %39 = load i8, i8* %38
  %40 = sext i8 %39 to i32
  %41 = icmp eq i32 %40, 32
  br i1 %41, label %42, label %62
42:
  %43 = getelementptr inbounds [256 x i8], [256 x i8]* %7, i64 0, i64 0
  %44 = load i8*, i8** %2
  %45 = load i32, i32* %4
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i8, i8* %44, i64 %46
  %48 = getelementptr inbounds i8, i8* %47, i64 1
  %49 = load i32, i32* %6
  %50 = load i32, i32* %4
  %51 = sub nsw i32 %49, %50
  %52 = sub nsw i32 %51, 1
  %53 = sext i32 %52 to i64
  %54 = call i8* @strncat(i8* %43, i8* %48, i64 %53)
  %55 = load i32, i32* %4
  %56 = icmp ne i32 %55, -1
  br i1 %56, label %57, label %60
57:
  %58 = getelementptr inbounds [256 x i8], [256 x i8]* %7, i64 0, i64 0
  %59 = call i8* @strcat(i8* %58, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  br label %60
60:
  %61 = load i32, i32* %4
  store i32 %61, i32* %6
  br label %62
62:
  store i32 3, i32* %3
  br label %70
63:
  %64 = load i32, i32* %4
  %65 = add nsw i32 %64, -1
  store i32 %65, i32* %4
  store i32 1, i32* %3
  br label %70
66:
  %67 = load i8*, i8** %2
  %68 = getelementptr inbounds [256 x i8], [256 x i8]* %7, i64 0, i64 0
  %69 = call i8* @strcpy(i8* %67, i8* %68)
  store i32 99, i32* %3
  br label %70
70:
  br label %17
71:
  ret void
}
declare i64 @strlen(i8*)
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare i8* @strncat(i8*, i8*, i64)
declare i8* @strcat(i8*, i8*)
declare i8* @strcpy(i8*, i8*)
