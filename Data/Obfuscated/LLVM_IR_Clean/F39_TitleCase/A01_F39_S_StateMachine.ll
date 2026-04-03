define dso_local void @dRKS7(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  store i8* %0, i8** %2
  store i32 1, i32* %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i8*, i8** %2
  %9 = load i32, i32* %4
  %10 = sext i32 %9 to i64
  %11 = getelementptr inbounds i8, i8* %8, i64 %10
  %12 = load i8, i8* %11
  %13 = sext i8 %12 to i32
  %14 = icmp ne i32 %13, 0
  br i1 %14, label %17, label %15
15:
  br label %61
17:
  %18 = load i8*, i8** %2
  %19 = load i32, i32* %4
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds i8, i8* %18, i64 %20
  %22 = load i8, i8* %21
  %23 = sext i8 %22 to i32
  %24 = call i32 @isspace(i32 %23)
  %25 = icmp ne i32 %24, 0
  br i1 %25, label %26, label %27
26:
  store i32 1, i32* %3
  br label %57
27:
  %28 = load i32, i32* %3
  %29 = icmp ne i32 %28, 0
  br i1 %29, label %30, label %43
30:
  %31 = load i8*, i8** %2
  %32 = load i32, i32* %4
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8, i8* %31, i64 %33
  %35 = load i8, i8* %34
  %36 = sext i8 %35 to i32
  %37 = call i32 @toupper(i32 %36)
  %38 = trunc i32 %37 to i8
  %39 = load i8*, i8** %2
  %40 = load i32, i32* %4
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i8, i8* %39, i64 %41
  store i8 %38, i8* %42
  store i32 0, i32* %3
  br label %56
43:
  %44 = load i8*, i8** %2
  %45 = load i32, i32* %4
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i8, i8* %44, i64 %46
  %48 = load i8, i8* %47
  %49 = sext i8 %48 to i32
  %50 = call i32 @tolower(i32 %49)
  %51 = trunc i32 %50 to i8
  %52 = load i8*, i8** %2
  %53 = load i32, i32* %4
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i8, i8* %52, i64 %54
  store i8 %51, i8* %55
  br label %56
56:
  br label %57
57:
  br label %58
58:
  %59 = load i32, i32* %4
  %60 = add nsw i32 %59, 1
  store i32 %60, i32* %4
  br label %7
61:
  ret void
}
declare i32 @isspace(i32)
declare i32 @toupper(i32)
declare i32 @tolower(i32)
