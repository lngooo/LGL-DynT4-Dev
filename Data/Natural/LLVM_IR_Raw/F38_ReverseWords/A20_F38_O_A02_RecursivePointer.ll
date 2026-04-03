@.str = constant [6 x i8] c"%s %s\00"
@.str.1 = constant [2 x i8] c" \00"
@.str.2 = constant [4 x i8] c"%s\0A\00"
define dso_local void @ReverseWords(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i8*
  %4 = alloca [256 x i8]
  %5 = alloca i32
  %6 = alloca [256 x i8]
  store i8* %0, i8** %2
  %8 = load i8*, i8** %2
  %9 = call i8* @strchr(i8* %8, i32 32)
  store i8* %9, i8** %3
  %10 = load i8*, i8** %3
  %11 = icmp ne i8* %10, null
  br i1 %11, label %12, label %42
12:
  %14 = getelementptr inbounds [256 x i8], [256 x i8]* %4, i64 0, i64 0
  %15 = load i8*, i8** %3
  %16 = getelementptr inbounds i8, i8* %15, i64 1
  %17 = call i8* @strcpy(i8* %14, i8* %16)
  %18 = getelementptr inbounds [256 x i8], [256 x i8]* %4, i64 0, i64 0
  call void @ReverseWords(i8* %18)
  %20 = load i8*, i8** %3
  %21 = load i8*, i8** %2
  %22 = ptrtoint i8* %20 to i64
  %23 = ptrtoint i8* %21 to i64
  %24 = sub i64 %22, %23
  %25 = trunc i64 %24 to i32
  store i32 %25, i32* %5
  %27 = getelementptr inbounds [256 x i8], [256 x i8]* %6, i64 0, i64 0
  %28 = load i8*, i8** %2
  %29 = load i32, i32* %5
  %30 = sext i32 %29 to i64
  %31 = call i8* @strncpy(i8* %27, i8* %28, i64 %30)
  %32 = load i32, i32* %5
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds [256 x i8], [256 x i8]* %6, i64 0, i64 %33
  store i8 0, i8* %34
  %35 = load i8*, i8** %2
  %36 = getelementptr inbounds [256 x i8], [256 x i8]* %4, i64 0, i64 0
  %37 = getelementptr inbounds [256 x i8], [256 x i8]* %6, i64 0, i64 0
  %38 = call i32 (i8*, i8*, ...) @sprintf(i8* %35, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @.str, i64 0, i64 0), i8* %36, i8* %37)
  br label %42
42:
  ret void
}
declare i8* @strchr(i8*, i32)
declare i8* @strcpy(i8*, i8*)
declare i8* @strncpy(i8*, i8*, i64)
declare i32 @sprintf(i8*, i8*, ...)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca [512 x i8]
  %7 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %8 = load i32, i32* %4
  %9 = icmp slt i32 %8, 2
  br i1 %9, label %10, label %11
10:
  store i32 0, i32* %3
  br label %45
11:
  call void @llvm.memset.p0i8.i64(i8* align 16 %13, i8 0, i64 512, i1 false)
  store i32 1, i32* %7
  br label %15
15:
  %16 = load i32, i32* %7
  %17 = load i32, i32* %4
  %18 = icmp slt i32 %16, %17
  br i1 %18, label %21, label %19
19:
  br label %40
21:
  %22 = getelementptr inbounds [512 x i8], [512 x i8]* %6, i64 0, i64 0
  %23 = load i8**, i8*** %5
  %24 = load i32, i32* %7
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i8*, i8** %23, i64 %25
  %27 = load i8*, i8** %26
  %28 = call i8* @strcat(i8* %22, i8* %27)
  %29 = load i32, i32* %7
  %30 = load i32, i32* %4
  %31 = sub nsw i32 %30, 1
  %32 = icmp slt i32 %29, %31
  br i1 %32, label %33, label %36
33:
  %34 = getelementptr inbounds [512 x i8], [512 x i8]* %6, i64 0, i64 0
  %35 = call i8* @strcat(i8* %34, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0))
  br label %36
36:
  br label %37
37:
  %38 = load i32, i32* %7
  %39 = add nsw i32 %38, 1
  store i32 %39, i32* %7
  br label %15
40:
  %41 = getelementptr inbounds [512 x i8], [512 x i8]* %6, i64 0, i64 0
  call void @ReverseWords(i8* %41)
  %42 = getelementptr inbounds [512 x i8], [512 x i8]* %6, i64 0, i64 0
  %43 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.2, i64 0, i64 0), i8* %42)
  store i32 0, i32* %3
  br label %45
45:
  %46 = load i32, i32* %3
  ret i32 %46
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare i8* @strcat(i8*, i8*)
declare i32 @printf(i8*, ...)
