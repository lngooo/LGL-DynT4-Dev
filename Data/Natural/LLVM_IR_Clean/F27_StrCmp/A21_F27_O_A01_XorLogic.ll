define dso_local i32 @StrCmp(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  br label %6
6:
  %7 = load i8*, i8** %4
  %8 = load i8, i8* %7
  %9 = sext i8 %8 to i32
  %10 = load i8*, i8** %5
  %11 = load i8, i8* %10
  %12 = sext i8 %11 to i32
  %13 = xor i32 %9, %12
  %14 = icmp ne i32 %13, 0
  %15 = xor i1 %14, true
  br i1 %15, label %16, label %27
16:
  %17 = load i8*, i8** %4
  %18 = load i8, i8* %17
  %19 = icmp ne i8 %18, 0
  br i1 %19, label %21, label %20
20:
  store i32 0, i32* %3
  br label %35
21:
  br label %22
22:
  %23 = load i8*, i8** %4
  %24 = getelementptr inbounds i8, i8* %23, i32 1
  store i8* %24, i8** %4
  %25 = load i8*, i8** %5
  %26 = getelementptr inbounds i8, i8* %25, i32 1
  store i8* %26, i8** %5
  br label %6
27:
  %28 = load i8*, i8** %4
  %29 = load i8, i8* %28
  %30 = zext i8 %29 to i32
  %31 = load i8*, i8** %5
  %32 = load i8, i8* %31
  %33 = zext i8 %32 to i32
  %34 = sub nsw i32 %30, %33
  store i32 %34, i32* %3
  br label %35
35:
  %36 = load i32, i32* %3
  ret i32 %36
}
