@.str = constant [5 x i8] c"%d%s\00"
@.str.1 = constant [1 x i8] zeroinitializer
@.str.2 = constant [2 x i8] c" \00"
@.str.3 = constant [2 x i8] c"\0A\00"
define dso_local void @QuickSort(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca i32
  %14 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %15 = load i32, i32* %5
  %16 = load i32, i32* %6
  %17 = icmp slt i32 %15, %16
  br i1 %17, label %18, label %218
18:
  %20 = load i32, i32* %5
  %21 = load i32, i32* %6
  %22 = load i32, i32* %5
  %23 = sub nsw i32 %21, %22
  %24 = sdiv i32 %23, 2
  %25 = add nsw i32 %20, %24
  store i32 %25, i32* %7
  %26 = load i32*, i32** %4
  %27 = load i32, i32* %7
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i32, i32* %26, i64 %28
  %30 = load i32, i32* %29
  %31 = load i32*, i32** %4
  %32 = load i32, i32* %5
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i32, i32* %31, i64 %33
  %35 = load i32, i32* %34
  %36 = icmp slt i32 %30, %35
  br i1 %36, label %37, label %59
37:
  %39 = load i32*, i32** %4
  %40 = load i32, i32* %7
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i32, i32* %39, i64 %41
  %43 = load i32, i32* %42
  store i32 %43, i32* %8
  %44 = load i32*, i32** %4
  %45 = load i32, i32* %5
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i32, i32* %44, i64 %46
  %48 = load i32, i32* %47
  %49 = load i32*, i32** %4
  %50 = load i32, i32* %7
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i32, i32* %49, i64 %51
  store i32 %48, i32* %52
  %53 = load i32, i32* %8
  %54 = load i32*, i32** %4
  %55 = load i32, i32* %5
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i32, i32* %54, i64 %56
  store i32 %53, i32* %57
  br label %59
59:
  %60 = load i32*, i32** %4
  %61 = load i32, i32* %6
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i32, i32* %60, i64 %62
  %64 = load i32, i32* %63
  %65 = load i32*, i32** %4
  %66 = load i32, i32* %5
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds i32, i32* %65, i64 %67
  %69 = load i32, i32* %68
  %70 = icmp slt i32 %64, %69
  br i1 %70, label %71, label %93
71:
  %73 = load i32*, i32** %4
  %74 = load i32, i32* %6
  %75 = sext i32 %74 to i64
  %76 = getelementptr inbounds i32, i32* %73, i64 %75
  %77 = load i32, i32* %76
  store i32 %77, i32* %9
  %78 = load i32*, i32** %4
  %79 = load i32, i32* %5
  %80 = sext i32 %79 to i64
  %81 = getelementptr inbounds i32, i32* %78, i64 %80
  %82 = load i32, i32* %81
  %83 = load i32*, i32** %4
  %84 = load i32, i32* %6
  %85 = sext i32 %84 to i64
  %86 = getelementptr inbounds i32, i32* %83, i64 %85
  store i32 %82, i32* %86
  %87 = load i32, i32* %9
  %88 = load i32*, i32** %4
  %89 = load i32, i32* %5
  %90 = sext i32 %89 to i64
  %91 = getelementptr inbounds i32, i32* %88, i64 %90
  store i32 %87, i32* %91
  br label %93
93:
  %94 = load i32*, i32** %4
  %95 = load i32, i32* %6
  %96 = sext i32 %95 to i64
  %97 = getelementptr inbounds i32, i32* %94, i64 %96
  %98 = load i32, i32* %97
  %99 = load i32*, i32** %4
  %100 = load i32, i32* %7
  %101 = sext i32 %100 to i64
  %102 = getelementptr inbounds i32, i32* %99, i64 %101
  %103 = load i32, i32* %102
  %104 = icmp slt i32 %98, %103
  br i1 %104, label %105, label %127
105:
  %107 = load i32*, i32** %4
  %108 = load i32, i32* %6
  %109 = sext i32 %108 to i64
  %110 = getelementptr inbounds i32, i32* %107, i64 %109
  %111 = load i32, i32* %110
  store i32 %111, i32* %10
  %112 = load i32*, i32** %4
  %113 = load i32, i32* %7
  %114 = sext i32 %113 to i64
  %115 = getelementptr inbounds i32, i32* %112, i64 %114
  %116 = load i32, i32* %115
  %117 = load i32*, i32** %4
  %118 = load i32, i32* %6
  %119 = sext i32 %118 to i64
  %120 = getelementptr inbounds i32, i32* %117, i64 %119
  store i32 %116, i32* %120
  %121 = load i32, i32* %10
  %122 = load i32*, i32** %4
  %123 = load i32, i32* %7
  %124 = sext i32 %123 to i64
  %125 = getelementptr inbounds i32, i32* %122, i64 %124
  store i32 %121, i32* %125
  br label %127
127:
  %129 = load i32*, i32** %4
  %130 = load i32, i32* %7
  %131 = sext i32 %130 to i64
  %132 = getelementptr inbounds i32, i32* %129, i64 %131
  %133 = load i32, i32* %132
  store i32 %133, i32* %11
  %135 = load i32, i32* %5
  store i32 %135, i32* %12
  %137 = load i32, i32* %6
  store i32 %137, i32* %13
  br label %138
138:
  %139 = load i32, i32* %12
  %140 = load i32, i32* %13
  %141 = icmp sle i32 %139, %140
  br i1 %141, label %142, label %197
142:
  br label %143
143:
  %144 = load i32*, i32** %4
  %145 = load i32, i32* %12
  %146 = sext i32 %145 to i64
  %147 = getelementptr inbounds i32, i32* %144, i64 %146
  %148 = load i32, i32* %147
  %149 = load i32, i32* %11
  %150 = icmp slt i32 %148, %149
  br i1 %150, label %151, label %154
151:
  %152 = load i32, i32* %12
  %153 = add nsw i32 %152, 1
  store i32 %153, i32* %12
  br label %143
154:
  br label %155
155:
  %156 = load i32*, i32** %4
  %157 = load i32, i32* %13
  %158 = sext i32 %157 to i64
  %159 = getelementptr inbounds i32, i32* %156, i64 %158
  %160 = load i32, i32* %159
  %161 = load i32, i32* %11
  %162 = icmp sgt i32 %160, %161
  br i1 %162, label %163, label %166
163:
  %164 = load i32, i32* %13
  %165 = add nsw i32 %164, -1
  store i32 %165, i32* %13
  br label %155
166:
  %167 = load i32, i32* %12
  %168 = load i32, i32* %13
  %169 = icmp sle i32 %167, %168
  br i1 %169, label %170, label %196
170:
  %172 = load i32*, i32** %4
  %173 = load i32, i32* %12
  %174 = sext i32 %173 to i64
  %175 = getelementptr inbounds i32, i32* %172, i64 %174
  %176 = load i32, i32* %175
  store i32 %176, i32* %14
  %177 = load i32*, i32** %4
  %178 = load i32, i32* %13
  %179 = sext i32 %178 to i64
  %180 = getelementptr inbounds i32, i32* %177, i64 %179
  %181 = load i32, i32* %180
  %182 = load i32*, i32** %4
  %183 = load i32, i32* %12
  %184 = sext i32 %183 to i64
  %185 = getelementptr inbounds i32, i32* %182, i64 %184
  store i32 %181, i32* %185
  %186 = load i32, i32* %14
  %187 = load i32*, i32** %4
  %188 = load i32, i32* %13
  %189 = sext i32 %188 to i64
  %190 = getelementptr inbounds i32, i32* %187, i64 %189
  store i32 %186, i32* %190
  %191 = load i32, i32* %12
  %192 = add nsw i32 %191, 1
  store i32 %192, i32* %12
  %193 = load i32, i32* %13
  %194 = add nsw i32 %193, -1
  store i32 %194, i32* %13
  br label %196
196:
  br label %138
197:
  %198 = load i32, i32* %5
  %199 = load i32, i32* %13
  %200 = icmp slt i32 %198, %199
  br i1 %200, label %201, label %205
201:
  %202 = load i32*, i32** %4
  %203 = load i32, i32* %5
  %204 = load i32, i32* %13
  call void @QuickSort(i32* %202, i32 %203, i32 %204)
  br label %205
205:
  %206 = load i32, i32* %12
  %207 = load i32, i32* %6
  %208 = icmp slt i32 %206, %207
  br i1 %208, label %209, label %213
209:
  %210 = load i32*, i32** %4
  %211 = load i32, i32* %12
  %212 = load i32, i32* %6
  call void @QuickSort(i32* %210, i32 %211, i32 %212)
  br label %213
213:
  br label %218
218:
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
  call void @QuickSort(i32* %46, i32 0, i32 %48)
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
