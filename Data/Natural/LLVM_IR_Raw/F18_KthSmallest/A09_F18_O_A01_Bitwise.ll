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
  store i32* %0, i32** %6
  store i32 %1, i32* %7
  store i32 %2, i32* %8
  store i32 %3, i32* %9
  %16 = load i32, i32* %7
  %17 = load i32, i32* %8
  %18 = icmp slt i32 %16, %17
  br i1 %18, label %25, label %19
19:
  %20 = load i32*, i32** %6
  %21 = load i32, i32* %7
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i32, i32* %20, i64 %22
  %24 = load i32, i32* %23
  store i32 %24, i32* %5
  br label %133
25:
  %27 = load i32*, i32** %6
  %28 = load i32, i32* %8
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i32, i32* %27, i64 %29
  %31 = load i32, i32* %30
  store i32 %31, i32* %10
  %33 = load i32, i32* %7
  store i32 %33, i32* %11
  %35 = load i32, i32* %7
  store i32 %35, i32* %12
  br label %36
36:
  %37 = load i32, i32* %12
  %38 = load i32, i32* %8
  %39 = icmp slt i32 %37, %38
  br i1 %39, label %42, label %40
40:
  br label %78
42:
  %43 = load i32*, i32** %6
  %44 = load i32, i32* %12
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i32, i32* %43, i64 %45
  %47 = load i32, i32* %46
  %48 = load i32, i32* %10
  %49 = icmp sgt i32 %47, %48
  br i1 %49, label %74, label %50
50:
  %52 = load i32*, i32** %6
  %53 = load i32, i32* %11
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i32, i32* %52, i64 %54
  %56 = load i32, i32* %55
  store i32 %56, i32* %13
  %57 = load i32*, i32** %6
  %58 = load i32, i32* %12
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i32, i32* %57, i64 %59
  %61 = load i32, i32* %60
  %62 = load i32*, i32** %6
  %63 = load i32, i32* %11
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i32, i32* %62, i64 %64
  store i32 %61, i32* %65
  %66 = load i32, i32* %13
  %67 = load i32*, i32** %6
  %68 = load i32, i32* %12
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i32, i32* %67, i64 %69
  store i32 %66, i32* %70
  %71 = load i32, i32* %11
  %72 = add nsw i32 %71, 1
  store i32 %72, i32* %11
  br label %74
74:
  br label %75
75:
  %76 = load i32, i32* %12
  %77 = add nsw i32 %76, 1
  store i32 %77, i32* %12
  br label %36
78:
  %80 = load i32*, i32** %6
  %81 = load i32, i32* %11
  %82 = sext i32 %81 to i64
  %83 = getelementptr inbounds i32, i32* %80, i64 %82
  %84 = load i32, i32* %83
  store i32 %84, i32* %14
  %85 = load i32*, i32** %6
  %86 = load i32, i32* %8
  %87 = sext i32 %86 to i64
  %88 = getelementptr inbounds i32, i32* %85, i64 %87
  %89 = load i32, i32* %88
  %90 = load i32*, i32** %6
  %91 = load i32, i32* %11
  %92 = sext i32 %91 to i64
  %93 = getelementptr inbounds i32, i32* %90, i64 %92
  store i32 %89, i32* %93
  %94 = load i32, i32* %14
  %95 = load i32*, i32** %6
  %96 = load i32, i32* %8
  %97 = sext i32 %96 to i64
  %98 = getelementptr inbounds i32, i32* %95, i64 %97
  store i32 %94, i32* %98
  %99 = load i32, i32* %11
  %100 = load i32, i32* %9
  %101 = sub nsw i32 %100, 1
  %102 = xor i32 %99, %101
  %103 = icmp ne i32 %102, 0
  br i1 %103, label %104, label %123
104:
  %105 = load i32, i32* %11
  %106 = load i32, i32* %9
  %107 = sub nsw i32 %106, 1
  %108 = icmp sgt i32 %105, %107
  br i1 %108, label %109, label %116
109:
  %110 = load i32*, i32** %6
  %111 = load i32, i32* %7
  %112 = load i32, i32* %11
  %113 = sub nsw i32 %112, 1
  %114 = load i32, i32* %9
  %115 = call i32 @KthSmallest(i32* %110, i32 %111, i32 %113, i32 %114)
  store i32 %115, i32* %5
  store i32 1, i32* %15
  br label %129
116:
  %117 = load i32*, i32** %6
  %118 = load i32, i32* %11
  %119 = add nsw i32 %118, 1
  %120 = load i32, i32* %8
  %121 = load i32, i32* %9
  %122 = call i32 @KthSmallest(i32* %117, i32 %119, i32 %120, i32 %121)
  store i32 %122, i32* %5
  store i32 1, i32* %15
  br label %129
123:
  %124 = load i32*, i32** %6
  %125 = load i32, i32* %11
  %126 = sext i32 %125 to i64
  %127 = getelementptr inbounds i32, i32* %124, i64 %126
  %128 = load i32, i32* %127
  store i32 %128, i32* %5
  store i32 1, i32* %15
  br label %129
129:
  br label %133
133:
  %134 = load i32, i32* %5
  ret i32 %134
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
