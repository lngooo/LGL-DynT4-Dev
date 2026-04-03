define dso_local i32 @M(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i8*, i8** %2
  %9 = load i8, i8* %8
  %10 = icmp ne i8 %9, 0
  br i1 %10, label %11, label %28
11:
  %12 = load i8*, i8** %2
  %13 = load i8, i8* %12
  %14 = sext i8 %13 to i32
  %15 = call i32 @isspace(i32 %14)
  %16 = icmp ne i32 %15, 0
  br i1 %16, label %17, label %18
17:
  store i32 0, i32* %4
  br label %25
18:
  %19 = load i32, i32* %4
  %20 = icmp eq i32 %19, 0
  br i1 %20, label %21, label %24
21:
  store i32 1, i32* %4
  %22 = load i32, i32* %3
  %23 = add nsw i32 %22, 1
  store i32 %23, i32* %3
  br label %24
24:
  br label %25
25:
  %26 = load i8*, i8** %2
  %27 = getelementptr inbounds i8, i8* %26, i32 1
  store i8* %27, i8** %2
  br label %7
28:
  %29 = load i32, i32* %3
  ret i32 %29
}
declare i32 @isspace(i32)
