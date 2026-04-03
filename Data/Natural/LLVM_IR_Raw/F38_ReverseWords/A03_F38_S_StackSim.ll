@.str = constant [2 x i8] c" \00"
@.str.1 = constant [4 x i8] c"%s\0A\00"
define dso_local void @ReverseWords(i8* %0) {
  %2 = alloca i8*
  %3 = alloca [128 x i8*]
  %4 = alloca i32
  %5 = alloca [256 x i8]
  %6 = alloca i8*
  %7 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %4
  %11 = getelementptr inbounds [256 x i8], [256 x i8]* %5, i64 0, i64 0
  %12 = load i8*, i8** %2
  %13 = call i8* @strcpy(i8* %11, i8* %12)
  %15 = getelementptr inbounds [256 x i8], [256 x i8]* %5, i64 0, i64 0
  %16 = call i8* @strtok(i8* %15, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  store i8* %16, i8** %6
  br label %17
17:
  %18 = load i8*, i8** %6
  %19 = icmp ne i8* %18, null
  br i1 %19, label %20, label %27
20:
  %21 = load i8*, i8** %6
  %22 = load i32, i32* %4
  %23 = add nsw i32 %22, 1
  store i32 %23, i32* %4
  %24 = sext i32 %22 to i64
  %25 = getelementptr inbounds [128 x i8*], [128 x i8*]* %3, i64 0, i64 %24
  store i8* %21, i8** %25
  %26 = call i8* @strtok(i8* null, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  store i8* %26, i8** %6
  br label %17
27:
  %28 = load i8*, i8** %2
  %29 = getelementptr inbounds i8, i8* %28, i64 0
  store i8 0, i8* %29
  %31 = load i32, i32* %4
  %32 = sub nsw i32 %31, 1
  store i32 %32, i32* %7
  br label %33
33:
  %34 = load i32, i32* %7
  %35 = icmp sge i32 %34, 0
  br i1 %35, label %38, label %36
36:
  br label %54
38:
  %39 = load i8*, i8** %2
  %40 = load i32, i32* %7
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds [128 x i8*], [128 x i8*]* %3, i64 0, i64 %41
  %43 = load i8*, i8** %42
  %44 = call i8* @strcat(i8* %39, i8* %43)
  %45 = load i32, i32* %7
  %46 = icmp sgt i32 %45, 0
  br i1 %46, label %47, label %50
47:
  %48 = load i8*, i8** %2
  %49 = call i8* @strcat(i8* %48, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  br label %50
50:
  br label %51
51:
  %52 = load i32, i32* %7
  %53 = add nsw i32 %52, -1
  store i32 %53, i32* %7
  br label %33
54:
  ret void
}
declare i8* @strcpy(i8*, i8*)
declare i8* @strtok(i8*, i8*)
declare i8* @strcat(i8*, i8*)
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
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare i32 @printf(i8*, ...)
