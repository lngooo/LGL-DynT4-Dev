@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @LCP(i8** %0, i32 %1, i8* %2) {
  %4 = alloca i8**
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i8** %0, i8*** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  store i32 0, i32* %7
  br label %12
12:
  %13 = load i8**, i8*** %4
  %14 = getelementptr inbounds i8*, i8** %13, i64 0
  %15 = load i8*, i8** %14
  %16 = load i32, i32* %7
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds i8, i8* %15, i64 %17
  %19 = load i8, i8* %18
  %20 = icmp ne i8 %19, 0
  %21 = xor i1 %20, true
  %22 = xor i1 %21, true
  br i1 %22, label %23, label %80
23:
  store i32 1, i32* %8
  store i32 1, i32* %9
  br label %26
26:
  %27 = load i32, i32* %9
  %28 = load i32, i32* %5
  %29 = icmp slt i32 %27, %28
  br i1 %29, label %32, label %30
30:
  br label %57
32:
  %33 = load i8**, i8*** %4
  %34 = load i32, i32* %9
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i8*, i8** %33, i64 %35
  %37 = load i8*, i8** %36
  %38 = load i32, i32* %7
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8, i8* %37, i64 %39
  %41 = load i8, i8* %40
  %42 = sext i8 %41 to i32
  %43 = load i8**, i8*** %4
  %44 = getelementptr inbounds i8*, i8** %43, i64 0
  %45 = load i8*, i8** %44
  %46 = load i32, i32* %7
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i8, i8* %45, i64 %47
  %49 = load i8, i8* %48
  %50 = sext i8 %49 to i32
  %51 = icmp ne i32 %42, %50
  br i1 %51, label %52, label %53
52:
  store i32 0, i32* %8
  br label %53
53:
  br label %54
54:
  %55 = load i32, i32* %9
  %56 = add nsw i32 %55, 1
  store i32 %56, i32* %9
  br label %26
57:
  %58 = load i32, i32* %8
  %59 = icmp ne i32 %58, 0
  br i1 %59, label %60, label %74
60:
  %61 = load i8**, i8*** %4
  %62 = getelementptr inbounds i8*, i8** %61, i64 0
  %63 = load i8*, i8** %62
  %64 = load i32, i32* %7
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i8, i8* %63, i64 %65
  %67 = load i8, i8* %66
  %68 = load i8*, i8** %6
  %69 = load i32, i32* %7
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds i8, i8* %68, i64 %70
  store i8 %67, i8* %71
  %72 = load i32, i32* %7
  %73 = add nsw i32 %72, 1
  store i32 %73, i32* %7
  br label %75
74:
  store i32 3, i32* %10
  br label %76
75:
  store i32 0, i32* %10
  br label %76
76:
  %78 = load i32, i32* %10
  switch i32 %78, label %86 [
    i32 0, label %79
    i32 3, label %80
  ]
79:
  br label %12
80:
  %81 = load i8*, i8** %6
  %82 = load i32, i32* %7
  %83 = sext i32 %82 to i64
  %84 = getelementptr inbounds i8, i8* %81, i64 %83
  store i8 0, i8* %84
  ret void
86:
  unreachable
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
  call void @LCP(i8** %21, i32 %22, i8* %23)
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
