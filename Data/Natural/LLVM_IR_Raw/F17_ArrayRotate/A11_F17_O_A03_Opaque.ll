@.str = constant [6 x i8] c"Never\00"
@.str.1 = constant [4 x i8] c"%d \00"
@.str.2 = constant [2 x i8] c"\0A\00"
define dso_local void @ArrayRotate(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32*
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  store i32 10, i32* %7
  %14 = load i32, i32* %5
  %15 = icmp eq i32 %14, 0
  br i1 %15, label %16, label %17
16:
  store i32 1, i32* %8
  br label %113
17:
  %18 = load i32, i32* %5
  %19 = load i32, i32* %6
  %20 = srem i32 %19, %18
  store i32 %20, i32* %6
  %21 = load i32, i32* %7
  %22 = load i32, i32* %7
  %23 = mul nsw i32 %21, %22
  %24 = add nsw i32 %23, 5
  %25 = icmp slt i32 %24, 0
  br i1 %25, label %26, label %28
26:
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @.str, i64 0, i64 0))
  br label %28
28:
  %30 = load i32, i32* %6
  %31 = sext i32 %30 to i64
  %32 = mul i64 %31, 4
  %33 = call noalias i8* @malloc(i64 %32)
  store i32* %34, i32** %9
  store i32 0, i32* %10
  br label %36
36:
  %37 = load i32, i32* %10
  %38 = load i32, i32* %6
  %39 = icmp slt i32 %37, %38
  br i1 %39, label %42, label %40
40:
  store i32 2, i32* %8
  br label %55
42:
  %43 = load i32*, i32** %4
  %44 = load i32, i32* %10
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i32, i32* %43, i64 %45
  %47 = load i32, i32* %46
  %48 = load i32*, i32** %9
  %49 = load i32, i32* %10
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i32, i32* %48, i64 %50
  store i32 %47, i32* %51
  br label %52
52:
  %53 = load i32, i32* %10
  %54 = add nsw i32 %53, 1
  store i32 %54, i32* %10
  br label %36
55:
  store i32 0, i32* %11
  br label %57
57:
  %58 = load i32, i32* %11
  %59 = load i32, i32* %5
  %60 = load i32, i32* %6
  %61 = sub nsw i32 %59, %60
  %62 = icmp slt i32 %58, %61
  br i1 %62, label %65, label %63
63:
  store i32 5, i32* %8
  br label %84
65:
  %66 = load i32, i32* %7
  %67 = icmp sgt i32 %66, 0
  br i1 %67, label %68, label %80
68:
  %69 = load i32*, i32** %4
  %70 = load i32, i32* %11
  %71 = load i32, i32* %6
  %72 = add nsw i32 %70, %71
  %73 = sext i32 %72 to i64
  %74 = getelementptr inbounds i32, i32* %69, i64 %73
  %75 = load i32, i32* %74
  %76 = load i32*, i32** %4
  %77 = load i32, i32* %11
  %78 = sext i32 %77 to i64
  %79 = getelementptr inbounds i32, i32* %76, i64 %78
  store i32 %75, i32* %79
  br label %80
80:
  br label %81
81:
  %82 = load i32, i32* %11
  %83 = add nsw i32 %82, 1
  store i32 %83, i32* %11
  br label %57
84:
  store i32 0, i32* %12
  br label %86
86:
  %87 = load i32, i32* %12
  %88 = load i32, i32* %6
  %89 = icmp slt i32 %87, %88
  br i1 %89, label %92, label %90
90:
  store i32 8, i32* %8
  br label %109
92:
  %93 = load i32*, i32** %9
  %94 = load i32, i32* %12
  %95 = sext i32 %94 to i64
  %96 = getelementptr inbounds i32, i32* %93, i64 %95
  %97 = load i32, i32* %96
  %98 = load i32*, i32** %4
  %99 = load i32, i32* %5
  %100 = load i32, i32* %6
  %101 = sub nsw i32 %99, %100
  %102 = load i32, i32* %12
  %103 = add nsw i32 %101, %102
  %104 = sext i32 %103 to i64
  %105 = getelementptr inbounds i32, i32* %98, i64 %104
  store i32 %97, i32* %105
  br label %106
106:
  %107 = load i32, i32* %12
  %108 = add nsw i32 %107, 1
  store i32 %108, i32* %12
  br label %86
109:
  %110 = load i32*, i32** %9
  call void @free(i8* %111)
  store i32 0, i32* %8
  br label %113
113:
  %115 = load i32, i32* %8
  switch i32 %115, label %117 [
    i32 0, label %116
    i32 1, label %116
  ]
116:
  ret void
117:
  unreachable
}
declare i32 @printf(i8*, ...)
declare noalias i8* @malloc(i64)
declare void @free(i8*)
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
  br label %79
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
  %52 = load i32*, i32** %8
  %53 = load i32, i32* %7
  %54 = load i32, i32* %6
  call void @ArrayRotate(i32* %52, i32 %53, i32 %54)
  store i32 0, i32* %10
  br label %56
56:
  %57 = load i32, i32* %10
  %58 = load i32, i32* %7
  %59 = icmp slt i32 %57, %58
  br i1 %59, label %62, label %60
60:
  br label %72
62:
  %63 = load i32*, i32** %8
  %64 = load i32, i32* %10
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i32, i32* %63, i64 %65
  %67 = load i32, i32* %66
  %68 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i32 %67)
  br label %69
69:
  %70 = load i32, i32* %10
  %71 = add nsw i32 %70, 1
  store i32 %71, i32* %10
  br label %56
72:
  %73 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.2, i64 0, i64 0))
  %74 = load i32*, i32** %8
  call void @free(i8* %75)
  store i32 0, i32* %3
  br label %79
79:
  %80 = load i32, i32* %3
  ret i32 %80
}
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i64 @strtol(i8*, i8**, i32)
