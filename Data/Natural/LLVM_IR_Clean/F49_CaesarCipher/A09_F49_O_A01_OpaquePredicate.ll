define dso_local void @CaesarCipher(i8* %0, i32 %1) {
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %3
  store i32 %1, i32* %4
  %8 = load i32, i32* %4
  %9 = srem i32 %8, 26
  %10 = add nsw i32 %9, 26
  %11 = srem i32 %10, 26
  store i32 %11, i32* %5
  store i32 0, i32* %6
  br label %13
13:
  %14 = load i8*, i8** %3
  %15 = load i32, i32* %6
  %16 = sext i32 %15 to i64
  %17 = getelementptr inbounds i8, i8* %14, i64 %16
  %18 = load i8, i8* %17
  %19 = icmp ne i8 %18, 0
  br i1 %19, label %22, label %20
20:
  br label %100
22:
  %23 = load i32, i32* %5
  %24 = load i32, i32* %5
  %25 = mul nsw i32 %23, %24
  %26 = add nsw i32 %25, 1
  %27 = icmp sgt i32 %26, 0
  br i1 %27, label %28, label %96
28:
  %29 = load i8*, i8** %3
  %30 = load i32, i32* %6
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i8, i8* %29, i64 %31
  %33 = load i8, i8* %32
  %34 = sext i8 %33 to i32
  %35 = icmp sge i32 %34, 97
  br i1 %35, label %36, label %61
36:
  %37 = load i8*, i8** %3
  %38 = load i32, i32* %6
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8, i8* %37, i64 %39
  %41 = load i8, i8* %40
  %42 = sext i8 %41 to i32
  %43 = icmp sle i32 %42, 122
  br i1 %43, label %44, label %61
44:
  %45 = load i8*, i8** %3
  %46 = load i32, i32* %6
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i8, i8* %45, i64 %47
  %49 = load i8, i8* %48
  %50 = sext i8 %49 to i32
  %51 = sub nsw i32 %50, 97
  %52 = load i32, i32* %5
  %53 = add nsw i32 %51, %52
  %54 = srem i32 %53, 26
  %55 = add nsw i32 %54, 97
  %56 = trunc i32 %55 to i8
  %57 = load i8*, i8** %3
  %58 = load i32, i32* %6
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i8, i8* %57, i64 %59
  store i8 %56, i8* %60
  br label %95
61:
  %62 = load i8*, i8** %3
  %63 = load i32, i32* %6
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i8, i8* %62, i64 %64
  %66 = load i8, i8* %65
  %67 = sext i8 %66 to i32
  %68 = icmp sge i32 %67, 65
  br i1 %68, label %69, label %94
69:
  %70 = load i8*, i8** %3
  %71 = load i32, i32* %6
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds i8, i8* %70, i64 %72
  %74 = load i8, i8* %73
  %75 = sext i8 %74 to i32
  %76 = icmp sle i32 %75, 90
  br i1 %76, label %77, label %94
77:
  %78 = load i8*, i8** %3
  %79 = load i32, i32* %6
  %80 = sext i32 %79 to i64
  %81 = getelementptr inbounds i8, i8* %78, i64 %80
  %82 = load i8, i8* %81
  %83 = sext i8 %82 to i32
  %84 = sub nsw i32 %83, 65
  %85 = load i32, i32* %5
  %86 = add nsw i32 %84, %85
  %87 = srem i32 %86, 26
  %88 = add nsw i32 %87, 65
  %89 = trunc i32 %88 to i8
  %90 = load i8*, i8** %3
  %91 = load i32, i32* %6
  %92 = sext i32 %91 to i64
  %93 = getelementptr inbounds i8, i8* %90, i64 %92
  store i8 %89, i8* %93
  br label %94
94:
  br label %95
95:
  br label %96
96:
  br label %97
97:
  %98 = load i32, i32* %6
  %99 = add nsw i32 %98, 1
  store i32 %99, i32* %6
  br label %13
100:
  ret void
}
