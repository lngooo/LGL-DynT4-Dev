define dso_local void @TitleCase(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i8* %0, i8** %2
  store i32 15, i32* %3
  %7 = load i32, i32* %3
  %8 = load i32, i32* %3
  %9 = mul nsw i32 %7, %8
  %10 = icmp sge i32 %9, 0
  br i1 %10, label %11, label %69
11:
  store i32 1, i32* %4
  store i32 0, i32* %5
  br label %14
14:
  %15 = load i8*, i8** %2
  %16 = load i32, i32* %5
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds i8, i8* %15, i64 %17
  %19 = load i8, i8* %18
  %20 = icmp ne i8 %19, 0
  br i1 %20, label %23, label %21
21:
  br label %67
23:
  %24 = load i8*, i8** %2
  %25 = load i32, i32* %5
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i8, i8* %24, i64 %26
  %28 = load i8, i8* %27
  %29 = sext i8 %28 to i32
  %30 = call i32 @isspace(i32 %29)
  %31 = icmp ne i32 %30, 0
  br i1 %31, label %32, label %33
32:
  store i32 1, i32* %4
  br label %63
33:
  %34 = load i32, i32* %4
  %35 = icmp ne i32 %34, 0
  br i1 %35, label %36, label %49
36:
  %37 = load i8*, i8** %2
  %38 = load i32, i32* %5
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8, i8* %37, i64 %39
  %41 = load i8, i8* %40
  %42 = sext i8 %41 to i32
  %43 = call i32 @toupper(i32 %42)
  %44 = trunc i32 %43 to i8
  %45 = load i8*, i8** %2
  %46 = load i32, i32* %5
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i8, i8* %45, i64 %47
  store i8 %44, i8* %48
  store i32 0, i32* %4
  br label %62
49:
  %50 = load i8*, i8** %2
  %51 = load i32, i32* %5
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i8, i8* %50, i64 %52
  %54 = load i8, i8* %53
  %55 = sext i8 %54 to i32
  %56 = call i32 @tolower(i32 %55)
  %57 = trunc i32 %56 to i8
  %58 = load i8*, i8** %2
  %59 = load i32, i32* %5
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i8, i8* %58, i64 %60
  store i8 %57, i8* %61
  br label %62
62:
  br label %63
63:
  br label %64
64:
  %65 = load i32, i32* %5
  %66 = add nsw i32 %65, 1
  store i32 %66, i32* %5
  br label %14
67:
  br label %69
69:
  ret void
}
declare i32 @isspace(i32)
declare i32 @toupper(i32)
declare i32 @tolower(i32)
