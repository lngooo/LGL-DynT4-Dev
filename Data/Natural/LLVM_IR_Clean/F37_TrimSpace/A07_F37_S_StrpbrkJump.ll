@.str = constant [7 x i8] c" \09\0A\0D\0B\0C\00"
define dso_local void @TrimSpace(i8* %0) {
  %2 = alloca i8*
  %3 = alloca [4096 x i8]
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  store i8* %0, i8** %2
  call void @llvm.memset.p0i8.i64(i8* align 16 %8, i8 0, i64 4096, i1 false)
  %10 = load i8*, i8** %2
  store i8* %10, i8** %4
  store i8* getelementptr inbounds ([7 x i8], [7 x i8]* @.str, i64 0, i64 0), i8** %5
  br label %12
12:
  %13 = load i8*, i8** %4
  %14 = load i8, i8* %13
  %15 = icmp ne i8 %14, 0
  br i1 %15, label %16, label %39
16:
  %18 = load i8*, i8** %4
  %19 = load i8*, i8** %5
  %20 = call i64 @strcspn(i8* %18, i8* %19)
  %21 = trunc i64 %20 to i32
  store i32 %21, i32* %6
  %22 = load i32, i32* %6
  %23 = icmp sgt i32 %22, 0
  br i1 %23, label %24, label %34
24:
  %25 = getelementptr inbounds [4096 x i8], [4096 x i8]* %3, i64 0, i64 0
  %26 = load i8*, i8** %4
  %27 = load i32, i32* %6
  %28 = sext i32 %27 to i64
  %29 = call i8* @strncat(i8* %25, i8* %26, i64 %28)
  %30 = load i32, i32* %6
  %31 = load i8*, i8** %4
  %32 = sext i32 %30 to i64
  %33 = getelementptr inbounds i8, i8* %31, i64 %32
  store i8* %33, i8** %4
  br label %37
34:
  %35 = load i8*, i8** %4
  %36 = getelementptr inbounds i8, i8* %35, i32 1
  store i8* %36, i8** %4
  br label %37
37:
  br label %12
39:
  %40 = load i8*, i8** %2
  %41 = getelementptr inbounds [4096 x i8], [4096 x i8]* %3, i64 0, i64 0
  %42 = call i8* @strcpy(i8* %40, i8* %41)
  ret void
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare i64 @strcspn(i8*, i8*)
declare i8* @strncat(i8*, i8*, i64)
declare i8* @strcpy(i8*, i8*)
