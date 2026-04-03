define dso_local void @TrimSpace(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i8*, i8** %2
  %9 = load i32, i32* %3
  %10 = sext i32 %9 to i64
  %11 = getelementptr inbounds i8, i8* %8, i64 %10
  %12 = load i8, i8* %11
  %13 = icmp ne i8 %12, 0
  br i1 %13, label %14, label %37
14:
  %15 = load i8*, i8** %2
  %16 = load i32, i32* %3
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds i8, i8* %15, i64 %17
  %19 = load i8, i8* %18
  %20 = zext i8 %19 to i32
  %21 = call i32 @isspace(i32 %20)
  %22 = icmp ne i32 %21, 0
  br i1 %22, label %34, label %23
23:
  %24 = load i8*, i8** %2
  %25 = load i32, i32* %3
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i8, i8* %24, i64 %26
  %28 = load i8, i8* %27
  %29 = load i8*, i8** %2
  %30 = load i32, i32* %4
  %31 = add nsw i32 %30, 1
  store i32 %31, i32* %4
  %32 = sext i32 %30 to i64
  %33 = getelementptr inbounds i8, i8* %29, i64 %32
  store i8 %28, i8* %33
  br label %34
34:
  %35 = load i32, i32* %3
  %36 = add nsw i32 %35, 1
  store i32 %36, i32* %3
  br label %7
37:
  %38 = load i8*, i8** %2
  %39 = load i32, i32* %4
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8, i8* %38, i64 %40
  store i8 0, i8* %41
  ret void
}
declare i32 @isspace(i32)
