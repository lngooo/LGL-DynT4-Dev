define dso_local i32 @h(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i64
  %4 = alloca i32
  store i8* %0, i8** %2
  store i64 0, i64* %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i8*, i8** %2
  %9 = load i8, i8* %8
  %10 = icmp ne i8 %9, 0
  br i1 %10, label %11, label %29
11:
  %12 = load i8*, i8** %2
  %13 = load i8, i8* %12
  %14 = sext i8 %13 to i32
  %15 = call i32 @isspace(i32 %14)
  %16 = icmp ne i32 %15, 0
  br i1 %16, label %17, label %18
17:
  store i32 0, i32* %4
  br label %25
18:
  %19 = load i32, i32* %4
  %20 = icmp eq i32 %19, 0
  br i1 %20, label %21, label %24
21:
  store i32 1, i32* %4
  %22 = load i64, i64* %3
  %23 = add nsw i64 %22, 1
  store i64 %23, i64* %3
  br label %24
24:
  br label %25
25:
  br label %26
26:
  %27 = load i8*, i8** %2
  %28 = getelementptr inbounds i8, i8* %27, i32 1
  store i8* %28, i8** %2
  br label %7
29:
  %30 = load i64, i64* %3
  %31 = trunc i64 %30 to i32
  ret i32 %31
}
declare i32 @isspace(i32)
