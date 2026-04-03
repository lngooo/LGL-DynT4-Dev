define dso_local void @TitleCase(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i8* %0, i8** %2
  store i32 1, i32* %3
  store i32 0, i32* %4
  store i32 1, i32* %5
  br label %9
9:
  %10 = load i32, i32* %3
  %11 = icmp ne i32 %10, 0
  br i1 %11, label %12, label %71
12:
  %13 = load i32, i32* %3
  switch i32 %13, label %70 [
    i32 1, label %14
    i32 2, label %25
    i32 3, label %37
    i32 5, label %67
  ]
14:
  %15 = load i8*, i8** %2
  %16 = load i32, i32* %4
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds i8, i8* %15, i64 %17
  %19 = load i8, i8* %18
  %20 = sext i8 %19 to i32
  %21 = icmp eq i32 %20, 0
  br i1 %21, label %22, label %23
22:
  store i32 0, i32* %3
  br label %24
23:
  store i32 2, i32* %3
  br label %24
24:
  br label %70
25:
  %26 = load i8*, i8** %2
  %27 = load i32, i32* %4
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i8, i8* %26, i64 %28
  %30 = load i8, i8* %29
  %31 = sext i8 %30 to i32
  %32 = call i32 @isspace(i32 %31)
  %33 = icmp ne i32 %32, 0
  br i1 %33, label %34, label %35
34:
  store i32 1, i32* %5
  store i32 5, i32* %3
  br label %36
35:
  store i32 3, i32* %3
  br label %36
36:
  br label %70
37:
  %38 = load i32, i32* %5
  %39 = icmp ne i32 %38, 0
  br i1 %39, label %40, label %53
40:
  %41 = load i8*, i8** %2
  %42 = load i32, i32* %4
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i8, i8* %41, i64 %43
  %45 = load i8, i8* %44
  %46 = sext i8 %45 to i32
  %47 = call i32 @toupper(i32 %46)
  %48 = trunc i32 %47 to i8
  %49 = load i8*, i8** %2
  %50 = load i32, i32* %4
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i8, i8* %49, i64 %51
  store i8 %48, i8* %52
  store i32 0, i32* %5
  br label %66
53:
  %54 = load i8*, i8** %2
  %55 = load i32, i32* %4
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i8, i8* %54, i64 %56
  %58 = load i8, i8* %57
  %59 = sext i8 %58 to i32
  %60 = call i32 @tolower(i32 %59)
  %61 = trunc i32 %60 to i8
  %62 = load i8*, i8** %2
  %63 = load i32, i32* %4
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i8, i8* %62, i64 %64
  store i8 %61, i8* %65
  br label %66
66:
  store i32 5, i32* %3
  br label %70
67:
  %68 = load i32, i32* %4
  %69 = add nsw i32 %68, 1
  store i32 %69, i32* %4
  store i32 1, i32* %3
  br label %70
70:
  br label %9
71:
  ret void
}
declare i32 @isspace(i32)
declare i32 @toupper(i32)
declare i32 @tolower(i32)
