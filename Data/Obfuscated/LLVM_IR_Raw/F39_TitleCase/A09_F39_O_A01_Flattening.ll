@.str = constant [3 x i8] c"%s\00"
define dso_local void @vt(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i8* %0, i8** %2
  store i32 1, i32* %3
  store i32 0, i32* %4
  store i32 1, i32* %5
  br label %13
13:
  %14 = load i32, i32* %3
  %15 = icmp ne i32 %14, 0
  br i1 %15, label %16, label %97
16:
  %17 = load i32, i32* %3
  switch i32 %17, label %96 [
    i32 1, label %18
    i32 2, label %29
    i32 3, label %47
    i32 5, label %93
  ]
18:
  %19 = load i8*, i8** %2
  %20 = load i32, i32* %4
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i8, i8* %19, i64 %21
  %23 = load i8, i8* %22
  %24 = sext i8 %23 to i32
  %25 = icmp eq i32 %24, 0
  br i1 %25, label %26, label %27
26:
  store i32 0, i32* %3
  br label %28
27:
  store i32 2, i32* %3
  br label %28
28:
  br label %96
29:
  %30 = call i16** @__ctype_b_loc()
  %31 = load i16*, i16** %30
  %32 = load i8*, i8** %2
  %33 = load i32, i32* %4
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i8, i8* %32, i64 %34
  %36 = load i8, i8* %35
  %37 = sext i8 %36 to i32
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i16, i16* %31, i64 %38
  %40 = load i16, i16* %39
  %41 = zext i16 %40 to i32
  %42 = and i32 %41, 8192
  %43 = icmp ne i32 %42, 0
  br i1 %43, label %44, label %45
44:
  store i32 1, i32* %5
  store i32 5, i32* %3
  br label %46
45:
  store i32 3, i32* %3
  br label %46
46:
  br label %96
47:
  %48 = load i32, i32* %5
  %49 = icmp ne i32 %48, 0
  br i1 %49, label %50, label %71
50:
  %52 = call i32** @__ctype_toupper_loc()
  %53 = load i32*, i32** %52
  %54 = load i8*, i8** %2
  %55 = load i32, i32* %4
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i8, i8* %54, i64 %56
  %58 = load i8, i8* %57
  %59 = sext i8 %58 to i32
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %53, i64 %60
  %62 = load i32, i32* %61
  store i32 %62, i32* %6
  %63 = load i32, i32* %6
  store i32 %63, i32* %7
  %65 = load i32, i32* %7
  %66 = trunc i32 %65 to i8
  %67 = load i8*, i8** %2
  %68 = load i32, i32* %4
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i8, i8* %67, i64 %69
  store i8 %66, i8* %70
  store i32 0, i32* %5
  br label %92
71:
  %73 = call i32** @__ctype_tolower_loc()
  %74 = load i32*, i32** %73
  %75 = load i8*, i8** %2
  %76 = load i32, i32* %4
  %77 = sext i32 %76 to i64
  %78 = getelementptr inbounds i8, i8* %75, i64 %77
  %79 = load i8, i8* %78
  %80 = sext i8 %79 to i32
  %81 = sext i32 %80 to i64
  %82 = getelementptr inbounds i32, i32* %74, i64 %81
  %83 = load i32, i32* %82
  store i32 %83, i32* %8
  %84 = load i32, i32* %8
  store i32 %84, i32* %9
  %86 = load i32, i32* %9
  %87 = trunc i32 %86 to i8
  %88 = load i8*, i8** %2
  %89 = load i32, i32* %4
  %90 = sext i32 %89 to i64
  %91 = getelementptr inbounds i8, i8* %88, i64 %90
  store i8 %87, i8* %91
  br label %92
92:
  store i32 5, i32* %3
  br label %96
93:
  %94 = load i32, i32* %4
  %95 = add nsw i32 %94, 1
  store i32 %95, i32* %4
  store i32 1, i32* %3
  br label %96
96:
  br label %13
97:
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
  call void @vt(i8* %12)
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
