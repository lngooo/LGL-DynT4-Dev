@.str = constant [5 x i8] c"%d%s\00"
@.str.1 = constant [1 x i8] zeroinitializer
@.str.2 = constant [2 x i8] c" \00"
@.str.3 = constant [2 x i8] c"\0A\00"
define dso_local void @Q(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32*
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  store i32 0, i32* %7
  br label %15
15:
  %16 = load i32, i32* %7
  %17 = icmp ne i32 %16, 2
  br i1 %17, label %18, label %166
18:
  %19 = load i32, i32* %7
  switch i32 %19, label %165 [
    i32 0, label %20
    i32 1, label %27
  ]
20:
  %21 = load i32, i32* %5
  %22 = load i32, i32* %6
  %23 = icmp slt i32 %21, %22
  br i1 %23, label %24, label %25
24:
  store i32 1, i32* %7
  br label %26
25:
  store i32 2, i32* %7
  br label %26
26:
  br label %165
27:
  %29 = load i32, i32* %5
  %30 = load i32, i32* %6
  %31 = load i32, i32* %5
  %32 = sub nsw i32 %30, %31
  %33 = sdiv i32 %32, 2
  %34 = add nsw i32 %29, %33
  store i32 %34, i32* %8
  %35 = load i32*, i32** %4
  %36 = load i32, i32* %5
  %37 = load i32, i32* %8
  call void @Q(i32* %35, i32 %36, i32 %37)
  %38 = load i32*, i32** %4
  %39 = load i32, i32* %8
  %40 = add nsw i32 %39, 1
  %41 = load i32, i32* %6
  call void @Q(i32* %38, i32 %40, i32 %41)
  %43 = load i32, i32* %6
  %44 = load i32, i32* %5
  %45 = sub nsw i32 %43, %44
  %46 = add nsw i32 %45, 1
  %47 = mul nsw i32 %46, 4
  %48 = sext i32 %47 to i64
  %49 = call noalias i8* @malloc(i64 %48)
  store i32* %50, i32** %9
  %52 = load i32, i32* %5
  store i32 %52, i32* %10
  %54 = load i32, i32* %8
  %55 = add nsw i32 %54, 1
  store i32 %55, i32* %11
  store i32 0, i32* %12
  br label %57
57:
  %58 = load i32, i32* %10
  %59 = load i32, i32* %8
  %60 = icmp sle i32 %58, %59
  br i1 %60, label %61, label %65
61:
  %62 = load i32, i32* %11
  %63 = load i32, i32* %6
  %64 = icmp sle i32 %62, %63
  br label %65
65:
  %66 = phi i1 [ false, %57 ], [ %64, %61 ]
  br i1 %66, label %67, label %100
67:
  %68 = load i32*, i32** %4
  %69 = load i32, i32* %10
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds i32, i32* %68, i64 %70
  %72 = load i32, i32* %71
  %73 = load i32*, i32** %4
  %74 = load i32, i32* %11
  %75 = sext i32 %74 to i64
  %76 = getelementptr inbounds i32, i32* %73, i64 %75
  %77 = load i32, i32* %76
  %78 = icmp sle i32 %72, %77
  br i1 %78, label %79, label %86
79:
  %80 = load i32*, i32** %4
  %81 = load i32, i32* %10
  %82 = add nsw i32 %81, 1
  store i32 %82, i32* %10
  %83 = sext i32 %81 to i64
  %84 = getelementptr inbounds i32, i32* %80, i64 %83
  %85 = load i32, i32* %84
  br label %93
86:
  %87 = load i32*, i32** %4
  %88 = load i32, i32* %11
  %89 = add nsw i32 %88, 1
  store i32 %89, i32* %11
  %90 = sext i32 %88 to i64
  %91 = getelementptr inbounds i32, i32* %87, i64 %90
  %92 = load i32, i32* %91
  br label %93
93:
  %94 = phi i32 [ %85, %79 ], [ %92, %86 ]
  %95 = load i32*, i32** %9
  %96 = load i32, i32* %12
  %97 = add nsw i32 %96, 1
  store i32 %97, i32* %12
  %98 = sext i32 %96 to i64
  %99 = getelementptr inbounds i32, i32* %95, i64 %98
  store i32 %94, i32* %99
  br label %57
100:
  br label %101
101:
  %102 = load i32, i32* %10
  %103 = load i32, i32* %8
  %104 = icmp sle i32 %102, %103
  br i1 %104, label %105, label %117
105:
  %106 = load i32*, i32** %4
  %107 = load i32, i32* %10
  %108 = add nsw i32 %107, 1
  store i32 %108, i32* %10
  %109 = sext i32 %107 to i64
  %110 = getelementptr inbounds i32, i32* %106, i64 %109
  %111 = load i32, i32* %110
  %112 = load i32*, i32** %9
  %113 = load i32, i32* %12
  %114 = add nsw i32 %113, 1
  store i32 %114, i32* %12
  %115 = sext i32 %113 to i64
  %116 = getelementptr inbounds i32, i32* %112, i64 %115
  store i32 %111, i32* %116
  br label %101
117:
  br label %118
118:
  %119 = load i32, i32* %11
  %120 = load i32, i32* %6
  %121 = icmp sle i32 %119, %120
  br i1 %121, label %122, label %134
122:
  %123 = load i32*, i32** %4
  %124 = load i32, i32* %11
  %125 = add nsw i32 %124, 1
  store i32 %125, i32* %11
  %126 = sext i32 %124 to i64
  %127 = getelementptr inbounds i32, i32* %123, i64 %126
  %128 = load i32, i32* %127
  %129 = load i32*, i32** %9
  %130 = load i32, i32* %12
  %131 = add nsw i32 %130, 1
  store i32 %131, i32* %12
  %132 = sext i32 %130 to i64
  %133 = getelementptr inbounds i32, i32* %129, i64 %132
  store i32 %128, i32* %133
  br label %118
134:
  store i32 0, i32* %13
  br label %136
136:
  %137 = load i32, i32* %13
  %138 = load i32, i32* %12
  %139 = icmp slt i32 %137, %138
  br i1 %139, label %142, label %140
140:
  br label %157
142:
  %143 = load i32*, i32** %9
  %144 = load i32, i32* %13
  %145 = sext i32 %144 to i64
  %146 = getelementptr inbounds i32, i32* %143, i64 %145
  %147 = load i32, i32* %146
  %148 = load i32*, i32** %4
  %149 = load i32, i32* %5
  %150 = load i32, i32* %13
  %151 = add nsw i32 %149, %150
  %152 = sext i32 %151 to i64
  %153 = getelementptr inbounds i32, i32* %148, i64 %152
  store i32 %147, i32* %153
  br label %154
154:
  %155 = load i32, i32* %13
  %156 = add nsw i32 %155, 1
  store i32 %156, i32* %13
  br label %136
157:
  %158 = load i32*, i32** %9
  call void @free(i8* %159)
  store i32 2, i32* %7
  br label %165
165:
  br label %15
166:
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
  call void @Q(i32* %46, i32 0, i32 %48)
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
