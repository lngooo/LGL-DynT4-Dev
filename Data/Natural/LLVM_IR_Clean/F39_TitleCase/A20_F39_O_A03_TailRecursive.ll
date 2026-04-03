@TitleCase.isFirst = internal global i32 1
define dso_local void @TitleCase(i8* %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  br label %3
3:
  %4 = load i8*, i8** %2
  %5 = load i8, i8* %4
  %6 = icmp ne i8 %5, 0
  br i1 %6, label %8, label %7
7:
  ret void
8:
  %9 = load i8*, i8** %2
  %10 = load i8, i8* %9
  %11 = sext i8 %10 to i32
  %12 = call i32 @isspace(i32 %11)
  %13 = icmp ne i32 %12, 0
  br i1 %13, label %14, label %15
14:
  store i32 1, i32* @TitleCase.isFirst
  br label %32
15:
  %16 = load i32, i32* @TitleCase.isFirst
  %17 = icmp ne i32 %16, 0
  br i1 %17, label %18, label %23
18:
  %19 = load i8*, i8** %2
  %20 = load i8, i8* %19
  %21 = sext i8 %20 to i32
  %22 = call i32 @toupper(i32 %21)
  br label %28
23:
  %24 = load i8*, i8** %2
  %25 = load i8, i8* %24
  %26 = sext i8 %25 to i32
  %27 = call i32 @tolower(i32 %26)
  br label %28
28:
  %29 = phi i32 [ %22, %18 ], [ %27, %23 ]
  %30 = trunc i32 %29 to i8
  %31 = load i8*, i8** %2
  store i8 %30, i8* %31
  store i32 0, i32* @TitleCase.isFirst
  br label %32
32:
  %33 = load i8*, i8** %2
  %34 = getelementptr inbounds i8, i8* %33, i32 1
  store i8* %34, i8** %2
  br label %3
}
declare i32 @isspace(i32)
declare i32 @toupper(i32)
declare i32 @tolower(i32)
