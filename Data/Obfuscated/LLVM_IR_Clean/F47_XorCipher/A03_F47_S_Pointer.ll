define dso_local void @UBvO(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i8*
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  %8 = load i8*, i8** %3
  store i8* %8, i8** %5
  %10 = load i8*, i8** %4
  store i8* %10, i8** %6
  br label %11
11:
  %12 = load i8*, i8** %5
  %13 = load i8, i8* %12
  %14 = icmp ne i8 %13, 0
  br i1 %14, label %15, label %34
15:
  %16 = load i8*, i8** %6
  %17 = load i8, i8* %16
  %18 = icmp ne i8 %17, 0
  br i1 %18, label %21, label %19
19:
  %20 = load i8*, i8** %4
  store i8* %20, i8** %6
  br label %21
21:
  %22 = load i8*, i8** %6
  %23 = load i8, i8* %22
  %24 = sext i8 %23 to i32
  %25 = load i8*, i8** %5
  %26 = load i8, i8* %25
  %27 = sext i8 %26 to i32
  %28 = xor i32 %27, %24
  %29 = trunc i32 %28 to i8
  store i8 %29, i8* %25
  %30 = load i8*, i8** %5
  %31 = getelementptr inbounds i8, i8* %30, i32 1
  store i8* %31, i8** %5
  %32 = load i8*, i8** %6
  %33 = getelementptr inbounds i8, i8* %32, i32 1
  store i8* %33, i8** %6
  br label %11
34:
  ret void
}
