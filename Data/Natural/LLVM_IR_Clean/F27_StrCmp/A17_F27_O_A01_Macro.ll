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
  %9 = icmp ne i32 %8, 0
  br i1 %9, label %10, label %18
10:
  %11 = load i8*, i8** %3
  %12 = load i8, i8* %11
  %13 = sext i8 %12 to i32
  %14 = load i8*, i8** %4
  %15 = load i8, i8* %14
  %16 = sext i8 %15 to i32
  %17 = icmp eq i32 %13, %16
  br label %18
18:
  %19 = phi i1 [ false, %5 ], [ %17, %10 ]
  br i1 %19, label %20, label %25
20:
  %21 = load i8*, i8** %3
  %22 = getelementptr inbounds i8, i8* %21, i32 1
  store i8* %22, i8** %3
  %23 = load i8*, i8** %4
  %24 = getelementptr inbounds i8, i8* %23, i32 1
  store i8* %24, i8** %4
  br label %5
25:
  %26 = load i8*, i8** %3
  %27 = load i8, i8* %26
  %28 = zext i8 %27 to i32
  %29 = load i8*, i8** %4
  %30 = load i8, i8* %29
  %31 = zext i8 %30 to i32
  %32 = sub nsw i32 %28, %31
  ret i32 %32
}
