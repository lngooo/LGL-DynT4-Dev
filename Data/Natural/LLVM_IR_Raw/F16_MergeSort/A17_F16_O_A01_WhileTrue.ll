@.str = constant [5 x i8] c"%d%s\00"
@.str.1 = constant [1 x i8] zeroinitializer
@.str.2 = constant [2 x i8] c" \00"
@.str.3 = constant [2 x i8] c"\0A\00"
define dso_local void @MergeSort(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32*
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %13 = load i32, i32* %5
  %14 = load i32, i32* %6
  %15 = icmp sge i32 %13, %14
  br i1 %15, label %16, label %17
16:
  br label %131
17:
  %19 = load i32, i32* %5
  %20 = load i32, i32* %6
  %21 = add nsw i32 %19, %20
  %22 = sdiv i32 %21, 2
  store i32 %22, i32* %7
  %23 = load i32*, i32** %4
  %24 = load i32, i32* %5
  %25 = load i32, i32* %7
  call void @MergeSort(i32* %23, i32 %24, i32 %25)
  %26 = load i32*, i32** %4
  %27 = load i32, i32* %7
  %28 = add nsw i32 %27, 1
  %29 = load i32, i32* %6
  call void @MergeSort(i32* %26, i32 %28, i32 %29)
  %31 = load i32, i32* %6
  %32 = load i32, i32* %5
  %33 = sub nsw i32 %31, %32
  %34 = add nsw i32 %33, 1
  %35 = mul nsw i32 %34, 4
  %36 = sext i32 %35 to i64
  %37 = call noalias i8* @malloc(i64 %36)
  store i32* %38, i32** %8
  %40 = load i32, i32* %5
  store i32 %40, i32* %9
  %42 = load i32, i32* %7
  %43 = add nsw i32 %42, 1
  store i32 %43, i32* %10
  store i32 0, i32* %11
  br label %45
45:
  br label %46
46:
  %47 = load i32, i32* %9
  %48 = load i32, i32* %7
  %49 = icmp sgt i32 %47, %48
  br i1 %49, label %50, label %55
50:
  %51 = load i32, i32* %10
  %52 = load i32, i32* %6
  %53 = icmp sgt i32 %51, %52
  br i1 %53, label %54, label %55
54:
  br label %100
55:
  %56 = load i32, i32* %9
  %57 = load i32, i32* %7
  %58 = icmp sle i32 %56, %57
  br i1 %58, label %59, label %87
59:
  %60 = load i32, i32* %10
  %61 = load i32, i32* %6
  %62 = icmp sgt i32 %60, %61
  br i1 %62, label %75, label %63
63:
  %64 = load i32*, i32** %4
  %65 = load i32, i32* %9
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds i32, i32* %64, i64 %66
  %68 = load i32, i32* %67
  %69 = load i32*, i32** %4
  %70 = load i32, i32* %10
  %71 = sext i32 %70 to i64
  %72 = getelementptr inbounds i32, i32* %69, i64 %71
  %73 = load i32, i32* %72
  %74 = icmp sle i32 %68, %73
  br i1 %74, label %75, label %87
75:
  %76 = load i32*, i32** %4
  %77 = load i32, i32* %9
  %78 = add nsw i32 %77, 1
  store i32 %78, i32* %9
  %79 = sext i32 %77 to i64
  %80 = getelementptr inbounds i32, i32* %76, i64 %79
  %81 = load i32, i32* %80
  %82 = load i32*, i32** %8
  %83 = load i32, i32* %11
  %84 = add nsw i32 %83, 1
  store i32 %84, i32* %11
  %85 = sext i32 %83 to i64
  %86 = getelementptr inbounds i32, i32* %82, i64 %85
  store i32 %81, i32* %86
  br label %99
87:
  %88 = load i32*, i32** %4
  %89 = load i32, i32* %10
  %90 = add nsw i32 %89, 1
  store i32 %90, i32* %10
  %91 = sext i32 %89 to i64
  %92 = getelementptr inbounds i32, i32* %88, i64 %91
  %93 = load i32, i32* %92
  %94 = load i32*, i32** %8
  %95 = load i32, i32* %11
  %96 = add nsw i32 %95, 1
  store i32 %96, i32* %11
  %97 = sext i32 %95 to i64
  %98 = getelementptr inbounds i32, i32* %94, i64 %97
  store i32 %93, i32* %98
  br label %99
99:
  br label %45
100:
  store i32 0, i32* %12
  br label %102
102:
  %103 = load i32, i32* %12
  %104 = load i32, i32* %11
  %105 = icmp slt i32 %103, %104
  br i1 %105, label %108, label %106
106:
  br label %123
108:
  %109 = load i32*, i32** %8
  %110 = load i32, i32* %12
  %111 = sext i32 %110 to i64
  %112 = getelementptr inbounds i32, i32* %109, i64 %111
  %113 = load i32, i32* %112
  %114 = load i32*, i32** %4
  %115 = load i32, i32* %5
  %116 = load i32, i32* %12
  %117 = add nsw i32 %115, %116
  %118 = sext i32 %117 to i64
  %119 = getelementptr inbounds i32, i32* %114, i64 %118
  store i32 %113, i32* %119
  br label %120
120:
  %121 = load i32, i32* %12
  %122 = add nsw i32 %121, 1
  store i32 %122, i32* %12
  br label %102
123:
  %124 = load i32*, i32** %8
  call void @free(i8* %125)
  br label %131
131:
  ret void
}
declare noalias i8* @malloc(i64)
declare void @free(i8*)
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
  br label %78
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
  %48 = sub nsw i32 %47, 1
  call void @MergeSort(i32* %46, i32 0, i32 %48)
  store i32 0, i32* %9
  br label %50
50:
  %51 = load i32, i32* %9
  %52 = load i32, i32* %6
  %53 = icmp slt i32 %51, %52
  br i1 %53, label %56, label %54
54:
  br label %72
56:
  %57 = load i32*, i32** %7
  %58 = load i32, i32* %9
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i32, i32* %57, i64 %59
  %61 = load i32, i32* %60
  %62 = load i32, i32* %9
  %63 = load i32, i32* %6
  %64 = sub nsw i32 %63, 1
  %65 = icmp eq i32 %62, %64
  %66 = zext i1 %65 to i64
  %67 = select i1 %65, i8* getelementptr inbounds ([1 x i8], [1 x i8]* @.str.1, i64 0, i64 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.2, i64 0, i64 0)
  %68 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %61, i8* %67)
  br label %69
69:
  %70 = load i32, i32* %9
  %71 = add nsw i32 %70, 1
  store i32 %71, i32* %9
  br label %50
72:
  %73 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.3, i64 0, i64 0))
  %74 = load i32*, i32** %7
  call void @free(i8* %75)
  store i32 0, i32* %3
  br label %78
78:
  %79 = load i32, i32* %3
  ret i32 %79
}
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare i64 @strtol(i8*, i8**, i32)
