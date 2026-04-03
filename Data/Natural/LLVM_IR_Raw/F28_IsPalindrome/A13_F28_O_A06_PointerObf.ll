@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @IsPalindrome(i8* %0) {
  %2 = alloca i32
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  store i8* %0, i8** %3
  %8 = load i8*, i8** %3
  store i8* %8, i8** %4
  %10 = load i8*, i8** %3
  store i8* %10, i8** %5
  br label %11
11:
  %12 = load i8*, i8** %5
  %13 = load i8, i8* %12
  %14 = icmp ne i8 %13, 0
  br i1 %14, label %15, label %18
15:
  %16 = load i8*, i8** %5
  %17 = getelementptr inbounds i8, i8* %16, i32 1
  store i8* %17, i8** %5
  br label %11
18:
  %19 = load i8*, i8** %5
  %20 = getelementptr inbounds i8, i8* %19, i64 -1
  store i8* %20, i8** %5
  br label %21
21:
  %22 = load i8*, i8** %4
  %23 = load i8*, i8** %5
  %24 = icmp ult i8* %22, %23
  br i1 %24, label %25, label %40
25:
  %26 = load i8*, i8** %4
  %27 = load i8, i8* %26
  %28 = sext i8 %27 to i32
  %29 = load i8*, i8** %5
  %30 = load i8, i8* %29
  %31 = sext i8 %30 to i32
  %32 = sub nsw i32 %28, %31
  %33 = icmp ne i32 %32, 0
  br i1 %33, label %34, label %35
34:
  store i32 0, i32* %2
  store i32 1, i32* %6
  br label %41
35:
  %36 = load i8*, i8** %4
  %37 = getelementptr inbounds i8, i8* %36, i32 1
  store i8* %37, i8** %4
  %38 = load i8*, i8** %5
  %39 = getelementptr inbounds i8, i8* %38, i32 -1
  store i8* %39, i8** %5
  br label %21
40:
  store i32 1, i32* %2
  store i32 1, i32* %6
  br label %41
41:
  %44 = load i32, i32* %2
  ret i32 %44
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i8*
  %7 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %8 = load i32, i32* %4
  %9 = icmp slt i32 %8, 2
  br i1 %9, label %10, label %11
10:
  store i32 1, i32* %3
  br label %23
11:
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 1
  %15 = load i8*, i8** %14
  store i8* %15, i8** %6
  %17 = load i8*, i8** %6
  %18 = call i32 @IsPalindrome(i8* %17)
  store i32 %18, i32* %7
  %19 = load i32, i32* %7
  %20 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %19)
  store i32 0, i32* %3
  br label %23
23:
  %24 = load i32, i32* %3
  ret i32 %24
}
declare i32 @printf(i8*, ...)
