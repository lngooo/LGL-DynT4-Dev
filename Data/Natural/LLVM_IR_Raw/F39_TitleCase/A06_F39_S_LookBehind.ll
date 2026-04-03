@.str = constant [3 x i8] c"%s\00"
define dso_local void @TitleCase(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i8
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i8* %0, i8** %2
  %12 = load i8*, i8** %2
  %13 = call i64 @strlen(i8* %12)
  %14 = trunc i64 %13 to i32
  store i32 %14, i32* %3
  %16 = load i32, i32* %3
  %17 = sub nsw i32 %16, 1
  store i32 %17, i32* %4
  br label %18
18:
  %19 = load i32, i32* %4
  %20 = icmp sge i32 %19, 0
  br i1 %20, label %23, label %21
21:
  br label %27
23:
  br label %24
24:
  %25 = load i32, i32* %4
  %26 = add nsw i32 %25, -1
  store i32 %26, i32* %4
  br label %18
27:
  store i32 0, i32* %5
  br label %29
29:
  %30 = load i32, i32* %5
  %31 = load i32, i32* %3
  %32 = icmp slt i32 %30, %31
  br i1 %32, label %35, label %33
33:
  br label %137
35:
  %36 = load i32, i32* %5
  %37 = icmp eq i32 %36, 0
  br i1 %37, label %38, label %39
38:
  br label %47
39:
  %40 = load i8*, i8** %2
  %41 = load i32, i32* %5
  %42 = sub nsw i32 %41, 1
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i8, i8* %40, i64 %43
  %45 = load i8, i8* %44
  %46 = sext i8 %45 to i32
  br label %47
47:
  %48 = phi i32 [ 32, %38 ], [ %46, %39 ]
  %49 = trunc i32 %48 to i8
  store i8 %49, i8* %6
  %50 = call i16** @__ctype_b_loc()
  %51 = load i16*, i16** %50
  %52 = load i8, i8* %6
  %53 = sext i8 %52 to i32
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i16, i16* %51, i64 %54
  %56 = load i16, i16* %55
  %57 = zext i16 %56 to i32
  %58 = and i32 %57, 8192
  %59 = icmp ne i32 %58, 0
  br i1 %59, label %60, label %96
60:
  %61 = call i16** @__ctype_b_loc()
  %62 = load i16*, i16** %61
  %63 = load i8*, i8** %2
  %64 = load i32, i32* %5
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i8, i8* %63, i64 %65
  %67 = load i8, i8* %66
  %68 = sext i8 %67 to i32
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i16, i16* %62, i64 %69
  %71 = load i16, i16* %70
  %72 = zext i16 %71 to i32
  %73 = and i32 %72, 8192
  %74 = icmp ne i32 %73, 0
  br i1 %74, label %96, label %75
75:
  %77 = call i32** @__ctype_toupper_loc()
  %78 = load i32*, i32** %77
  %79 = load i8*, i8** %2
  %80 = load i32, i32* %5
  %81 = sext i32 %80 to i64
  %82 = getelementptr inbounds i8, i8* %79, i64 %81
  %83 = load i8, i8* %82
  %84 = sext i8 %83 to i32
  %85 = sext i32 %84 to i64
  %86 = getelementptr inbounds i32, i32* %78, i64 %85
  %87 = load i32, i32* %86
  store i32 %87, i32* %7
  %88 = load i32, i32* %7
  store i32 %88, i32* %8
  %90 = load i32, i32* %8
  %91 = trunc i32 %90 to i8
  %92 = load i8*, i8** %2
  %93 = load i32, i32* %5
  %94 = sext i32 %93 to i64
  %95 = getelementptr inbounds i8, i8* %92, i64 %94
  store i8 %91, i8* %95
  br label %133
96:
  %97 = call i16** @__ctype_b_loc()
  %98 = load i16*, i16** %97
  %99 = load i8*, i8** %2
  %100 = load i32, i32* %5
  %101 = sext i32 %100 to i64
  %102 = getelementptr inbounds i8, i8* %99, i64 %101
  %103 = load i8, i8* %102
  %104 = sext i8 %103 to i32
  %105 = sext i32 %104 to i64
  %106 = getelementptr inbounds i16, i16* %98, i64 %105
  %107 = load i16, i16* %106
  %108 = zext i16 %107 to i32
  %109 = and i32 %108, 8192
  %110 = icmp ne i32 %109, 0
  br i1 %110, label %132, label %111
111:
  %113 = call i32** @__ctype_tolower_loc()
  %114 = load i32*, i32** %113
  %115 = load i8*, i8** %2
  %116 = load i32, i32* %5
  %117 = sext i32 %116 to i64
  %118 = getelementptr inbounds i8, i8* %115, i64 %117
  %119 = load i8, i8* %118
  %120 = sext i8 %119 to i32
  %121 = sext i32 %120 to i64
  %122 = getelementptr inbounds i32, i32* %114, i64 %121
  %123 = load i32, i32* %122
  store i32 %123, i32* %9
  %124 = load i32, i32* %9
  store i32 %124, i32* %10
  %126 = load i32, i32* %10
  %127 = trunc i32 %126 to i8
  %128 = load i8*, i8** %2
  %129 = load i32, i32* %5
  %130 = sext i32 %129 to i64
  %131 = getelementptr inbounds i8, i8* %128, i64 %130
  store i8 %127, i8* %131
  br label %132
132:
  br label %133
133:
  br label %134
134:
  %135 = load i32, i32* %5
  %136 = add nsw i32 %135, 1
  store i32 %136, i32* %5
  br label %29
137:
  ret void
}
declare i64 @strlen(i8*)
declare i16** @__ctype_b_loc()
declare i32** @__ctype_toupper_loc()
declare i32** @__ctype_tolower_loc()
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
  call void @TitleCase(i8* %12)
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
