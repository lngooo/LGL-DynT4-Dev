define dso_local i32 @WordCount(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  store i32 0, i32* %5
  br label %9
9:
  %10 = load i32, i32* %5
  %11 = icmp ne i32 %10, -1
  br i1 %11, label %12, label %39
12:
  %13 = load i32, i32* %5
  switch i32 %13, label %38 [
    i32 0, label %14
    i32 1, label %21
  ]
14:
  %15 = load i8*, i8** %2
  %16 = load i8, i8* %15
  %17 = icmp ne i8 %16, 0
  br i1 %17, label %19, label %18
18:
  store i32 -1, i32* %5
  br label %20
19:
  store i32 1, i32* %5
  br label %20
20:
  br label %38
21:
  %22 = load i8*, i8** %2
  %23 = load i8, i8* %22
  %24 = sext i8 %23 to i32
  %25 = call i32 @isspace(i32 %24)
  %26 = icmp ne i32 %25, 0
  br i1 %26, label %27, label %28
27:
  store i32 0, i32* %4
  br label %35
28:
  %29 = load i32, i32* %4
  %30 = icmp eq i32 %29, 0
  br i1 %30, label %31, label %34
31:
  store i32 1, i32* %4
  %32 = load i32, i32* %3
  %33 = add nsw i32 %32, 1
  store i32 %33, i32* %3
  br label %34
34:
  br label %35
35:
  %36 = load i8*, i8** %2
  %37 = getelementptr inbounds i8, i8* %36, i32 1
  store i8* %37, i8** %2
  store i32 0, i32* %5
  br label %38
38:
  br label %9
39:
  %40 = load i32, i32* %3
  ret i32 %40
}
declare i32 @isspace(i32)
