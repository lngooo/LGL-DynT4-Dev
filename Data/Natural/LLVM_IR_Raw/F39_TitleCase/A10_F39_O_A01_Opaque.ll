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
  store i8* %0, i8** %2
  store i32 15, i32* %3
  %11 = load i32, i32* %3
  %12 = load i32, i32* %3
  %13 = mul nsw i32 %11, %12
  %14 = icmp sge i32 %13, 0
  br i1 %14, label %15, label %95
15:
  store i32 1, i32* %4
  store i32 0, i32* %5
  br label %18
18:
  %19 = load i8*, i8** %2
  %20 = load i32, i32* %5
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i8, i8* %19, i64 %21
  %23 = load i8, i8* %22
  %24 = icmp ne i8 %23, 0
  br i1 %24, label %27, label %25
25:
  br label %93
27:
  %28 = call i16** @__ctype_b_loc()
  %29 = load i16*, i16** %28
  %30 = load i8*, i8** %2
  %31 = load i32, i32* %5
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i8, i8* %30, i64 %32
  %34 = load i8, i8* %33
  %35 = sext i8 %34 to i32
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i16, i16* %29, i64 %36
  %38 = load i16, i16* %37
  %39 = zext i16 %38 to i32
  %40 = and i32 %39, 8192
  %41 = icmp ne i32 %40, 0
  br i1 %41, label %42, label %43
42:
  store i32 1, i32* %4
  br label %89
43:
  %44 = load i32, i32* %4
  %45 = icmp ne i32 %44, 0
  br i1 %45, label %46, label %67
46:
  %48 = call i32** @__ctype_toupper_loc()
  %49 = load i32*, i32** %48
  %50 = load i8*, i8** %2
  %51 = load i32, i32* %5
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i8, i8* %50, i64 %52
  %54 = load i8, i8* %53
  %55 = sext i8 %54 to i32
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i32, i32* %49, i64 %56
  %58 = load i32, i32* %57
  store i32 %58, i32* %6
  %59 = load i32, i32* %6
  store i32 %59, i32* %7
  %61 = load i32, i32* %7
  %62 = trunc i32 %61 to i8
  %63 = load i8*, i8** %2
  %64 = load i32, i32* %5
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i8, i8* %63, i64 %65
  store i8 %62, i8* %66
  store i32 0, i32* %4
  br label %88
67:
  %69 = call i32** @__ctype_tolower_loc()
  %70 = load i32*, i32** %69
  %71 = load i8*, i8** %2
  %72 = load i32, i32* %5
  %73 = sext i32 %72 to i64
  %74 = getelementptr inbounds i8, i8* %71, i64 %73
  %75 = load i8, i8* %74
  %76 = sext i8 %75 to i32
  %77 = sext i32 %76 to i64
  %78 = getelementptr inbounds i32, i32* %70, i64 %77
  %79 = load i32, i32* %78
  store i32 %79, i32* %8
  %80 = load i32, i32* %8
  store i32 %80, i32* %9
  %82 = load i32, i32* %9
  %83 = trunc i32 %82 to i8
  %84 = load i8*, i8** %2
  %85 = load i32, i32* %5
  %86 = sext i32 %85 to i64
  %87 = getelementptr inbounds i8, i8* %84, i64 %86
  store i8 %83, i8* %87
  br label %88
88:
  br label %89
89:
  br label %90
90:
  %91 = load i32, i32* %5
  %92 = add nsw i32 %91, 1
  store i32 %92, i32* %5
  br label %18
93:
  br label %95
95:
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
