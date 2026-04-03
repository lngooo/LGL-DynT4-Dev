@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @AnagramCheck(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca [256 x i32]
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %11 = load i8*, i8** %4
  %12 = call i64 @strlen(i8* %11)
  %13 = load i8*, i8** %5
  %14 = call i64 @strlen(i8* %13)
  %15 = icmp ne i64 %12, %14
  br i1 %15, label %16, label %17
16:
  store i32 0, i32* %3
  br label %77
17:
  call void @llvm.memset.p0i8.i64(i8* align 16 %19, i8 0, i64 1024, i1 false)
  store i32 0, i32* %7
  store i32 0, i32* %8
  br label %22
22:
  %23 = load i8*, i8** %4
  %24 = load i32, i32* %7
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i8, i8* %23, i64 %25
  %27 = load i8, i8* %26
  %28 = icmp ne i8 %27, 0
  br i1 %28, label %29, label %52
29:
  %30 = load i8*, i8** %4
  %31 = load i32, i32* %7
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i8, i8* %30, i64 %32
  %34 = load i8, i8* %33
  %35 = zext i8 %34 to i64
  %36 = getelementptr inbounds [256 x i32], [256 x i32]* %6, i64 0, i64 %35
  %37 = load i32, i32* %36
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* %36
  %39 = load i8*, i8** %5
  %40 = load i32, i32* %8
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i8, i8* %39, i64 %41
  %43 = load i8, i8* %42
  %44 = zext i8 %43 to i64
  %45 = getelementptr inbounds [256 x i32], [256 x i32]* %6, i64 0, i64 %44
  %46 = load i32, i32* %45
  %47 = add nsw i32 %46, -1
  store i32 %47, i32* %45
  %48 = load i32, i32* %7
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %7
  %50 = load i32, i32* %8
  %51 = add nsw i32 %50, 1
  store i32 %51, i32* %8
  br label %22
52:
  store i32 0, i32* %9
  br label %54
54:
  %55 = load i32, i32* %9
  %56 = icmp slt i32 %55, 256
  br i1 %56, label %58, label %57
57:
  store i32 4, i32* %10
  br label %69
58:
  %59 = load i32, i32* %9
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds [256 x i32], [256 x i32]* %6, i64 0, i64 %60
  %62 = load i32, i32* %61
  %63 = icmp ne i32 %62, 0
  br i1 %63, label %64, label %65
64:
  store i32 0, i32* %3
  store i32 1, i32* %10
  br label %69
65:
  br label %66
66:
  %67 = load i32, i32* %9
  %68 = add nsw i32 %67, 1
  store i32 %68, i32* %9
  br label %54
69:
  %71 = load i32, i32* %10
  switch i32 %71, label %73 [
    i32 4, label %72
  ]
72:
  store i32 1, i32* %3
  store i32 1, i32* %10
  br label %73
73:
  br label %77
77:
  %78 = load i32, i32* %3
  ret i32 %78
}
declare i64 @strlen(i8*)
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
  br label %18
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 2
  %15 = load i8*, i8** %14
  %16 = call i32 @AnagramCheck(i8* %12, i8* %15)
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %16)
  store i32 0, i32* %3
  br label %18
18:
  %19 = load i32, i32* %3
  ret i32 %19
}
declare i32 @printf(i8*, ...)
