define dso_local void @LCP(i8** %0, i32 %1, i8* %2) {
  %4 = alloca i8**
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i32
  %8 = alloca i8
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  store i8** %0, i8*** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  %12 = load i32, i32* %5
  %13 = icmp sle i32 %12, 0
  br i1 %13, label %14, label %15
14:
  br label %86
15:
  store i32 0, i32* %7
  br label %17
17:
  %18 = load i8**, i8*** %4
  %19 = getelementptr inbounds i8*, i8** %18, i64 0
  %20 = load i8*, i8** %19
  %21 = load i32, i32* %7
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i8, i8* %20, i64 %22
  %24 = load i8, i8* %23
  store i8 %24, i8* %8
  %25 = load i8, i8* %8
  %26 = sext i8 %25 to i32
  %27 = icmp eq i32 %26, 0
  br i1 %27, label %28, label %33
28:
  %29 = load i8*, i8** %6
  %30 = load i32, i32* %7
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i8, i8* %29, i64 %31
  store i8 0, i8* %32
  store i32 2, i32* %9
  br label %78
33:
  store i32 1, i32* %10
  store i32 1, i32* %11
  br label %36
36:
  %37 = load i32, i32* %11
  %38 = load i32, i32* %5
  %39 = icmp slt i32 %37, %38
  br i1 %39, label %41, label %40
40:
  store i32 5, i32* %9
  br label %60
41:
  %42 = load i8**, i8*** %4
  %43 = load i32, i32* %11
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i8*, i8** %42, i64 %44
  %46 = load i8*, i8** %45
  %47 = load i32, i32* %7
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i8, i8* %46, i64 %48
  %50 = load i8, i8* %49
  %51 = sext i8 %50 to i32
  %52 = load i8, i8* %8
  %53 = sext i8 %52 to i32
  %54 = icmp ne i32 %51, %53
  br i1 %54, label %55, label %56
55:
  store i32 0, i32* %10
  store i32 5, i32* %9
  br label %60
56:
  br label %57
57:
  %58 = load i32, i32* %11
  %59 = add nsw i32 %58, 1
  store i32 %59, i32* %11
  br label %36
60:
  br label %62
62:
  %63 = load i32, i32* %10
  %64 = icmp ne i32 %63, 0
  br i1 %64, label %70, label %65
65:
  %66 = load i8*, i8** %6
  %67 = load i32, i32* %7
  %68 = sext i32 %67 to i64
  %69 = getelementptr inbounds i8, i8* %66, i64 %68
  store i8 0, i8* %69
  store i32 2, i32* %9
  br label %76
70:
  %71 = load i8, i8* %8
  %72 = load i8*, i8** %6
  %73 = load i32, i32* %7
  %74 = sext i32 %73 to i64
  %75 = getelementptr inbounds i8, i8* %72, i64 %74
  store i8 %71, i8* %75
  store i32 0, i32* %9
  br label %76
76:
  br label %78
78:
  %79 = load i32, i32* %9
  switch i32 %79, label %84 [
    i32 0, label %80
  ]
80:
  br label %81
81:
  %82 = load i32, i32* %7
  %83 = add nsw i32 %82, 1
  store i32 %83, i32* %7
  br label %17
84:
  br label %86
86:
  ret void
}
