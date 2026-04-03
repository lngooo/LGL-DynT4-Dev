define dso_local i32 @AAGZ(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i64
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %2
  %9 = load i8*, i8** %2
  %10 = call i64 @strlen(i8* %9)
  %11 = trunc i64 %10 to i32
  store i32 %11, i32* %3
  store i64 0, i64* %4
  store i64 1, i64* %5
  %15 = load i32, i32* %3
  %16 = sub nsw i32 %15, 1
  store i32 %16, i32* %6
  br label %17
17:
  %18 = load i32, i32* %6
  %19 = icmp sge i32 %18, 0
  br i1 %19, label %22, label %20
20:
  br label %81
22:
  %24 = load i8*, i8** %2
  %25 = load i32, i32* %6
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i8, i8* %24, i64 %26
  %28 = load i8, i8* %27
  %29 = sext i8 %28 to i32
  %30 = icmp sge i32 %29, 97
  br i1 %30, label %31, label %40
31:
  %32 = load i8*, i8** %2
  %33 = load i32, i32* %6
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i8, i8* %32, i64 %34
  %36 = load i8, i8* %35
  %37 = sext i8 %36 to i32
  %38 = sub nsw i32 %37, 97
  %39 = add nsw i32 %38, 10
  br label %67
40:
  %41 = load i8*, i8** %2
  %42 = load i32, i32* %6
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i8, i8* %41, i64 %43
  %45 = load i8, i8* %44
  %46 = sext i8 %45 to i32
  %47 = icmp sge i32 %46, 65
  br i1 %47, label %48, label %57
48:
  %49 = load i8*, i8** %2
  %50 = load i32, i32* %6
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i8, i8* %49, i64 %51
  %53 = load i8, i8* %52
  %54 = sext i8 %53 to i32
  %55 = sub nsw i32 %54, 65
  %56 = add nsw i32 %55, 10
  br label %65
57:
  %58 = load i8*, i8** %2
  %59 = load i32, i32* %6
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i8, i8* %58, i64 %60
  %62 = load i8, i8* %61
  %63 = sext i8 %62 to i32
  %64 = sub nsw i32 %63, 48
  br label %65
65:
  %66 = phi i32 [ %56, %48 ], [ %64, %57 ]
  br label %67
67:
  %68 = phi i32 [ %39, %31 ], [ %66, %65 ]
  store i32 %68, i32* %7
  %69 = load i32, i32* %7
  %70 = sext i32 %69 to i64
  %71 = load i64, i64* %5
  %72 = mul nsw i64 %70, %71
  %73 = load i64, i64* %4
  %74 = add nsw i64 %73, %72
  store i64 %74, i64* %4
  %75 = load i64, i64* %5
  %76 = mul nsw i64 %75, 16
  store i64 %76, i64* %5
  br label %78
78:
  %79 = load i32, i32* %6
  %80 = add nsw i32 %79, -1
  store i32 %80, i32* %6
  br label %17
81:
  %82 = load i64, i64* %4
  %83 = trunc i64 %82 to i32
  ret i32 %83
}
declare i64 @strlen(i8*)
