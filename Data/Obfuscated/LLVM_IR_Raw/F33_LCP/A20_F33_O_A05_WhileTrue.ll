@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @Za(i8** %0, i32 %1, i8* %2) {
  %4 = alloca i8**
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i32
  %8 = alloca i8
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  store i8** %0, i8*** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  store i32 0, i32* %7
  br label %13
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
  store i8 %21, i8* %8
  %22 = load i8, i8* %8
  %23 = icmp ne i8 %22, 0
  br i1 %23, label %25, label %24
24:
  store i32 3, i32* %9
  br label %67
25:
  store i32 0, i32* %10
  store i32 1, i32* %11
  br label %28
28:
  %29 = load i32, i32* %11
  %30 = load i32, i32* %5
  %31 = icmp slt i32 %29, %30
  br i1 %31, label %33, label %32
32:
  store i32 4, i32* %9
  br label %52
33:
  %34 = load i8**, i8*** %4
  %35 = load i32, i32* %11
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i8*, i8** %34, i64 %36
  %38 = load i8*, i8** %37
  %39 = load i32, i32* %7
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8, i8* %38, i64 %40
  %42 = load i8, i8* %41
  %43 = sext i8 %42 to i32
  %44 = load i8, i8* %8
  %45 = sext i8 %44 to i32
  %46 = icmp ne i32 %43, %45
  br i1 %46, label %47, label %48
47:
  store i32 1, i32* %10
  store i32 4, i32* %9
  br label %52
48:
  br label %49
49:
  %50 = load i32, i32* %11
  %51 = add nsw i32 %50, 1
  store i32 %51, i32* %11
  br label %28
52:
  br label %54
54:
  %55 = load i32, i32* %10
  %56 = icmp ne i32 %55, 0
  br i1 %56, label %57, label %58
57:
  store i32 3, i32* %9
  br label %65
58:
  %59 = load i8, i8* %8
  %60 = load i8*, i8** %6
  %61 = load i32, i32* %7
  %62 = add nsw i32 %61, 1
  store i32 %62, i32* %7
  %63 = sext i32 %61 to i64
  %64 = getelementptr inbounds i8, i8* %60, i64 %63
  store i8 %59, i8* %64
  store i32 0, i32* %9
  br label %65
65:
  br label %67
67:
  %68 = load i32, i32* %9
  switch i32 %68, label %76 [
    i32 0, label %69
    i32 3, label %70
  ]
69:
  br label %13
70:
  %71 = load i8*, i8** %6
  %72 = load i32, i32* %7
  %73 = sext i32 %72 to i64
  %74 = getelementptr inbounds i8, i8* %71, i64 %73
  store i8 0, i8* %74
  ret void
76:
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
  call void @Za(i8** %21, i32 %22, i8* %23)
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
