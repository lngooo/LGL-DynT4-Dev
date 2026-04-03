define dso_local i32 @IsPalindrome(i8* %0) {
  %2 = alloca i32
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %3
  store i32 0, i32* %4
  br label %9
9:
  %10 = load i8*, i8** %3
  %11 = load i32, i32* %4
  %12 = sext i32 %11 to i64
  %13 = getelementptr inbounds i8, i8* %10, i64 %12
  %14 = load i8, i8* %13
  %15 = icmp ne i8 %14, 0
  br i1 %15, label %16, label %19
16:
  %17 = load i32, i32* %4
  %18 = add nsw i32 %17, 1
  store i32 %18, i32* %4
  br label %9
19:
  store i32 0, i32* %5
  %22 = load i32, i32* %4
  %23 = sub nsw i32 %22, 1
  store i32 %23, i32* %6
  br label %24
24:
  %25 = load i32, i32* %5
  %26 = load i32, i32* %6
  %27 = icmp sge i32 %25, %26
  br i1 %27, label %28, label %29
28:
  br label %49
29:
  %30 = load i8*, i8** %3
  %31 = load i32, i32* %5
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i8, i8* %30, i64 %32
  %34 = load i8, i8* %33
  %35 = sext i8 %34 to i32
  %36 = load i8*, i8** %3
  %37 = load i32, i32* %6
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i8, i8* %36, i64 %38
  %40 = load i8, i8* %39
  %41 = sext i8 %40 to i32
  %42 = icmp ne i32 %35, %41
  br i1 %42, label %43, label %44
43:
  br label %50
44:
  %45 = load i32, i32* %5
  %46 = add nsw i32 %45, 1
  store i32 %46, i32* %5
  %47 = load i32, i32* %6
  %48 = add nsw i32 %47, -1
  store i32 %48, i32* %6
  br label %24
49:
  store i32 1, i32* %2
  store i32 1, i32* %7
  br label %51
50:
  store i32 0, i32* %2
  store i32 1, i32* %7
  br label %51
51:
  %55 = load i32, i32* %2
  ret i32 %55
}
