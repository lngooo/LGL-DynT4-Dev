define dso_local i32 @Gs(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i8*, i8** %2
  %9 = load i32, i32* %4
  %10 = sext i32 %9 to i64
  %11 = getelementptr inbounds i8, i8* %8, i64 %10
  %12 = load i8, i8* %11
  %13 = icmp ne i8 %12, 0
  br i1 %13, label %16, label %14
14:
  br label %31
16:
  %17 = load i8*, i8** %2
  %18 = load i32, i32* %4
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i8, i8* %17, i64 %19
  %21 = load i8, i8* %20
  %22 = sext i8 %21 to i32
  switch i32 %22, label %26 [
    i32 97, label %23
    i32 101, label %23
    i32 105, label %23
    i32 111, label %23
    i32 117, label %23
    i32 65, label %23
    i32 69, label %23
    i32 73, label %23
    i32 79, label %23
    i32 85, label %23
  ]
23:
  %24 = load i32, i32* %3
  %25 = add nsw i32 %24, 1
  store i32 %25, i32* %3
  br label %27
26:
  br label %27
27:
  br label %28
28:
  %29 = load i32, i32* %4
  %30 = add nsw i32 %29, 1
  store i32 %30, i32* %4
  br label %7
31:
  %32 = load i32, i32* %3
  ret i32 %32
}
