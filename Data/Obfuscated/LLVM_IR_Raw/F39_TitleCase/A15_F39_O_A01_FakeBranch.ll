@.str = constant [3 x i8] c"%s\00"
define dso_local void @OCE(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i8* %0, i8** %2
  store i32 42, i32* %3
  %11 = load i32, i32* %3
  %12 = icmp slt i32 %11, 10
  br i1 %12, label %13, label %16
13:
  %14 = load i8*, i8** %2
  %15 = getelementptr inbounds i8, i8* %14, i64 0
  store i8 90, i8* %15
  br label %92
16:
  store i32 1, i32* %4
  store i32 0, i32* %5
  br label %19
19:
  %20 = load i8*, i8** %2
  %21 = load i32, i32* %5
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i8, i8* %20, i64 %22
  %24 = load i8, i8* %23
  %25 = icmp ne i8 %24, 0
  br i1 %25, label %28, label %26
26:
  br label %90
28:
  %29 = call i16** @__ctype_b_loc()
  %30 = load i16*, i16** %29
  %31 = load i8*, i8** %2
  %32 = load i32, i32* %5
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8, i8* %31, i64 %33
  %35 = load i8, i8* %34
  %36 = sext i8 %35 to i32
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i16, i16* %30, i64 %37
  %39 = load i16, i16* %38
  %40 = zext i16 %39 to i32
  %41 = and i32 %40, 8192
  %42 = icmp ne i32 %41, 0
  br i1 %42, label %43, label %44
43:
  store i32 1, i32* %4
  br label %86
44:
  %45 = load i32, i32* %4
  %46 = icmp ne i32 %45, 0
  br i1 %46, label %47, label %63
47:
  %49 = call i32** @__ctype_toupper_loc()
  %50 = load i32*, i32** %49
  %51 = load i8*, i8** %2
  %52 = load i32, i32* %5
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds i8, i8* %51, i64 %53
  %55 = load i8, i8* %54
  %56 = sext i8 %55 to i32
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i32, i32* %50, i64 %57
  %59 = load i32, i32* %58
  store i32 %59, i32* %6
  %60 = load i32, i32* %6
  store i32 %60, i32* %7
  %62 = load i32, i32* %7
  br label %79
63:
  %65 = call i32** @__ctype_tolower_loc()
  %66 = load i32*, i32** %65
  %67 = load i8*, i8** %2
  %68 = load i32, i32* %5
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i8, i8* %67, i64 %69
  %71 = load i8, i8* %70
  %72 = sext i8 %71 to i32
  %73 = sext i32 %72 to i64
  %74 = getelementptr inbounds i32, i32* %66, i64 %73
  %75 = load i32, i32* %74
  store i32 %75, i32* %8
  %76 = load i32, i32* %8
  store i32 %76, i32* %9
  %78 = load i32, i32* %9
  br label %79
79:
  %80 = phi i32 [ %62, %47 ], [ %78, %63 ]
  %81 = trunc i32 %80 to i8
  %82 = load i8*, i8** %2
  %83 = load i32, i32* %5
  %84 = sext i32 %83 to i64
  %85 = getelementptr inbounds i8, i8* %82, i64 %84
  store i8 %81, i8* %85
  store i32 0, i32* %4
  br label %86
86:
  br label %87
87:
  %88 = load i32, i32* %5
  %89 = add nsw i32 %88, 1
  store i32 %89, i32* %5
  br label %19
90:
  br label %92
92:
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
  call void @OCE(i8* %12)
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
