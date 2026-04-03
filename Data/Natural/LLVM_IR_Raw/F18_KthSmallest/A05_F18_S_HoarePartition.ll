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
  %18 = icmp eq i32 %16, %17
  br i1 %18, label %19, label %25
19:
  %20 = load i32*, i32** %6
  %21 = load i32, i32* %7
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i32, i32* %20, i64 %22
  %24 = load i32, i32* %23
  store i32 %24, i32* %5
  br label %122
25:
  %27 = load i32*, i32** %6
  %28 = load i32, i32* %7
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i32, i32* %27, i64 %29
  %31 = load i32, i32* %30
  store i32 %31, i32* %10
  %33 = load i32, i32* %7
  %34 = sub nsw i32 %33, 1
  store i32 %34, i32* %11
  %36 = load i32, i32* %8
  %37 = add nsw i32 %36, 1
  store i32 %37, i32* %12
  br label %38
38:
  br label %39
39:
  br label %40
40:
  %41 = load i32, i32* %11
  %42 = add nsw i32 %41, 1
  store i32 %42, i32* %11
  br label %43
43:
  %44 = load i32*, i32** %6
  %45 = load i32, i32* %11
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i32, i32* %44, i64 %46
  %48 = load i32, i32* %47
  %49 = load i32, i32* %10
  %50 = icmp slt i32 %48, %49
  br i1 %50, label %40, label %51
51:
  br label %52
52:
  %53 = load i32, i32* %12
  %54 = add nsw i32 %53, -1
  store i32 %54, i32* %12
  br label %55
55:
  %56 = load i32*, i32** %6
  %57 = load i32, i32* %12
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i32, i32* %56, i64 %58
  %60 = load i32, i32* %59
  %61 = load i32, i32* %10
  %62 = icmp sgt i32 %60, %61
  br i1 %62, label %52, label %63
63:
  %64 = load i32, i32* %11
  %65 = load i32, i32* %12
  %66 = icmp sge i32 %64, %65
  br i1 %66, label %67, label %68
67:
  br label %90
68:
  %70 = load i32*, i32** %6
  %71 = load i32, i32* %11
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds i32, i32* %70, i64 %72
  %74 = load i32, i32* %73
  store i32 %74, i32* %13
  %75 = load i32*, i32** %6
  %76 = load i32, i32* %12
  %77 = sext i32 %76 to i64
  %78 = getelementptr inbounds i32, i32* %75, i64 %77
  %79 = load i32, i32* %78
  %80 = load i32*, i32** %6
  %81 = load i32, i32* %11
  %82 = sext i32 %81 to i64
  %83 = getelementptr inbounds i32, i32* %80, i64 %82
  store i32 %79, i32* %83
  %84 = load i32, i32* %13
  %85 = load i32*, i32** %6
  %86 = load i32, i32* %12
  %87 = sext i32 %86 to i64
  %88 = getelementptr inbounds i32, i32* %85, i64 %87
  store i32 %84, i32* %88
  br label %38
90:
  %92 = load i32, i32* %12
  store i32 %92, i32* %14
  %93 = load i32, i32* %14
  %94 = load i32, i32* %7
  %95 = sub nsw i32 %93, %94
  %96 = load i32, i32* %9
  %97 = sub nsw i32 %96, 1
  %98 = icmp sge i32 %95, %97
  br i1 %98, label %99, label %105
99:
  %100 = load i32*, i32** %6
  %101 = load i32, i32* %7
  %102 = load i32, i32* %14
  %103 = load i32, i32* %9
  %104 = call i32 @KthSmallest(i32* %100, i32 %101, i32 %102, i32 %103)
  store i32 %104, i32* %5
  store i32 1, i32* %15
  br label %117
105:
  %106 = load i32*, i32** %6
  %107 = load i32, i32* %14
  %108 = add nsw i32 %107, 1
  %109 = load i32, i32* %8
  %110 = load i32, i32* %9
  %111 = load i32, i32* %14
  %112 = load i32, i32* %7
  %113 = sub nsw i32 %111, %112
  %114 = add nsw i32 %113, 1
  %115 = sub nsw i32 %110, %114
  %116 = call i32 @KthSmallest(i32* %106, i32 %108, i32 %109, i32 %115)
  store i32 %116, i32* %5
  store i32 1, i32* %15
  br label %117
117:
  br label %122
122:
  %123 = load i32, i32* %5
  ret i32 %123
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
