define dso_local void @CaseToggle(i8* %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  br label %3
3:
  %4 = load i8*, i8** %2
  %5 = load i8, i8* %4
  %6 = icmp ne i8 %5, 0
  br i1 %6, label %7, label %38
7:
  %8 = load i8*, i8** %2
  %9 = load i8, i8* %8
  %10 = sext i8 %9 to i32
  %11 = call i32 @isupper(i32 %10)
  %12 = icmp ne i32 %11, 0
  br i1 %12, label %13, label %20
13:
  %14 = load i8*, i8** %2
  %15 = load i8, i8* %14
  %16 = sext i8 %15 to i32
  %17 = call i32 @tolower(i32 %16)
  %18 = trunc i32 %17 to i8
  %19 = load i8*, i8** %2
  store i8 %18, i8* %19
  br label %34
20:
  %21 = load i8*, i8** %2
  %22 = load i8, i8* %21
  %23 = sext i8 %22 to i32
  %24 = call i32 @islower(i32 %23)
  %25 = icmp ne i32 %24, 0
  br i1 %25, label %26, label %33
26:
  %27 = load i8*, i8** %2
  %28 = load i8, i8* %27
  %29 = sext i8 %28 to i32
  %30 = call i32 @toupper(i32 %29)
  %31 = trunc i32 %30 to i8
  %32 = load i8*, i8** %2
  store i8 %31, i8* %32
  br label %33
33:
  br label %34
34:
  br label %35
35:
  %36 = load i8*, i8** %2
  %37 = getelementptr inbounds i8, i8* %36, i32 1
  store i8* %37, i8** %2
  br label %3
38:
  ret void
}
declare i32 @isupper(i32)
declare i32 @tolower(i32)
declare i32 @islower(i32)
declare i32 @toupper(i32)
