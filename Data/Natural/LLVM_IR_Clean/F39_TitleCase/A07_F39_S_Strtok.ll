@.str = constant [2 x i8] c" \00"
define dso_local void @TitleCase(i8* %0) {
  %2 = alloca i8*
  %3 = alloca [1024 x i8]
  %4 = alloca i8*
  %5 = alloca i32
  store i8* %0, i8** %2
  %7 = getelementptr inbounds [1024 x i8], [1024 x i8]* %3, i64 0, i64 0
  %8 = load i8*, i8** %2
  %9 = call i8* @strcpy(i8* %7, i8* %8)
  %11 = getelementptr inbounds [1024 x i8], [1024 x i8]* %3, i64 0, i64 0
  %12 = call i8* @strtok(i8* %11, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  store i8* %12, i8** %4
  %13 = load i8*, i8** %2
  %14 = getelementptr inbounds i8, i8* %13, i64 0
  store i8 0, i8* %14
  br label %15
15:
  %16 = load i8*, i8** %4
  %17 = icmp ne i8* %16, null
  br i1 %17, label %18, label %64
18:
  %19 = load i8*, i8** %4
  %20 = getelementptr inbounds i8, i8* %19, i64 0
  %21 = load i8, i8* %20
  %22 = sext i8 %21 to i32
  %23 = call i32 @toupper(i32 %22)
  %24 = trunc i32 %23 to i8
  %25 = load i8*, i8** %4
  %26 = getelementptr inbounds i8, i8* %25, i64 0
  store i8 %24, i8* %26
  store i32 1, i32* %5
  br label %28
28:
  %29 = load i8*, i8** %4
  %30 = load i32, i32* %5
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i8, i8* %29, i64 %31
  %33 = load i8, i8* %32
  %34 = icmp ne i8 %33, 0
  br i1 %34, label %37, label %35
35:
  br label %53
37:
  %38 = load i8*, i8** %4
  %39 = load i32, i32* %5
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8, i8* %38, i64 %40
  %42 = load i8, i8* %41
  %43 = sext i8 %42 to i32
  %44 = call i32 @tolower(i32 %43)
  %45 = trunc i32 %44 to i8
  %46 = load i8*, i8** %4
  %47 = load i32, i32* %5
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i8, i8* %46, i64 %48
  store i8 %45, i8* %49
  br label %50
50:
  %51 = load i32, i32* %5
  %52 = add nsw i32 %51, 1
  store i32 %52, i32* %5
  br label %28
53:
  %54 = load i8*, i8** %2
  %55 = load i8*, i8** %4
  %56 = call i8* @strcat(i8* %54, i8* %55)
  %57 = call i8* @strtok(i8* null, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  store i8* %57, i8** %4
  %58 = load i8*, i8** %4
  %59 = icmp ne i8* %58, null
  br i1 %59, label %60, label %63
60:
  %61 = load i8*, i8** %2
  %62 = call i8* @strcat(i8* %61, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  br label %63
63:
  br label %15
64:
  ret void
}
declare i8* @strcpy(i8*, i8*)
declare i8* @strtok(i8*, i8*)
declare i32 @toupper(i32)
declare i32 @tolower(i32)
declare i8* @strcat(i8*, i8*)
