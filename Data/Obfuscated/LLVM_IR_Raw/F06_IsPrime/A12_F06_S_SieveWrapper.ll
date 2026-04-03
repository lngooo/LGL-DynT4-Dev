@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @aO(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32 %0, i32* %3
  %9 = load i32, i32* %3
  %10 = icmp slt i32 %9, 2
  br i1 %10, label %11, label %12
11:
  store i32 0, i32* %2
  br label %75
12:
  %14 = load i32, i32* %3
  %15 = add nsw i32 %14, 1
  %16 = sext i32 %15 to i64
  %17 = call noalias i8* @malloc(i64 %16)
  store i8* %17, i8** %4
  %18 = load i8*, i8** %4
  %19 = load i32, i32* %3
  %20 = add nsw i32 %19, 1
  %21 = sext i32 %20 to i64
  call void @llvm.memset.p0i8.i64(i8* align 1 %18, i8 1, i64 %21, i1 false)
  store i32 2, i32* %5
  br label %23
23:
  %24 = load i32, i32* %5
  %25 = load i32, i32* %5
  %26 = mul nsw i32 %24, %25
  %27 = load i32, i32* %3
  %28 = icmp sle i32 %26, %27
  br i1 %28, label %31, label %29
29:
  store i32 2, i32* %6
  br label %63
31:
  %32 = load i8*, i8** %4
  %33 = load i32, i32* %5
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i8, i8* %32, i64 %34
  %36 = load i8, i8* %35
  %37 = icmp ne i8 %36, 0
  br i1 %37, label %38, label %59
38:
  %40 = load i32, i32* %5
  %41 = load i32, i32* %5
  %42 = mul nsw i32 %40, %41
  store i32 %42, i32* %7
  br label %43
43:
  %44 = load i32, i32* %7
  %45 = load i32, i32* %3
  %46 = icmp sle i32 %44, %45
  br i1 %46, label %49, label %47
47:
  store i32 5, i32* %6
  br label %58
49:
  %50 = load i8*, i8** %4
  %51 = load i32, i32* %7
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i8, i8* %50, i64 %52
  store i8 0, i8* %53
  br label %54
54:
  %55 = load i32, i32* %5
  %56 = load i32, i32* %7
  %57 = add nsw i32 %56, %55
  store i32 %57, i32* %7
  br label %43
58:
  br label %59
59:
  br label %60
60:
  %61 = load i32, i32* %5
  %62 = add nsw i32 %61, 1
  store i32 %62, i32* %5
  br label %23
63:
  %65 = load i8*, i8** %4
  %66 = load i32, i32* %3
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds i8, i8* %65, i64 %67
  %69 = load i8, i8* %68
  %70 = sext i8 %69 to i32
  store i32 %70, i32* %8
  %71 = load i8*, i8** %4
  call void @free(i8* %71)
  %72 = load i32, i32* %8
  store i32 %72, i32* %2
  store i32 1, i32* %6
  br label %75
75:
  %76 = load i32, i32* %2
  ret i32 %76
}
declare noalias i8* @malloc(i64)
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare void @free(i8*)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %9
8:
  store i32 1, i32* %3
  br label %16
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @atoi(i8* %12)
  %14 = call i32 @aO(i32 %13)
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %14)
  store i32 0, i32* %3
  br label %16
16:
  %17 = load i32, i32* %3
  ret i32 %17
}
declare i32 @printf(i8*, ...)
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i64 @strtol(i8*, i8**, i32)
