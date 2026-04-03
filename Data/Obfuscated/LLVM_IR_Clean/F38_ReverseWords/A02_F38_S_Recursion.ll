@.str = constant [6 x i8] c"%s %s\00"
define dso_local void @kD(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca [256 x i8]
  %6 = alloca i32
  %7 = alloca [256 x i8]
  store i8* %0, i8** %2
  %9 = load i8*, i8** %2
  %10 = call i8* @strchr(i8* %9, i32 32)
  store i8* %10, i8** %3
  %11 = load i8*, i8** %3
  %12 = icmp ne i8* %11, null
  br i1 %12, label %14, label %13
13:
  store i32 1, i32* %4
  br label %43
14:
  %16 = getelementptr inbounds [256 x i8], [256 x i8]* %5, i64 0, i64 0
  %17 = load i8*, i8** %3
  %18 = getelementptr inbounds i8, i8* %17, i64 1
  %19 = call i8* @strcpy(i8* %16, i8* %18)
  %20 = getelementptr inbounds [256 x i8], [256 x i8]* %5, i64 0, i64 0
  call void @kD(i8* %20)
  %22 = load i8*, i8** %3
  %23 = load i8*, i8** %2
  %24 = ptrtoint i8* %22 to i64
  %25 = ptrtoint i8* %23 to i64
  %26 = sub i64 %24, %25
  %27 = trunc i64 %26 to i32
  store i32 %27, i32* %6
  %28 = load i8*, i8** %2
  %29 = load i32, i32* %6
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i8, i8* %28, i64 %30
  store i8 0, i8* %31
  %33 = getelementptr inbounds [256 x i8], [256 x i8]* %7, i64 0, i64 0
  %34 = load i8*, i8** %2
  %35 = call i8* @strcpy(i8* %33, i8* %34)
  %36 = load i8*, i8** %2
  %37 = getelementptr inbounds [256 x i8], [256 x i8]* %5, i64 0, i64 0
  %38 = getelementptr inbounds [256 x i8], [256 x i8]* %7, i64 0, i64 0
  %39 = call i32 (i8*, i8*, ...) @sprintf(i8* %36, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @.str, i64 0, i64 0), i8* %37, i8* %38)
  store i32 0, i32* %4
  br label %43
43:
  %45 = load i32, i32* %4
  switch i32 %45, label %47 [
    i32 0, label %46
    i32 1, label %46
  ]
46:
  ret void
47:
  unreachable
}
declare i8* @strchr(i8*, i32)
declare i8* @strcpy(i8*, i8*)
declare i32 @sprintf(i8*, i8*, ...)
