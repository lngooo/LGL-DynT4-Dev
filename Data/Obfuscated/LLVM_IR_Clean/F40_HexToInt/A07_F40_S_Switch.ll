define dso_local i32 @yX5(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %6
6:
  %7 = load i8*, i8** %2
  %8 = load i8, i8* %7
  %9 = icmp ne i8 %8, 0
  br i1 %9, label %10, label %34
10:
  %12 = load i8*, i8** %2
  %13 = load i8, i8* %12
  %14 = sext i8 %13 to i32
  switch i32 %14, label %21 [
    i32 97, label %15
    i32 65, label %15
    i32 98, label %16
    i32 66, label %16
    i32 99, label %17
    i32 67, label %17
    i32 100, label %18
    i32 68, label %18
    i32 101, label %19
    i32 69, label %19
    i32 102, label %20
    i32 70, label %20
  ]
15:
  store i32 10, i32* %4
  br label %26
16:
  store i32 11, i32* %4
  br label %26
17:
  store i32 12, i32* %4
  br label %26
18:
  store i32 13, i32* %4
  br label %26
19:
  store i32 14, i32* %4
  br label %26
20:
  store i32 15, i32* %4
  br label %26
21:
  %22 = load i8*, i8** %2
  %23 = load i8, i8* %22
  %24 = sext i8 %23 to i32
  %25 = sub nsw i32 %24, 48
  store i32 %25, i32* %4
  br label %26
26:
  %27 = load i32, i32* %3
  %28 = mul nsw i32 %27, 16
  %29 = load i32, i32* %4
  %30 = add nsw i32 %28, %29
  store i32 %30, i32* %3
  %31 = load i8*, i8** %2
  %32 = getelementptr inbounds i8, i8* %31, i32 1
  store i8* %32, i8** %2
  br label %6
34:
  %35 = load i32, i32* %3
  ret i32 %35
}
