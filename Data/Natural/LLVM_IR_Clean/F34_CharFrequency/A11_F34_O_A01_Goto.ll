define dso_local i32 @CharFrequency(i8* %0, i8 signext %1) {
  %3 = alloca i8*
  %4 = alloca i8
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %3
  store i8 %1, i8* %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  br label %9
9:
  %10 = load i8*, i8** %3
  %11 = load i32, i32* %6
  %12 = sext i32 %11 to i64
  %13 = getelementptr inbounds i8, i8* %10, i64 %12
  %14 = load i8, i8* %13
  %15 = sext i8 %14 to i32
  %16 = icmp eq i32 %15, 0
  br i1 %16, label %17, label %18
17:
  br label %35
18:
  %19 = load i8*, i8** %3
  %20 = load i32, i32* %6
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i8, i8* %19, i64 %21
  %23 = load i8, i8* %22
  %24 = sext i8 %23 to i32
  %25 = load i8, i8* %4
  %26 = sext i8 %25 to i32
  %27 = icmp ne i32 %24, %26
  br i1 %27, label %28, label %29
28:
  br label %32
29:
  %30 = load i32, i32* %5
  %31 = add nsw i32 %30, 1
  store i32 %31, i32* %5
  br label %32
32:
  %33 = load i32, i32* %6
  %34 = add nsw i32 %33, 1
  store i32 %34, i32* %6
  br label %9
35:
  %36 = load i32, i32* %5
  ret i32 %36
}
