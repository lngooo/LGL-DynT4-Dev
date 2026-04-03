@.str = constant [5 x i8] c"%d%s\00"
@.str.1 = constant [1 x i8] zeroinitializer
@.str.2 = constant [2 x i8] c" \00"
@.str.3 = constant [2 x i8] c"\0A\00"
define dso_local void @MergeSort(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca [256 x i32]
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
  br label %120
17:
  %19 = load i32, i32* %5
  %20 = load i32, i32* %6
  %21 = load i32, i32* %5
  %22 = sub nsw i32 %20, %21
  %23 = sdiv i32 %22, 2
  %24 = add nsw i32 %19, %23
  store i32 %24, i32* %7
  %25 = load i32*, i32** %4
  %26 = load i32, i32* %5
  %27 = load i32, i32* %7
  call void @MergeSort(i32* %25, i32 %26, i32 %27)
  %28 = load i32*, i32** %4
  %29 = load i32, i32* %7
  %30 = add nsw i32 %29, 1
  %31 = load i32, i32* %6
  call void @MergeSort(i32* %28, i32 %30, i32 %31)
  %34 = load i32, i32* %5
  store i32 %34, i32* %9
  %36 = load i32, i32* %7
  %37 = add nsw i32 %36, 1
  store i32 %37, i32* %10
  %39 = load i32, i32* %5
  store i32 %39, i32* %11
  br label %40
40:
  %41 = load i32, i32* %9
  %42 = load i32, i32* %7
  %43 = icmp sle i32 %41, %42
  br i1 %43, label %48, label %44
44:
  %45 = load i32, i32* %10
  %46 = load i32, i32* %6
  %47 = icmp sle i32 %45, %46
  br label %48
48:
  %49 = phi i1 [ true, %40 ], [ %47, %44 ]
  br i1 %49, label %50, label %93
50:
  %51 = load i32, i32* %9
  %52 = load i32, i32* %7
  %53 = icmp sle i32 %51, %52
  br i1 %53, label %54, label %81
54:
  %55 = load i32, i32* %10
  %56 = load i32, i32* %6
  %57 = icmp sgt i32 %55, %56
  br i1 %57, label %70, label %58
58:
  %59 = load i32*, i32** %4
  %60 = load i32, i32* %9
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i32, i32* %59, i64 %61
  %63 = load i32, i32* %62
  %64 = load i32*, i32** %4
  %65 = load i32, i32* %10
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds i32, i32* %64, i64 %66
  %68 = load i32, i32* %67
  %69 = icmp sle i32 %63, %68
  br i1 %69, label %70, label %81
70:
  %71 = load i32*, i32** %4
  %72 = load i32, i32* %9
  %73 = add nsw i32 %72, 1
  store i32 %73, i32* %9
  %74 = sext i32 %72 to i64
  %75 = getelementptr inbounds i32, i32* %71, i64 %74
  %76 = load i32, i32* %75
  %77 = load i32, i32* %11
  %78 = add nsw i32 %77, 1
  store i32 %78, i32* %11
  %79 = sext i32 %77 to i64
  %80 = getelementptr inbounds [256 x i32], [256 x i32]* %8, i64 0, i64 %79
  store i32 %76, i32* %80
  br label %92
81:
  %82 = load i32*, i32** %4
  %83 = load i32, i32* %10
  %84 = add nsw i32 %83, 1
  store i32 %84, i32* %10
  %85 = sext i32 %83 to i64
  %86 = getelementptr inbounds i32, i32* %82, i64 %85
  %87 = load i32, i32* %86
  %88 = load i32, i32* %11
  %89 = add nsw i32 %88, 1
  store i32 %89, i32* %11
  %90 = sext i32 %88 to i64
  %91 = getelementptr inbounds [256 x i32], [256 x i32]* %8, i64 0, i64 %90
  store i32 %87, i32* %91
  br label %92
92:
  br label %40
93:
  %95 = load i32, i32* %5
  store i32 %95, i32* %12
  br label %96
96:
  %97 = load i32, i32* %12
  %98 = load i32, i32* %6
  %99 = icmp sle i32 %97, %98
  br i1 %99, label %102, label %100
100:
  br label %114
102:
  %103 = load i32, i32* %12
  %104 = sext i32 %103 to i64
  %105 = getelementptr inbounds [256 x i32], [256 x i32]* %8, i64 0, i64 %104
  %106 = load i32, i32* %105
  %107 = load i32*, i32** %4
  %108 = load i32, i32* %12
  %109 = sext i32 %108 to i64
  %110 = getelementptr inbounds i32, i32* %107, i64 %109
  store i32 %106, i32* %110
  br label %111
111:
  %112 = load i32, i32* %12
  %113 = add nsw i32 %112, 1
  store i32 %113, i32* %12
  br label %96
114:
  br label %120
120:
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
