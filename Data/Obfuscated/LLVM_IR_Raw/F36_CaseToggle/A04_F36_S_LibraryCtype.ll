@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @B0(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %2
  br label %7
7:
  %8 = load i8*, i8** %2
  %9 = load i8, i8* %8
  %10 = icmp ne i8 %9, 0
  br i1 %10, label %11, label %70
11:
  %12 = call i16** @__ctype_b_loc()
  %13 = load i16*, i16** %12
  %14 = load i8*, i8** %2
  %15 = load i8, i8* %14
  %16 = sext i8 %15 to i32
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds i16, i16* %13, i64 %17
  %19 = load i16, i16* %18
  %20 = zext i16 %19 to i32
  %21 = and i32 %20, 256
  %22 = icmp ne i32 %21, 0
  br i1 %22, label %23, label %38
23:
  %25 = call i32** @__ctype_tolower_loc()
  %26 = load i32*, i32** %25
  %27 = load i8*, i8** %2
  %28 = load i8, i8* %27
  %29 = sext i8 %28 to i32
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %26, i64 %30
  %32 = load i32, i32* %31
  store i32 %32, i32* %3
  %33 = load i32, i32* %3
  store i32 %33, i32* %4
  %35 = load i32, i32* %4
  %36 = trunc i32 %35 to i8
  %37 = load i8*, i8** %2
  store i8 %36, i8* %37
  br label %66
38:
  %39 = call i16** @__ctype_b_loc()
  %40 = load i16*, i16** %39
  %41 = load i8*, i8** %2
  %42 = load i8, i8* %41
  %43 = sext i8 %42 to i32
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i16, i16* %40, i64 %44
  %46 = load i16, i16* %45
  %47 = zext i16 %46 to i32
  %48 = and i32 %47, 512
  %49 = icmp ne i32 %48, 0
  br i1 %49, label %50, label %65
50:
  %52 = call i32** @__ctype_toupper_loc()
  %53 = load i32*, i32** %52
  %54 = load i8*, i8** %2
  %55 = load i8, i8* %54
  %56 = sext i8 %55 to i32
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i32, i32* %53, i64 %57
  %59 = load i32, i32* %58
  store i32 %59, i32* %5
  %60 = load i32, i32* %5
  store i32 %60, i32* %6
  %62 = load i32, i32* %6
  %63 = trunc i32 %62 to i8
  %64 = load i8*, i8** %2
  store i8 %63, i8* %64
  br label %65
65:
  br label %66
66:
  br label %67
67:
  %68 = load i8*, i8** %2
  %69 = getelementptr inbounds i8, i8* %68, i32 1
  store i8* %69, i8** %2
  br label %7
70:
  ret void
}
declare i16** @__ctype_b_loc()
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
  call void @B0(i8* %12)
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 1
  %15 = load i8*, i8** %14
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i8* %15)
  store i32 0, i32* %3
  br label %17
17:
  %18 = load i32, i32* %3
  ret i32 %18
}
declare i32 @printf(i8*, ...)
