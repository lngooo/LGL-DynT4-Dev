define dso_local i32 @S(i8* %0, i8 signext %1) {
  %3 = alloca i8*
  %4 = alloca i8
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %3
  store i8 %1, i8* %4
  store i32 0, i32* %5
  br label %8
8:
  %9 = load i8*, i8** %3
  %10 = load i8, i8* %9
  %11 = icmp ne i8 %10, 0
  br i1 %11, label %12, label %28
12:
  %14 = load i8*, i8** %3
  %15 = load i8, i8* %14
  %16 = sext i8 %15 to i32
  %17 = load i8, i8* %4
  %18 = sext i8 %17 to i32
  %19 = icmp eq i32 %16, %18
  %20 = zext i1 %19 to i32
  store i32 %20, i32* %6
  %21 = load i32, i32* %6
  %22 = and i32 %21, 1
  %23 = load i32, i32* %5
  %24 = add nsw i32 %23, %22
  store i32 %24, i32* %5
  %25 = load i8*, i8** %3
  %26 = getelementptr inbounds i8, i8* %25, i32 1
  store i8* %26, i8** %3
  br label %8
28:
  %29 = load i32, i32* %5
  ret i32 %29
}
