define dso_local void @TitleCase(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %6
6:
  %7 = load i8*, i8** %2
  %8 = load i32, i32* %3
  %9 = sext i32 %8 to i64
  %10 = getelementptr inbounds i8, i8* %7, i64 %9
  %11 = load i8, i8* %10
  %12 = icmp ne i8 %11, 0
  br i1 %12, label %15, label %13
13:
  br label %31
15:
  %16 = load i8*, i8** %2
  %17 = load i32, i32* %3
  %18 = sext i32 %17 to i64
  %19 = getelementptr inbounds i8, i8* %16, i64 %18
  %20 = load i8, i8* %19
  %21 = sext i8 %20 to i32
  %22 = call i32 @tolower(i32 %21)
  %23 = trunc i32 %22 to i8
  %24 = load i8*, i8** %2
  %25 = load i32, i32* %3
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i8, i8* %24, i64 %26
  store i8 %23, i8* %27
  br label %28
28:
  %29 = load i32, i32* %3
  %30 = add nsw i32 %29, 1
  store i32 %30, i32* %3
  br label %6
31:
  %32 = load i8*, i8** %2
  %33 = getelementptr inbounds i8, i8* %32, i64 0
  %34 = load i8, i8* %33
  %35 = sext i8 %34 to i32
  %36 = icmp ne i32 %35, 0
  br i1 %36, label %37, label %46
37:
  %38 = load i8*, i8** %2
  %39 = getelementptr inbounds i8, i8* %38, i64 0
  %40 = load i8, i8* %39
  %41 = sext i8 %40 to i32
  %42 = call i32 @toupper(i32 %41)
  %43 = trunc i32 %42 to i8
  %44 = load i8*, i8** %2
  %45 = getelementptr inbounds i8, i8* %44, i64 0
  store i8 %43, i8* %45
  br label %46
46:
  store i32 1, i32* %4
  br label %48
48:
  %49 = load i8*, i8** %2
  %50 = load i32, i32* %4
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i8, i8* %49, i64 %51
  %53 = load i8, i8* %52
  %54 = icmp ne i8 %53, 0
  br i1 %54, label %57, label %55
55:
  br label %84
57:
  %58 = load i8*, i8** %2
  %59 = load i32, i32* %4
  %60 = sub nsw i32 %59, 1
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i8, i8* %58, i64 %61
  %63 = load i8, i8* %62
  %64 = sext i8 %63 to i32
  %65 = call i32 @isspace(i32 %64)
  %66 = icmp ne i32 %65, 0
  br i1 %66, label %67, label %80
67:
  %68 = load i8*, i8** %2
  %69 = load i32, i32* %4
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds i8, i8* %68, i64 %70
  %72 = load i8, i8* %71
  %73 = sext i8 %72 to i32
  %74 = call i32 @toupper(i32 %73)
  %75 = trunc i32 %74 to i8
  %76 = load i8*, i8** %2
  %77 = load i32, i32* %4
  %78 = sext i32 %77 to i64
  %79 = getelementptr inbounds i8, i8* %76, i64 %78
  store i8 %75, i8* %79
  br label %80
80:
  br label %81
81:
  %82 = load i32, i32* %4
  %83 = add nsw i32 %82, 1
  store i32 %83, i32* %4
  br label %48
84:
  ret void
}
declare i32 @tolower(i32)
declare i32 @toupper(i32)
declare i32 @isspace(i32)
