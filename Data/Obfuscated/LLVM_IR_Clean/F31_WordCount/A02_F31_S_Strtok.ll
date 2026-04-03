@.str = constant [5 x i8] c" \09\0A\0D\00"
define dso_local i32 @FO(i8* %0) {
  %2 = alloca i32
  %3 = alloca i8*
  %4 = alloca [1024 x i8]
  %5 = alloca i32
  %6 = alloca i8*
  store i8* %0, i8** %3
  %7 = load i8*, i8** %3
  %8 = icmp ne i8* %7, null
  br i1 %8, label %9, label %14
9:
  %10 = load i8*, i8** %3
  %11 = load i8, i8* %10
  %12 = sext i8 %11 to i32
  %13 = icmp eq i32 %12, 0
  br i1 %13, label %14, label %15
14:
  store i32 0, i32* %2
  br label %36
15:
  %17 = getelementptr inbounds [1024 x i8], [1024 x i8]* %4, i64 0, i64 0
  %18 = load i8*, i8** %3
  %19 = call i8* @strncpy(i8* %17, i8* %18, i64 1023)
  store i32 0, i32* %5
  %22 = getelementptr inbounds [1024 x i8], [1024 x i8]* %4, i64 0, i64 0
  %23 = call i8* @strtok(i8* %22, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0))
  store i8* %23, i8** %6
  br label %24
24:
  %25 = load i8*, i8** %6
  %26 = icmp ne i8* %25, null
  br i1 %26, label %27, label %31
27:
  %28 = load i32, i32* %5
  %29 = add nsw i32 %28, 1
  store i32 %29, i32* %5
  %30 = call i8* @strtok(i8* null, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0))
  store i8* %30, i8** %6
  br label %24
31:
  %32 = load i32, i32* %5
  store i32 %32, i32* %2
  br label %36
36:
  %37 = load i32, i32* %2
  ret i32 %37
}
declare i8* @strncpy(i8*, i8*, i64)
declare i8* @strtok(i8*, i8*)
