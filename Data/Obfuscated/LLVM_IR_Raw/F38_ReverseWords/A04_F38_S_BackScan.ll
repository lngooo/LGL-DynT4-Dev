@.str = constant [2 x i8] c" \00"
@.str.1 = constant [4 x i8] c"%s\0A\00"
define dso_local void @wyS(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca [256 x i8]
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %2
  %8 = load i8*, i8** %2
  %9 = call i64 @strlen(i8* %8)
  %10 = trunc i64 %9 to i32
  store i32 %10, i32* %3
  call void @llvm.memset.p0i8.i64(i8* align 16 %12, i8 0, i64 256, i1 false)
  %14 = load i32, i32* %3
  store i32 %14, i32* %5
  %16 = load i32, i32* %3
  %17 = sub nsw i32 %16, 1
  store i32 %17, i32* %6
  br label %18
18:
  %19 = load i32, i32* %6
  %20 = icmp sge i32 %19, -1
  br i1 %20, label %23, label %21
21:
  br label %58
23:
  %24 = load i32, i32* %6
  %25 = icmp eq i32 %24, -1
  br i1 %25, label %34, label %26
26:
  %27 = load i8*, i8** %2
  %28 = load i32, i32* %6
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i8, i8* %27, i64 %29
  %31 = load i8, i8* %30
  %32 = sext i8 %31 to i32
  %33 = icmp eq i32 %32, 32
  br i1 %33, label %34, label %54
34:
  %35 = getelementptr inbounds [256 x i8], [256 x i8]* %4, i64 0, i64 0
  %36 = load i8*, i8** %2
  %37 = load i32, i32* %6
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i8, i8* %36, i64 %38
  %40 = getelementptr inbounds i8, i8* %39, i64 1
  %41 = load i32, i32* %5
  %42 = load i32, i32* %6
  %43 = sub nsw i32 %41, %42
  %44 = sub nsw i32 %43, 1
  %45 = sext i32 %44 to i64
  %46 = call i8* @strncat(i8* %35, i8* %40, i64 %45)
  %47 = load i32, i32* %6
  %48 = icmp ne i32 %47, -1
  br i1 %48, label %49, label %52
49:
  %50 = getelementptr inbounds [256 x i8], [256 x i8]* %4, i64 0, i64 0
  %51 = call i8* @strcat(i8* %50, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  br label %52
52:
  %53 = load i32, i32* %6
  store i32 %53, i32* %5
  br label %54
54:
  br label %55
55:
  %56 = load i32, i32* %6
  %57 = add nsw i32 %56, -1
  store i32 %57, i32* %6
  br label %18
58:
  %59 = load i8*, i8** %2
  %60 = getelementptr inbounds [256 x i8], [256 x i8]* %4, i64 0, i64 0
  %61 = call i8* @strcpy(i8* %59, i8* %60)
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
  call void @wyS(i8* %41)
  %42 = getelementptr inbounds [512 x i8], [512 x i8]* %6, i64 0, i64 0
  %43 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i8* %42)
  store i32 0, i32* %3
  br label %45
45:
  %46 = load i32, i32* %3
  ret i32 %46
}
declare i32 @printf(i8*, ...)
