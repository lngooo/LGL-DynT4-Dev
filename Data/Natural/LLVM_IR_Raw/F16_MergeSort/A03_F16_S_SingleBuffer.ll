@MergeSort.tmp = internal global i32* null
@MergeSort.initialized = internal global i32 0
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
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %11 = load i32, i32* %5
  %12 = icmp eq i32 %11, 0
  br i1 %12, label %13, label %22
13:
  %14 = load i32, i32* %6
  %15 = icmp sgt i32 %14, 0
  br i1 %15, label %16, label %22
16:
  %17 = load i32, i32* @MergeSort.initialized
  %18 = icmp ne i32 %17, 0
  br i1 %18, label %22, label %19
19:
  %20 = call noalias i8* @malloc(i64 1024)
  store i32* %21, i32** @MergeSort.tmp
  store i32 1, i32* @MergeSort.initialized
  br label %22
22:
  %23 = load i32, i32* %5
  %24 = load i32, i32* %6
  %25 = icmp slt i32 %23, %24
  br i1 %25, label %26, label %149
26:
  %28 = load i32, i32* %5
  %29 = load i32, i32* %6
  %30 = load i32, i32* %5
  %31 = sub nsw i32 %29, %30
  %32 = sdiv i32 %31, 2
  %33 = add nsw i32 %28, %32
  store i32 %33, i32* %7
  %34 = load i32*, i32** %4
  %35 = load i32, i32* %5
  %36 = load i32, i32* %7
  call void @MergeSort(i32* %34, i32 %35, i32 %36)
  %37 = load i32*, i32** %4
  %38 = load i32, i32* %7
  %39 = add nsw i32 %38, 1
  %40 = load i32, i32* %6
  call void @MergeSort(i32* %37, i32 %39, i32 %40)
  %42 = load i32, i32* %5
  store i32 %42, i32* %8
  %44 = load i32, i32* %7
  %45 = add nsw i32 %44, 1
  store i32 %45, i32* %9
  %47 = load i32, i32* %5
  store i32 %47, i32* %10
  br label %48
48:
  %49 = load i32, i32* %8
  %50 = load i32, i32* %7
  %51 = icmp sle i32 %49, %50
  br i1 %51, label %52, label %56
52:
  %53 = load i32, i32* %9
  %54 = load i32, i32* %6
  %55 = icmp sle i32 %53, %54
  br label %56
56:
  %57 = phi i1 [ false, %48 ], [ %55, %52 ]
  br i1 %57, label %58, label %91
58:
  %59 = load i32*, i32** %4
  %60 = load i32, i32* %8
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i32, i32* %59, i64 %61
  %63 = load i32, i32* %62
  %64 = load i32*, i32** %4
  %65 = load i32, i32* %9
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds i32, i32* %64, i64 %66
  %68 = load i32, i32* %67
  %69 = icmp sle i32 %63, %68
  br i1 %69, label %70, label %77
70:
  %71 = load i32*, i32** %4
  %72 = load i32, i32* %8
  %73 = add nsw i32 %72, 1
  store i32 %73, i32* %8
  %74 = sext i32 %72 to i64
  %75 = getelementptr inbounds i32, i32* %71, i64 %74
  %76 = load i32, i32* %75
  br label %84
77:
  %78 = load i32*, i32** %4
  %79 = load i32, i32* %9
  %80 = add nsw i32 %79, 1
  store i32 %80, i32* %9
  %81 = sext i32 %79 to i64
  %82 = getelementptr inbounds i32, i32* %78, i64 %81
  %83 = load i32, i32* %82
  br label %84
84:
  %85 = phi i32 [ %76, %70 ], [ %83, %77 ]
  %86 = load i32*, i32** @MergeSort.tmp
  %87 = load i32, i32* %10
  %88 = add nsw i32 %87, 1
  store i32 %88, i32* %10
  %89 = sext i32 %87 to i64
  %90 = getelementptr inbounds i32, i32* %86, i64 %89
  store i32 %85, i32* %90
  br label %48
91:
  br label %92
92:
  %93 = load i32, i32* %8
  %94 = load i32, i32* %7
  %95 = icmp sle i32 %93, %94
  br i1 %95, label %96, label %108
96:
  %97 = load i32*, i32** %4
  %98 = load i32, i32* %8
  %99 = add nsw i32 %98, 1
  store i32 %99, i32* %8
  %100 = sext i32 %98 to i64
  %101 = getelementptr inbounds i32, i32* %97, i64 %100
  %102 = load i32, i32* %101
  %103 = load i32*, i32** @MergeSort.tmp
  %104 = load i32, i32* %10
  %105 = add nsw i32 %104, 1
  store i32 %105, i32* %10
  %106 = sext i32 %104 to i64
  %107 = getelementptr inbounds i32, i32* %103, i64 %106
  store i32 %102, i32* %107
  br label %92
108:
  br label %109
109:
  %110 = load i32, i32* %9
  %111 = load i32, i32* %6
  %112 = icmp sle i32 %110, %111
  br i1 %112, label %113, label %125
113:
  %114 = load i32*, i32** %4
  %115 = load i32, i32* %9
  %116 = add nsw i32 %115, 1
  store i32 %116, i32* %9
  %117 = sext i32 %115 to i64
  %118 = getelementptr inbounds i32, i32* %114, i64 %117
  %119 = load i32, i32* %118
  %120 = load i32*, i32** @MergeSort.tmp
  %121 = load i32, i32* %10
  %122 = add nsw i32 %121, 1
  store i32 %122, i32* %10
  %123 = sext i32 %121 to i64
  %124 = getelementptr inbounds i32, i32* %120, i64 %123
  store i32 %119, i32* %124
  br label %109
125:
  %126 = load i32, i32* %5
  store i32 %126, i32* %8
  br label %127
127:
  %128 = load i32, i32* %8
  %129 = load i32, i32* %6
  %130 = icmp sle i32 %128, %129
  br i1 %130, label %131, label %144
131:
  %132 = load i32*, i32** @MergeSort.tmp
  %133 = load i32, i32* %8
  %134 = sext i32 %133 to i64
  %135 = getelementptr inbounds i32, i32* %132, i64 %134
  %136 = load i32, i32* %135
  %137 = load i32*, i32** %4
  %138 = load i32, i32* %8
  %139 = sext i32 %138 to i64
  %140 = getelementptr inbounds i32, i32* %137, i64 %139
  store i32 %136, i32* %140
  br label %141
141:
  %142 = load i32, i32* %8
  %143 = add nsw i32 %142, 1
  store i32 %143, i32* %8
  br label %127
144:
  br label %149
149:
  %150 = load i32, i32* %5
  %151 = icmp eq i32 %150, 0
  br i1 %151, label %152, label %161
152:
  %153 = load i32*, i32** %4
  %154 = load i32, i32* %6
  %155 = add nsw i32 %154, 1
  %156 = sext i32 %155 to i64
  %157 = getelementptr inbounds i32, i32* %153, i64 %156
  %158 = load i32, i32* %157
  %159 = icmp ne i32 %158, 0
  br i1 %159, label %161, label %160
160:
  store i32 0, i32* @MergeSort.initialized
  br label %161
161:
  ret void
}
declare noalias i8* @malloc(i64)
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
declare void @free(i8*)
declare i64 @strtol(i8*, i8**, i32)
