@.str = constant [2 x i8] c" \00"
@.str.1 = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @WordCount(i8* %0) {
  %2 = alloca i8*
  %3 = alloca [512 x i8]
  %4 = alloca [512 x i8]
  %5 = alloca i32
  %6 = alloca i8*
  store i8* %0, i8** %2
  %9 = getelementptr inbounds [512 x i8], [512 x i8]* %3, i64 0, i64 0
  call void @llvm.memset.p0i8.i64(i8* align 16 %9, i8 0, i64 512, i1 false)
  %10 = getelementptr inbounds [512 x i8], [512 x i8]* %3, i64 0, i64 0
  %11 = load i8*, i8** %2
  %12 = call i8* @strncpy(i8* %10, i8* %11, i64 511)
  %13 = getelementptr inbounds [512 x i8], [512 x i8]* %4, i64 0, i64 0
  %14 = getelementptr inbounds [512 x i8], [512 x i8]* %3, i64 0, i64 0
  %15 = call i8* @strcpy(i8* %13, i8* %14)
  store i32 0, i32* %5
  %18 = getelementptr inbounds [512 x i8], [512 x i8]* %4, i64 0, i64 0
  %19 = call i8* @strtok(i8* %18, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  store i8* %19, i8** %6
  br label %20
20:
  %21 = load i8*, i8** %6
  %22 = icmp ne i8* %21, null
  br i1 %22, label %23, label %27
23:
  %24 = load i32, i32* %5
  %25 = add nsw i32 %24, 1
  store i32 %25, i32* %5
  %26 = call i8* @strtok(i8* null, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  store i8* %26, i8** %6
  br label %20
27:
  %28 = load i32, i32* %5
  ret i32 %28
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare i8* @strncpy(i8*, i8*, i64)
declare i8* @strcpy(i8*, i8*)
declare i8* @strtok(i8*, i8*)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %15
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @WordCount(i8* %12)
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i32 %13)
  store i32 0, i32* %3
  br label %15
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
declare i32 @printf(i8*, ...)
