@.str = constant [3 x i8] c"%s\00"
define dso_local void @ydB(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca i32
  store i8* %0, i8** %2
  %15 = load i8*, i8** %2
  %16 = call i64 @strlen(i8* %15)
  %17 = trunc i64 %16 to i32
  store i32 %17, i32* %3
  store i32 0, i32* %4
  br label %19
19:
  %20 = load i32, i32* %4
  %21 = load i32, i32* %3
  %22 = icmp slt i32 %20, %21
  br i1 %22, label %25, label %23
23:
  br label %77
25:
  %27 = call i32** @__ctype_tolower_loc()
  %28 = load i32*, i32** %27
  %29 = load i8*, i8** %2
  %30 = load i32, i32* %4
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i8, i8* %29, i64 %31
  %33 = load i8, i8* %32
  %34 = sext i8 %33 to i32
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i32, i32* %28, i64 %35
  %37 = load i32, i32* %36
  store i32 %37, i32* %5
  %38 = load i32, i32* %5
  store i32 %38, i32* %6
  %40 = load i32, i32* %6
  %41 = trunc i32 %40 to i8
  %42 = load i8*, i8** %2
  %43 = load i32, i32* %4
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i8, i8* %42, i64 %44
  store i8 %41, i8* %45
  %46 = load i32, i32* %4
  %47 = add nsw i32 %46, 1
  %48 = load i32, i32* %3
  %49 = icmp slt i32 %47, %48
  br i1 %49, label %50, label %73
50:
  %52 = call i32** @__ctype_tolower_loc()
  %53 = load i32*, i32** %52
  %54 = load i8*, i8** %2
  %55 = load i32, i32* %4
  %56 = add nsw i32 %55, 1
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i8, i8* %54, i64 %57
  %59 = load i8, i8* %58
  %60 = sext i8 %59 to i32
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i32, i32* %53, i64 %61
  %63 = load i32, i32* %62
  store i32 %63, i32* %7
  %64 = load i32, i32* %7
  store i32 %64, i32* %8
  %66 = load i32, i32* %8
  %67 = trunc i32 %66 to i8
  %68 = load i8*, i8** %2
  %69 = load i32, i32* %4
  %70 = add nsw i32 %69, 1
  %71 = sext i32 %70 to i64
  %72 = getelementptr inbounds i8, i8* %68, i64 %71
  store i8 %67, i8* %72
  br label %73
73:
  br label %74
74:
  %75 = load i32, i32* %4
  %76 = add nsw i32 %75, 2
  store i32 %76, i32* %4
  br label %19
77:
  %78 = load i32, i32* %3
  %79 = icmp sgt i32 %78, 0
  br i1 %79, label %80, label %97
80:
  %82 = call i32** @__ctype_toupper_loc()
  %83 = load i32*, i32** %82
  %84 = load i8*, i8** %2
  %85 = getelementptr inbounds i8, i8* %84, i64 0
  %86 = load i8, i8* %85
  %87 = sext i8 %86 to i32
  %88 = sext i32 %87 to i64
  %89 = getelementptr inbounds i32, i32* %83, i64 %88
  %90 = load i32, i32* %89
  store i32 %90, i32* %9
  %91 = load i32, i32* %9
  store i32 %91, i32* %10
  %93 = load i32, i32* %10
  %94 = trunc i32 %93 to i8
  %95 = load i8*, i8** %2
  %96 = getelementptr inbounds i8, i8* %95, i64 0
  store i8 %94, i8* %96
  br label %97
97:
  store i32 1, i32* %11
  br label %99
99:
  %100 = load i32, i32* %11
  %101 = load i32, i32* %3
  %102 = icmp slt i32 %100, %101
  br i1 %102, label %105, label %103
103:
  br label %139
105:
  %106 = load i8*, i8** %2
  %107 = load i32, i32* %11
  %108 = sub nsw i32 %107, 1
  %109 = sext i32 %108 to i64
  %110 = getelementptr inbounds i8, i8* %106, i64 %109
  %111 = load i8, i8* %110
  %112 = sext i8 %111 to i32
  %113 = icmp eq i32 %112, 32
  br i1 %113, label %114, label %135
114:
  %116 = call i32** @__ctype_toupper_loc()
  %117 = load i32*, i32** %116
  %118 = load i8*, i8** %2
  %119 = load i32, i32* %11
  %120 = sext i32 %119 to i64
  %121 = getelementptr inbounds i8, i8* %118, i64 %120
  %122 = load i8, i8* %121
  %123 = sext i8 %122 to i32
  %124 = sext i32 %123 to i64
  %125 = getelementptr inbounds i32, i32* %117, i64 %124
  %126 = load i32, i32* %125
  store i32 %126, i32* %12
  %127 = load i32, i32* %12
  store i32 %127, i32* %13
  %129 = load i32, i32* %13
  %130 = trunc i32 %129 to i8
  %131 = load i8*, i8** %2
  %132 = load i32, i32* %11
  %133 = sext i32 %132 to i64
  %134 = getelementptr inbounds i8, i8* %131, i64 %133
  store i8 %130, i8* %134
  br label %135
135:
  br label %136
136:
  %137 = load i32, i32* %11
  %138 = add nsw i32 %137, 1
  store i32 %138, i32* %11
  br label %99
139:
  ret void
}
declare i64 @strlen(i8*)
declare i32** @__ctype_tolower_loc()
declare i32** @__ctype_toupper_loc()
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %17
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  call void @ydB(i8* %12)
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 1
  %15 = load i8*, i8** %14
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i8* %15)
  store i32 0, i32* %3
  br label %17
17:
  %18 = load i32, i32* %3
  ret i32 %18
}
declare i32 @printf(i8*, ...)
