@.str = constant [2 x i8] c" \00"
@.str.1 = constant [3 x i8] c"%s\00"
define dso_local void @TitleCase(i8* %0) {
  %2 = alloca i8*
  %3 = alloca [1024 x i8]
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i8* %0, i8** %2
  %11 = getelementptr inbounds [1024 x i8], [1024 x i8]* %3, i64 0, i64 0
  %12 = load i8*, i8** %2
  %13 = call i8* @strcpy(i8* %11, i8* %12)
  %15 = getelementptr inbounds [1024 x i8], [1024 x i8]* %3, i64 0, i64 0
  %16 = call i8* @strtok(i8* %15, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  store i8* %16, i8** %4
  %17 = load i8*, i8** %2
  %18 = getelementptr inbounds i8, i8* %17, i64 0
  store i8 0, i8* %18
  br label %19
19:
  %20 = load i8*, i8** %4
  %21 = icmp ne i8* %20, null
  br i1 %21, label %22, label %84
22:
  %24 = call i32** @__ctype_toupper_loc()
  %25 = load i32*, i32** %24
  %26 = load i8*, i8** %4
  %27 = getelementptr inbounds i8, i8* %26, i64 0
  %28 = load i8, i8* %27
  %29 = sext i8 %28 to i32
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %25, i64 %30
  %32 = load i32, i32* %31
  store i32 %32, i32* %5
  %33 = load i32, i32* %5
  store i32 %33, i32* %6
  %35 = load i32, i32* %6
  %36 = trunc i32 %35 to i8
  %37 = load i8*, i8** %4
  %38 = getelementptr inbounds i8, i8* %37, i64 0
  store i8 %36, i8* %38
  store i32 1, i32* %7
  br label %40
40:
  %41 = load i8*, i8** %4
  %42 = load i32, i32* %7
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i8, i8* %41, i64 %43
  %45 = load i8, i8* %44
  %46 = icmp ne i8 %45, 0
  br i1 %46, label %49, label %47
47:
  br label %73
49:
  %51 = call i32** @__ctype_tolower_loc()
  %52 = load i32*, i32** %51
  %53 = load i8*, i8** %4
  %54 = load i32, i32* %7
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i8, i8* %53, i64 %55
  %57 = load i8, i8* %56
  %58 = sext i8 %57 to i32
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i32, i32* %52, i64 %59
  %61 = load i32, i32* %60
  store i32 %61, i32* %8
  %62 = load i32, i32* %8
  store i32 %62, i32* %9
  %64 = load i32, i32* %9
  %65 = trunc i32 %64 to i8
  %66 = load i8*, i8** %4
  %67 = load i32, i32* %7
  %68 = sext i32 %67 to i64
  %69 = getelementptr inbounds i8, i8* %66, i64 %68
  store i8 %65, i8* %69
  br label %70
70:
  %71 = load i32, i32* %7
  %72 = add nsw i32 %71, 1
  store i32 %72, i32* %7
  br label %40
73:
  %74 = load i8*, i8** %2
  %75 = load i8*, i8** %4
  %76 = call i8* @strcat(i8* %74, i8* %75)
  %77 = call i8* @strtok(i8* null, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  store i8* %77, i8** %4
  %78 = load i8*, i8** %4
  %79 = icmp ne i8* %78, null
  br i1 %79, label %80, label %83
80:
  %81 = load i8*, i8** %2
  %82 = call i8* @strcat(i8* %81, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  br label %83
83:
  br label %19
84:
  ret void
}
declare i8* @strcpy(i8*, i8*)
declare i8* @strtok(i8*, i8*)
declare i32** @__ctype_toupper_loc()
declare i32** @__ctype_tolower_loc()
declare i8* @strcat(i8*, i8*)
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
