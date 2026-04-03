define dso_local void @sqWE(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i64
  %4 = alloca i64
  store i8* %0, i8** %2
  store i64 0, i64* %3
  store i64 0, i64* %4
  br label %7
7:
  %8 = load i8*, i8** %2
  %9 = load i64, i64* %3
  %10 = getelementptr inbounds i8, i8* %8, i64 %9
  %11 = load i8, i8* %10
  %12 = sext i8 %11 to i32
  %13 = icmp ne i32 %12, 0
  br i1 %13, label %14, label %35
14:
  %15 = load i8*, i8** %2
  %16 = load i64, i64* %3
  %17 = getelementptr inbounds i8, i8* %15, i64 %16
  %18 = load i8, i8* %17
  %19 = zext i8 %18 to i32
  %20 = call i32 @isspace(i32 %19)
  %21 = icmp ne i32 %20, 0
  br i1 %21, label %32, label %22
22:
  %23 = load i8*, i8** %2
  %24 = load i64, i64* %3
  %25 = getelementptr inbounds i8, i8* %23, i64 %24
  %26 = load i8, i8* %25
  %27 = load i8*, i8** %2
  %28 = load i64, i64* %4
  %29 = getelementptr inbounds i8, i8* %27, i64 %28
  store i8 %26, i8* %29
  %30 = load i64, i64* %4
  %31 = add nsw i64 %30, 1
  store i64 %31, i64* %4
  br label %32
32:
  %33 = load i64, i64* %3
  %34 = add nsw i64 %33, 1
  store i64 %34, i64* %3
  br label %7
35:
  %36 = load i8*, i8** %2
  %37 = load i64, i64* %4
  %38 = getelementptr inbounds i8, i8* %36, i64 %37
  store i8 0, i8* %38
  ret void
}
declare i32 @isspace(i32)
