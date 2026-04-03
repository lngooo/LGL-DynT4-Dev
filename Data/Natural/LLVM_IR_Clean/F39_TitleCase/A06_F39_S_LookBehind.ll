define dso_local void @TitleCase(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i8
  store i8* %0, i8** %2
  %8 = load i8*, i8** %2
  %9 = call i64 @strlen(i8* %8)
  %10 = trunc i64 %9 to i32
  store i32 %10, i32* %3
  %12 = load i32, i32* %3
  %13 = sub nsw i32 %12, 1
  store i32 %13, i32* %4
  br label %14
14:
  %15 = load i32, i32* %4
  %16 = icmp sge i32 %15, 0
  br i1 %16, label %19, label %17
17:
  br label %23
19:
  br label %20
20:
  %21 = load i32, i32* %4
  %22 = add nsw i32 %21, -1
  store i32 %22, i32* %4
  br label %14
23:
  store i32 0, i32* %5
  br label %25
25:
  %26 = load i32, i32* %5
  %27 = load i32, i32* %3
  %28 = icmp slt i32 %26, %27
  br i1 %28, label %31, label %29
29:
  br label %99
31:
  %32 = load i32, i32* %5
  %33 = icmp eq i32 %32, 0
  br i1 %33, label %34, label %35
34:
  br label %43
35:
  %36 = load i8*, i8** %2
  %37 = load i32, i32* %5
  %38 = sub nsw i32 %37, 1
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8, i8* %36, i64 %39
  %41 = load i8, i8* %40
  %42 = sext i8 %41 to i32
  br label %43
43:
  %44 = phi i32 [ 32, %34 ], [ %42, %35 ]
  %45 = trunc i32 %44 to i8
  store i8 %45, i8* %6
  %46 = load i8, i8* %6
  %47 = sext i8 %46 to i32
  %48 = call i32 @isspace(i32 %47)
  %49 = icmp ne i32 %48, 0
  br i1 %49, label %50, label %72
50:
  %51 = load i8*, i8** %2
  %52 = load i32, i32* %5
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds i8, i8* %51, i64 %53
  %55 = load i8, i8* %54
  %56 = sext i8 %55 to i32
  %57 = call i32 @isspace(i32 %56)
  %58 = icmp ne i32 %57, 0
  br i1 %58, label %72, label %59
59:
  %60 = load i8*, i8** %2
  %61 = load i32, i32* %5
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i8, i8* %60, i64 %62
  %64 = load i8, i8* %63
  %65 = sext i8 %64 to i32
  %66 = call i32 @toupper(i32 %65)
  %67 = trunc i32 %66 to i8
  %68 = load i8*, i8** %2
  %69 = load i32, i32* %5
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds i8, i8* %68, i64 %70
  store i8 %67, i8* %71
  br label %95
72:
  %73 = load i8*, i8** %2
  %74 = load i32, i32* %5
  %75 = sext i32 %74 to i64
  %76 = getelementptr inbounds i8, i8* %73, i64 %75
  %77 = load i8, i8* %76
  %78 = sext i8 %77 to i32
  %79 = call i32 @isspace(i32 %78)
  %80 = icmp ne i32 %79, 0
  br i1 %80, label %94, label %81
81:
  %82 = load i8*, i8** %2
  %83 = load i32, i32* %5
  %84 = sext i32 %83 to i64
  %85 = getelementptr inbounds i8, i8* %82, i64 %84
  %86 = load i8, i8* %85
  %87 = sext i8 %86 to i32
  %88 = call i32 @tolower(i32 %87)
  %89 = trunc i32 %88 to i8
  %90 = load i8*, i8** %2
  %91 = load i32, i32* %5
  %92 = sext i32 %91 to i64
  %93 = getelementptr inbounds i8, i8* %90, i64 %92
  store i8 %89, i8* %93
  br label %94
94:
  br label %95
95:
  br label %96
96:
  %97 = load i32, i32* %5
  %98 = add nsw i32 %97, 1
  store i32 %98, i32* %5
  br label %25
99:
  ret void
}
declare i64 @strlen(i8*)
declare i32 @isspace(i32)
declare i32 @toupper(i32)
declare i32 @tolower(i32)
