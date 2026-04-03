define dso_local i32 @BWA3(i8* %0, i8 signext %1) {
  %3 = alloca i8*
  %4 = alloca i8
  %5 = alloca i32
  store i8* %0, i8** %3
  store i8 %1, i8* %4
  store i32 0, i32* %5
  br label %7
7:
  %8 = load i8*, i8** %3
  %9 = load i8, i8* %8
  %10 = icmp ne i8 %9, 0
  br i1 %10, label %11, label %26
11:
  %12 = load i8*, i8** %3
  %13 = load i8, i8* %12
  %14 = sext i8 %13 to i32
  %15 = load i8, i8* %4
  %16 = sext i8 %15 to i32
  %17 = xor i32 %14, %16
  %18 = icmp ne i32 %17, 0
  br i1 %18, label %22, label %19
19:
  %20 = load i32, i32* %5
  %21 = add nsw i32 %20, 1
  store i32 %21, i32* %5
  br label %22
22:
  br label %23
23:
  %24 = load i8*, i8** %3
  %25 = getelementptr inbounds i8, i8* %24, i32 1
  store i8* %25, i8** %3
  br label %7
26:
  %27 = load i32, i32* %5
  ret i32 %27
}
