@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @SV6(i32* %0, i32 %1, i32 %2, i32 %3) {
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
  br label %22
22:
  %23 = load i32, i32* %10
  %24 = load i32, i32* %11
  %25 = icmp sgt i32 %23, %24
  br i1 %25, label %26, label %27
26:
  store i32 -1, i32* %5
  store i32 1, i32* %12
  br label %120
27:
  %28 = load i32*, i32** %6
  %29 = load i32, i32* %11
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %28, i64 %30
  %32 = load i32, i32* %31
  store i32 %32, i32* %13
  %33 = load i32, i32* %10
  store i32 %33, i32* %14
  %34 = load i32, i32* %10
  store i32 %34, i32* %15
  br label %35
35:
  %36 = load i32, i32* %15
  %37 = load i32, i32* %11
  %38 = icmp sge i32 %36, %37
  br i1 %38, label %39, label %40
39:
  br label %77
40:
  %41 = load i32*, i32** %6
  %42 = load i32, i32* %15
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i32, i32* %41, i64 %43
  %45 = load i32, i32* %44
  %46 = load i32, i32* %13
  %47 = icmp sgt i32 %45, %46
  br i1 %47, label %48, label %51
48:
  %49 = load i32, i32* %15
  %50 = add nsw i32 %49, 1
  store i32 %50, i32* %15
  br label %35
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
  %74 = load i32, i32* %15
  %75 = add nsw i32 %74, 1
  store i32 %75, i32* %15
  store i32 3, i32* %12
  br label %35
77:
  %79 = load i32*, i32** %6
  %80 = load i32, i32* %14
  %81 = sext i32 %80 to i64
  %82 = getelementptr inbounds i32, i32* %79, i64 %81
  %83 = load i32, i32* %82
  store i32 %83, i32* %17
  %84 = load i32*, i32** %6
  %85 = load i32, i32* %11
  %86 = sext i32 %85 to i64
  %87 = getelementptr inbounds i32, i32* %84, i64 %86
  %88 = load i32, i32* %87
  %89 = load i32*, i32** %6
  %90 = load i32, i32* %14
  %91 = sext i32 %90 to i64
  %92 = getelementptr inbounds i32, i32* %89, i64 %91
  store i32 %88, i32* %92
  %93 = load i32, i32* %17
  %94 = load i32*, i32** %6
  %95 = load i32, i32* %11
  %96 = sext i32 %95 to i64
  %97 = getelementptr inbounds i32, i32* %94, i64 %96
  store i32 %93, i32* %97
  %99 = load i32, i32* %14
  %100 = load i32, i32* %9
  %101 = sub nsw i32 %100, 1
  %102 = icmp eq i32 %99, %101
  br i1 %102, label %103, label %109
103:
  %104 = load i32*, i32** %6
  %105 = load i32, i32* %14
  %106 = sext i32 %105 to i64
  %107 = getelementptr inbounds i32, i32* %104, i64 %106
  %108 = load i32, i32* %107
  store i32 %108, i32* %5
  store i32 1, i32* %12
  br label %120
109:
  %110 = load i32, i32* %14
  %111 = load i32, i32* %9
  %112 = sub nsw i32 %111, 1
  %113 = icmp sgt i32 %110, %112
  br i1 %113, label %114, label %117
114:
  %115 = load i32, i32* %14
  %116 = sub nsw i32 %115, 1
  store i32 %116, i32* %11
  br label %22
117:
  %118 = load i32, i32* %14
  %119 = add nsw i32 %118, 1
  store i32 %119, i32* %10
  br label %22
120:
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
  %57 = call i32 @SV6(i32* %53, i32 0, i32 %55, i32 %56)
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
