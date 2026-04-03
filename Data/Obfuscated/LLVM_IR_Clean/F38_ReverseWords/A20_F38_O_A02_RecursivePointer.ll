@.str = constant [6 x i8] c"%s %s\00"
define dso_local void @UOL(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i8*
  %4 = alloca [256 x i8]
  %5 = alloca i32
  %6 = alloca [256 x i8]
  store i8* %0, i8** %2
  %8 = load i8*, i8** %2
  %9 = call i8* @strchr(i8* %8, i32 32)
  store i8* %9, i8** %3
  %10 = load i8*, i8** %3
  %11 = icmp ne i8* %10, null
  br i1 %11, label %12, label %42
12:
  %14 = getelementptr inbounds [256 x i8], [256 x i8]* %4, i64 0, i64 0
  %15 = load i8*, i8** %3
  %16 = getelementptr inbounds i8, i8* %15, i64 1
  %17 = call i8* @strcpy(i8* %14, i8* %16)
  %18 = getelementptr inbounds [256 x i8], [256 x i8]* %4, i64 0, i64 0
  call void @UOL(i8* %18)
  %20 = load i8*, i8** %3
  %21 = load i8*, i8** %2
  %22 = ptrtoint i8* %20 to i64
  %23 = ptrtoint i8* %21 to i64
  %24 = sub i64 %22, %23
  %25 = trunc i64 %24 to i32
  store i32 %25, i32* %5
  %27 = getelementptr inbounds [256 x i8], [256 x i8]* %6, i64 0, i64 0
  %28 = load i8*, i8** %2
  %29 = load i32, i32* %5
  %30 = sext i32 %29 to i64
  %31 = call i8* @strncpy(i8* %27, i8* %28, i64 %30)
  %32 = load i32, i32* %5
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds [256 x i8], [256 x i8]* %6, i64 0, i64 %33
  store i8 0, i8* %34
  %35 = load i8*, i8** %2
  %36 = getelementptr inbounds [256 x i8], [256 x i8]* %4, i64 0, i64 0
  %37 = getelementptr inbounds [256 x i8], [256 x i8]* %6, i64 0, i64 0
  %38 = call i32 (i8*, i8*, ...) @sprintf(i8* %35, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @.str, i64 0, i64 0), i8* %36, i8* %37)
  br label %42
42:
  ret void
}
declare i8* @strchr(i8*, i32)
declare i8* @strcpy(i8*, i8*)
declare i8* @strncpy(i8*, i8*, i64)
declare i32 @sprintf(i8*, i8*, ...)
