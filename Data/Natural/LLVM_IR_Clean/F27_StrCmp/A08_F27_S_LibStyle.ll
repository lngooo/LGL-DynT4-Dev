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
  br i1 %9, label %10, label %23
10:
  %11 = load i8*, i8** %4
  %12 = load i8, i8* %11
  %13 = sext i8 %12 to i32
  %14 = icmp ne i32 %13, 0
  br i1 %14, label %15, label %23
15:
  %16 = load i8*, i8** %3
  %17 = load i8, i8* %16
  %18 = sext i8 %17 to i32
  %19 = load i8*, i8** %4
  %20 = load i8, i8* %19
  %21 = sext i8 %20 to i32
  %22 = icmp eq i32 %18, %21
  br label %23
23:
  %24 = phi i1 [ false, %10 ], [ false, %5 ], [ %22, %15 ]
  br i1 %24, label %25, label %30
25:
  %26 = load i8*, i8** %3
  %27 = getelementptr inbounds i8, i8* %26, i32 1
  store i8* %27, i8** %3
  %28 = load i8*, i8** %4
  %29 = getelementptr inbounds i8, i8* %28, i32 1
  store i8* %29, i8** %4
  br label %5
30:
  %31 = load i8*, i8** %3
  %32 = load i8, i8* %31
  %33 = zext i8 %32 to i32
  %34 = load i8*, i8** %4
  %35 = load i8, i8* %34
  %36 = zext i8 %35 to i32
  %37 = sub nsw i32 %33, %36
  ret i32 %37
}
