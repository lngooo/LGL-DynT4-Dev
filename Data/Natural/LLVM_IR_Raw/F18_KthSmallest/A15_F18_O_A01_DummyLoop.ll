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
  store i32* %0, i32** %6
  store i32 %1, i32* %7
  store i32 %2, i32* %8
  store i32 %3, i32* %9
  %17 = load i32, i32* %7
  %18 = load i32, i32* %8
  %19 = icmp sgt i32 %17, %18
  br i1 %19, label %20, label %21
20:
  store i32 -1, i32* %5
  br label %141
21:
  %23 = load i32*, i32** %6
  %24 = load i32, i32* %8
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i32, i32* %23, i64 %25
  %27 = load i32, i32* %26
  store i32 %27, i32* %10
  %29 = load i32, i32* %7
  store i32 %29, i32* %11
  %31 = load i32, i32* %7
  store i32 %31, i32* %12
  br label %32
32:
  %33 = load i32, i32* %12
  %34 = load i32, i32* %8
  %35 = icmp slt i32 %33, %34
  br i1 %35, label %38, label %36
36:
  store i32 2, i32* %13
  br label %85
38:
  store i32 0, i32* %14
  br label %40
40:
  %41 = load i32, i32* %14
  %42 = icmp slt i32 %41, 1
  br i1 %42, label %45, label %43
43:
  store i32 5, i32* %13
  br label %81
45:
  %46 = load i32*, i32** %6
  %47 = load i32, i32* %12
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i32, i32* %46, i64 %48
  %50 = load i32, i32* %49
  %51 = load i32, i32* %10
  %52 = icmp sle i32 %50, %51
  br i1 %52, label %53, label %77
53:
  %55 = load i32*, i32** %6
  %56 = load i32, i32* %11
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i32, i32* %55, i64 %57
  %59 = load i32, i32* %58
  store i32 %59, i32* %15
  %60 = load i32*, i32** %6
  %61 = load i32, i32* %12
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i32, i32* %60, i64 %62
  %64 = load i32, i32* %63
  %65 = load i32*, i32** %6
  %66 = load i32, i32* %11
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds i32, i32* %65, i64 %67
  store i32 %64, i32* %68
  %69 = load i32, i32* %15
  %70 = load i32*, i32** %6
  %71 = load i32, i32* %12
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds i32, i32* %70, i64 %72
  store i32 %69, i32* %73
  %74 = load i32, i32* %11
  %75 = add nsw i32 %74, 1
  store i32 %75, i32* %11
  br label %77
77:
  br label %78
78:
  %79 = load i32, i32* %14
  %80 = add nsw i32 %79, 1
  store i32 %80, i32* %14
  br label %40
81:
  br label %82
82:
  %83 = load i32, i32* %12
  %84 = add nsw i32 %83, 1
  store i32 %84, i32* %12
  br label %32
85:
  %87 = load i32*, i32** %6
  %88 = load i32, i32* %11
  %89 = sext i32 %88 to i64
  %90 = getelementptr inbounds i32, i32* %87, i64 %89
  %91 = load i32, i32* %90
  store i32 %91, i32* %16
  %92 = load i32*, i32** %6
  %93 = load i32, i32* %8
  %94 = sext i32 %93 to i64
  %95 = getelementptr inbounds i32, i32* %92, i64 %94
  %96 = load i32, i32* %95
  %97 = load i32*, i32** %6
  %98 = load i32, i32* %11
  %99 = sext i32 %98 to i64
  %100 = getelementptr inbounds i32, i32* %97, i64 %99
  store i32 %96, i32* %100
  %101 = load i32, i32* %16
  %102 = load i32*, i32** %6
  %103 = load i32, i32* %8
  %104 = sext i32 %103 to i64
  %105 = getelementptr inbounds i32, i32* %102, i64 %104
  store i32 %101, i32* %105
  %106 = load i32, i32* %11
  %107 = load i32, i32* %9
  %108 = sub nsw i32 %107, 1
  %109 = icmp eq i32 %106, %108
  br i1 %109, label %110, label %116
110:
  %111 = load i32*, i32** %6
  %112 = load i32, i32* %11
  %113 = sext i32 %112 to i64
  %114 = getelementptr inbounds i32, i32* %111, i64 %113
  %115 = load i32, i32* %114
  store i32 %115, i32* %5
  store i32 1, i32* %13
  br label %137
116:
  %117 = load i32, i32* %11
  %118 = load i32, i32* %9
  %119 = sub nsw i32 %118, 1
  %120 = icmp sgt i32 %117, %119
  br i1 %120, label %121, label %128
121:
  %122 = load i32*, i32** %6
  %123 = load i32, i32* %7
  %124 = load i32, i32* %11
  %125 = sub nsw i32 %124, 1
  %126 = load i32, i32* %9
  %127 = call i32 @KthSmallest(i32* %122, i32 %123, i32 %125, i32 %126)
  br label %135
128:
  %129 = load i32*, i32** %6
  %130 = load i32, i32* %11
  %131 = add nsw i32 %130, 1
  %132 = load i32, i32* %8
  %133 = load i32, i32* %9
  %134 = call i32 @KthSmallest(i32* %129, i32 %131, i32 %132, i32 %133)
  br label %135
135:
  %136 = phi i32 [ %127, %121 ], [ %134, %128 ]
  store i32 %136, i32* %5
  store i32 1, i32* %13
  br label %137
137:
  br label %141
141:
  %142 = load i32, i32* %5
  ret i32 %142
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
