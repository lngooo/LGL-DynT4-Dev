@.str = constant [6 x i8] c"%s %s\00"
define dso_local void @aKU(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i8*
  store i8* %0, i8** %2
  %9 = load i8*, i8** %2
  %10 = call i8* @strrchr(i8* %9, i32 32)
  store i8* %10, i8** %3
  %11 = load i8*, i8** %3
  %12 = icmp ne i8* %11, null
  br i1 %12, label %14, label %13
13:
  store i32 1, i32* %4
  br label %48
14:
  %16 = load i8*, i8** %3
  %17 = getelementptr inbounds i8, i8* %16, i64 1
  %18 = call i64 @strlen(i8* %17)
  %19 = trunc i64 %18 to i32
  store i32 %19, i32* %5
  %21 = load i32, i32* %5
  %22 = add nsw i32 %21, 1
  %23 = sext i32 %22 to i64
  %24 = call noalias i8* @malloc(i64 %23)
  store i8* %24, i8** %6
  %25 = load i8*, i8** %6
  %26 = load i8*, i8** %3
  %27 = getelementptr inbounds i8, i8* %26, i64 1
  %28 = call i8* @strcpy(i8* %25, i8* %27)
  %29 = load i8*, i8** %3
  store i8 0, i8* %29
  %30 = load i8*, i8** %2
  call void @aKU(i8* %30)
  %32 = load i8*, i8** %2
  %33 = call i64 @strlen(i8* %32)
  %34 = add i64 %33, 1
  %35 = call noalias i8* @malloc(i64 %34)
  store i8* %35, i8** %7
  %36 = load i8*, i8** %7
  %37 = load i8*, i8** %2
  %38 = call i8* @strcpy(i8* %36, i8* %37)
  %39 = load i8*, i8** %2
  %40 = load i8*, i8** %6
  %41 = load i8*, i8** %7
  %42 = call i32 (i8*, i8*, ...) @sprintf(i8* %39, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @.str, i64 0, i64 0), i8* %40, i8* %41)
  %43 = load i8*, i8** %6
  call void @free(i8* %43)
  %44 = load i8*, i8** %7
  call void @free(i8* %44)
  store i32 0, i32* %4
  br label %48
48:
  %50 = load i32, i32* %4
  switch i32 %50, label %52 [
    i32 0, label %51
    i32 1, label %51
  ]
51:
  ret void
52:
  unreachable
}
declare i8* @strrchr(i8*, i32)
declare i64 @strlen(i8*)
declare noalias i8* @malloc(i64)
declare i8* @strcpy(i8*, i8*)
declare i32 @sprintf(i8*, i8*, ...)
declare void @free(i8*)
