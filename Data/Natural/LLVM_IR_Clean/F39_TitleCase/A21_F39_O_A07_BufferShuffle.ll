@.str = constant [2 x i8] c" \00"
define dso_local void @TitleCase(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i8*
  %7 = alloca [128 x i8]
  %8 = alloca i32
  store i8* %0, i8** %2
  %10 = load i8*, i8** %2
  %11 = call i64 @strlen(i8* %10)
  %12 = trunc i64 %11 to i32
  store i32 %12, i32* %3
  %14 = load i32, i32* %3
  %15 = add nsw i32 %14, 1
  %16 = sext i32 %15 to i64
  %17 = call noalias i8* @malloc(i64 %16)
  store i8* %17, i8** %4
  %19 = load i32, i32* %3
  %20 = add nsw i32 %19, 1
  %21 = sext i32 %20 to i64
  %22 = call noalias i8* @malloc(i64 %21)
  store i8* %22, i8** %5
  %23 = load i8*, i8** %5
  %24 = getelementptr inbounds i8, i8* %23, i64 0
  store i8 0, i8* %24
  %25 = load i8*, i8** %4
  %26 = load i8*, i8** %2
  %27 = call i8* @strcpy(i8* %25, i8* %26)
  %29 = load i8*, i8** %4
  %30 = call i8* @strtok(i8* %29, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  store i8* %30, i8** %6
  br label %31
31:
  %32 = load i8*, i8** %6
  %33 = icmp ne i8* %32, null
  br i1 %33, label %34, label %80
34:
  %36 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 0
  %37 = load i8*, i8** %6
  %38 = call i8* @strcpy(i8* %36, i8* %37)
  %39 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 0
  %40 = load i8, i8* %39
  %41 = sext i8 %40 to i32
  %42 = call i32 @toupper(i32 %41)
  %43 = trunc i32 %42 to i8
  %44 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 0
  store i8 %43, i8* %44
  store i32 1, i32* %8
  br label %46
46:
  %47 = load i32, i32* %8
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 %48
  %50 = load i8, i8* %49
  %51 = icmp ne i8 %50, 0
  br i1 %51, label %54, label %52
52:
  br label %68
54:
  %55 = load i32, i32* %8
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 %56
  %58 = load i8, i8* %57
  %59 = sext i8 %58 to i32
  %60 = call i32 @tolower(i32 %59)
  %61 = trunc i32 %60 to i8
  %62 = load i32, i32* %8
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 %63
  store i8 %61, i8* %64
  br label %65
65:
  %66 = load i32, i32* %8
  %67 = add nsw i32 %66, 1
  store i32 %67, i32* %8
  br label %46
68:
  %69 = load i8*, i8** %5
  %70 = getelementptr inbounds [128 x i8], [128 x i8]* %7, i64 0, i64 0
  %71 = call i8* @strcat(i8* %69, i8* %70)
  %72 = call i8* @strtok(i8* null, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  store i8* %72, i8** %6
  %73 = load i8*, i8** %6
  %74 = icmp ne i8* %73, null
  br i1 %74, label %75, label %78
75:
  %76 = load i8*, i8** %5
  %77 = call i8* @strcat(i8* %76, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  br label %78
78:
  br label %31
80:
  %81 = load i8*, i8** %2
  %82 = load i8*, i8** %5
  %83 = call i8* @strcpy(i8* %81, i8* %82)
  %84 = load i8*, i8** %4
  call void @free(i8* %84)
  %85 = load i8*, i8** %5
  call void @free(i8* %85)
  ret void
}
declare i64 @strlen(i8*)
declare noalias i8* @malloc(i64)
declare i8* @strcpy(i8*, i8*)
declare i8* @strtok(i8*, i8*)
declare i32 @toupper(i32)
declare i32 @tolower(i32)
declare i8* @strcat(i8*, i8*)
declare void @free(i8*)
