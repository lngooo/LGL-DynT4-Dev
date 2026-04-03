@.str = constant [5 x i8] c"%c%d\00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @r(i8* %0) {
  %2 = alloca i8*
  %3 = alloca [2 x i8]
  %4 = alloca i32
  store i8* %0, i8** %2
  br label %5
5:
  %6 = load i8*, i8** %2
  %7 = load i8, i8* %6
  %8 = icmp ne i8 %7, 0
  br i1 %8, label %9, label %31
9:
  %11 = getelementptr inbounds [2 x i8], [2 x i8]* %3, i64 0, i64 0
  %12 = load i8*, i8** %2
  %13 = load i8, i8* %12
  store i8 %13, i8* %11
  %14 = getelementptr inbounds i8, i8* %11, i64 1
  store i8 0, i8* %14
  %16 = load i8*, i8** %2
  %17 = getelementptr inbounds [2 x i8], [2 x i8]* %3, i64 0, i64 0
  %18 = call i64 @strspn(i8* %16, i8* %17)
  %19 = trunc i64 %18 to i32
  store i32 %19, i32* %4
  %20 = load i8*, i8** %2
  %21 = load i8, i8* %20
  %22 = sext i8 %21 to i32
  %23 = load i32, i32* %4
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %22, i32 %23)
  %25 = load i32, i32* %4
  %26 = load i8*, i8** %2
  %27 = sext i32 %25 to i64
  %28 = getelementptr inbounds i8, i8* %26, i64 %27
  store i8* %28, i8** %2
  br label %5
31:
  %32 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0))
  ret void
}
declare i64 @strspn(i8*, i8*)
declare i32 @printf(i8*, ...)
