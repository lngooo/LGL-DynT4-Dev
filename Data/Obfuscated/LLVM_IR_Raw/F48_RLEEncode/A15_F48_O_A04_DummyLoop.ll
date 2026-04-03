@.str = constant [5 x i8] c"%c%d\00"
@.str.1 = constant [4 x i8] c"%s\0A\00"
define dso_local void @YyUM1(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i8
  %9 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  br label %12
12:
  %13 = load i8*, i8** %3
  %14 = load i32, i32* %5
  %15 = sext i32 %14 to i64
  %16 = getelementptr inbounds i8, i8* %13, i64 %15
  %17 = load i8, i8* %16
  %18 = icmp ne i8 %17, 0
  br i1 %18, label %19, label %67
19:
  store i32 0, i32* %7
  %21 = load i8*, i8** %3
  %22 = load i32, i32* %5
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i8, i8* %21, i64 %23
  %25 = load i8, i8* %24
  store i8 %25, i8* %8
  store i32 0, i32* %9
  br label %27
27:
  %28 = load i32, i32* %9
  %29 = icmp slt i32 %28, 1
  br i1 %29, label %32, label %30
30:
  br label %52
32:
  br label %33
33:
  %34 = load i8*, i8** %3
  %35 = load i32, i32* %5
  %36 = load i32, i32* %7
  %37 = add nsw i32 %35, %36
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i8, i8* %34, i64 %38
  %40 = load i8, i8* %39
  %41 = sext i8 %40 to i32
  %42 = load i8, i8* %8
  %43 = sext i8 %42 to i32
  %44 = icmp eq i32 %41, %43
  br i1 %44, label %45, label %48
45:
  %46 = load i32, i32* %7
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %7
  br label %33
48:
  br label %49
49:
  %50 = load i32, i32* %9
  %51 = add nsw i32 %50, 1
  store i32 %51, i32* %9
  br label %27
52:
  %53 = load i8*, i8** %4
  %54 = load i32, i32* %6
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i8, i8* %53, i64 %55
  %57 = load i8, i8* %8
  %58 = sext i8 %57 to i32
  %59 = load i32, i32* %7
  %60 = call i32 (i8*, i8*, ...) @sprintf(i8* %56, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %58, i32 %59)
  %61 = load i32, i32* %6
  %62 = add nsw i32 %61, %60
  store i32 %62, i32* %6
  %63 = load i32, i32* %7
  %64 = load i32, i32* %5
  %65 = add nsw i32 %64, %63
  store i32 %65, i32* %5
  br label %12
67:
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
  call void @YyUM1(i8* %18, i8* %19)
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
