define dso_local i32 @WordCount(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
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
  br label %52
17:
  %18 = load i8*, i8** %2
  %19 = load i32, i32* %4
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds i8, i8* %18, i64 %20
  %22 = load i8, i8* %21
  %23 = sext i8 %22 to i32
  %24 = call i32 @isspace(i32 %23)
  %25 = icmp ne i32 %24, 0
  br i1 %25, label %48, label %26
26:
  %27 = load i8*, i8** %2
  %28 = load i32, i32* %4
  %29 = add nsw i32 %28, 1
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i8, i8* %27, i64 %30
  %32 = load i8, i8* %31
  %33 = sext i8 %32 to i32
  %34 = call i32 @isspace(i32 %33)
  %35 = icmp ne i32 %34, 0
  br i1 %35, label %45, label %36
36:
  %37 = load i8*, i8** %2
  %38 = load i32, i32* %4
  %39 = add nsw i32 %38, 1
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8, i8* %37, i64 %40
  %42 = load i8, i8* %41
  %43 = sext i8 %42 to i32
  %44 = icmp eq i32 %43, 0
  br i1 %44, label %45, label %48
45:
  %46 = load i32, i32* %3
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %3
  br label %48
48:
  br label %49
49:
  %50 = load i32, i32* %4
  %51 = add nsw i32 %50, 1
  store i32 %51, i32* %4
  br label %7
52:
  %53 = load i32, i32* %3
  ret i32 %53
}
declare i32 @isspace(i32)
