define dso_local i32 @AnagramCheck(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca [256 x i8]
  %9 = alloca i8*
  %10 = alloca i32
  %11 = alloca i8*
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %13 = load i8*, i8** %4
  %14 = call i64 @strlen(i8* %13)
  %15 = trunc i64 %14 to i32
  store i32 %15, i32* %6
  %16 = load i32, i32* %6
  %17 = load i8*, i8** %5
  %18 = call i64 @strlen(i8* %17)
  %19 = trunc i64 %18 to i32
  %20 = icmp ne i32 %16, %19
  br i1 %20, label %21, label %22
21:
  store i32 0, i32* %3
  store i32 1, i32* %7
  br label %80
22:
  %24 = getelementptr inbounds [256 x i8], [256 x i8]* %8, i64 0, i64 0
  %25 = load i8*, i8** %5
  %26 = call i8* @strcpy(i8* %24, i8* %25)
  %28 = load i8*, i8** %4
  store i8* %28, i8** %9
  br label %29
29:
  %30 = load i8*, i8** %9
  %31 = load i8, i8* %30
  %32 = icmp ne i8 %31, 0
  br i1 %32, label %34, label %33
33:
  store i32 2, i32* %7
  br label %74
34:
  store i32 0, i32* %10
  %37 = getelementptr inbounds [256 x i8], [256 x i8]* %8, i64 0, i64 0
  store i8* %37, i8** %11
  br label %38
38:
  %39 = load i8*, i8** %11
  %40 = getelementptr inbounds [256 x i8], [256 x i8]* %8, i64 0, i64 0
  %41 = load i32, i32* %6
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %40, i64 %42
  %44 = icmp ult i8* %39, %43
  br i1 %44, label %46, label %45
45:
  store i32 5, i32* %7
  br label %60
46:
  %47 = load i8*, i8** %9
  %48 = load i8, i8* %47
  %49 = sext i8 %48 to i32
  %50 = load i8*, i8** %11
  %51 = load i8, i8* %50
  %52 = sext i8 %51 to i32
  %53 = icmp eq i32 %49, %52
  br i1 %53, label %54, label %56
54:
  %55 = load i8*, i8** %11
  store i8 0, i8* %55
  store i32 1, i32* %10
  store i32 5, i32* %7
  br label %60
56:
  br label %57
57:
  %58 = load i8*, i8** %11
  %59 = getelementptr inbounds i8, i8* %58, i32 1
  store i8* %59, i8** %11
  br label %38
60:
  br label %62
62:
  %63 = load i32, i32* %10
  %64 = icmp ne i32 %63, 0
  br i1 %64, label %66, label %65
65:
  store i32 0, i32* %3
  store i32 1, i32* %7
  br label %67
66:
  store i32 0, i32* %7
  br label %67
67:
  %69 = load i32, i32* %7
  switch i32 %69, label %74 [
    i32 0, label %70
  ]
70:
  br label %71
71:
  %72 = load i8*, i8** %9
  %73 = getelementptr inbounds i8, i8* %72, i32 1
  store i8* %73, i8** %9
  br label %29
74:
  %76 = load i32, i32* %7
  switch i32 %76, label %78 [
    i32 2, label %77
  ]
77:
  store i32 1, i32* %3
  store i32 1, i32* %7
  br label %78
78:
  br label %80
80:
  %82 = load i32, i32* %3
  ret i32 %82
}
declare i64 @strlen(i8*)
declare i8* @strcpy(i8*, i8*)
