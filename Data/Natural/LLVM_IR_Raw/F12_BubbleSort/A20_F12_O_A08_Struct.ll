%struct.Range = type { i32, i32, i32 }
@.str = constant [4 x i8] c"%d \00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @BubbleSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca %struct.Range
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %11 = getelementptr inbounds %struct.Range, %struct.Range* %5, i32 0, i32 0
  store i32 0, i32* %11
  %12 = getelementptr inbounds %struct.Range, %struct.Range* %5, i32 0, i32 1
  %13 = load i32, i32* %4
  %14 = sub nsw i32 %13, 1
  store i32 %14, i32* %12
  %15 = getelementptr inbounds %struct.Range, %struct.Range* %5, i32 0, i32 2
  store i32 1, i32* %15
  br label %16
16:
  %17 = getelementptr inbounds %struct.Range, %struct.Range* %5, i32 0, i32 2
  %18 = load i32, i32* %17
  %19 = icmp ne i32 %18, 0
  br i1 %19, label %20, label %141
20:
  %21 = getelementptr inbounds %struct.Range, %struct.Range* %5, i32 0, i32 2
  store i32 0, i32* %21
  %23 = getelementptr inbounds %struct.Range, %struct.Range* %5, i32 0, i32 0
  %24 = load i32, i32* %23
  store i32 %24, i32* %6
  br label %25
25:
  %26 = load i32, i32* %6
  %27 = getelementptr inbounds %struct.Range, %struct.Range* %5, i32 0, i32 1
  %28 = load i32, i32* %27
  %29 = icmp slt i32 %26, %28
  br i1 %29, label %32, label %30
30:
  br label %74
32:
  %33 = load i32*, i32** %3
  %34 = load i32, i32* %6
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i32, i32* %33, i64 %35
  %37 = load i32, i32* %36
  %38 = load i32*, i32** %3
  %39 = load i32, i32* %6
  %40 = add nsw i32 %39, 1
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i32, i32* %38, i64 %41
  %43 = load i32, i32* %42
  %44 = icmp sgt i32 %37, %43
  br i1 %44, label %45, label %70
45:
  %47 = load i32*, i32** %3
  %48 = load i32, i32* %6
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds i32, i32* %47, i64 %49
  %51 = load i32, i32* %50
  store i32 %51, i32* %7
  %52 = load i32*, i32** %3
  %53 = load i32, i32* %6
  %54 = add nsw i32 %53, 1
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i32, i32* %52, i64 %55
  %57 = load i32, i32* %56
  %58 = load i32*, i32** %3
  %59 = load i32, i32* %6
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %58, i64 %60
  store i32 %57, i32* %61
  %62 = load i32, i32* %7
  %63 = load i32*, i32** %3
  %64 = load i32, i32* %6
  %65 = add nsw i32 %64, 1
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds i32, i32* %63, i64 %66
  store i32 %62, i32* %67
  %68 = getelementptr inbounds %struct.Range, %struct.Range* %5, i32 0, i32 2
  store i32 1, i32* %68
  br label %70
70:
  br label %71
71:
  %72 = load i32, i32* %6
  %73 = add nsw i32 %72, 1
  store i32 %73, i32* %6
  br label %25
74:
  %75 = getelementptr inbounds %struct.Range, %struct.Range* %5, i32 0, i32 2
  %76 = load i32, i32* %75
  %77 = icmp ne i32 %76, 0
  br i1 %77, label %79, label %78
78:
  br label %141
79:
  %80 = getelementptr inbounds %struct.Range, %struct.Range* %5, i32 0, i32 2
  store i32 0, i32* %80
  %81 = getelementptr inbounds %struct.Range, %struct.Range* %5, i32 0, i32 1
  %82 = load i32, i32* %81
  %83 = add nsw i32 %82, -1
  store i32 %83, i32* %81
  %85 = getelementptr inbounds %struct.Range, %struct.Range* %5, i32 0, i32 1
  %86 = load i32, i32* %85
  %87 = sub nsw i32 %86, 1
  store i32 %87, i32* %8
  br label %88
88:
  %89 = load i32, i32* %8
  %90 = getelementptr inbounds %struct.Range, %struct.Range* %5, i32 0, i32 0
  %91 = load i32, i32* %90
  %92 = icmp sge i32 %89, %91
  br i1 %92, label %95, label %93
93:
  br label %137
95:
  %96 = load i32*, i32** %3
  %97 = load i32, i32* %8
  %98 = sext i32 %97 to i64
  %99 = getelementptr inbounds i32, i32* %96, i64 %98
  %100 = load i32, i32* %99
  %101 = load i32*, i32** %3
  %102 = load i32, i32* %8
  %103 = add nsw i32 %102, 1
  %104 = sext i32 %103 to i64
  %105 = getelementptr inbounds i32, i32* %101, i64 %104
  %106 = load i32, i32* %105
  %107 = icmp sgt i32 %100, %106
  br i1 %107, label %108, label %133
108:
  %110 = load i32*, i32** %3
  %111 = load i32, i32* %8
  %112 = sext i32 %111 to i64
  %113 = getelementptr inbounds i32, i32* %110, i64 %112
  %114 = load i32, i32* %113
  store i32 %114, i32* %9
  %115 = load i32*, i32** %3
  %116 = load i32, i32* %8
  %117 = add nsw i32 %116, 1
  %118 = sext i32 %117 to i64
  %119 = getelementptr inbounds i32, i32* %115, i64 %118
  %120 = load i32, i32* %119
  %121 = load i32*, i32** %3
  %122 = load i32, i32* %8
  %123 = sext i32 %122 to i64
  %124 = getelementptr inbounds i32, i32* %121, i64 %123
  store i32 %120, i32* %124
  %125 = load i32, i32* %9
  %126 = load i32*, i32** %3
  %127 = load i32, i32* %8
  %128 = add nsw i32 %127, 1
  %129 = sext i32 %128 to i64
  %130 = getelementptr inbounds i32, i32* %126, i64 %129
  store i32 %125, i32* %130
  %131 = getelementptr inbounds %struct.Range, %struct.Range* %5, i32 0, i32 2
  store i32 1, i32* %131
  br label %133
133:
  br label %134
134:
  %135 = load i32, i32* %8
  %136 = add nsw i32 %135, -1
  store i32 %136, i32* %8
  br label %88
137:
  %138 = getelementptr inbounds %struct.Range, %struct.Range* %5, i32 0, i32 0
  %139 = load i32, i32* %138
  %140 = add nsw i32 %139, 1
  store i32 %140, i32* %138
  br label %16
141:
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
  br label %71
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
  call void @BubbleSort(i32* %46, i32 %47)
  store i32 0, i32* %9
  br label %49
49:
  %50 = load i32, i32* %9
  %51 = load i32, i32* %6
  %52 = icmp slt i32 %50, %51
  br i1 %52, label %55, label %53
53:
  br label %65
55:
  %56 = load i32*, i32** %7
  %57 = load i32, i32* %9
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i32, i32* %56, i64 %58
  %60 = load i32, i32* %59
  %61 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %60)
  br label %62
62:
  %63 = load i32, i32* %9
  %64 = add nsw i32 %63, 1
  store i32 %64, i32* %9
  br label %49
65:
  %66 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0))
  %67 = load i32*, i32** %7
  call void @free(i8* %68)
  store i32 0, i32* %3
  br label %71
71:
  %72 = load i32, i32* %3
  ret i32 %72
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
