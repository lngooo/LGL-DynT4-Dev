define dso_local i32 @CharFrequency(i8* %0, i8 signext %1) {
  %3 = alloca i8*
  %4 = alloca i8
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i32
  store i8* %0, i8** %3
  store i8 %1, i8* %4
  store i32 0, i32* %5
  %10 = load i8*, i8** %3
  store i8* %10, i8** %6
  %12 = load i8*, i8** %3
  %13 = call i64 @strlen(i8* %12)
  %14 = trunc i64 %13 to i32
  store i32 %14, i32* %7
  br label %15
15:
  %16 = load i8*, i8** %6
  %17 = load i8, i8* %4
  %18 = sext i8 %17 to i32
  %19 = load i8*, i8** %3
  %20 = load i32, i32* %7
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i8, i8* %19, i64 %21
  %23 = load i8*, i8** %6
  %24 = ptrtoint i8* %22 to i64
  %25 = ptrtoint i8* %23 to i64
  %26 = sub i64 %24, %25
  %27 = call i8* @memchr(i8* %16, i32 %18, i64 %26)
  store i8* %27, i8** %6
  %28 = icmp ne i8* %27, null
  br i1 %28, label %29, label %34
29:
  %30 = load i32, i32* %5
  %31 = add nsw i32 %30, 1
  store i32 %31, i32* %5
  %32 = load i8*, i8** %6
  %33 = getelementptr inbounds i8, i8* %32, i32 1
  store i8* %33, i8** %6
  br label %15
34:
  %35 = load i32, i32* %5
  ret i32 %35
}
declare i64 @strlen(i8*)
declare i8* @memchr(i8*, i32, i64)
