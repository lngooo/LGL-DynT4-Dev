@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @eS(i8* %0, i8 signext %1) {
  %3 = alloca i8*
  %4 = alloca i8
  %5 = alloca [256 x i32]
  store i8* %0, i8** %3
  store i8 %1, i8* %4
  call void @llvm.memset.p0i8.i64(i8* align 16 %7, i8 0, i64 1024, i1 false)
  br label %8
8:
  %9 = load i8*, i8** %3
  %10 = load i8, i8* %9
  %11 = icmp ne i8 %10, 0
  br i1 %11, label %12, label %21
12:
  %13 = load i8*, i8** %3
  %14 = load i8, i8* %13
  %15 = zext i8 %14 to i64
  %16 = getelementptr inbounds [256 x i32], [256 x i32]* %5, i64 0, i64 %15
  %17 = load i32, i32* %16
  %18 = add nsw i32 %17, 1
  store i32 %18, i32* %16
  %19 = load i8*, i8** %3
  %20 = getelementptr inbounds i8, i8* %19, i32 1
  store i8* %20, i8** %3
  br label %8
21:
  %22 = load i8, i8* %4
  %23 = zext i8 %22 to i64
  %24 = getelementptr inbounds [256 x i32], [256 x i32]* %5, i64 0, i64 %23
  %25 = load i32, i32* %24
  ret i32 %25
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
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
  br label %20
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 2
  %15 = load i8*, i8** %14
  %16 = getelementptr inbounds i8, i8* %15, i64 0
  %17 = load i8, i8* %16
  %18 = call i32 @eS(i8* %12, i8 signext %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %20
20:
  %21 = load i32, i32* %3
  ret i32 %21
}
declare i32 @printf(i8*, ...)
