@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @uXy3(i32* %0, i32 %1, i32 %2, i32 %3) {
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
  store i32* %0, i32** %6
  store i32 %1, i32* %7
  store i32 %2, i32* %8
  store i32 %3, i32* %9
  %17 = load i32, i32* %9
  %18 = icmp sgt i32 %17, 0
  br i1 %18, label %19, label %145
19:
  %20 = load i32, i32* %9
  %21 = load i32, i32* %8
  %22 = load i32, i32* %7
  %23 = sub nsw i32 %21, %22
  %24 = add nsw i32 %23, 1
  %25 = icmp sle i32 %20, %24
  br i1 %25, label %26, label %145
26:
  %28 = load i32*, i32** %6
  %29 = load i32, i32* %8
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %28, i64 %30
  %32 = load i32, i32* %31
  store i32 %32, i32* %10
  %34 = load i32, i32* %7
  store i32 %34, i32* %11
  %36 = load i32, i32* %7
  store i32 %36, i32* %12
  br label %37
37:
  %38 = load i32, i32* %12
  %39 = load i32, i32* %8
  %40 = icmp slt i32 %38, %39
  br i1 %40, label %43, label %41
41:
  br label %79
43:
  %44 = load i32*, i32** %6
  %45 = load i32, i32* %12
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i32, i32* %44, i64 %46
  %48 = load i32, i32* %47
  %49 = load i32, i32* %10
  %50 = icmp sle i32 %48, %49
  br i1 %50, label %51, label %75
51:
  %53 = load i32*, i32** %6
  %54 = load i32, i32* %11
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i32, i32* %53, i64 %55
  %57 = load i32, i32* %56
  store i32 %57, i32* %13
  %58 = load i32*, i32** %6
  %59 = load i32, i32* %12
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %58, i64 %60
  %62 = load i32, i32* %61
  %63 = load i32*, i32** %6
  %64 = load i32, i32* %11
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i32, i32* %63, i64 %65
  store i32 %62, i32* %66
  %67 = load i32, i32* %13
  %68 = load i32*, i32** %6
  %69 = load i32, i32* %12
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds i32, i32* %68, i64 %70
  store i32 %67, i32* %71
  %72 = load i32, i32* %11
  %73 = add nsw i32 %72, 1
  store i32 %73, i32* %11
  br label %75
75:
  br label %76
76:
  %77 = load i32, i32* %12
  %78 = add nsw i32 %77, 1
  store i32 %78, i32* %12
  br label %37
79:
  %81 = load i32*, i32** %6
  %82 = load i32, i32* %11
  %83 = sext i32 %82 to i64
  %84 = getelementptr inbounds i32, i32* %81, i64 %83
  %85 = load i32, i32* %84
  store i32 %85, i32* %14
  %86 = load i32*, i32** %6
  %87 = load i32, i32* %8
  %88 = sext i32 %87 to i64
  %89 = getelementptr inbounds i32, i32* %86, i64 %88
  %90 = load i32, i32* %89
  %91 = load i32*, i32** %6
  %92 = load i32, i32* %11
  %93 = sext i32 %92 to i64
  %94 = getelementptr inbounds i32, i32* %91, i64 %93
  store i32 %90, i32* %94
  %95 = load i32, i32* %14
  %96 = load i32*, i32** %6
  %97 = load i32, i32* %8
  %98 = sext i32 %97 to i64
  %99 = getelementptr inbounds i32, i32* %96, i64 %98
  store i32 %95, i32* %99
  %101 = load i32, i32* %11
  store i32 %101, i32* %15
  %102 = load i32, i32* %15
  %103 = load i32, i32* %7
  %104 = sub nsw i32 %102, %103
  %105 = load i32, i32* %9
  %106 = sub nsw i32 %105, 1
  %107 = icmp eq i32 %104, %106
  br i1 %107, label %108, label %114
108:
  %109 = load i32*, i32** %6
  %110 = load i32, i32* %15
  %111 = sext i32 %110 to i64
  %112 = getelementptr inbounds i32, i32* %109, i64 %111
  %113 = load i32, i32* %112
  store i32 %113, i32* %5
  store i32 1, i32* %16
  br label %140
114:
  %115 = load i32, i32* %15
  %116 = load i32, i32* %7
  %117 = sub nsw i32 %115, %116
  %118 = load i32, i32* %9
  %119 = sub nsw i32 %118, 1
  %120 = icmp sgt i32 %117, %119
  br i1 %120, label %121, label %128
121:
  %122 = load i32*, i32** %6
  %123 = load i32, i32* %7
  %124 = load i32, i32* %15
  %125 = sub nsw i32 %124, 1
  %126 = load i32, i32* %9
  %127 = call i32 @uXy3(i32* %122, i32 %123, i32 %125, i32 %126)
  store i32 %127, i32* %5
  store i32 1, i32* %16
  br label %140
128:
  %129 = load i32*, i32** %6
  %130 = load i32, i32* %15
  %131 = add nsw i32 %130, 1
  %132 = load i32, i32* %8
  %133 = load i32, i32* %9
  %134 = load i32, i32* %15
  %135 = sub nsw i32 %133, %134
  %136 = load i32, i32* %7
  %137 = add nsw i32 %135, %136
  %138 = sub nsw i32 %137, 1
  %139 = call i32 @uXy3(i32* %129, i32 %131, i32 %132, i32 %138)
  store i32 %139, i32* %5
  store i32 1, i32* %16
  br label %140
140:
  br label %146
145:
  store i32 -1, i32* %5
  br label %146
146:
  %147 = load i32, i32* %5
  ret i32 %147
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
  %57 = call i32 @uXy3(i32* %53, i32 0, i32 %55, i32 %56)
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
