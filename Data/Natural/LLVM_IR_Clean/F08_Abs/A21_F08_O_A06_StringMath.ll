@.str = constant [3 x i8] c"%d\00"
define dso_local i32 @Abs(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca [32 x i8]
  %5 = alloca i32
  store i32 %0, i32* %3
  %7 = getelementptr inbounds [32 x i8], [32 x i8]* %4, i64 0, i64 0
  %8 = load i32, i32* %3
  %9 = call i32 (i8*, i8*, ...) @sprintf(i8* %7, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %8)
  %10 = getelementptr inbounds [32 x i8], [32 x i8]* %4, i64 0, i64 0
  %11 = load i8, i8* %10
  %12 = sext i8 %11 to i32
  %13 = icmp eq i32 %12, 45
  br i1 %13, label %14, label %18
14:
  %15 = getelementptr inbounds [32 x i8], [32 x i8]* %4, i64 0, i64 0
  %16 = getelementptr inbounds i8, i8* %15, i64 1
  %17 = call i32 @atoi(i8* %16)
  store i32 %17, i32* %2
  store i32 1, i32* %5
  br label %20
18:
  %19 = load i32, i32* %3
  store i32 %19, i32* %2
  store i32 1, i32* %5
  br label %20
20:
  %22 = load i32, i32* %2
  ret i32 %22
}
declare i32 @sprintf(i8*, i8*, ...)
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i64 @strtol(i8*, i8**, i32)
