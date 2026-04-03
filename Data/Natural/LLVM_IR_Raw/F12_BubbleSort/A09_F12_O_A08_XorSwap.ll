@.str = constant [4 x i8] c"%d \00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @BubbleSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  %12 = load i32, i32* %4
  %13 = sub nsw i32 %12, 1
  store i32 %13, i32* %6
  store i32 1, i32* %7
  br label %15
15:
  %16 = load i32, i32* %7
  %17 = icmp ne i32 %16, 0
  br i1 %17, label %18, label %154
18:
  store i32 0, i32* %7
  %20 = load i32, i32* %5
  store i32 %20, i32* %8
  br label %21
21:
  %22 = load i32, i32* %8
  %23 = load i32, i32* %6
  %24 = icmp slt i32 %22, %23
  br i1 %24, label %27, label %25
25:
  br label %81
27:
  %28 = load i32*, i32** %3
  %29 = load i32, i32* %8
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %28, i64 %30
  %32 = load i32, i32* %31
  %33 = load i32*, i32** %3
  %34 = load i32, i32* %8
  %35 = add nsw i32 %34, 1
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i32, i32* %33, i64 %36
  %38 = load i32, i32* %37
  %39 = icmp sgt i32 %32, %38
  br i1 %39, label %40, label %77
40:
  %41 = load i32*, i32** %3
  %42 = load i32, i32* %8
  %43 = add nsw i32 %42, 1
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i32, i32* %41, i64 %44
  %46 = load i32, i32* %45
  %47 = load i32*, i32** %3
  %48 = load i32, i32* %8
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds i32, i32* %47, i64 %49
  %51 = load i32, i32* %50
  %52 = xor i32 %51, %46
  store i32 %52, i32* %50
  %53 = load i32*, i32** %3
  %54 = load i32, i32* %8
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i32, i32* %53, i64 %55
  %57 = load i32, i32* %56
  %58 = load i32*, i32** %3
  %59 = load i32, i32* %8
  %60 = add nsw i32 %59, 1
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i32, i32* %58, i64 %61
  %63 = load i32, i32* %62
  %64 = xor i32 %63, %57
  store i32 %64, i32* %62
  %65 = load i32*, i32** %3
  %66 = load i32, i32* %8
  %67 = add nsw i32 %66, 1
  %68 = sext i32 %67 to i64
  %69 = getelementptr inbounds i32, i32* %65, i64 %68
  %70 = load i32, i32* %69
  %71 = load i32*, i32** %3
  %72 = load i32, i32* %8
  %73 = sext i32 %72 to i64
  %74 = getelementptr inbounds i32, i32* %71, i64 %73
  %75 = load i32, i32* %74
  %76 = xor i32 %75, %70
  store i32 %76, i32* %74
  store i32 1, i32* %7
  br label %77
77:
  br label %78
78:
  %79 = load i32, i32* %8
  %80 = add nsw i32 %79, 1
  store i32 %80, i32* %8
  br label %21
81:
  %82 = load i32, i32* %7
  %83 = icmp ne i32 %82, 0
  br i1 %83, label %85, label %84
84:
  br label %154
85:
  store i32 0, i32* %7
  %86 = load i32, i32* %6
  %87 = add nsw i32 %86, -1
  store i32 %87, i32* %6
  %89 = load i32, i32* %6
  %90 = sub nsw i32 %89, 1
  store i32 %90, i32* %9
  br label %91
91:
  %92 = load i32, i32* %9
  %93 = load i32, i32* %5
  %94 = icmp sge i32 %92, %93
  br i1 %94, label %97, label %95
95:
  br label %151
97:
  %98 = load i32*, i32** %3
  %99 = load i32, i32* %9
  %100 = sext i32 %99 to i64
  %101 = getelementptr inbounds i32, i32* %98, i64 %100
  %102 = load i32, i32* %101
  %103 = load i32*, i32** %3
  %104 = load i32, i32* %9
  %105 = add nsw i32 %104, 1
  %106 = sext i32 %105 to i64
  %107 = getelementptr inbounds i32, i32* %103, i64 %106
  %108 = load i32, i32* %107
  %109 = icmp sgt i32 %102, %108
  br i1 %109, label %110, label %147
110:
  %111 = load i32*, i32** %3
  %112 = load i32, i32* %9
  %113 = add nsw i32 %112, 1
  %114 = sext i32 %113 to i64
  %115 = getelementptr inbounds i32, i32* %111, i64 %114
  %116 = load i32, i32* %115
  %117 = load i32*, i32** %3
  %118 = load i32, i32* %9
  %119 = sext i32 %118 to i64
  %120 = getelementptr inbounds i32, i32* %117, i64 %119
  %121 = load i32, i32* %120
  %122 = xor i32 %121, %116
  store i32 %122, i32* %120
  %123 = load i32*, i32** %3
  %124 = load i32, i32* %9
  %125 = sext i32 %124 to i64
  %126 = getelementptr inbounds i32, i32* %123, i64 %125
  %127 = load i32, i32* %126
  %128 = load i32*, i32** %3
  %129 = load i32, i32* %9
  %130 = add nsw i32 %129, 1
  %131 = sext i32 %130 to i64
  %132 = getelementptr inbounds i32, i32* %128, i64 %131
  %133 = load i32, i32* %132
  %134 = xor i32 %133, %127
  store i32 %134, i32* %132
  %135 = load i32*, i32** %3
  %136 = load i32, i32* %9
  %137 = add nsw i32 %136, 1
  %138 = sext i32 %137 to i64
  %139 = getelementptr inbounds i32, i32* %135, i64 %138
  %140 = load i32, i32* %139
  %141 = load i32*, i32** %3
  %142 = load i32, i32* %9
  %143 = sext i32 %142 to i64
  %144 = getelementptr inbounds i32, i32* %141, i64 %143
  %145 = load i32, i32* %144
  %146 = xor i32 %145, %140
  store i32 %146, i32* %144
  store i32 1, i32* %7
  br label %147
147:
  br label %148
148:
  %149 = load i32, i32* %9
  %150 = add nsw i32 %149, -1
  store i32 %150, i32* %9
  br label %91
151:
  %152 = load i32, i32* %5
  %153 = add nsw i32 %152, 1
  store i32 %153, i32* %5
  br label %15
154:
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
