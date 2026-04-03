@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @KthSmallest(i32* %0, i32 %1, i32 %2, i32 %3) {
  %5 = alloca i32
  %6 = alloca i32*
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca i32
  %14 = alloca i32
  %15 = alloca i32
  %16 = alloca i32
  %17 = alloca i32
  store i32* %0, i32** %6
  store i32 %1, i32* %7
  store i32 %2, i32* %8
  store i32 %3, i32* %9
  %19 = load i32, i32* %7
  store i32 %19, i32* %10
  %21 = load i32, i32* %8
  store i32 %21, i32* %11
  %22 = load i32, i32* %10
  %23 = load i32, i32* %11
  %24 = icmp sgt i32 %22, %23
  br i1 %24, label %25, label %26
25:
  store i32 -1, i32* %5
  store i32 1, i32* %12
  br label %135
26:
  %28 = load i32*, i32** %6
  %29 = load i32, i32* %11
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %28, i64 %30
  %32 = load i32, i32* %31
  store i32 %32, i32* %13
  %34 = load i32, i32* %10
  store i32 %34, i32* %14
  %36 = load i32, i32* %10
  store i32 %36, i32* %15
  br label %37
37:
  %38 = load i32, i32* %15
  %39 = load i32, i32* %11
  %40 = icmp slt i32 %38, %39
  br i1 %40, label %43, label %41
41:
  store i32 2, i32* %12
  br label %79
43:
  %44 = load i32*, i32** %6
  %45 = load i32, i32* %15
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i32, i32* %44, i64 %46
  %48 = load i32, i32* %47
  %49 = load i32, i32* %13
  %50 = icmp sle i32 %48, %49
  br i1 %50, label %51, label %75
51:
  %53 = load i32*, i32** %6
  %54 = load i32, i32* %14
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i32, i32* %53, i64 %55
  %57 = load i32, i32* %56
  store i32 %57, i32* %16
  %58 = load i32*, i32** %6
  %59 = load i32, i32* %15
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %58, i64 %60
  %62 = load i32, i32* %61
  %63 = load i32*, i32** %6
  %64 = load i32, i32* %14
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i32, i32* %63, i64 %65
  store i32 %62, i32* %66
  %67 = load i32, i32* %16
  %68 = load i32*, i32** %6
  %69 = load i32, i32* %15
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds i32, i32* %68, i64 %70
  store i32 %67, i32* %71
  %72 = load i32, i32* %14
  %73 = add nsw i32 %72, 1
  store i32 %73, i32* %14
  br label %75
75:
  br label %76
76:
  %77 = load i32, i32* %15
  %78 = add nsw i32 %77, 1
  store i32 %78, i32* %15
  br label %37
79:
  %81 = load i32*, i32** %6
  %82 = load i32, i32* %14
  %83 = sext i32 %82 to i64
  %84 = getelementptr inbounds i32, i32* %81, i64 %83
  %85 = load i32, i32* %84
  store i32 %85, i32* %17
  %86 = load i32*, i32** %6
  %87 = load i32, i32* %11
  %88 = sext i32 %87 to i64
  %89 = getelementptr inbounds i32, i32* %86, i64 %88
  %90 = load i32, i32* %89
  %91 = load i32*, i32** %6
  %92 = load i32, i32* %14
  %93 = sext i32 %92 to i64
  %94 = getelementptr inbounds i32, i32* %91, i64 %93
  store i32 %90, i32* %94
  %95 = load i32, i32* %17
  %96 = load i32*, i32** %6
  %97 = load i32, i32* %11
  %98 = sext i32 %97 to i64
  %99 = getelementptr inbounds i32, i32* %96, i64 %98
  store i32 %95, i32* %99
  %100 = load i32, i32* %14
  %101 = load i32, i32* %9
  %102 = sub nsw i32 %101, 1
  %103 = icmp eq i32 %100, %102
  br i1 %103, label %104, label %110
104:
  %105 = load i32*, i32** %6
  %106 = load i32, i32* %14
  %107 = sext i32 %106 to i64
  %108 = getelementptr inbounds i32, i32* %105, i64 %107
  %109 = load i32, i32* %108
  store i32 %109, i32* %5
  store i32 1, i32* %12
  br label %131
110:
  %111 = load i32, i32* %14
  %112 = load i32, i32* %9
  %113 = sub nsw i32 %112, 1
  %114 = icmp sgt i32 %111, %113
  br i1 %114, label %115, label %122
115:
  %116 = load i32*, i32** %6
  %117 = load i32, i32* %10
  %118 = load i32, i32* %14
  %119 = sub nsw i32 %118, 1
  %120 = load i32, i32* %9
  %121 = call i32 @KthSmallest(i32* %116, i32 %117, i32 %119, i32 %120)
  br label %129
122:
  %123 = load i32*, i32** %6
  %124 = load i32, i32* %14
  %125 = add nsw i32 %124, 1
  %126 = load i32, i32* %11
  %127 = load i32, i32* %9
  %128 = call i32 @KthSmallest(i32* %123, i32 %125, i32 %126, i32 %127)
  br label %129
129:
  %130 = phi i32 [ %121, %115 ], [ %128, %122 ]
  store i32 %130, i32* %5
  store i32 1, i32* %12
  br label %131
131:
  br label %135
135:
  %138 = load i32, i32* %5
  ret i32 %138
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32*
  %9 = alloca i32
  %10 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %11 = load i32, i32* %4
  %12 = icmp slt i32 %11, 3
  br i1 %12, label %13, label %14
13:
  store i32 0, i32* %3
  br label %66
14:
  %16 = load i8**, i8*** %5
  %17 = getelementptr inbounds i8*, i8** %16, i64 1
  %18 = load i8*, i8** %17
  %19 = call i32 @atoi(i8* %18)
  store i32 %19, i32* %6
  %21 = load i32, i32* %4
  %22 = sub nsw i32 %21, 2
  store i32 %22, i32* %7
  %24 = load i32, i32* %7
  %25 = sext i32 %24 to i64
  %26 = mul i64 %25, 4
  %27 = call noalias i8* @malloc(i64 %26)
  store i32* %28, i32** %8
  store i32 0, i32* %9
  br label %30
30:
  %31 = load i32, i32* %9
  %32 = load i32, i32* %7
  %33 = icmp slt i32 %31, %32
  br i1 %33, label %36, label %34
34:
  br label %51
36:
  %37 = load i8**, i8*** %5
  %38 = load i32, i32* %9
  %39 = add nsw i32 %38, 2
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8*, i8** %37, i64 %40
  %42 = load i8*, i8** %41
  %43 = call i32 @atoi(i8* %42)
  %44 = load i32*, i32** %8
  %45 = load i32, i32* %9
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i32, i32* %44, i64 %46
  store i32 %43, i32* %47
  br label %48
48:
  %49 = load i32, i32* %9
  %50 = add nsw i32 %49, 1
  store i32 %50, i32* %9
  br label %30
51:
  %53 = load i32*, i32** %8
  %54 = load i32, i32* %7
  %55 = sub nsw i32 %54, 1
  %56 = load i32, i32* %6
  %57 = call i32 @KthSmallest(i32* %53, i32 0, i32 %55, i32 %56)
  store i32 %57, i32* %10
  %58 = load i32, i32* %10
  %59 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %58)
  %60 = load i32*, i32** %8
  call void @free(i8* %61)
  store i32 0, i32* %3
  br label %66
66:
  %67 = load i32, i32* %3
  ret i32 %67
}
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare noalias i8* @malloc(i64)
declare i32 @printf(i8*, ...)
declare void @free(i8*)
declare i64 @strtol(i8*, i8**, i32)
