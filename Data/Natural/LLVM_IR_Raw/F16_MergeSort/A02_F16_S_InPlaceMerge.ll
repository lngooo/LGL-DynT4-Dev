@.str = constant [5 x i8] c"%d%s\00"
@.str.1 = constant [1 x i8] zeroinitializer
@.str.2 = constant [2 x i8] c" \00"
@.str.3 = constant [2 x i8] c"\0A\00"
define dso_local void @MergeSort(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %12 = load i32, i32* %5
  %13 = load i32, i32* %6
  %14 = icmp slt i32 %12, %13
  br i1 %14, label %15, label %118
15:
  %17 = load i32, i32* %5
  %18 = load i32, i32* %6
  %19 = load i32, i32* %5
  %20 = sub nsw i32 %18, %19
  %21 = sdiv i32 %20, 2
  %22 = add nsw i32 %17, %21
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
  %31 = load i32, i32* %7
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %8
  %33 = load i32*, i32** %4
  %34 = load i32, i32* %7
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i32, i32* %33, i64 %35
  %37 = load i32, i32* %36
  %38 = load i32*, i32** %4
  %39 = load i32, i32* %8
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i32, i32* %38, i64 %40
  %42 = load i32, i32* %41
  %43 = icmp sle i32 %37, %42
  br i1 %43, label %44, label %45
44:
  store i32 1, i32* %9
  br label %113
45:
  br label %46
46:
  %47 = load i32, i32* %5
  %48 = load i32, i32* %7
  %49 = icmp sle i32 %47, %48
  br i1 %49, label %50, label %54
50:
  %51 = load i32, i32* %8
  %52 = load i32, i32* %6
  %53 = icmp sle i32 %51, %52
  br label %54
54:
  %55 = phi i1 [ false, %46 ], [ %53, %50 ]
  br i1 %55, label %56, label %112
56:
  %57 = load i32*, i32** %4
  %58 = load i32, i32* %5
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i32, i32* %57, i64 %59
  %61 = load i32, i32* %60
  %62 = load i32*, i32** %4
  %63 = load i32, i32* %8
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i32, i32* %62, i64 %64
  %66 = load i32, i32* %65
  %67 = icmp sle i32 %61, %66
  br i1 %67, label %68, label %71
68:
  %69 = load i32, i32* %5
  %70 = add nsw i32 %69, 1
  store i32 %70, i32* %5
  br label %111
71:
  %73 = load i32*, i32** %4
  %74 = load i32, i32* %8
  %75 = sext i32 %74 to i64
  %76 = getelementptr inbounds i32, i32* %73, i64 %75
  %77 = load i32, i32* %76
  store i32 %77, i32* %10
  %79 = load i32, i32* %8
  store i32 %79, i32* %11
  br label %80
80:
  %81 = load i32, i32* %11
  %82 = load i32, i32* %5
  %83 = icmp ne i32 %81, %82
  br i1 %83, label %84, label %97
84:
  %85 = load i32*, i32** %4
  %86 = load i32, i32* %11
  %87 = sub nsw i32 %86, 1
  %88 = sext i32 %87 to i64
  %89 = getelementptr inbounds i32, i32* %85, i64 %88
  %90 = load i32, i32* %89
  %91 = load i32*, i32** %4
  %92 = load i32, i32* %11
  %93 = sext i32 %92 to i64
  %94 = getelementptr inbounds i32, i32* %91, i64 %93
  store i32 %90, i32* %94
  %95 = load i32, i32* %11
  %96 = add nsw i32 %95, -1
  store i32 %96, i32* %11
  br label %80
97:
  %98 = load i32, i32* %10
  %99 = load i32*, i32** %4
  %100 = load i32, i32* %5
  %101 = sext i32 %100 to i64
  %102 = getelementptr inbounds i32, i32* %99, i64 %101
  store i32 %98, i32* %102
  %103 = load i32, i32* %5
  %104 = add nsw i32 %103, 1
  store i32 %104, i32* %5
  %105 = load i32, i32* %7
  %106 = add nsw i32 %105, 1
  store i32 %106, i32* %7
  %107 = load i32, i32* %8
  %108 = add nsw i32 %107, 1
  store i32 %108, i32* %8
  br label %111
111:
  br label %46
112:
  store i32 0, i32* %9
  br label %113
113:
  %116 = load i32, i32* %9
  switch i32 %116, label %119 [
    i32 0, label %117
    i32 1, label %118
  ]
117:
  br label %118
118:
  ret void
119:
  unreachable
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
