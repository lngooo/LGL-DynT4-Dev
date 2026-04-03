@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @LCP(i8** %0, i32 %1, i8* %2) {
  %4 = alloca i8**
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i8** %0, i8*** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  store i32 0, i32* %7
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
  br i1 %22, label %23, label %26
23:
  %24 = load i32, i32* %7
  %25 = add nsw i32 %24, 1
  store i32 %25, i32* %7
  br label %14
26:
  store i32 0, i32* %8
  br label %28
28:
  %29 = load i32, i32* %8
  %30 = load i32, i32* %7
  %31 = icmp slt i32 %29, %30
  br i1 %31, label %33, label %32
32:
  store i32 4, i32* %9
  br label %106
33:
  store i32 1, i32* %10
  store i32 0, i32* %11
  br label %36
36:
  %37 = load i32, i32* %11
  %38 = icmp slt i32 %37, 1
  br i1 %38, label %41, label %39
39:
  store i32 7, i32* %9
  br label %78
41:
  store i32 1, i32* %12
  br label %43
43:
  %44 = load i32, i32* %12
  %45 = load i32, i32* %5
  %46 = icmp slt i32 %44, %45
  br i1 %46, label %49, label %47
47:
  store i32 10, i32* %9
  br label %74
49:
  %50 = load i8**, i8*** %4
  %51 = load i32, i32* %12
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i8*, i8** %50, i64 %52
  %54 = load i8*, i8** %53
  %55 = load i32, i32* %8
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i8, i8* %54, i64 %56
  %58 = load i8, i8* %57
  %59 = sext i8 %58 to i32
  %60 = load i8**, i8*** %4
  %61 = getelementptr inbounds i8*, i8** %60, i64 0
  %62 = load i8*, i8** %61
  %63 = load i32, i32* %8
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i8, i8* %62, i64 %64
  %66 = load i8, i8* %65
  %67 = sext i8 %66 to i32
  %68 = icmp ne i32 %59, %67
  br i1 %68, label %69, label %70
69:
  store i32 0, i32* %10
  br label %70
70:
  br label %71
71:
  %72 = load i32, i32* %12
  %73 = add nsw i32 %72, 1
  store i32 %73, i32* %12
  br label %43
74:
  br label %75
75:
  %76 = load i32, i32* %11
  %77 = add nsw i32 %76, 1
  store i32 %77, i32* %11
  br label %36
78:
  %79 = load i32, i32* %10
  %80 = icmp ne i32 %79, 0
  br i1 %80, label %81, label %93
81:
  %82 = load i8**, i8*** %4
  %83 = getelementptr inbounds i8*, i8** %82, i64 0
  %84 = load i8*, i8** %83
  %85 = load i32, i32* %8
  %86 = sext i32 %85 to i64
  %87 = getelementptr inbounds i8, i8* %84, i64 %86
  %88 = load i8, i8* %87
  %89 = load i8*, i8** %6
  %90 = load i32, i32* %8
  %91 = sext i32 %90 to i64
  %92 = getelementptr inbounds i8, i8* %89, i64 %91
  store i8 %88, i8* %92
  br label %98
93:
  %94 = load i8*, i8** %6
  %95 = load i32, i32* %8
  %96 = sext i32 %95 to i64
  %97 = getelementptr inbounds i8, i8* %94, i64 %96
  store i8 0, i8* %97
  store i32 1, i32* %9
  br label %99
98:
  store i32 0, i32* %9
  br label %99
99:
  %101 = load i32, i32* %9
  switch i32 %101, label %106 [
    i32 0, label %102
  ]
102:
  br label %103
103:
  %104 = load i32, i32* %8
  %105 = add nsw i32 %104, 1
  store i32 %105, i32* %8
  br label %28
106:
  %108 = load i32, i32* %9
  switch i32 %108, label %114 [
    i32 4, label %109
  ]
109:
  %110 = load i8*, i8** %6
  %111 = load i32, i32* %7
  %112 = sext i32 %111 to i64
  %113 = getelementptr inbounds i8, i8* %110, i64 %112
  store i8 0, i8* %113
  store i32 0, i32* %9
  br label %114
114:
  %116 = load i32, i32* %9
  switch i32 %116, label %118 [
    i32 0, label %117
    i32 1, label %117
  ]
117:
  ret void
118:
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
