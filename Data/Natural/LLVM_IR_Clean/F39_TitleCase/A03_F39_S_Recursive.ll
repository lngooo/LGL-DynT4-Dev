define dso_local void @process(i8* %0, i32 %1) {
  %3 = alloca i8*
  %4 = alloca i32
  store i8* %0, i8** %3
  store i32 %1, i32* %4
  %5 = load i8*, i8** %3
  %6 = load i8, i8* %5
  %7 = icmp ne i8 %6, 0
  br i1 %7, label %9, label %8
8:
  br label %37
9:
  %10 = load i8*, i8** %3
  %11 = load i8, i8* %10
  %12 = sext i8 %11 to i32
  %13 = call i32 @isspace(i32 %12)
  %14 = icmp ne i32 %13, 0
  br i1 %14, label %15, label %18
15:
  %16 = load i8*, i8** %3
  %17 = getelementptr inbounds i8, i8* %16, i64 1
  call void @process(i8* %17, i32 1)
  br label %37
18:
  %19 = load i32, i32* %4
  %20 = icmp ne i32 %19, 0
  br i1 %20, label %21, label %26
21:
  %22 = load i8*, i8** %3
  %23 = load i8, i8* %22
  %24 = sext i8 %23 to i32
  %25 = call i32 @toupper(i32 %24)
  br label %31
26:
  %27 = load i8*, i8** %3
  %28 = load i8, i8* %27
  %29 = sext i8 %28 to i32
  %30 = call i32 @tolower(i32 %29)
  br label %31
31:
  %32 = phi i32 [ %25, %21 ], [ %30, %26 ]
  %33 = trunc i32 %32 to i8
  %34 = load i8*, i8** %3
  store i8 %33, i8* %34
  %35 = load i8*, i8** %3
  %36 = getelementptr inbounds i8, i8* %35, i64 1
  call void @process(i8* %36, i32 0)
  br label %37
37:
  ret void
}
declare i32 @isspace(i32)
declare i32 @toupper(i32)
declare i32 @tolower(i32)
define dso_local void @TitleCase(i8* %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  call void @process(i8* %3, i32 1)
  ret void
}
