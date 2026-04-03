define dso_local void @CaesarCipher(i8* %0, i32 %1) {
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  %11 = load i32, i32* %4
  %12 = srem i32 %11, 26
  %13 = add nsw i32 %12, 26
  %14 = srem i32 %13, 26
  store i32 %14, i32* %7
  br label %15
15:
  %16 = load i32, i32* %5
  %17 = icmp ne i32 %16, 4
  br i1 %17, label %18, label %102
18:
  %19 = load i32, i32* %5
  switch i32 %19, label %101 [
    i32 0, label %20
    i32 1, label %30
    i32 2, label %64
    i32 3, label %98
  ]
20:
  %21 = load i8*, i8** %3
  %22 = load i32, i32* %6
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i8, i8* %21, i64 %23
  %25 = load i8, i8* %24
  %26 = icmp ne i8 %25, 0
  br i1 %26, label %27, label %28
27:
  store i32 1, i32* %5
  br label %29
28:
  store i32 4, i32* %5
  br label %29
29:
  br label %101
30:
  %31 = load i8*, i8** %3
  %32 = load i32, i32* %6
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8, i8* %31, i64 %33
  %35 = load i8, i8* %34
  %36 = sext i8 %35 to i32
  %37 = icmp sge i32 %36, 97
  br i1 %37, label %38, label %63
38:
  %39 = load i8*, i8** %3
  %40 = load i32, i32* %6
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i8, i8* %39, i64 %41
  %43 = load i8, i8* %42
  %44 = sext i8 %43 to i32
  %45 = icmp sle i32 %44, 122
  br i1 %45, label %46, label %63
46:
  %47 = load i8*, i8** %3
  %48 = load i32, i32* %6
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds i8, i8* %47, i64 %49
  %51 = load i8, i8* %50
  %52 = sext i8 %51 to i32
  %53 = sub nsw i32 %52, 97
  %54 = load i32, i32* %7
  %55 = add nsw i32 %53, %54
  %56 = srem i32 %55, 26
  %57 = add nsw i32 %56, 97
  %58 = trunc i32 %57 to i8
  %59 = load i8*, i8** %3
  %60 = load i32, i32* %6
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i8, i8* %59, i64 %61
  store i8 %58, i8* %62
  br label %63
63:
  store i32 2, i32* %5
  br label %101
64:
  %65 = load i8*, i8** %3
  %66 = load i32, i32* %6
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds i8, i8* %65, i64 %67
  %69 = load i8, i8* %68
  %70 = sext i8 %69 to i32
  %71 = icmp sge i32 %70, 65
  br i1 %71, label %72, label %97
72:
  %73 = load i8*, i8** %3
  %74 = load i32, i32* %6
  %75 = sext i32 %74 to i64
  %76 = getelementptr inbounds i8, i8* %73, i64 %75
  %77 = load i8, i8* %76
  %78 = sext i8 %77 to i32
  %79 = icmp sle i32 %78, 90
  br i1 %79, label %80, label %97
80:
  %81 = load i8*, i8** %3
  %82 = load i32, i32* %6
  %83 = sext i32 %82 to i64
  %84 = getelementptr inbounds i8, i8* %81, i64 %83
  %85 = load i8, i8* %84
  %86 = sext i8 %85 to i32
  %87 = sub nsw i32 %86, 65
  %88 = load i32, i32* %7
  %89 = add nsw i32 %87, %88
  %90 = srem i32 %89, 26
  %91 = add nsw i32 %90, 65
  %92 = trunc i32 %91 to i8
  %93 = load i8*, i8** %3
  %94 = load i32, i32* %6
  %95 = sext i32 %94 to i64
  %96 = getelementptr inbounds i8, i8* %93, i64 %95
  store i8 %92, i8* %96
  br label %97
97:
  store i32 3, i32* %5
  br label %101
98:
  %99 = load i32, i32* %6
  %100 = add nsw i32 %99, 1
  store i32 %100, i32* %6
  store i32 0, i32* %5
  br label %101
101:
  br label %15
102:
  ret void
}
