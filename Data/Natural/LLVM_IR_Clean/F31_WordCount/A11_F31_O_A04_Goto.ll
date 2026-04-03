define dso_local i32 @WordCount(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %5
5:
  %6 = load i8*, i8** %2
  %7 = load i8, i8* %6
  %8 = icmp ne i8 %7, 0
  br i1 %8, label %10, label %9
9:
  br label %48
10:
  br label %11
11:
  %12 = load i8*, i8** %2
  %13 = load i8, i8* %12
  %14 = sext i8 %13 to i32
  %15 = icmp ne i32 %14, 0
  br i1 %15, label %16, label %25
16:
  %17 = load i8*, i8** %2
  %18 = load i8, i8* %17
  %19 = sext i8 %18 to i32
  %20 = call i32 @isspace(i32 %19)
  %21 = icmp ne i32 %20, 0
  br i1 %21, label %22, label %25
22:
  %23 = load i8*, i8** %2
  %24 = getelementptr inbounds i8, i8* %23, i32 1
  store i8* %24, i8** %2
  br label %11
25:
  %26 = load i8*, i8** %2
  %27 = load i8, i8* %26
  %28 = icmp ne i8 %27, 0
  br i1 %28, label %30, label %29
29:
  br label %48
30:
  %31 = load i32, i32* %3
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %3
  br label %33
33:
  %34 = load i8*, i8** %2
  %35 = load i8, i8* %34
  %36 = sext i8 %35 to i32
  %37 = icmp ne i32 %36, 0
  br i1 %37, label %38, label %47
38:
  %39 = load i8*, i8** %2
  %40 = load i8, i8* %39
  %41 = sext i8 %40 to i32
  %42 = call i32 @isspace(i32 %41)
  %43 = icmp ne i32 %42, 0
  br i1 %43, label %47, label %44
44:
  %45 = load i8*, i8** %2
  %46 = getelementptr inbounds i8, i8* %45, i32 1
  store i8* %46, i8** %2
  br label %33
47:
  br label %5
48:
  %49 = load i32, i32* %3
  ret i32 %49
}
declare i32 @isspace(i32)
