define dso_local void @TrimSpace(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  store i32 42, i32* %5
  br label %9
9:
  %10 = load i8*, i8** %2
  %11 = load i32, i32* %3
  %12 = sext i32 %11 to i64
  %13 = getelementptr inbounds i8, i8* %10, i64 %12
  %14 = load i8, i8* %13
  %15 = icmp ne i8 %14, 0
  br i1 %15, label %16, label %48
16:
  %17 = load i32, i32* %5
  %18 = mul nsw i32 %17, 2
  %19 = srem i32 %18, 2
  %20 = icmp eq i32 %19, 0
  br i1 %20, label %21, label %44
21:
  %22 = load i8*, i8** %2
  %23 = load i32, i32* %3
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i8, i8* %22, i64 %24
  %26 = load i8, i8* %25
  %27 = zext i8 %26 to i32
  %28 = call i32 @isspace(i32 %27)
  %29 = icmp ne i32 %28, 0
  br i1 %29, label %41, label %30
30:
  %31 = load i8*, i8** %2
  %32 = load i32, i32* %3
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8, i8* %31, i64 %33
  %35 = load i8, i8* %34
  %36 = load i8*, i8** %2
  %37 = load i32, i32* %4
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* %4
  %39 = sext i32 %37 to i64
  %40 = getelementptr inbounds i8, i8* %36, i64 %39
  store i8 %35, i8* %40
  br label %41
41:
  %42 = load i32, i32* %3
  %43 = add nsw i32 %42, 1
  store i32 %43, i32* %3
  br label %47
44:
  %45 = load i32, i32* %3
  %46 = add nsw i32 %45, -1
  store i32 %46, i32* %3
  br label %47
47:
  br label %9
48:
  %49 = load i8*, i8** %2
  %50 = load i32, i32* %4
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i8, i8* %49, i64 %51
  store i8 0, i8* %52
  ret void
}
declare i32 @isspace(i32)
