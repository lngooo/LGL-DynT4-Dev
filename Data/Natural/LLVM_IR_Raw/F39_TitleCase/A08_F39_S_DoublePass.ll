@.str = constant [3 x i8] c"%s\00"
define dso_local void @TitleCase(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %12
12:
  %13 = load i8*, i8** %2
  %14 = load i32, i32* %3
  %15 = sext i32 %14 to i64
  %16 = getelementptr inbounds i8, i8* %13, i64 %15
  %17 = load i8, i8* %16
  %18 = icmp ne i8 %17, 0
  br i1 %18, label %21, label %19
19:
  br label %45
21:
  %23 = call i32** @__ctype_tolower_loc()
  %24 = load i32*, i32** %23
  %25 = load i8*, i8** %2
  %26 = load i32, i32* %3
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i8, i8* %25, i64 %27
  %29 = load i8, i8* %28
  %30 = sext i8 %29 to i32
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %24, i64 %31
  %33 = load i32, i32* %32
  store i32 %33, i32* %4
  %34 = load i32, i32* %4
  store i32 %34, i32* %5
  %36 = load i32, i32* %5
  %37 = trunc i32 %36 to i8
  %38 = load i8*, i8** %2
  %39 = load i32, i32* %3
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8, i8* %38, i64 %40
  store i8 %37, i8* %41
  br label %42
42:
  %43 = load i32, i32* %3
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %3
  br label %12
45:
  %46 = load i8*, i8** %2
  %47 = getelementptr inbounds i8, i8* %46, i64 0
  %48 = load i8, i8* %47
  %49 = sext i8 %48 to i32
  %50 = icmp ne i32 %49, 0
  br i1 %50, label %51, label %68
51:
  %53 = call i32** @__ctype_toupper_loc()
  %54 = load i32*, i32** %53
  %55 = load i8*, i8** %2
  %56 = getelementptr inbounds i8, i8* %55, i64 0
  %57 = load i8, i8* %56
  %58 = sext i8 %57 to i32
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i32, i32* %54, i64 %59
  %61 = load i32, i32* %60
  store i32 %61, i32* %6
  %62 = load i32, i32* %6
  store i32 %62, i32* %7
  %64 = load i32, i32* %7
  %65 = trunc i32 %64 to i8
  %66 = load i8*, i8** %2
  %67 = getelementptr inbounds i8, i8* %66, i64 0
  store i8 %65, i8* %67
  br label %68
68:
  store i32 1, i32* %8
  br label %70
70:
  %71 = load i8*, i8** %2
  %72 = load i32, i32* %8
  %73 = sext i32 %72 to i64
  %74 = getelementptr inbounds i8, i8* %71, i64 %73
  %75 = load i8, i8* %74
  %76 = icmp ne i8 %75, 0
  br i1 %76, label %79, label %77
77:
  br label %120
79:
  %80 = call i16** @__ctype_b_loc()
  %81 = load i16*, i16** %80
  %82 = load i8*, i8** %2
  %83 = load i32, i32* %8
  %84 = sub nsw i32 %83, 1
  %85 = sext i32 %84 to i64
  %86 = getelementptr inbounds i8, i8* %82, i64 %85
  %87 = load i8, i8* %86
  %88 = sext i8 %87 to i32
  %89 = sext i32 %88 to i64
  %90 = getelementptr inbounds i16, i16* %81, i64 %89
  %91 = load i16, i16* %90
  %92 = zext i16 %91 to i32
  %93 = and i32 %92, 8192
  %94 = icmp ne i32 %93, 0
  br i1 %94, label %95, label %116
95:
  %97 = call i32** @__ctype_toupper_loc()
  %98 = load i32*, i32** %97
  %99 = load i8*, i8** %2
  %100 = load i32, i32* %8
  %101 = sext i32 %100 to i64
  %102 = getelementptr inbounds i8, i8* %99, i64 %101
  %103 = load i8, i8* %102
  %104 = sext i8 %103 to i32
  %105 = sext i32 %104 to i64
  %106 = getelementptr inbounds i32, i32* %98, i64 %105
  %107 = load i32, i32* %106
  store i32 %107, i32* %9
  %108 = load i32, i32* %9
  store i32 %108, i32* %10
  %110 = load i32, i32* %10
  %111 = trunc i32 %110 to i8
  %112 = load i8*, i8** %2
  %113 = load i32, i32* %8
  %114 = sext i32 %113 to i64
  %115 = getelementptr inbounds i8, i8* %112, i64 %114
  store i8 %111, i8* %115
  br label %116
116:
  br label %117
117:
  %118 = load i32, i32* %8
  %119 = add nsw i32 %118, 1
  store i32 %119, i32* %8
  br label %70
120:
  ret void
}
declare i32** @__ctype_tolower_loc()
declare i32** @__ctype_toupper_loc()
declare i16** @__ctype_b_loc()
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
