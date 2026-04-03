define dso_local i32 @wdx(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i32, i32* %4
  %9 = icmp ne i32 %8, 2
  br i1 %9, label %10, label %27
10:
  %11 = load i32, i32* %4
  switch i32 %11, label %26 [
    i32 0, label %12
    i32 1, label %23
  ]
12:
  %13 = load i8*, i8** %2
  %14 = load i32, i32* %3
  %15 = sext i32 %14 to i64
  %16 = getelementptr inbounds i8, i8* %13, i64 %15
  %17 = load i8, i8* %16
  %18 = sext i8 %17 to i32
  %19 = icmp ne i32 %18, 0
  br i1 %19, label %20, label %21
20:
  store i32 1, i32* %4
  br label %22
21:
  store i32 2, i32* %4
  br label %22
22:
  br label %26
23:
  %24 = load i32, i32* %3
  %25 = add nsw i32 %24, 1
  store i32 %25, i32* %3
  store i32 0, i32* %4
  br label %26
26:
  br label %7
27:
  %28 = load i32, i32* %3
  ret i32 %28
}
