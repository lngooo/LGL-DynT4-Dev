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
  br label %50
29:
  %30 = load i32, i32* %6
  %31 = load i32, i32* %6
  %32 = mul nsw i32 %30, %31
  %33 = load i32, i32* %6
  %34 = add nsw i32 %32, %33
  %35 = srem i32 %34, 2
  %36 = icmp eq i32 %35, 0
  br i1 %36, label %37, label %46
37:
  %38 = load i8*, i8** %3
  %39 = load i32, i32* %6
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8, i8* %38, i64 %40
  %42 = load i8, i8* %41
  %43 = load i32, i32* %6
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds [100 x i8], [100 x i8]* %5, i64 0, i64 %44
  store i8 %42, i8* %45
  br label %46
46:
  br label %47
47:
  %48 = load i32, i32* %6
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %6
  br label %23
50:
  store i32 0, i32* %7
  br label %52
52:
  %53 = load i32, i32* %7
  %54 = load i32, i32* %4
  %55 = icmp slt i32 %53, %54
  br i1 %55, label %57, label %56
56:
  store i32 7, i32* %8
  br label %78
57:
  %58 = load i8*, i8** %3
  %59 = load i32, i32* %7
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i8, i8* %58, i64 %60
  %62 = load i8, i8* %61
  %63 = sext i8 %62 to i32
  %64 = load i32, i32* %4
  %65 = sub nsw i32 %64, 1
  %66 = load i32, i32* %7
  %67 = sub nsw i32 %65, %66
  %68 = sext i32 %67 to i64
  %69 = getelementptr inbounds [100 x i8], [100 x i8]* %5, i64 0, i64 %68
  %70 = load i8, i8* %69
  %71 = sext i8 %70 to i32
  %72 = icmp ne i32 %63, %71
  br i1 %72, label %73, label %74
73:
  store i32 0, i32* %2
  store i32 1, i32* %8
  br label %78
74:
  br label %75
75:
  %76 = load i32, i32* %7
  %77 = add nsw i32 %76, 1
  store i32 %77, i32* %7
  br label %52
78:
  %80 = load i32, i32* %8
  switch i32 %80, label %82 [
    i32 7, label %81
  ]
81:
  store i32 1, i32* %2
  store i32 1, i32* %8
  br label %82
82:
  %85 = load i32, i32* %2
  ret i32 %85
}
