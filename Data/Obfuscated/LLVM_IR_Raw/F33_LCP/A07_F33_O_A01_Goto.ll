@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @JCjE5(i8** %0, i32 %1, i8* %2) {
  %4 = alloca i8**
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i32
  %8 = alloca i32
  store i8** %0, i8*** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  store i32 0, i32* %7
  %10 = load i32, i32* %5
  %11 = icmp sle i32 %10, 0
  br i1 %11, label %12, label %13
12:
  br label %68
13:
  br label %14
14:
  %15 = load i8**, i8*** %4
  %16 = getelementptr inbounds i8*, i8** %15, i64 0
  %17 = load i8*, i8** %16
  %18 = load i32, i32* %7
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i8, i8* %17, i64 %19
  %21 = load i8, i8* %20
  %22 = icmp ne i8 %21, 0
  br i1 %22, label %24, label %23
23:
  br label %68
24:
  store i32 1, i32* %8
  br label %25
25:
  %26 = load i32, i32* %8
  %27 = load i32, i32* %5
  %28 = icmp sge i32 %26, %27
  br i1 %28, label %29, label %30
29:
  br label %54
30:
  %31 = load i8**, i8*** %4
  %32 = load i32, i32* %8
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8*, i8** %31, i64 %33
  %35 = load i8*, i8** %34
  %36 = load i32, i32* %7
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i8, i8* %35, i64 %37
  %39 = load i8, i8* %38
  %40 = sext i8 %39 to i32
  %41 = load i8**, i8*** %4
  %42 = getelementptr inbounds i8*, i8** %41, i64 0
  %43 = load i8*, i8** %42
  %44 = load i32, i32* %7
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i8, i8* %43, i64 %45
  %47 = load i8, i8* %46
  %48 = sext i8 %47 to i32
  %49 = icmp ne i32 %40, %48
  br i1 %49, label %50, label %51
50:
  br label %68
51:
  %52 = load i32, i32* %8
  %53 = add nsw i32 %52, 1
  store i32 %53, i32* %8
  br label %25
54:
  %55 = load i8**, i8*** %4
  %56 = getelementptr inbounds i8*, i8** %55, i64 0
  %57 = load i8*, i8** %56
  %58 = load i32, i32* %7
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i8, i8* %57, i64 %59
  %61 = load i8, i8* %60
  %62 = load i8*, i8** %6
  %63 = load i32, i32* %7
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i8, i8* %62, i64 %64
  store i8 %61, i8* %65
  %66 = load i32, i32* %7
  %67 = add nsw i32 %66, 1
  store i32 %67, i32* %7
  br label %14
68:
  %69 = load i8*, i8** %6
  %70 = load i32, i32* %7
  %71 = sext i32 %70 to i64
  %72 = getelementptr inbounds i8, i8* %69, i64 %71
  store i8 0, i8* %72
  ret void
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i8**
  %8 = alloca [128 x i8]
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %9 = load i32, i32* %4
  %10 = icmp slt i32 %9, 2
  br i1 %10, label %11, label %12
11:
  store i32 0, i32* %3
  br label %29
12:
  %14 = load i32, i32* %4
  %15 = sub nsw i32 %14, 1
  store i32 %15, i32* %6
  %17 = load i8**, i8*** %5
  %18 = getelementptr inbounds i8*, i8** %17, i64 1
  store i8** %18, i8*** %7
  call void @llvm.memset.p0i8.i64(i8* align 16 %20, i8 0, i64 128, i1 false)
  %21 = load i8**, i8*** %7
  %22 = load i32, i32* %6
  %23 = getelementptr inbounds [128 x i8], [128 x i8]* %8, i64 0, i64 0
  call void @JCjE5(i8** %21, i32 %22, i8* %23)
  %24 = getelementptr inbounds [128 x i8], [128 x i8]* %8, i64 0, i64 0
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i8* %24)
  store i32 0, i32* %3
  br label %29
29:
  %30 = load i32, i32* %3
  ret i32 %30
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare i32 @printf(i8*, ...)
