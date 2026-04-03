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
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %12 = load i32, i32* %6
  %13 = load i32, i32* %5
  %14 = icmp sle i32 %12, %13
  br i1 %14, label %15, label %16
15:
  br label %127
16:
  %18 = load i32, i32* %5
  %19 = load i32, i32* %6
  %20 = add nsw i32 %18, %19
  %21 = ashr i32 %20, 1
  store i32 %21, i32* %7
  %22 = load i32*, i32** %4
  %23 = load i32, i32* %5
  %24 = load i32, i32* %7
  call void @MergeSort(i32* %22, i32 %23, i32 %24)
  %25 = load i32*, i32** %4
  %26 = load i32, i32* %7
  %27 = add nsw i32 %26, 1
  %28 = load i32, i32* %6
  call void @MergeSort(i32* %25, i32 %27, i32 %28)
  %30 = load i32, i32* %6
  %31 = load i32, i32* %5
  %32 = sub nsw i32 %30, %31
  %33 = add nsw i32 %32, 1
  %34 = sext i32 %33 to i64
  %35 = mul i64 %34, 4
  %36 = call noalias i8* @malloc(i64 %35)
  store i32* %37, i32** %8
  %39 = load i32, i32* %5
  store i32 %39, i32* %9
  %41 = load i32, i32* %7
  %42 = add nsw i32 %41, 1
  store i32 %42, i32* %10
  store i32 0, i32* %11
  br label %44
44:
  %45 = load i32, i32* %9
  %46 = load i32, i32* %7
  %47 = icmp sle i32 %45, %46
  br i1 %47, label %52, label %48
48:
  %49 = load i32, i32* %10
  %50 = load i32, i32* %6
  %51 = icmp sle i32 %49, %50
  br label %52
52:
  %53 = phi i1 [ true, %44 ], [ %51, %48 ]
  br i1 %53, label %54, label %99
54:
  %55 = load i32, i32* %9
  %56 = load i32, i32* %7
  %57 = icmp sle i32 %55, %56
  br i1 %57, label %58, label %86
58:
  %59 = load i32, i32* %10
  %60 = load i32, i32* %6
  %61 = icmp sgt i32 %59, %60
  br i1 %61, label %74, label %62
62:
  %63 = load i32*, i32** %4
  %64 = load i32, i32* %9
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i32, i32* %63, i64 %65
  %67 = load i32, i32* %66
  %68 = load i32*, i32** %4
  %69 = load i32, i32* %10
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds i32, i32* %68, i64 %70
  %72 = load i32, i32* %71
  %73 = icmp sle i32 %67, %72
  br i1 %73, label %74, label %86
74:
  %75 = load i32*, i32** %4
  %76 = load i32, i32* %9
  %77 = add nsw i32 %76, 1
  store i32 %77, i32* %9
  %78 = sext i32 %76 to i64
  %79 = getelementptr inbounds i32, i32* %75, i64 %78
  %80 = load i32, i32* %79
  %81 = load i32*, i32** %8
  %82 = load i32, i32* %11
  %83 = add nsw i32 %82, 1
  store i32 %83, i32* %11
  %84 = sext i32 %82 to i64
  %85 = getelementptr inbounds i32, i32* %81, i64 %84
  store i32 %80, i32* %85
  br label %98
86:
  %87 = load i32*, i32** %4
  %88 = load i32, i32* %10
  %89 = add nsw i32 %88, 1
  store i32 %89, i32* %10
  %90 = sext i32 %88 to i64
  %91 = getelementptr inbounds i32, i32* %87, i64 %90
  %92 = load i32, i32* %91
  %93 = load i32*, i32** %8
  %94 = load i32, i32* %11
  %95 = add nsw i32 %94, 1
  store i32 %95, i32* %11
  %96 = sext i32 %94 to i64
  %97 = getelementptr inbounds i32, i32* %93, i64 %96
  store i32 %92, i32* %97
  br label %98
98:
  br label %44
99:
  store i32 0, i32* %9
  br label %100
100:
  %101 = load i32, i32* %9
  %102 = load i32, i32* %11
  %103 = icmp slt i32 %101, %102
  br i1 %103, label %104, label %119
104:
  %105 = load i32*, i32** %8
  %106 = load i32, i32* %9
  %107 = sext i32 %106 to i64
  %108 = getelementptr inbounds i32, i32* %105, i64 %107
  %109 = load i32, i32* %108
  %110 = load i32*, i32** %4
  %111 = load i32, i32* %5
  %112 = load i32, i32* %9
  %113 = add nsw i32 %111, %112
  %114 = sext i32 %113 to i64
  %115 = getelementptr inbounds i32, i32* %110, i64 %114
  store i32 %109, i32* %115
  br label %116
116:
  %117 = load i32, i32* %9
  %118 = add nsw i32 %117, 1
  store i32 %118, i32* %9
  br label %100
119:
  %120 = load i32*, i32** %8
  call void @free(i8* %121)
  br label %127
127:
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
