define dso_local i32 @CharFrequency(i8* %0, i8 signext %1) {
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
  br i1 %11, label %12, label %32
12:
  %14 = load i8*, i8** %3
  %15 = load i8, i8* %14
  %16 = sext i8 %15 to i32
  %17 = load i8, i8* %4
  %18 = sext i8 %17 to i32
  %19 = xor i32 %16, %18
  store i32 %19, i32* %6
  %20 = load i32, i32* %6
  %21 = icmp ne i32 %20, 0
  br i1 %21, label %26, label %22
22:
  %23 = load i32, i32* %5
  %24 = xor i32 %23, -1
  %25 = sub nsw i32 0, %24
  store i32 %25, i32* %5
  br label %26
26:
  %27 = load i8*, i8** %3
  %28 = ptrtoint i8* %27 to i64
  %29 = add i64 %28, 1
  %30 = inttoptr i64 %29 to i8*
  store i8* %30, i8** %3
  br label %8
32:
  %33 = load i32, i32* %5
  ret i32 %33
}
