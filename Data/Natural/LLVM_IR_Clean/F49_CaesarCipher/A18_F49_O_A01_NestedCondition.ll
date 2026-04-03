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
  br label %95
22:
  %23 = load i8*, i8** %3
  %24 = load i32, i32* %6
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i8, i8* %23, i64 %25
  %27 = load i8, i8* %26
  %28 = sext i8 %27 to i32
  %29 = icmp sge i32 %28, 65
  br i1 %29, label %30, label %91
30:
  %31 = load i8*, i8** %3
  %32 = load i32, i32* %6
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8, i8* %31, i64 %33
  %35 = load i8, i8* %34
  %36 = sext i8 %35 to i32
  %37 = icmp sle i32 %36, 90
  br i1 %37, label %38, label %55
38:
  %39 = load i8*, i8** %3
  %40 = load i32, i32* %6
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i8, i8* %39, i64 %41
  %43 = load i8, i8* %42
  %44 = sext i8 %43 to i32
  %45 = sub nsw i32 %44, 65
  %46 = load i32, i32* %5
  %47 = add nsw i32 %45, %46
  %48 = srem i32 %47, 26
  %49 = add nsw i32 %48, 65
  %50 = trunc i32 %49 to i8
  %51 = load i8*, i8** %3
  %52 = load i32, i32* %6
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds i8, i8* %51, i64 %53
  store i8 %50, i8* %54
  br label %90
55:
  %56 = load i8*, i8** %3
  %57 = load i32, i32* %6
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i8, i8* %56, i64 %58
  %60 = load i8, i8* %59
  %61 = sext i8 %60 to i32
  %62 = icmp sge i32 %61, 97
  br i1 %62, label %63, label %89
63:
  %64 = load i8*, i8** %3
  %65 = load i32, i32* %6
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds i8, i8* %64, i64 %66
  %68 = load i8, i8* %67
  %69 = sext i8 %68 to i32
  %70 = icmp sle i32 %69, 122
  br i1 %70, label %71, label %88
71:
  %72 = load i8*, i8** %3
  %73 = load i32, i32* %6
  %74 = sext i32 %73 to i64
  %75 = getelementptr inbounds i8, i8* %72, i64 %74
  %76 = load i8, i8* %75
  %77 = sext i8 %76 to i32
  %78 = sub nsw i32 %77, 97
  %79 = load i32, i32* %5
  %80 = add nsw i32 %78, %79
  %81 = srem i32 %80, 26
  %82 = add nsw i32 %81, 97
  %83 = trunc i32 %82 to i8
  %84 = load i8*, i8** %3
  %85 = load i32, i32* %6
  %86 = sext i32 %85 to i64
  %87 = getelementptr inbounds i8, i8* %84, i64 %86
  store i8 %83, i8* %87
  br label %88
88:
  br label %89
89:
  br label %90
90:
  br label %91
91:
  br label %92
92:
  %93 = load i32, i32* %6
  %94 = add nsw i32 %93, 1
  store i32 %94, i32* %6
  br label %13
95:
  ret void
}
