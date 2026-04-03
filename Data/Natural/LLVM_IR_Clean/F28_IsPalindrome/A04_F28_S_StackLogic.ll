define dso_local i32 @IsPalindrome(i8* %0) {
  %2 = alloca i32
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca [100 x i8]
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i8* %0, i8** %3
  store i32 0, i32* %4
  br label %10
10:
  %11 = load i8*, i8** %3
  %12 = load i32, i32* %4
  %13 = sext i32 %12 to i64
  %14 = getelementptr inbounds i8, i8* %11, i64 %13
  %15 = load i8, i8* %14
  %16 = icmp ne i8 %15, 0
  br i1 %16, label %17, label %20
17:
  %18 = load i32, i32* %4
  %19 = add nsw i32 %18, 1
  store i32 %19, i32* %4
  br label %10
20:
  store i32 0, i32* %6
  br label %23
23:
  %24 = load i32, i32* %6
  %25 = load i32, i32* %4
  %26 = icmp slt i32 %24, %25
  br i1 %26, label %29, label %27
27:
  br label %41
29:
  %30 = load i8*, i8** %3
  %31 = load i32, i32* %6
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i8, i8* %30, i64 %32
  %34 = load i8, i8* %33
  %35 = load i32, i32* %6
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds [100 x i8], [100 x i8]* %5, i64 0, i64 %36
  store i8 %34, i8* %37
  br label %38
38:
  %39 = load i32, i32* %6
  %40 = add nsw i32 %39, 1
  store i32 %40, i32* %6
  br label %23
41:
  store i32 0, i32* %7
  br label %43
43:
  %44 = load i32, i32* %7
  %45 = load i32, i32* %4
  %46 = icmp slt i32 %44, %45
  br i1 %46, label %48, label %47
47:
  store i32 7, i32* %8
  br label %69
48:
  %49 = load i8*, i8** %3
  %50 = load i32, i32* %7
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i8, i8* %49, i64 %51
  %53 = load i8, i8* %52
  %54 = sext i8 %53 to i32
  %55 = load i32, i32* %4
  %56 = sub nsw i32 %55, 1
  %57 = load i32, i32* %7
  %58 = sub nsw i32 %56, %57
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds [100 x i8], [100 x i8]* %5, i64 0, i64 %59
  %61 = load i8, i8* %60
  %62 = sext i8 %61 to i32
  %63 = icmp ne i32 %54, %62
  br i1 %63, label %64, label %65
64:
  store i32 0, i32* %2
  store i32 1, i32* %8
  br label %69
65:
  br label %66
66:
  %67 = load i32, i32* %7
  %68 = add nsw i32 %67, 1
  store i32 %68, i32* %7
  br label %43
69:
  %71 = load i32, i32* %8
  switch i32 %71, label %73 [
    i32 7, label %72
  ]
72:
  store i32 1, i32* %2
  store i32 1, i32* %8
  br label %73
73:
  %76 = load i32, i32* %2
  ret i32 %76
}
