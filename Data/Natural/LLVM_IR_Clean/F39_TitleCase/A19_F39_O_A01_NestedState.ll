define dso_local void @TitleCase(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %9
9:
  %10 = load i32, i32* %3
  %11 = icmp slt i32 %10, 1
  br i1 %11, label %14, label %12
12:
  store i32 2, i32* %4
  br label %86
14:
  store i32 1, i32* %5
  store i32 0, i32* %6
  br label %17
17:
  %18 = load i8*, i8** %2
  %19 = load i32, i32* %6
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds i8, i8* %18, i64 %20
  %22 = load i8, i8* %21
  %23 = icmp ne i8 %22, 0
  br i1 %23, label %26, label %24
24:
  store i32 5, i32* %4
  br label %81
26:
  store i32 0, i32* %7
  br label %28
28:
  %29 = load i32, i32* %7
  %30 = icmp slt i32 %29, 1
  br i1 %30, label %33, label %31
31:
  store i32 8, i32* %4
  br label %77
33:
  %34 = load i8*, i8** %2
  %35 = load i32, i32* %6
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i8, i8* %34, i64 %36
  %38 = load i8, i8* %37
  %39 = sext i8 %38 to i32
  %40 = call i32 @isspace(i32 %39)
  %41 = icmp ne i32 %40, 0
  br i1 %41, label %42, label %43
42:
  store i32 1, i32* %5
  br label %73
43:
  %44 = load i32, i32* %5
  %45 = icmp ne i32 %44, 0
  br i1 %45, label %46, label %59
46:
  %47 = load i8*, i8** %2
  %48 = load i32, i32* %6
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds i8, i8* %47, i64 %49
  %51 = load i8, i8* %50
  %52 = sext i8 %51 to i32
  %53 = call i32 @toupper(i32 %52)
  %54 = trunc i32 %53 to i8
  %55 = load i8*, i8** %2
  %56 = load i32, i32* %6
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i8, i8* %55, i64 %57
  store i8 %54, i8* %58
  store i32 0, i32* %5
  br label %72
59:
  %60 = load i8*, i8** %2
  %61 = load i32, i32* %6
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i8, i8* %60, i64 %62
  %64 = load i8, i8* %63
  %65 = sext i8 %64 to i32
  %66 = call i32 @tolower(i32 %65)
  %67 = trunc i32 %66 to i8
  %68 = load i8*, i8** %2
  %69 = load i32, i32* %6
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds i8, i8* %68, i64 %70
  store i8 %67, i8* %71
  br label %72
72:
  br label %73
73:
  br label %74
74:
  %75 = load i32, i32* %7
  %76 = add nsw i32 %75, 1
  store i32 %76, i32* %7
  br label %28
77:
  br label %78
78:
  %79 = load i32, i32* %6
  %80 = add nsw i32 %79, 1
  store i32 %80, i32* %6
  br label %17
81:
  br label %83
83:
  %84 = load i32, i32* %3
  %85 = add nsw i32 %84, 1
  store i32 %85, i32* %3
  br label %9
86:
  ret void
}
declare i32 @isspace(i32)
declare i32 @toupper(i32)
declare i32 @tolower(i32)
