@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @ens(i32* %0, i32 %1, i32 %2, i32 %3) {
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
  br label %16
16:
  %17 = load i32, i32* %7
  %18 = load i32, i32* %8
  %19 = icmp sle i32 %17, %18
  %20 = xor i1 %19, true
  %21 = xor i1 %20, true
  br i1 %21, label %22, label %124
22:
  %24 = load i32*, i32** %6
  %25 = load i32, i32* %8
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i32, i32* %24, i64 %26
  %28 = load i32, i32* %27
  store i32 %28, i32* %10
  %30 = load i32, i32* %7
  store i32 %30, i32* %11
  %32 = load i32, i32* %7
  store i32 %32, i32* %12
  br label %33
33:
  %34 = load i32, i32* %12
  %35 = load i32, i32* %8
  %36 = icmp slt i32 %34, %35
  br i1 %36, label %39, label %37
37:
  br label %75
39:
  %40 = load i32*, i32** %6
  %41 = load i32, i32* %12
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i32, i32* %40, i64 %42
  %44 = load i32, i32* %43
  %45 = load i32, i32* %10
  %46 = icmp sle i32 %44, %45
  br i1 %46, label %47, label %71
47:
  %49 = load i32*, i32** %6
  %50 = load i32, i32* %11
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i32, i32* %49, i64 %51
  %53 = load i32, i32* %52
  store i32 %53, i32* %13
  %54 = load i32*, i32** %6
  %55 = load i32, i32* %12
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i32, i32* %54, i64 %56
  %58 = load i32, i32* %57
  %59 = load i32*, i32** %6
  %60 = load i32, i32* %11
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i32, i32* %59, i64 %61
  store i32 %58, i32* %62
  %63 = load i32, i32* %13
  %64 = load i32*, i32** %6
  %65 = load i32, i32* %12
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds i32, i32* %64, i64 %66
  store i32 %63, i32* %67
  %68 = load i32, i32* %11
  %69 = add nsw i32 %68, 1
  store i32 %69, i32* %11
  br label %71
71:
  br label %72
72:
  %73 = load i32, i32* %12
  %74 = add nsw i32 %73, 1
  store i32 %74, i32* %12
  br label %33
75:
  %77 = load i32*, i32** %6
  %78 = load i32, i32* %11
  %79 = sext i32 %78 to i64
  %80 = getelementptr inbounds i32, i32* %77, i64 %79
  %81 = load i32, i32* %80
  store i32 %81, i32* %14
  %82 = load i32*, i32** %6
  %83 = load i32, i32* %8
  %84 = sext i32 %83 to i64
  %85 = getelementptr inbounds i32, i32* %82, i64 %84
  %86 = load i32, i32* %85
  %87 = load i32*, i32** %6
  %88 = load i32, i32* %11
  %89 = sext i32 %88 to i64
  %90 = getelementptr inbounds i32, i32* %87, i64 %89
  store i32 %86, i32* %90
  %91 = load i32, i32* %14
  %92 = load i32*, i32** %6
  %93 = load i32, i32* %8
  %94 = sext i32 %93 to i64
  %95 = getelementptr inbounds i32, i32* %92, i64 %94
  store i32 %91, i32* %95
  %96 = load i32, i32* %11
  %97 = load i32, i32* %9
  %98 = sub nsw i32 %97, 1
  %99 = icmp eq i32 %96, %98
  br i1 %99, label %100, label %106
100:
  %101 = load i32*, i32** %6
  %102 = load i32, i32* %11
  %103 = sext i32 %102 to i64
  %104 = getelementptr inbounds i32, i32* %101, i64 %103
  %105 = load i32, i32* %104
  store i32 %105, i32* %5
  store i32 1, i32* %15
  br label %118
106:
  %107 = load i32, i32* %11
  %108 = load i32, i32* %9
  %109 = sub nsw i32 %108, 1
  %110 = icmp sgt i32 %107, %109
  br i1 %110, label %111, label %114
111:
  %112 = load i32, i32* %11
  %113 = sub nsw i32 %112, 1
  store i32 %113, i32* %8
  br label %117
114:
  %115 = load i32, i32* %11
  %116 = add nsw i32 %115, 1
  store i32 %116, i32* %7
  br label %117
117:
  store i32 0, i32* %15
  br label %118
118:
  %122 = load i32, i32* %15
  switch i32 %122, label %127 [
    i32 0, label %123
    i32 1, label %125
  ]
123:
  br label %16
124:
  store i32 -1, i32* %5
  br label %125
125:
  %126 = load i32, i32* %5
  ret i32 %126
127:
  unreachable
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
  %57 = call i32 @ens(i32* %53, i32 0, i32 %55, i32 %56)
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
