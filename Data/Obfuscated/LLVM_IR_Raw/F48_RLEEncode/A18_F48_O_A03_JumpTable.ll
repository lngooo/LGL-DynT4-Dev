@.str = constant [3 x i8] c"%d\00"
@.str.1 = constant [4 x i8] c"%s\0A\00"
define dso_local void @kj(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i8
  %8 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  %10 = load i8*, i8** %3
  store i8* %10, i8** %5
  store i32 0, i32* %6
  br label %12
12:
  %13 = load i8*, i8** %5
  %14 = load i8, i8* %13
  %15 = icmp ne i8 %14, 0
  br i1 %15, label %19, label %16
16:
  ret void
19:
  %20 = load i8*, i8** %5
  %21 = load i8, i8* %20
  store i8 %21, i8* %7
  store i32 1, i32* %8
  br label %22
22:
  %23 = load i8*, i8** %5
  %24 = load i32, i32* %8
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i8, i8* %23, i64 %25
  %27 = load i8, i8* %26
  %28 = sext i8 %27 to i32
  %29 = load i8, i8* %7
  %30 = sext i8 %29 to i32
  %31 = icmp eq i32 %28, %30
  br i1 %31, label %32, label %35
32:
  %33 = load i32, i32* %8
  %34 = add nsw i32 %33, 1
  store i32 %34, i32* %8
  br label %22
35:
  %36 = load i8, i8* %7
  %37 = load i8*, i8** %4
  %38 = load i32, i32* %6
  %39 = add nsw i32 %38, 1
  store i32 %39, i32* %6
  %40 = sext i32 %38 to i64
  %41 = getelementptr inbounds i8, i8* %37, i64 %40
  store i8 %36, i8* %41
  %42 = load i8*, i8** %4
  %43 = load i32, i32* %6
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i8, i8* %42, i64 %44
  %46 = load i32, i32* %8
  %47 = call i32 (i8*, i8*, ...) @sprintf(i8* %45, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %46)
  %48 = load i32, i32* %6
  %49 = add nsw i32 %48, %47
  store i32 %49, i32* %6
  %50 = load i32, i32* %8
  %51 = load i8*, i8** %5
  %52 = sext i32 %50 to i64
  %53 = getelementptr inbounds i8, i8* %51, i64 %52
  store i8* %53, i8** %5
  br label %12
}
declare i32 @sprintf(i8*, i8*, ...)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i8*
  %7 = alloca [256 x i8]
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %8 = load i32, i32* %4
  %9 = icmp slt i32 %8, 2
  br i1 %9, label %10, label %11
10:
  store i32 0, i32* %3
  br label %24
11:
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 1
  %15 = load i8*, i8** %14
  store i8* %15, i8** %6
  call void @llvm.memset.p0i8.i64(i8* align 16 %17, i8 0, i64 256, i1 false)
  %18 = load i8*, i8** %6
  %19 = getelementptr inbounds [256 x i8], [256 x i8]* %7, i64 0, i64 0
  call void @kj(i8* %18, i8* %19)
  %20 = getelementptr inbounds [256 x i8], [256 x i8]* %7, i64 0, i64 0
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i8* %20)
  store i32 0, i32* %3
  br label %24
24:
  %25 = load i32, i32* %3
  ret i32 %25
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare i32 @printf(i8*, ...)
