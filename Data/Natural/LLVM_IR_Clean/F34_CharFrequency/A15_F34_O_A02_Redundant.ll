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
  br i1 %11, label %12, label %37
12:
  %14 = load i8*, i8** %3
  %15 = load i8, i8* %14
  %16 = sext i8 %15 to i32
  %17 = mul nsw i32 %16, 2
  %18 = sdiv i32 %17, 2
  store i32 %18, i32* %6
  %19 = load i32, i32* %6
  %20 = load i8, i8* %4
  %21 = sext i8 %20 to i32
  %22 = icmp eq i32 %19, %21
  br i1 %22, label %23, label %33
23:
  %24 = load i8*, i8** %3
  %25 = load i8, i8* %24
  %26 = sext i8 %25 to i32
  %27 = load i8, i8* %4
  %28 = sext i8 %27 to i32
  %29 = icmp eq i32 %26, %28
  br i1 %29, label %30, label %33
30:
  %31 = load i32, i32* %5
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %5
  br label %33
33:
  %34 = load i8*, i8** %3
  %35 = getelementptr inbounds i8, i8* %34, i32 1
  store i8* %35, i8** %3
  br label %8
37:
  %38 = load i32, i32* %5
  ret i32 %38
}
