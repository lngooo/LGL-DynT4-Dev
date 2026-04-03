define dso_local void @TitleCase(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i8* %0, i8** %2
  store i32 42, i32* %3
  %7 = load i32, i32* %3
  %8 = icmp slt i32 %7, 10
  br i1 %8, label %9, label %12
9:
  %10 = load i8*, i8** %2
  %11 = getelementptr inbounds i8, i8* %10, i64 0
  store i8 90, i8* %11
  br label %66
12:
  store i32 1, i32* %4
  store i32 0, i32* %5
  br label %15
15:
  %16 = load i8*, i8** %2
  %17 = load i32, i32* %5
  %18 = sext i32 %17 to i64
  %19 = getelementptr inbounds i8, i8* %16, i64 %18
  %20 = load i8, i8* %19
  %21 = icmp ne i8 %20, 0
  br i1 %21, label %24, label %22
22:
  br label %64
24:
  %25 = load i8*, i8** %2
  %26 = load i32, i32* %5
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i8, i8* %25, i64 %27
  %29 = load i8, i8* %28
  %30 = sext i8 %29 to i32
  %31 = call i32 @isspace(i32 %30)
  %32 = icmp ne i32 %31, 0
  br i1 %32, label %33, label %34
33:
  store i32 1, i32* %4
  br label %60
34:
  %35 = load i32, i32* %4
  %36 = icmp ne i32 %35, 0
  br i1 %36, label %37, label %45
37:
  %38 = load i8*, i8** %2
  %39 = load i32, i32* %5
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8, i8* %38, i64 %40
  %42 = load i8, i8* %41
  %43 = sext i8 %42 to i32
  %44 = call i32 @toupper(i32 %43)
  br label %53
45:
  %46 = load i8*, i8** %2
  %47 = load i32, i32* %5
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i8, i8* %46, i64 %48
  %50 = load i8, i8* %49
  %51 = sext i8 %50 to i32
  %52 = call i32 @tolower(i32 %51)
  br label %53
53:
  %54 = phi i32 [ %44, %37 ], [ %52, %45 ]
  %55 = trunc i32 %54 to i8
  %56 = load i8*, i8** %2
  %57 = load i32, i32* %5
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i8, i8* %56, i64 %58
  store i8 %55, i8* %59
  store i32 0, i32* %4
  br label %60
60:
  br label %61
61:
  %62 = load i32, i32* %5
  %63 = add nsw i32 %62, 1
  store i32 %63, i32* %5
  br label %15
64:
  br label %66
66:
  ret void
}
declare i32 @isspace(i32)
declare i32 @toupper(i32)
declare i32 @tolower(i32)
