@.str = constant [3 x i8] c"0\0A\00"
@.str.1 = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @VowelCount(i8* %0) {
  %2 = alloca i8*
  %3 = alloca [256 x i32]
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %2
  call void @llvm.memset.p0i8.i64(i8* align 16 %8, i8 0, i64 1024, i1 false)
  store i32 7, i32* %4
  store i32 14, i32* %5
  %11 = getelementptr inbounds [256 x i32], [256 x i32]* %3, i64 0, i64 85
  store i32 1, i32* %11
  %12 = getelementptr inbounds [256 x i32], [256 x i32]* %3, i64 0, i64 79
  store i32 1, i32* %12
  %13 = getelementptr inbounds [256 x i32], [256 x i32]* %3, i64 0, i64 73
  store i32 1, i32* %13
  %14 = getelementptr inbounds [256 x i32], [256 x i32]* %3, i64 0, i64 69
  store i32 1, i32* %14
  %15 = getelementptr inbounds [256 x i32], [256 x i32]* %3, i64 0, i64 65
  store i32 1, i32* %15
  %16 = getelementptr inbounds [256 x i32], [256 x i32]* %3, i64 0, i64 117
  store i32 1, i32* %16
  %17 = getelementptr inbounds [256 x i32], [256 x i32]* %3, i64 0, i64 111
  store i32 1, i32* %17
  %18 = getelementptr inbounds [256 x i32], [256 x i32]* %3, i64 0, i64 105
  store i32 1, i32* %18
  %19 = getelementptr inbounds [256 x i32], [256 x i32]* %3, i64 0, i64 101
  store i32 1, i32* %19
  %20 = getelementptr inbounds [256 x i32], [256 x i32]* %3, i64 0, i64 97
  store i32 1, i32* %20
  store i32 0, i32* %6
  br label %22
22:
  %23 = load i8*, i8** %2
  %24 = load i8, i8* %23
  %25 = icmp ne i8 %24, 0
  br i1 %25, label %26, label %48
26:
  %27 = load i32, i32* %5
  %28 = load i32, i32* %4
  %29 = mul nsw i32 %28, 2
  %30 = icmp eq i32 %27, %29
  br i1 %30, label %31, label %44
31:
  %32 = load i8*, i8** %2
  %33 = load i8, i8* %32
  %34 = zext i8 %33 to i64
  %35 = getelementptr inbounds [256 x i32], [256 x i32]* %3, i64 0, i64 %34
  %36 = load i32, i32* %35
  %37 = icmp ne i32 %36, 0
  br i1 %37, label %38, label %41
38:
  %39 = load i32, i32* %6
  %40 = add nsw i32 %39, 1
  store i32 %40, i32* %6
  br label %41
41:
  %42 = load i8*, i8** %2
  %43 = getelementptr inbounds i8, i8* %42, i32 1
  store i8* %43, i8** %2
  br label %47
44:
  %45 = load i8*, i8** %2
  %46 = getelementptr inbounds i8, i8* %45, i32 -1
  store i8* %46, i8** %2
  br label %47
47:
  br label %22
48:
  %49 = load i32, i32* %6
  ret i32 %49
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
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %10
8:
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0))
  store i32 0, i32* %3
  br label %16
10:
  %11 = load i8**, i8*** %5
  %12 = getelementptr inbounds i8*, i8** %11, i64 1
  %13 = load i8*, i8** %12
  %14 = call i32 @VowelCount(i8* %13)
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i32 %14)
  store i32 0, i32* %3
  br label %16
16:
  %17 = load i32, i32* %3
  ret i32 %17
}
declare i32 @printf(i8*, ...)
