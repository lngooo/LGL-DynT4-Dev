define dso_local i32 @CharFrequency(i8* %0, i8 signext %1) {
  %3 = alloca i8*
  %4 = alloca i8
  %5 = alloca i32
  %6 = alloca i8*
  store i8* %0, i8** %3
  store i8 %1, i8* %4
  store i32 0, i32* %5
  %9 = load i8*, i8** %3
  store i8* %9, i8** %6
  br label %10
10:
  br label %11
11:
  %12 = load i8*, i8** %6
  %13 = load i8, i8* %4
  %14 = sext i8 %13 to i32
  %15 = call i8* @strchr(i8* %12, i32 %14)
  store i8* %15, i8** %6
  %16 = load i8*, i8** %6
  %17 = icmp eq i8* %16, null
  br i1 %17, label %18, label %19
18:
  br label %24
19:
  %20 = load i32, i32* %5
  %21 = add nsw i32 %20, 1
  store i32 %21, i32* %5
  %22 = load i8*, i8** %6
  %23 = getelementptr inbounds i8, i8* %22, i32 1
  store i8* %23, i8** %6
  br label %10
24:
  %25 = load i32, i32* %5
  ret i32 %25
}
declare i8* @strchr(i8*, i32)
