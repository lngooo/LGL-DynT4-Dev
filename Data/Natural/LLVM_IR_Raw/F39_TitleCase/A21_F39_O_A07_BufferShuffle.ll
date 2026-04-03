@.str = constant [2 x i8] c" \00"
@.str.1 = constant [3 x i8] c"%s\00"
define dso_local void @TitleCase(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i8*
  %7 = alloca [128 x i8]
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i8* %0, i8** %2
  %14 = load i8*, i8** %2
  %15 = call i64 @strlen(i8* %14)
  %16 = trunc i64 %15 to i32
  store i32 %16, i32* %3
  %18 = load i32, i32* %3
  %19 = add nsw i32 %18, 1
  %20 = sext i32 %19 to i64
  %21 = call noalias i8* @malloc(i64 %20)
  store i8* %21, i8** %4
  %23 = load i32, i32* %3
  %24 = add nsw i32 %23, 1
  %25 = sext i32 %24 to i64
  %26 = call noalias i8* @malloc(i64 %25)
  store i8* %26, i8** %5
  %27 = load i8*, i8** %5
  %28 = getelementptr inbounds i8, i8* %27, i64 0
  store i8 0, i8* %28
  %29 = load i8*, i8** %4
  %30 = load i8*, i8** %2
  %31 = call i8* @strcpy(i8* %29, i8* %30)
  %33 = load i8*, i8** %4
  %34 = call i8* @strtok(i8* %33, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  store i8* %34, i8** %6
  br label %35
35:
  %36 = load i8*, i8** %6
  %37 = icmp ne i8* %36, null
  br i1 %37, label %38, label %100
38:
  %40 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 0
  %41 = load i8*, i8** %6
  %42 = call i8* @strcpy(i8* %40, i8* %41)
  %44 = call i32** @__ctype_toupper_loc()
  %45 = load i32*, i32** %44
  %46 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 0
  %47 = load i8, i8* %46
  %48 = sext i8 %47 to i32
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds i32, i32* %45, i64 %49
  %51 = load i32, i32* %50
  store i32 %51, i32* %8
  %52 = load i32, i32* %8
  store i32 %52, i32* %9
  %54 = load i32, i32* %9
  %55 = trunc i32 %54 to i8
  %56 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 0
  store i8 %55, i8* %56
  store i32 1, i32* %10
  br label %58
58:
  %59 = load i32, i32* %10
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 %60
  %62 = load i8, i8* %61
  %63 = icmp ne i8 %62, 0
  br i1 %63, label %66, label %64
64:
  br label %88
66:
  %68 = call i32** @__ctype_tolower_loc()
  %69 = load i32*, i32** %68
  %70 = load i32, i32* %10
  %71 = sext i32 %70 to i64
  %72 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 %71
  %73 = load i8, i8* %72
  %74 = sext i8 %73 to i32
  %75 = sext i32 %74 to i64
  %76 = getelementptr inbounds i32, i32* %69, i64 %75
  %77 = load i32, i32* %76
  store i32 %77, i32* %11
  %78 = load i32, i32* %11
  store i32 %78, i32* %12
  %80 = load i32, i32* %12
  %81 = trunc i32 %80 to i8
  %82 = load i32, i32* %10
  %83 = sext i32 %82 to i64
  %84 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 %83
  store i8 %81, i8* %84
  br label %85
85:
  %86 = load i32, i32* %10
  %87 = add nsw i32 %86, 1
  store i32 %87, i32* %10
  br label %58
88:
  %89 = load i8*, i8** %5
  %90 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 0
  %91 = call i8* @strcat(i8* %89, i8* %90)
  %92 = call i8* @strtok(i8* null, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  store i8* %92, i8** %6
  %93 = load i8*, i8** %6
  %94 = icmp ne i8* %93, null
  br i1 %94, label %95, label %98
95:
  %96 = load i8*, i8** %5
  %97 = call i8* @strcat(i8* %96, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  br label %98
98:
  br label %35
100:
  %101 = load i8*, i8** %2
  %102 = load i8*, i8** %5
  %103 = call i8* @strcpy(i8* %101, i8* %102)
  %104 = load i8*, i8** %4
  call void @free(i8* %104)
  %105 = load i8*, i8** %5
  call void @free(i8* %105)
  ret void
}
declare i64 @strlen(i8*)
declare noalias i8* @malloc(i64)
declare i8* @strcpy(i8*, i8*)
declare i8* @strtok(i8*, i8*)
declare i32** @__ctype_toupper_loc()
declare i32** @__ctype_tolower_loc()
declare i8* @strcat(i8*, i8*)
declare void @free(i8*)
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
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.1, i64 0, i64 0), i8* %15)
  store i32 0, i32* %3
  br label %17
17:
  %18 = load i32, i32* %3
  ret i32 %18
}
declare i32 @printf(i8*, ...)
