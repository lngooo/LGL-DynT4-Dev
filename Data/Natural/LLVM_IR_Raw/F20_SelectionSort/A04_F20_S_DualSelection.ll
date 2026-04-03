@.str = constant [5 x i8] c"%d%s\00"
@.str.1 = constant [1 x i8] zeroinitializer
@.str.2 = constant [2 x i8] c" \00"
@.str.3 = constant [2 x i8] c"\0A\00"
define dso_local void @SelectionSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca i32
  %14 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  %17 = load i32, i32* %4
  %18 = sub nsw i32 %17, 1
  store i32 %18, i32* %6
  br label %19
19:
  %20 = load i32, i32* %5
  %21 = load i32, i32* %6
  %22 = icmp slt i32 %20, %21
  br i1 %22, label %26, label %23
23:
  store i32 2, i32* %7
  br label %144
26:
  %28 = load i32*, i32** %3
  %29 = load i32, i32* %5
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %28, i64 %30
  %32 = load i32, i32* %31
  store i32 %32, i32* %8
  %34 = load i32*, i32** %3
  %35 = load i32, i32* %5
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i32, i32* %34, i64 %36
  %38 = load i32, i32* %37
  store i32 %38, i32* %9
  %40 = load i32, i32* %5
  store i32 %40, i32* %10
  %42 = load i32, i32* %5
  store i32 %42, i32* %11
  %44 = load i32, i32* %5
  store i32 %44, i32* %12
  br label %45
45:
  %46 = load i32, i32* %12
  %47 = load i32, i32* %6
  %48 = icmp sle i32 %46, %47
  br i1 %48, label %51, label %49
49:
  store i32 5, i32* %7
  br label %86
51:
  %52 = load i32*, i32** %3
  %53 = load i32, i32* %12
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i32, i32* %52, i64 %54
  %56 = load i32, i32* %55
  %57 = load i32, i32* %8
  %58 = icmp slt i32 %56, %57
  br i1 %58, label %59, label %66
59:
  %60 = load i32*, i32** %3
  %61 = load i32, i32* %12
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i32, i32* %60, i64 %62
  %64 = load i32, i32* %63
  store i32 %64, i32* %8
  %65 = load i32, i32* %12
  store i32 %65, i32* %10
  br label %82
66:
  %67 = load i32*, i32** %3
  %68 = load i32, i32* %12
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i32, i32* %67, i64 %69
  %71 = load i32, i32* %70
  %72 = load i32, i32* %9
  %73 = icmp sgt i32 %71, %72
  br i1 %73, label %74, label %81
74:
  %75 = load i32*, i32** %3
  %76 = load i32, i32* %12
  %77 = sext i32 %76 to i64
  %78 = getelementptr inbounds i32, i32* %75, i64 %77
  %79 = load i32, i32* %78
  store i32 %79, i32* %9
  %80 = load i32, i32* %12
  store i32 %80, i32* %11
  br label %81
81:
  br label %82
82:
  br label %83
83:
  %84 = load i32, i32* %12
  %85 = add nsw i32 %84, 1
  store i32 %85, i32* %12
  br label %45
86:
  %88 = load i32*, i32** %3
  %89 = load i32, i32* %5
  %90 = sext i32 %89 to i64
  %91 = getelementptr inbounds i32, i32* %88, i64 %90
  %92 = load i32, i32* %91
  store i32 %92, i32* %13
  %93 = load i32*, i32** %3
  %94 = load i32, i32* %10
  %95 = sext i32 %94 to i64
  %96 = getelementptr inbounds i32, i32* %93, i64 %95
  %97 = load i32, i32* %96
  %98 = load i32*, i32** %3
  %99 = load i32, i32* %5
  %100 = sext i32 %99 to i64
  %101 = getelementptr inbounds i32, i32* %98, i64 %100
  store i32 %97, i32* %101
  %102 = load i32, i32* %13
  %103 = load i32*, i32** %3
  %104 = load i32, i32* %10
  %105 = sext i32 %104 to i64
  %106 = getelementptr inbounds i32, i32* %103, i64 %105
  store i32 %102, i32* %106
  %107 = load i32, i32* %11
  %108 = load i32, i32* %5
  %109 = icmp eq i32 %107, %108
  br i1 %109, label %110, label %112
110:
  %111 = load i32, i32* %10
  store i32 %111, i32* %11
  br label %112
112:
  %114 = load i32*, i32** %3
  %115 = load i32, i32* %6
  %116 = sext i32 %115 to i64
  %117 = getelementptr inbounds i32, i32* %114, i64 %116
  %118 = load i32, i32* %117
  store i32 %118, i32* %14
  %119 = load i32*, i32** %3
  %120 = load i32, i32* %11
  %121 = sext i32 %120 to i64
  %122 = getelementptr inbounds i32, i32* %119, i64 %121
  %123 = load i32, i32* %122
  %124 = load i32*, i32** %3
  %125 = load i32, i32* %6
  %126 = sext i32 %125 to i64
  %127 = getelementptr inbounds i32, i32* %124, i64 %126
  store i32 %123, i32* %127
  %128 = load i32, i32* %14
  %129 = load i32*, i32** %3
  %130 = load i32, i32* %11
  %131 = sext i32 %130 to i64
  %132 = getelementptr inbounds i32, i32* %129, i64 %131
  store i32 %128, i32* %132
  br label %139
139:
  %140 = load i32, i32* %5
  %141 = add nsw i32 %140, 1
  store i32 %141, i32* %5
  %142 = load i32, i32* %6
  %143 = add nsw i32 %142, -1
  store i32 %143, i32* %6
  br label %19
144:
  ret void
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32*
  %8 = alloca i32
  %9 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %10 = load i32, i32* %4
  %11 = icmp slt i32 %10, 2
  br i1 %11, label %12, label %13
12:
  store i32 0, i32* %3
  br label %77
13:
  %15 = load i32, i32* %4
  %16 = sub nsw i32 %15, 1
  store i32 %16, i32* %6
  %18 = load i32, i32* %6
  %19 = sext i32 %18 to i64
  %20 = mul i64 %19, 4
  %21 = call noalias i8* @malloc(i64 %20)
  store i32* %22, i32** %7
  store i32 0, i32* %8
  br label %24
24:
  %25 = load i32, i32* %8
  %26 = load i32, i32* %6
  %27 = icmp slt i32 %25, %26
  br i1 %27, label %30, label %28
28:
  br label %45
30:
  %31 = load i8**, i8*** %5
  %32 = load i32, i32* %8
  %33 = add nsw i32 %32, 1
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i8*, i8** %31, i64 %34
  %36 = load i8*, i8** %35
  %37 = call i32 @atoi(i8* %36)
  %38 = load i32*, i32** %7
  %39 = load i32, i32* %8
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i32, i32* %38, i64 %40
  store i32 %37, i32* %41
  br label %42
42:
  %43 = load i32, i32* %8
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %8
  br label %24
45:
  %46 = load i32*, i32** %7
  %47 = load i32, i32* %6
  call void @SelectionSort(i32* %46, i32 %47)
  store i32 0, i32* %9
  br label %49
49:
  %50 = load i32, i32* %9
  %51 = load i32, i32* %6
  %52 = icmp slt i32 %50, %51
  br i1 %52, label %55, label %53
53:
  br label %71
55:
  %56 = load i32*, i32** %7
  %57 = load i32, i32* %9
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i32, i32* %56, i64 %58
  %60 = load i32, i32* %59
  %61 = load i32, i32* %9
  %62 = load i32, i32* %6
  %63 = sub nsw i32 %62, 1
  %64 = icmp eq i32 %61, %63
  %65 = zext i1 %64 to i64
  %66 = select i1 %64, i8* getelementptr inbounds ([1 x i8], [1 x i8]* @.str.1, i64 0, i64 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.2, i64 0, i64 0)
  %67 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %60, i8* %66)
  br label %68
68:
  %69 = load i32, i32* %9
  %70 = add nsw i32 %69, 1
  store i32 %70, i32* %9
  br label %49
71:
  %72 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.3, i64 0, i64 0))
  %73 = load i32*, i32** %7
  call void @free(i8* %74)
  store i32 0, i32* %3
  br label %77
77:
  %78 = load i32, i32* %3
  ret i32 %78
}
declare noalias i8* @malloc(i64)
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare void @free(i8*)
declare i64 @strtol(i8*, i8**, i32)
