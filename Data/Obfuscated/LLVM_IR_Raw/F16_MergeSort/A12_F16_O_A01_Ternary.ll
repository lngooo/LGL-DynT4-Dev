@.str = constant [5 x i8] c"%d%s\00"
@.str.1 = constant [1 x i8] zeroinitializer
@.str.2 = constant [2 x i8] c" \00"
@.str.3 = constant [2 x i8] c"\0A\00"
define dso_local void @tK(i32* %0, i32 %1, i32 %2) {
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
  br label %129
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
  call void @tK(i32* %25, i32 %26, i32 %27)
  %28 = load i32*, i32** %4
  %29 = load i32, i32* %7
  %30 = add nsw i32 %29, 1
  %31 = load i32, i32* %6
  call void @tK(i32* %28, i32 %30, i32 %31)
  %33 = load i32, i32* %6
  %34 = load i32, i32* %5
  %35 = sub nsw i32 %33, %34
  %36 = add nsw i32 %35, 1
  %37 = mul nsw i32 %36, 4
  %38 = sext i32 %37 to i64
  %39 = call noalias i8* @malloc(i64 %38)
  store i32* %40, i32** %8
  %42 = load i32, i32* %5
  store i32 %42, i32* %9
  %44 = load i32, i32* %7
  %45 = add nsw i32 %44, 1
  store i32 %45, i32* %10
  store i32 0, i32* %11
  br label %47
47:
  %48 = load i32, i32* %9
  %49 = load i32, i32* %7
  %50 = icmp sle i32 %48, %49
  br i1 %50, label %55, label %51
51:
  %52 = load i32, i32* %10
  %53 = load i32, i32* %6
  %54 = icmp sle i32 %52, %53
  br label %55
55:
  %56 = phi i1 [ true, %47 ], [ %54, %51 ]
  br i1 %56, label %57, label %98
57:
  %58 = load i32, i32* %9
  %59 = load i32, i32* %7
  %60 = icmp sle i32 %58, %59
  br i1 %60, label %61, label %84
61:
  %62 = load i32, i32* %10
  %63 = load i32, i32* %6
  %64 = icmp sgt i32 %62, %63
  br i1 %64, label %77, label %65
65:
  %66 = load i32*, i32** %4
  %67 = load i32, i32* %9
  %68 = sext i32 %67 to i64
  %69 = getelementptr inbounds i32, i32* %66, i64 %68
  %70 = load i32, i32* %69
  %71 = load i32*, i32** %4
  %72 = load i32, i32* %10
  %73 = sext i32 %72 to i64
  %74 = getelementptr inbounds i32, i32* %71, i64 %73
  %75 = load i32, i32* %74
  %76 = icmp sle i32 %70, %75
  br i1 %76, label %77, label %84
77:
  %78 = load i32*, i32** %4
  %79 = load i32, i32* %9
  %80 = add nsw i32 %79, 1
  store i32 %80, i32* %9
  %81 = sext i32 %79 to i64
  %82 = getelementptr inbounds i32, i32* %78, i64 %81
  %83 = load i32, i32* %82
  br label %91
84:
  %85 = load i32*, i32** %4
  %86 = load i32, i32* %10
  %87 = add nsw i32 %86, 1
  store i32 %87, i32* %10
  %88 = sext i32 %86 to i64
  %89 = getelementptr inbounds i32, i32* %85, i64 %88
  %90 = load i32, i32* %89
  br label %91
91:
  %92 = phi i32 [ %83, %77 ], [ %90, %84 ]
  %93 = load i32*, i32** %8
  %94 = load i32, i32* %11
  %95 = add nsw i32 %94, 1
  store i32 %95, i32* %11
  %96 = sext i32 %94 to i64
  %97 = getelementptr inbounds i32, i32* %93, i64 %96
  store i32 %92, i32* %97
  br label %47
98:
  store i32 0, i32* %12
  br label %100
100:
  %101 = load i32, i32* %12
  %102 = load i32, i32* %11
  %103 = icmp slt i32 %101, %102
  br i1 %103, label %106, label %104
104:
  br label %121
106:
  %107 = load i32*, i32** %8
  %108 = load i32, i32* %12
  %109 = sext i32 %108 to i64
  %110 = getelementptr inbounds i32, i32* %107, i64 %109
  %111 = load i32, i32* %110
  %112 = load i32*, i32** %4
  %113 = load i32, i32* %5
  %114 = load i32, i32* %12
  %115 = add nsw i32 %113, %114
  %116 = sext i32 %115 to i64
  %117 = getelementptr inbounds i32, i32* %112, i64 %116
  store i32 %111, i32* %117
  br label %118
118:
  %119 = load i32, i32* %12
  %120 = add nsw i32 %119, 1
  store i32 %120, i32* %12
  br label %100
121:
  %122 = load i32*, i32** %8
  call void @free(i8* %123)
  br label %129
129:
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
  call void @tK(i32* %46, i32 0, i32 %48)
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
