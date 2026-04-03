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
  %10 = alloca i32*
  %11 = alloca i32*
  %12 = alloca i32
  %13 = alloca i32
  %14 = alloca i32
  %15 = alloca i32
  %16 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %17 = load i32, i32* %5
  %18 = load i32, i32* %6
  %19 = icmp slt i32 %17, %18
  br i1 %19, label %20, label %197
20:
  %22 = load i32, i32* %5
  %23 = load i32, i32* %6
  %24 = load i32, i32* %5
  %25 = sub nsw i32 %23, %24
  %26 = sdiv i32 %25, 2
  %27 = add nsw i32 %22, %26
  store i32 %27, i32* %7
  %28 = load i32*, i32** %4
  %29 = load i32, i32* %5
  %30 = load i32, i32* %7
  call void @MergeSort(i32* %28, i32 %29, i32 %30)
  %31 = load i32*, i32** %4
  %32 = load i32, i32* %7
  %33 = add nsw i32 %32, 1
  %34 = load i32, i32* %6
  call void @MergeSort(i32* %31, i32 %33, i32 %34)
  %36 = load i32, i32* %7
  %37 = load i32, i32* %5
  %38 = sub nsw i32 %36, %37
  %39 = add nsw i32 %38, 1
  store i32 %39, i32* %8
  %41 = load i32, i32* %6
  %42 = load i32, i32* %7
  %43 = sub nsw i32 %41, %42
  store i32 %43, i32* %9
  %45 = load i32, i32* %8
  %46 = sext i32 %45 to i64
  %47 = mul i64 %46, 4
  %48 = call noalias i8* @malloc(i64 %47)
  store i32* %49, i32** %10
  %51 = load i32, i32* %9
  %52 = sext i32 %51 to i64
  %53 = mul i64 %52, 4
  %54 = call noalias i8* @malloc(i64 %53)
  store i32* %55, i32** %11
  store i32 0, i32* %12
  br label %57
57:
  %58 = load i32, i32* %12
  %59 = load i32, i32* %8
  %60 = icmp slt i32 %58, %59
  br i1 %60, label %63, label %61
61:
  br label %78
63:
  %64 = load i32*, i32** %4
  %65 = load i32, i32* %5
  %66 = load i32, i32* %12
  %67 = add nsw i32 %65, %66
  %68 = sext i32 %67 to i64
  %69 = getelementptr inbounds i32, i32* %64, i64 %68
  %70 = load i32, i32* %69
  %71 = load i32*, i32** %10
  %72 = load i32, i32* %12
  %73 = sext i32 %72 to i64
  %74 = getelementptr inbounds i32, i32* %71, i64 %73
  store i32 %70, i32* %74
  br label %75
75:
  %76 = load i32, i32* %12
  %77 = add nsw i32 %76, 1
  store i32 %77, i32* %12
  br label %57
78:
  store i32 0, i32* %13
  br label %80
80:
  %81 = load i32, i32* %13
  %82 = load i32, i32* %9
  %83 = icmp slt i32 %81, %82
  br i1 %83, label %86, label %84
84:
  br label %102
86:
  %87 = load i32*, i32** %4
  %88 = load i32, i32* %7
  %89 = add nsw i32 %88, 1
  %90 = load i32, i32* %13
  %91 = add nsw i32 %89, %90
  %92 = sext i32 %91 to i64
  %93 = getelementptr inbounds i32, i32* %87, i64 %92
  %94 = load i32, i32* %93
  %95 = load i32*, i32** %11
  %96 = load i32, i32* %13
  %97 = sext i32 %96 to i64
  %98 = getelementptr inbounds i32, i32* %95, i64 %97
  store i32 %94, i32* %98
  br label %99
99:
  %100 = load i32, i32* %13
  %101 = add nsw i32 %100, 1
  store i32 %101, i32* %13
  br label %80
102:
  store i32 0, i32* %14
  store i32 0, i32* %15
  %106 = load i32, i32* %5
  store i32 %106, i32* %16
  br label %107
107:
  %108 = load i32, i32* %14
  %109 = load i32, i32* %8
  %110 = icmp slt i32 %108, %109
  br i1 %110, label %111, label %115
111:
  %112 = load i32, i32* %15
  %113 = load i32, i32* %9
  %114 = icmp slt i32 %112, %113
  br label %115
115:
  %116 = phi i1 [ false, %107 ], [ %114, %111 ]
  br i1 %116, label %117, label %150
117:
  %118 = load i32*, i32** %10
  %119 = load i32, i32* %14
  %120 = sext i32 %119 to i64
  %121 = getelementptr inbounds i32, i32* %118, i64 %120
  %122 = load i32, i32* %121
  %123 = load i32*, i32** %11
  %124 = load i32, i32* %15
  %125 = sext i32 %124 to i64
  %126 = getelementptr inbounds i32, i32* %123, i64 %125
  %127 = load i32, i32* %126
  %128 = icmp sle i32 %122, %127
  br i1 %128, label %129, label %136
129:
  %130 = load i32*, i32** %10
  %131 = load i32, i32* %14
  %132 = add nsw i32 %131, 1
  store i32 %132, i32* %14
  %133 = sext i32 %131 to i64
  %134 = getelementptr inbounds i32, i32* %130, i64 %133
  %135 = load i32, i32* %134
  br label %143
136:
  %137 = load i32*, i32** %11
  %138 = load i32, i32* %15
  %139 = add nsw i32 %138, 1
  store i32 %139, i32* %15
  %140 = sext i32 %138 to i64
  %141 = getelementptr inbounds i32, i32* %137, i64 %140
  %142 = load i32, i32* %141
  br label %143
143:
  %144 = phi i32 [ %135, %129 ], [ %142, %136 ]
  %145 = load i32*, i32** %4
  %146 = load i32, i32* %16
  %147 = add nsw i32 %146, 1
  store i32 %147, i32* %16
  %148 = sext i32 %146 to i64
  %149 = getelementptr inbounds i32, i32* %145, i64 %148
  store i32 %144, i32* %149
  br label %107
150:
  br label %151
151:
  %152 = load i32, i32* %14
  %153 = load i32, i32* %8
  %154 = icmp slt i32 %152, %153
  br i1 %154, label %155, label %167
155:
  %156 = load i32*, i32** %10
  %157 = load i32, i32* %14
  %158 = add nsw i32 %157, 1
  store i32 %158, i32* %14
  %159 = sext i32 %157 to i64
  %160 = getelementptr inbounds i32, i32* %156, i64 %159
  %161 = load i32, i32* %160
  %162 = load i32*, i32** %4
  %163 = load i32, i32* %16
  %164 = add nsw i32 %163, 1
  store i32 %164, i32* %16
  %165 = sext i32 %163 to i64
  %166 = getelementptr inbounds i32, i32* %162, i64 %165
  store i32 %161, i32* %166
  br label %151
167:
  br label %168
168:
  %169 = load i32, i32* %15
  %170 = load i32, i32* %9
  %171 = icmp slt i32 %169, %170
  br i1 %171, label %172, label %184
172:
  %173 = load i32*, i32** %11
  %174 = load i32, i32* %15
  %175 = add nsw i32 %174, 1
  store i32 %175, i32* %15
  %176 = sext i32 %174 to i64
  %177 = getelementptr inbounds i32, i32* %173, i64 %176
  %178 = load i32, i32* %177
  %179 = load i32*, i32** %4
  %180 = load i32, i32* %16
  %181 = add nsw i32 %180, 1
  store i32 %181, i32* %16
  %182 = sext i32 %180 to i64
  %183 = getelementptr inbounds i32, i32* %179, i64 %182
  store i32 %178, i32* %183
  br label %168
184:
  %185 = load i32*, i32** %10
  call void @free(i8* %186)
  %187 = load i32*, i32** %11
  call void @free(i8* %188)
  br label %197
197:
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
