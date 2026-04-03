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
