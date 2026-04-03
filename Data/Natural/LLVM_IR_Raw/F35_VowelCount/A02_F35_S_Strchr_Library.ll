@.str = constant [11 x i8] c"aeiouAEIOU\00"
@.str.1 = constant [3 x i8] c"0\0A\00"
@.str.2 = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @VowelCount(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i8*
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i8* getelementptr inbounds ([11 x i8], [11 x i8]* @.str, i64 0, i64 0), i8** %4
  br label %7
7:
  %8 = load i8*, i8** %2
  %9 = load i8, i8* %8
  %10 = icmp ne i8 %9, 0
  br i1 %10, label %11, label %24
11:
  %12 = load i8*, i8** %4
  %13 = load i8*, i8** %2
  %14 = load i8, i8* %13
  %15 = sext i8 %14 to i32
  %16 = call i8* @strchr(i8* %12, i32 %15)
  %17 = icmp ne i8* %16, null
  br i1 %17, label %18, label %21
18:
  %19 = load i32, i32* %3
  %20 = add nsw i32 %19, 1
  store i32 %20, i32* %3
  br label %21
21:
  %22 = load i8*, i8** %2
  %23 = getelementptr inbounds i8, i8* %22, i32 1
  store i8* %23, i8** %2
  br label %7
24:
  %25 = load i32, i32* %3
  ret i32 %25
}
declare i8* @strchr(i8*, i32)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %10
8:
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.1, i64 0, i64 0))
  store i32 0, i32* %3
  br label %16
10:
  %11 = load i8**, i8*** %5
  %12 = getelementptr inbounds i8*, i8** %11, i64 1
  %13 = load i8*, i8** %12
  %14 = call i32 @VowelCount(i8* %13)
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.2, i64 0, i64 0), i32 %14)
  store i32 0, i32* %3
  br label %16
16:
  %17 = load i32, i32* %3
  ret i32 %17
}
declare i32 @printf(i8*, ...)
