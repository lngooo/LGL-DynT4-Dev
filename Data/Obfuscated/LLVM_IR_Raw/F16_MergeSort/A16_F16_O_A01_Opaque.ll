@.str = constant [5 x i8] c"%d%s\00"
@.str.1 = constant [1 x i8] zeroinitializer
@.str.2 = constant [2 x i8] c" \00"
@.str.3 = constant [2 x i8] c"\0A\00"
define dso_local void @VCfF(i32* %0, i32 %1, i32 %2) {
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
  %15 = icmp slt i32 %13, %14
  br i1 %15, label %16, label %159
16:
  %18 = load i32, i32* %5
  %19 = load i32, i32* %6
  %20 = add nsw i32 %18, %19
  %21 = sdiv i32 %20, 2
  store i32 %21, i32* %7
  %22 = load i32, i32* %7
  %23 = load i32, i32* %7
  %24 = mul nsw i32 %22, %23
  %25 = add nsw i32 %24, 1
  %26 = icmp sgt i32 %25, 0
  br i1 %26, label %27, label %157
27:
  %28 = load i32*, i32** %4
  %29 = load i32, i32* %5
  %30 = load i32, i32* %7
  call void @VCfF(i32* %28, i32 %29, i32 %30)
  %31 = load i32*, i32** %4
  %32 = load i32, i32* %7
  %33 = add nsw i32 %32, 1
  %34 = load i32, i32* %6
  call void @VCfF(i32* %31, i32 %33, i32 %34)
  %36 = load i32, i32* %6
  %37 = load i32, i32* %5
  %38 = sub nsw i32 %36, %37
  %39 = add nsw i32 %38, 1
  %40 = mul nsw i32 %39, 4
  %41 = sext i32 %40 to i64
  %42 = call noalias i8* @malloc(i64 %41)
  store i32* %43, i32** %8
  %45 = load i32, i32* %5
  store i32 %45, i32* %9
  %47 = load i32, i32* %7
  %48 = add nsw i32 %47, 1
  store i32 %48, i32* %10
  store i32 0, i32* %11
  br label %50
50:
  %51 = load i32, i32* %9
  %52 = load i32, i32* %7
  %53 = icmp sle i32 %51, %52
  br i1 %53, label %54, label %58
54:
  %55 = load i32, i32* %10
  %56 = load i32, i32* %6
  %57 = icmp sle i32 %55, %56
  br label %58
58:
  %59 = phi i1 [ false, %50 ], [ %57, %54 ]
  br i1 %59, label %60, label %93
60:
  %61 = load i32*, i32** %4
  %62 = load i32, i32* %9
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds i32, i32* %61, i64 %63
  %65 = load i32, i32* %64
  %66 = load i32*, i32** %4
  %67 = load i32, i32* %10
  %68 = sext i32 %67 to i64
  %69 = getelementptr inbounds i32, i32* %66, i64 %68
  %70 = load i32, i32* %69
  %71 = icmp sle i32 %65, %70
  br i1 %71, label %72, label %79
72:
  %73 = load i32*, i32** %4
  %74 = load i32, i32* %9
  %75 = add nsw i32 %74, 1
  store i32 %75, i32* %9
  %76 = sext i32 %74 to i64
  %77 = getelementptr inbounds i32, i32* %73, i64 %76
  %78 = load i32, i32* %77
  br label %86
79:
  %80 = load i32*, i32** %4
  %81 = load i32, i32* %10
  %82 = add nsw i32 %81, 1
  store i32 %82, i32* %10
  %83 = sext i32 %81 to i64
  %84 = getelementptr inbounds i32, i32* %80, i64 %83
  %85 = load i32, i32* %84
  br label %86
86:
  %87 = phi i32 [ %78, %72 ], [ %85, %79 ]
  %88 = load i32*, i32** %8
  %89 = load i32, i32* %11
  %90 = add nsw i32 %89, 1
  store i32 %90, i32* %11
  %91 = sext i32 %89 to i64
  %92 = getelementptr inbounds i32, i32* %88, i64 %91
  store i32 %87, i32* %92
  br label %50
93:
  br label %94
94:
  %95 = load i32, i32* %9
  %96 = load i32, i32* %7
  %97 = icmp sle i32 %95, %96
  br i1 %97, label %98, label %110
98:
  %99 = load i32*, i32** %4
  %100 = load i32, i32* %9
  %101 = add nsw i32 %100, 1
  store i32 %101, i32* %9
  %102 = sext i32 %100 to i64
  %103 = getelementptr inbounds i32, i32* %99, i64 %102
  %104 = load i32, i32* %103
  %105 = load i32*, i32** %8
  %106 = load i32, i32* %11
  %107 = add nsw i32 %106, 1
  store i32 %107, i32* %11
  %108 = sext i32 %106 to i64
  %109 = getelementptr inbounds i32, i32* %105, i64 %108
  store i32 %104, i32* %109
  br label %94
110:
  br label %111
111:
  %112 = load i32, i32* %10
  %113 = load i32, i32* %6
  %114 = icmp sle i32 %112, %113
  br i1 %114, label %115, label %127
115:
  %116 = load i32*, i32** %4
  %117 = load i32, i32* %10
  %118 = add nsw i32 %117, 1
  store i32 %118, i32* %10
  %119 = sext i32 %117 to i64
  %120 = getelementptr inbounds i32, i32* %116, i64 %119
  %121 = load i32, i32* %120
  %122 = load i32*, i32** %8
  %123 = load i32, i32* %11
  %124 = add nsw i32 %123, 1
  store i32 %124, i32* %11
  %125 = sext i32 %123 to i64
  %126 = getelementptr inbounds i32, i32* %122, i64 %125
  store i32 %121, i32* %126
  br label %111
127:
  store i32 0, i32* %12
  br label %129
129:
  %130 = load i32, i32* %12
  %131 = load i32, i32* %11
  %132 = icmp slt i32 %130, %131
  br i1 %132, label %135, label %133
133:
  br label %150
135:
  %136 = load i32*, i32** %8
  %137 = load i32, i32* %12
  %138 = sext i32 %137 to i64
  %139 = getelementptr inbounds i32, i32* %136, i64 %138
  %140 = load i32, i32* %139
  %141 = load i32*, i32** %4
  %142 = load i32, i32* %5
  %143 = load i32, i32* %12
  %144 = add nsw i32 %142, %143
  %145 = sext i32 %144 to i64
  %146 = getelementptr inbounds i32, i32* %141, i64 %145
  store i32 %140, i32* %146
  br label %147
147:
  %148 = load i32, i32* %12
  %149 = add nsw i32 %148, 1
  store i32 %149, i32* %12
  br label %129
150:
  %151 = load i32*, i32** %8
  call void @free(i8* %152)
  br label %157
157:
  br label %159
159:
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
  call void @VCfF(i32* %46, i32 0, i32 %48)
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
