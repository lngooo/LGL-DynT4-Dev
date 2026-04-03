define dso_local i32 @IsPalindrome(i8* %0) {
  %2 = alloca i32
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %3
  store i32 0, i32* %4
  br label %8
8:
  %9 = load i8*, i8** %3
  %10 = load i32, i32* %4
  %11 = sext i32 %10 to i64
  %12 = getelementptr inbounds i8, i8* %9, i64 %11
  %13 = load i8, i8* %12
  %14 = icmp ne i8 %13, 0
  br i1 %14, label %15, label %18
15:
  %16 = load i32, i32* %4
  %17 = add nsw i32 %16, 1
  store i32 %17, i32* %4
  br label %8
18:
  store i32 0, i32* %5
  br label %20
20:
  %21 = load i32, i32* %5
  %22 = load i32, i32* %4
  %23 = sdiv i32 %22, 2
  %24 = icmp slt i32 %21, %23
  br i1 %24, label %26, label %25
25:
  store i32 4, i32* %6
  br label %48
26:
  %27 = load i8*, i8** %3
  %28 = load i32, i32* %5
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i8, i8* %27, i64 %29
  %31 = load i8, i8* %30
  %32 = sext i8 %31 to i32
  %33 = load i8*, i8** %3
  %34 = load i32, i32* %4
  %35 = sub nsw i32 %34, 1
  %36 = load i32, i32* %5
  %37 = sub nsw i32 %35, %36
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i8, i8* %33, i64 %38
  %40 = load i8, i8* %39
  %41 = sext i8 %40 to i32
  %42 = icmp ne i32 %32, %41
  br i1 %42, label %43, label %44
43:
  store i32 0, i32* %2
  store i32 1, i32* %6
  br label %48
44:
  br label %45
45:
  %46 = load i32, i32* %5
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %5
  br label %20
48:
  %50 = load i32, i32* %6
  switch i32 %50, label %52 [
    i32 4, label %51
  ]
51:
  store i32 1, i32* %2
  store i32 1, i32* %6
  br label %52
52:
  %54 = load i32, i32* %2
  ret i32 %54
}
