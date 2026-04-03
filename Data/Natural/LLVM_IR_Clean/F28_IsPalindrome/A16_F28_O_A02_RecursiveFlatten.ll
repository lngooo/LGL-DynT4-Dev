define dso_local i32 @IsPalindrome(i8* %0) {
  %2 = alloca i32
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %3
  %7 = load i8*, i8** %3
  %8 = getelementptr inbounds i8, i8* %7, i64 0
  %9 = load i8, i8* %8
  %10 = icmp ne i8 %9, 0
  br i1 %10, label %11, label %16
11:
  %12 = load i8*, i8** %3
  %13 = getelementptr inbounds i8, i8* %12, i64 1
  %14 = load i8, i8* %13
  %15 = icmp ne i8 %14, 0
  br i1 %15, label %17, label %16
16:
  store i32 1, i32* %2
  br label %59
17:
  store i32 0, i32* %4
  br label %19
19:
  %20 = load i8*, i8** %3
  %21 = load i32, i32* %4
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i8, i8* %20, i64 %22
  %24 = load i8, i8* %23
  %25 = icmp ne i8 %24, 0
  br i1 %25, label %26, label %29
26:
  %27 = load i32, i32* %4
  %28 = add nsw i32 %27, 1
  store i32 %28, i32* %4
  br label %19
29:
  %31 = load i8*, i8** %3
  %32 = getelementptr inbounds i8, i8* %31, i64 0
  %33 = load i8, i8* %32
  %34 = sext i8 %33 to i32
  %35 = load i8*, i8** %3
  %36 = load i32, i32* %4
  %37 = sub nsw i32 %36, 1
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i8, i8* %35, i64 %38
  %40 = load i8, i8* %39
  %41 = sext i8 %40 to i32
  %42 = icmp eq i32 %34, %41
  %43 = zext i1 %42 to i32
  store i32 %43, i32* %5
  %44 = load i32, i32* %5
  %45 = icmp ne i32 %44, 0
  br i1 %45, label %47, label %46
46:
  store i32 0, i32* %2
  store i32 1, i32* %6
  br label %56
47:
  %48 = load i8*, i8** %3
  %49 = load i32, i32* %4
  %50 = sub nsw i32 %49, 1
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i8, i8* %48, i64 %51
  store i8 0, i8* %52
  %53 = load i8*, i8** %3
  %54 = getelementptr inbounds i8, i8* %53, i64 1
  %55 = call i32 @IsPalindrome(i8* %54)
  store i32 %55, i32* %2
  store i32 1, i32* %6
  br label %56
56:
  br label %59
59:
  %60 = load i32, i32* %2
  ret i32 %60
}
