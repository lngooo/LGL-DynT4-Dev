@puLl.FZLu = internal global i32 1
@.str = constant [3 x i8] c"%s\00"
define dso_local void @puLl(i8* %0) {
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
  br i1 %10, label %12, label %11
11:
  ret void
12:
  %13 = call i16** @__ctype_b_loc()
  %14 = load i16*, i16** %13
  %15 = load i8*, i8** %2
  %16 = load i8, i8* %15
  %17 = sext i8 %16 to i32
  %18 = sext i32 %17 to i64
  %19 = getelementptr inbounds i16, i16* %14, i64 %18
  %20 = load i16, i16* %19
  %21 = zext i16 %20 to i32
  %22 = and i32 %21, 8192
  %23 = icmp ne i32 %22, 0
  br i1 %23, label %24, label %25
24:
  store i32 1, i32* @puLl.FZLu
  br label %58
25:
  %26 = load i32, i32* @puLl.FZLu
  %27 = icmp ne i32 %26, 0
  br i1 %27, label %28, label %41
28:
  %30 = call i32** @__ctype_toupper_loc()
  %31 = load i32*, i32** %30
  %32 = load i8*, i8** %2
  %33 = load i8, i8* %32
  %34 = sext i8 %33 to i32
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i32, i32* %31, i64 %35
  %37 = load i32, i32* %36
  store i32 %37, i32* %3
  %38 = load i32, i32* %3
  store i32 %38, i32* %4
  %40 = load i32, i32* %4
  br label %54
41:
  %43 = call i32** @__ctype_tolower_loc()
  %44 = load i32*, i32** %43
  %45 = load i8*, i8** %2
  %46 = load i8, i8* %45
  %47 = sext i8 %46 to i32
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i32, i32* %44, i64 %48
  %50 = load i32, i32* %49
  store i32 %50, i32* %5
  %51 = load i32, i32* %5
  store i32 %51, i32* %6
  %53 = load i32, i32* %6
  br label %54
54:
  %55 = phi i32 [ %40, %28 ], [ %53, %41 ]
  %56 = trunc i32 %55 to i8
  %57 = load i8*, i8** %2
  store i8 %56, i8* %57
  store i32 0, i32* @puLl.FZLu
  br label %58
58:
  %59 = load i8*, i8** %2
  %60 = getelementptr inbounds i8, i8* %59, i32 1
  store i8* %60, i8** %2
  br label %7
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
  call void @puLl(i8* %12)
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
