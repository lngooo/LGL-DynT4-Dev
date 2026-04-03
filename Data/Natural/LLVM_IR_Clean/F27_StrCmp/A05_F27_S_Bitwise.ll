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
  %9 = load i8*, i8** %4
  %10 = load i8, i8* %9
  %11 = sext i8 %10 to i32
  %12 = xor i32 %8, %11
  %13 = icmp ne i32 %12, 0
  br i1 %13, label %19, label %14
14:
  %15 = load i8*, i8** %3
  %16 = load i8, i8* %15
  %17 = sext i8 %16 to i32
  %18 = icmp ne i32 %17, 0
  br label %19
19:
  %20 = phi i1 [ false, %5 ], [ %18, %14 ]
  br i1 %20, label %21, label %26
21:
  %22 = load i8*, i8** %3
  %23 = getelementptr inbounds i8, i8* %22, i32 1
  store i8* %23, i8** %3
  %24 = load i8*, i8** %4
  %25 = getelementptr inbounds i8, i8* %24, i32 1
  store i8* %25, i8** %4
  br label %5
26:
  %27 = load i8*, i8** %3
  %28 = load i8, i8* %27
  %29 = zext i8 %28 to i32
  %30 = load i8*, i8** %4
  %31 = load i8, i8* %30
  %32 = zext i8 %31 to i32
  %33 = sub nsw i32 %29, %32
  ret i32 %33
}
