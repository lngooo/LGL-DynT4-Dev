@.str = constant [2 x i8] c" \00"
@.str.1 = constant [4 x i8] c"%s\0A\00"
define dso_local void @ReverseWords(i8* %0) {
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
  %35 = call i8* @strcat(i8* %34, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
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
  %43 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i8* %42)
  store i32 0, i32* %3
  br label %45
45:
  %46 = load i32, i32* %3
  ret i32 %46
}
declare i32 @printf(i8*, ...)
