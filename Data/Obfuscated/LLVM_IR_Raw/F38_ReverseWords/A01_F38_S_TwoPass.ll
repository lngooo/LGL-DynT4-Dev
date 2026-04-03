@.str = constant [2 x i8] c" \00"
@.str.1 = constant [4 x i8] c"%s\0A\00"
define dso_local void @ozE2(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i8
  store i8* %0, i8** %2
  %12 = load i8*, i8** %2
  %13 = call i64 @strlen(i8* %12)
  %14 = trunc i64 %13 to i32
  store i32 %14, i32* %3
  store i32 0, i32* %4
  br label %16
16:
  %17 = load i32, i32* %4
  %18 = load i32, i32* %3
  %19 = sdiv i32 %18, 2
  %20 = icmp slt i32 %17, %19
  br i1 %20, label %23, label %21
21:
  br label %52
23:
  %24 = load i8*, i8** %2
  %25 = load i32, i32* %4
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i8, i8* %24, i64 %26
  %28 = load i8, i8* %27
  store i8 %28, i8* %5
  %29 = load i8*, i8** %2
  %30 = load i32, i32* %3
  %31 = sub nsw i32 %30, 1
  %32 = load i32, i32* %4
  %33 = sub nsw i32 %31, %32
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i8, i8* %29, i64 %34
  %36 = load i8, i8* %35
  %37 = load i8*, i8** %2
  %38 = load i32, i32* %4
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8, i8* %37, i64 %39
  store i8 %36, i8* %40
  %41 = load i8, i8* %5
  %42 = load i8*, i8** %2
  %43 = load i32, i32* %3
  %44 = sub nsw i32 %43, 1
  %45 = load i32, i32* %4
  %46 = sub nsw i32 %44, %45
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i8, i8* %42, i64 %47
  store i8 %41, i8* %48
  br label %49
49:
  %50 = load i32, i32* %4
  %51 = add nsw i32 %50, 1
  store i32 %51, i32* %4
  br label %16
52:
  store i32 0, i32* %6
  store i32 0, i32* %7
  br label %55
55:
  %56 = load i32, i32* %7
  %57 = load i32, i32* %3
  %58 = icmp sle i32 %56, %57
  br i1 %58, label %61, label %59
59:
  store i32 5, i32* %8
  br label %128
61:
  %62 = load i8*, i8** %2
  %63 = load i32, i32* %7
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i8, i8* %62, i64 %64
  %66 = load i8, i8* %65
  %67 = sext i8 %66 to i32
  %68 = icmp eq i32 %67, 32
  br i1 %68, label %77, label %69
69:
  %70 = load i8*, i8** %2
  %71 = load i32, i32* %7
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds i8, i8* %70, i64 %72
  %74 = load i8, i8* %73
  %75 = sext i8 %74 to i32
  %76 = icmp eq i32 %75, 0
  br i1 %76, label %77, label %124
77:
  store i32 0, i32* %9
  br label %79
79:
  %80 = load i32, i32* %9
  %81 = load i32, i32* %7
  %82 = load i32, i32* %6
  %83 = sub nsw i32 %81, %82
  %84 = sdiv i32 %83, 2
  %85 = icmp slt i32 %80, %84
  br i1 %85, label %88, label %86
86:
  store i32 8, i32* %8
  br label %121
88:
  %89 = load i8*, i8** %2
  %90 = load i32, i32* %6
  %91 = load i32, i32* %9
  %92 = add nsw i32 %90, %91
  %93 = sext i32 %92 to i64
  %94 = getelementptr inbounds i8, i8* %89, i64 %93
  %95 = load i8, i8* %94
  store i8 %95, i8* %10
  %96 = load i8*, i8** %2
  %97 = load i32, i32* %7
  %98 = sub nsw i32 %97, 1
  %99 = load i32, i32* %9
  %100 = sub nsw i32 %98, %99
  %101 = sext i32 %100 to i64
  %102 = getelementptr inbounds i8, i8* %96, i64 %101
  %103 = load i8, i8* %102
  %104 = load i8*, i8** %2
  %105 = load i32, i32* %6
  %106 = load i32, i32* %9
  %107 = add nsw i32 %105, %106
  %108 = sext i32 %107 to i64
  %109 = getelementptr inbounds i8, i8* %104, i64 %108
  store i8 %103, i8* %109
  %110 = load i8, i8* %10
  %111 = load i8*, i8** %2
  %112 = load i32, i32* %7
  %113 = sub nsw i32 %112, 1
  %114 = load i32, i32* %9
  %115 = sub nsw i32 %113, %114
  %116 = sext i32 %115 to i64
  %117 = getelementptr inbounds i8, i8* %111, i64 %116
  store i8 %110, i8* %117
  br label %118
118:
  %119 = load i32, i32* %9
  %120 = add nsw i32 %119, 1
  store i32 %120, i32* %9
  br label %79
121:
  %122 = load i32, i32* %7
  %123 = add nsw i32 %122, 1
  store i32 %123, i32* %6
  br label %124
124:
  br label %125
125:
  %126 = load i32, i32* %7
  %127 = add nsw i32 %126, 1
  store i32 %127, i32* %7
  br label %55
128:
  ret void
}
declare i64 @strlen(i8*)
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
  call void @ozE2(i8* %41)
  %42 = getelementptr inbounds [512 x i8], [512 x i8]* %6, i64 0, i64 0
  %43 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i8* %42)
  store i32 0, i32* %3
  br label %45
45:
  %46 = load i32, i32* %3
  ret i32 %46
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare i8* @strcat(i8*, i8*)
declare i32 @printf(i8*, ...)
