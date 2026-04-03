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
  %11 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %13
13:
  %14 = load i32, i32* %3
  %15 = icmp slt i32 %14, 1
  br i1 %15, label %18, label %16
16:
  store i32 2, i32* %4
  br label %112
18:
  store i32 1, i32* %5
  store i32 0, i32* %6
  br label %21
21:
  %22 = load i8*, i8** %2
  %23 = load i32, i32* %6
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i8, i8* %22, i64 %24
  %26 = load i8, i8* %25
  %27 = icmp ne i8 %26, 0
  br i1 %27, label %30, label %28
28:
  store i32 5, i32* %4
  br label %107
30:
  store i32 0, i32* %7
  br label %32
32:
  %33 = load i32, i32* %7
  %34 = icmp slt i32 %33, 1
  br i1 %34, label %37, label %35
35:
  store i32 8, i32* %4
  br label %103
37:
  %38 = call i16** @__ctype_b_loc()
  %39 = load i16*, i16** %38
  %40 = load i8*, i8** %2
  %41 = load i32, i32* %6
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %40, i64 %42
  %44 = load i8, i8* %43
  %45 = sext i8 %44 to i32
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i16, i16* %39, i64 %46
  %48 = load i16, i16* %47
  %49 = zext i16 %48 to i32
  %50 = and i32 %49, 8192
  %51 = icmp ne i32 %50, 0
  br i1 %51, label %52, label %53
52:
  store i32 1, i32* %5
  br label %99
53:
  %54 = load i32, i32* %5
  %55 = icmp ne i32 %54, 0
  br i1 %55, label %56, label %77
56:
  %58 = call i32** @__ctype_toupper_loc()
  %59 = load i32*, i32** %58
  %60 = load i8*, i8** %2
  %61 = load i32, i32* %6
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i8, i8* %60, i64 %62
  %64 = load i8, i8* %63
  %65 = sext i8 %64 to i32
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds i32, i32* %59, i64 %66
  %68 = load i32, i32* %67
  store i32 %68, i32* %8
  %69 = load i32, i32* %8
  store i32 %69, i32* %9
  %71 = load i32, i32* %9
  %72 = trunc i32 %71 to i8
  %73 = load i8*, i8** %2
  %74 = load i32, i32* %6
  %75 = sext i32 %74 to i64
  %76 = getelementptr inbounds i8, i8* %73, i64 %75
  store i8 %72, i8* %76
  store i32 0, i32* %5
  br label %98
77:
  %79 = call i32** @__ctype_tolower_loc()
  %80 = load i32*, i32** %79
  %81 = load i8*, i8** %2
  %82 = load i32, i32* %6
  %83 = sext i32 %82 to i64
  %84 = getelementptr inbounds i8, i8* %81, i64 %83
  %85 = load i8, i8* %84
  %86 = sext i8 %85 to i32
  %87 = sext i32 %86 to i64
  %88 = getelementptr inbounds i32, i32* %80, i64 %87
  %89 = load i32, i32* %88
  store i32 %89, i32* %10
  %90 = load i32, i32* %10
  store i32 %90, i32* %11
  %92 = load i32, i32* %11
  %93 = trunc i32 %92 to i8
  %94 = load i8*, i8** %2
  %95 = load i32, i32* %6
  %96 = sext i32 %95 to i64
  %97 = getelementptr inbounds i8, i8* %94, i64 %96
  store i8 %93, i8* %97
  br label %98
98:
  br label %99
99:
  br label %100
100:
  %101 = load i32, i32* %7
  %102 = add nsw i32 %101, 1
  store i32 %102, i32* %7
  br label %32
103:
  br label %104
104:
  %105 = load i32, i32* %6
  %106 = add nsw i32 %105, 1
  store i32 %106, i32* %6
  br label %21
107:
  br label %109
109:
  %110 = load i32, i32* %3
  %111 = add nsw i32 %110, 1
  store i32 %111, i32* %3
  br label %13
112:
  ret void
}
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
