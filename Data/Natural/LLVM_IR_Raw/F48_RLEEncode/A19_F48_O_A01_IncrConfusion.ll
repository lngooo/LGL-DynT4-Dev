@.str = constant [3 x i8] c"%d\00"
@.str.1 = constant [4 x i8] c"%s\0A\00"
define dso_local void @RLEEncode(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 -1, i32* %5
  store i32 0, i32* %6
  br label %10
10:
  %11 = load i8*, i8** %3
  %12 = load i32, i32* %5
  %13 = add nsw i32 %12, 1
  store i32 %13, i32* %5
  %14 = sext i32 %13 to i64
  %15 = getelementptr inbounds i8, i8* %11, i64 %14
  %16 = load i8, i8* %15
  %17 = icmp ne i8 %16, 0
  br i1 %17, label %18, label %63
18:
  store i32 1, i32* %7
  br label %20
20:
  %21 = load i8*, i8** %3
  %22 = load i32, i32* %5
  %23 = load i32, i32* %7
  %24 = add nsw i32 %22, %23
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i8, i8* %21, i64 %25
  %27 = load i8, i8* %26
  %28 = sext i8 %27 to i32
  %29 = load i8*, i8** %3
  %30 = load i32, i32* %5
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i8, i8* %29, i64 %31
  %33 = load i8, i8* %32
  %34 = sext i8 %33 to i32
  %35 = icmp eq i32 %28, %34
  br i1 %35, label %36, label %39
36:
  %37 = load i32, i32* %7
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* %7
  br label %20
39:
  %40 = load i8*, i8** %3
  %41 = load i32, i32* %5
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %40, i64 %42
  %44 = load i8, i8* %43
  %45 = load i8*, i8** %4
  %46 = load i32, i32* %6
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %6
  %48 = sext i32 %46 to i64
  %49 = getelementptr inbounds i8, i8* %45, i64 %48
  store i8 %44, i8* %49
  %50 = load i8*, i8** %4
  %51 = load i32, i32* %6
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i8, i8* %50, i64 %52
  %54 = load i32, i32* %7
  %55 = call i32 (i8*, i8*, ...) @sprintf(i8* %53, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %54)
  %56 = load i32, i32* %6
  %57 = add nsw i32 %56, %55
  store i32 %57, i32* %6
  %58 = load i32, i32* %7
  %59 = sub nsw i32 %58, 1
  %60 = load i32, i32* %5
  %61 = add nsw i32 %60, %59
  store i32 %61, i32* %5
  br label %10
63:
  ret void
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
  call void @RLEEncode(i8* %18, i8* %19)
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
