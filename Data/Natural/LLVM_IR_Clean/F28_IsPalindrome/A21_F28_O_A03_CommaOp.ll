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
  %27 = icmp slt i32 %25, %26
  br i1 %27, label %29, label %28
28:
  store i32 4, i32* %7
  br label %54
29:
  %30 = load i32, i32* %5
  %31 = add nsw i32 %30, 1
  store i32 %31, i32* %5
  %32 = load i32, i32* %5
  %33 = add nsw i32 %32, -1
  store i32 %33, i32* %5
  %34 = load i8*, i8** %3
  %35 = load i32, i32* %5
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i8, i8* %34, i64 %36
  %38 = load i8, i8* %37
  %39 = sext i8 %38 to i32
  %40 = load i8*, i8** %3
  %41 = load i32, i32* %6
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %40, i64 %42
  %44 = load i8, i8* %43
  %45 = sext i8 %44 to i32
  %46 = icmp ne i32 %39, %45
  br i1 %46, label %47, label %48
47:
  store i32 0, i32* %2
  store i32 1, i32* %7
  br label %54
48:
  br label %49
49:
  %50 = load i32, i32* %5
  %51 = add nsw i32 %50, 1
  store i32 %51, i32* %5
  %52 = load i32, i32* %6
  %53 = add nsw i32 %52, -1
  store i32 %53, i32* %6
  br label %24
54:
  %57 = load i32, i32* %7
  switch i32 %57, label %59 [
    i32 4, label %58
  ]
58:
  store i32 1, i32* %2
  store i32 1, i32* %7
  br label %59
59:
  %61 = load i32, i32* %2
  ret i32 %61
}
