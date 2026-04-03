define dso_local i32 @grJI1(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %6 = load i8*, i8** %4
  %7 = load i8, i8* %6
  %8 = sext i8 %7 to i32
  %9 = icmp eq i32 %8, 0
  br i1 %9, label %18, label %10
10:
  %11 = load i8*, i8** %4
  %12 = load i8, i8* %11
  %13 = sext i8 %12 to i32
  %14 = load i8*, i8** %5
  %15 = load i8, i8* %14
  %16 = sext i8 %15 to i32
  %17 = icmp ne i32 %13, %16
  br i1 %17, label %18, label %26
18:
  %19 = load i8*, i8** %4
  %20 = load i8, i8* %19
  %21 = zext i8 %20 to i32
  %22 = load i8*, i8** %5
  %23 = load i8, i8* %22
  %24 = zext i8 %23 to i32
  %25 = sub nsw i32 %21, %24
  store i32 %25, i32* %3
  br label %32
26:
  %27 = load i8*, i8** %4
  %28 = getelementptr inbounds i8, i8* %27, i64 1
  %29 = load i8*, i8** %5
  %30 = getelementptr inbounds i8, i8* %29, i64 1
  %31 = call i32 @grJI1(i8* %28, i8* %30)
  store i32 %31, i32* %3
  br label %32
32:
  %33 = load i32, i32* %3
  ret i32 %33
}
