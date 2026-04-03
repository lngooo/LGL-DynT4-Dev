@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @KJ2(i32* %0, i32 %1, i32 %2, i32 %3) {
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
  store i32 0, i32* %10
  br label %18
18:
  %19 = load i32, i32* %10
  %20 = icmp ne i32 %19, 2
  br i1 %20, label %21, label %132
21:
  %22 = load i32, i32* %10
  switch i32 %22, label %131 [
    i32 0, label %23
    i32 1, label %30
  ]
23:
  %24 = load i32, i32* %7
  %25 = load i32, i32* %8
  %26 = icmp sle i32 %24, %25
  br i1 %26, label %27, label %28
27:
  store i32 1, i32* %10
  br label %29
28:
  store i32 2, i32* %10
  br label %29
29:
  br label %131
30:
  %32 = load i32*, i32** %6
  %33 = load i32, i32* %8
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i32, i32* %32, i64 %34
  %36 = load i32, i32* %35
  store i32 %36, i32* %11
  %38 = load i32, i32* %7
  store i32 %38, i32* %12
  %40 = load i32, i32* %7
  store i32 %40, i32* %13
  br label %41
41:
  %42 = load i32, i32* %13
  %43 = load i32, i32* %8
  %44 = icmp slt i32 %42, %43
  br i1 %44, label %47, label %45
45:
  br label %83
47:
  %48 = load i32*, i32** %6
  %49 = load i32, i32* %13
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i32, i32* %48, i64 %50
  %52 = load i32, i32* %51
  %53 = load i32, i32* %11
  %54 = icmp sle i32 %52, %53
  br i1 %54, label %55, label %79
55:
  %57 = load i32*, i32** %6
  %58 = load i32, i32* %12
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i32, i32* %57, i64 %59
  %61 = load i32, i32* %60
  store i32 %61, i32* %14
  %62 = load i32*, i32** %6
  %63 = load i32, i32* %13
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i32, i32* %62, i64 %64
  %66 = load i32, i32* %65
  %67 = load i32*, i32** %6
  %68 = load i32, i32* %12
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i32, i32* %67, i64 %69
  store i32 %66, i32* %70
  %71 = load i32, i32* %14
  %72 = load i32*, i32** %6
  %73 = load i32, i32* %13
  %74 = sext i32 %73 to i64
  %75 = getelementptr inbounds i32, i32* %72, i64 %74
  store i32 %71, i32* %75
  %76 = load i32, i32* %12
  %77 = add nsw i32 %76, 1
  store i32 %77, i32* %12
  br label %79
79:
  br label %80
80:
  %81 = load i32, i32* %13
  %82 = add nsw i32 %81, 1
  store i32 %82, i32* %13
  br label %41
83:
  %85 = load i32*, i32** %6
  %86 = load i32, i32* %12
  %87 = sext i32 %86 to i64
  %88 = getelementptr inbounds i32, i32* %85, i64 %87
  %89 = load i32, i32* %88
  store i32 %89, i32* %15
  %90 = load i32*, i32** %6
  %91 = load i32, i32* %8
  %92 = sext i32 %91 to i64
  %93 = getelementptr inbounds i32, i32* %90, i64 %92
  %94 = load i32, i32* %93
  %95 = load i32*, i32** %6
  %96 = load i32, i32* %12
  %97 = sext i32 %96 to i64
  %98 = getelementptr inbounds i32, i32* %95, i64 %97
  store i32 %94, i32* %98
  %99 = load i32, i32* %15
  %100 = load i32*, i32** %6
  %101 = load i32, i32* %8
  %102 = sext i32 %101 to i64
  %103 = getelementptr inbounds i32, i32* %100, i64 %102
  store i32 %99, i32* %103
  %104 = load i32, i32* %12
  %105 = load i32, i32* %9
  %106 = sub nsw i32 %105, 1
  %107 = icmp eq i32 %104, %106
  br i1 %107, label %108, label %114
108:
  %109 = load i32*, i32** %6
  %110 = load i32, i32* %12
  %111 = sext i32 %110 to i64
  %112 = getelementptr inbounds i32, i32* %109, i64 %111
  %113 = load i32, i32* %112
  store i32 %113, i32* %5
  store i32 1, i32* %16
  br label %126
114:
  %115 = load i32, i32* %12
  %116 = load i32, i32* %9
  %117 = sub nsw i32 %116, 1
  %118 = icmp sgt i32 %115, %117
  br i1 %118, label %119, label %122
119:
  %120 = load i32, i32* %12
  %121 = sub nsw i32 %120, 1
  store i32 %121, i32* %8
  br label %125
122:
  %123 = load i32, i32* %12
  %124 = add nsw i32 %123, 1
  store i32 %124, i32* %7
  br label %125
125:
  store i32 0, i32* %10
  store i32 4, i32* %16
  br label %126
126:
  %130 = load i32, i32* %16
  switch i32 %130, label %133 [
    i32 4, label %131
  ]
131:
  br label %18
132:
  store i32 -1, i32* %5
  store i32 1, i32* %16
  br label %133
133:
  %135 = load i32, i32* %5
  ret i32 %135
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
  %57 = call i32 @KJ2(i32* %53, i32 0, i32 %55, i32 %56)
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
