@.str = constant [3 x i8] c"%s\00"
define dso_local void @process(i8* %0, i32 %1) {
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i8* %0, i8** %3
  store i32 %1, i32* %4
  %9 = load i8*, i8** %3
  %10 = load i8, i8* %9
  %11 = icmp ne i8 %10, 0
  br i1 %11, label %13, label %12
12:
  br label %63
13:
  %14 = call i16** @__ctype_b_loc()
  %15 = load i16*, i16** %14
  %16 = load i8*, i8** %3
  %17 = load i8, i8* %16
  %18 = sext i8 %17 to i32
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i16, i16* %15, i64 %19
  %21 = load i16, i16* %20
  %22 = zext i16 %21 to i32
  %23 = and i32 %22, 8192
  %24 = icmp ne i32 %23, 0
  br i1 %24, label %25, label %28
25:
  %26 = load i8*, i8** %3
  %27 = getelementptr inbounds i8, i8* %26, i64 1
  call void @process(i8* %27, i32 1)
  br label %63
28:
  %29 = load i32, i32* %4
  %30 = icmp ne i32 %29, 0
  br i1 %30, label %31, label %44
31:
  %33 = call i32** @__ctype_toupper_loc()
  %34 = load i32*, i32** %33
  %35 = load i8*, i8** %3
  %36 = load i8, i8* %35
  %37 = sext i8 %36 to i32
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i32, i32* %34, i64 %38
  %40 = load i32, i32* %39
  store i32 %40, i32* %5
  %41 = load i32, i32* %5
  store i32 %41, i32* %6
  %43 = load i32, i32* %6
  br label %57
44:
  %46 = call i32** @__ctype_tolower_loc()
  %47 = load i32*, i32** %46
  %48 = load i8*, i8** %3
  %49 = load i8, i8* %48
  %50 = sext i8 %49 to i32
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i32, i32* %47, i64 %51
  %53 = load i32, i32* %52
  store i32 %53, i32* %7
  %54 = load i32, i32* %7
  store i32 %54, i32* %8
  %56 = load i32, i32* %8
  br label %57
57:
  %58 = phi i32 [ %43, %31 ], [ %56, %44 ]
  %59 = trunc i32 %58 to i8
  %60 = load i8*, i8** %3
  store i8 %59, i8* %60
  %61 = load i8*, i8** %3
  %62 = getelementptr inbounds i8, i8* %61, i64 1
  call void @process(i8* %62, i32 0)
  br label %63
63:
  ret void
}
declare i16** @__ctype_b_loc()
declare i32** @__ctype_toupper_loc()
declare i32** @__ctype_tolower_loc()
define dso_local void @TitleCase(i8* %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  call void @process(i8* %3, i32 1)
  ret void
}
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
