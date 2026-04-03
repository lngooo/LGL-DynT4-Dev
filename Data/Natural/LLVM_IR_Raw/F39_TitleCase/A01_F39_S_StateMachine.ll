@.str = constant [3 x i8] c"%s\00"
define dso_local void @TitleCase(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i8* %0, i8** %2
  store i32 1, i32* %3
  store i32 0, i32* %4
  br label %11
11:
  %12 = load i8*, i8** %2
  %13 = load i32, i32* %4
  %14 = sext i32 %13 to i64
  %15 = getelementptr inbounds i8, i8* %12, i64 %14
  %16 = load i8, i8* %15
  %17 = sext i8 %16 to i32
  %18 = icmp ne i32 %17, 0
  br i1 %18, label %21, label %19
19:
  br label %87
21:
  %22 = call i16** @__ctype_b_loc()
  %23 = load i16*, i16** %22
  %24 = load i8*, i8** %2
  %25 = load i32, i32* %4
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i8, i8* %24, i64 %26
  %28 = load i8, i8* %27
  %29 = sext i8 %28 to i32
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i16, i16* %23, i64 %30
  %32 = load i16, i16* %31
  %33 = zext i16 %32 to i32
  %34 = and i32 %33, 8192
  %35 = icmp ne i32 %34, 0
  br i1 %35, label %36, label %37
36:
  store i32 1, i32* %3
  br label %83
37:
  %38 = load i32, i32* %3
  %39 = icmp ne i32 %38, 0
  br i1 %39, label %40, label %61
40:
  %42 = call i32** @__ctype_toupper_loc()
  %43 = load i32*, i32** %42
  %44 = load i8*, i8** %2
  %45 = load i32, i32* %4
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i8, i8* %44, i64 %46
  %48 = load i8, i8* %47
  %49 = sext i8 %48 to i32
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i32, i32* %43, i64 %50
  %52 = load i32, i32* %51
  store i32 %52, i32* %5
  %53 = load i32, i32* %5
  store i32 %53, i32* %6
  %55 = load i32, i32* %6
  %56 = trunc i32 %55 to i8
  %57 = load i8*, i8** %2
  %58 = load i32, i32* %4
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i8, i8* %57, i64 %59
  store i8 %56, i8* %60
  store i32 0, i32* %3
  br label %82
61:
  %63 = call i32** @__ctype_tolower_loc()
  %64 = load i32*, i32** %63
  %65 = load i8*, i8** %2
  %66 = load i32, i32* %4
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds i8, i8* %65, i64 %67
  %69 = load i8, i8* %68
  %70 = sext i8 %69 to i32
  %71 = sext i32 %70 to i64
  %72 = getelementptr inbounds i32, i32* %64, i64 %71
  %73 = load i32, i32* %72
  store i32 %73, i32* %7
  %74 = load i32, i32* %7
  store i32 %74, i32* %8
  %76 = load i32, i32* %8
  %77 = trunc i32 %76 to i8
  %78 = load i8*, i8** %2
  %79 = load i32, i32* %4
  %80 = sext i32 %79 to i64
  %81 = getelementptr inbounds i8, i8* %78, i64 %80
  store i8 %77, i8* %81
  br label %82
82:
  br label %83
83:
  br label %84
84:
  %85 = load i32, i32* %4
  %86 = add nsw i32 %85, 1
  store i32 %86, i32* %4
  br label %11
87:
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
