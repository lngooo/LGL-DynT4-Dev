define dso_local i32 @StrCmp(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  br label %5
5:
  %6 = load i8*, i8** %3
  %7 = load i8, i8* %6
  %8 = sext i8 %7 to i32
  %9 = icmp eq i32 %8, 0
  br i1 %9, label %18, label %10
10:
  %11 = load i8*, i8** %3
  %12 = load i8, i8* %11
  %13 = sext i8 %12 to i32
  %14 = load i8*, i8** %4
  %15 = load i8, i8* %14
  %16 = sext i8 %15 to i32
  %17 = icmp ne i32 %13, %16
  br i1 %17, label %18, label %19
18:
  br label %24
19:
  %20 = load i8*, i8** %3
  %21 = getelementptr inbounds i8, i8* %20, i32 1
  store i8* %21, i8** %3
  %22 = load i8*, i8** %4
  %23 = getelementptr inbounds i8, i8* %22, i32 1
  store i8* %23, i8** %4
  br label %5
24:
  %25 = load i8*, i8** %3
  %26 = load i8, i8* %25
  %27 = zext i8 %26 to i32
  %28 = load i8*, i8** %4
  %29 = load i8, i8* %28
  %30 = zext i8 %29 to i32
  %31 = sub nsw i32 %27, %30
  ret i32 %31
}
