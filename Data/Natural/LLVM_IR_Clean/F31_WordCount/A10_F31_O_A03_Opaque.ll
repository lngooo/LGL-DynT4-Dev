define dso_local i32 @WordCount(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 5, i32* %4
  store i32 10, i32* %5
  store i32 0, i32* %6
  br label %11
11:
  %12 = load i8*, i8** %2
  %13 = load i32, i32* %6
  %14 = sext i32 %13 to i64
  %15 = getelementptr inbounds i8, i8* %12, i64 %14
  %16 = load i8, i8* %15
  %17 = sext i8 %16 to i32
  %18 = icmp ne i32 %17, 0
  br i1 %18, label %21, label %19
19:
  br label %65
21:
  %22 = load i32, i32* %4
  %23 = load i32, i32* %5
  %24 = add nsw i32 %22, %23
  %25 = icmp eq i32 %24, 15
  br i1 %25, label %26, label %58
26:
  %27 = load i8*, i8** %2
  %28 = load i32, i32* %6
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i8, i8* %27, i64 %29
  %31 = load i8, i8* %30
  %32 = sext i8 %31 to i32
  %33 = call i32 @isspace(i32 %32)
  %34 = icmp ne i32 %33, 0
  br i1 %34, label %57, label %35
35:
  %36 = load i8*, i8** %2
  %37 = load i32, i32* %6
  %38 = add nsw i32 %37, 1
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8, i8* %36, i64 %39
  %41 = load i8, i8* %40
  %42 = sext i8 %41 to i32
  %43 = call i32 @isspace(i32 %42)
  %44 = icmp ne i32 %43, 0
  br i1 %44, label %54, label %45
45:
  %46 = load i8*, i8** %2
  %47 = load i32, i32* %6
  %48 = add nsw i32 %47, 1
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds i8, i8* %46, i64 %49
  %51 = load i8, i8* %50
  %52 = sext i8 %51 to i32
  %53 = icmp eq i32 %52, 0
  br i1 %53, label %54, label %57
54:
  %55 = load i32, i32* %3
  %56 = add nsw i32 %55, 1
  store i32 %56, i32* %3
  br label %57
57:
  br label %61
58:
  %59 = load i32, i32* %3
  %60 = add nsw i32 %59, -1
  store i32 %60, i32* %3
  br label %61
61:
  br label %62
62:
  %63 = load i32, i32* %6
  %64 = add nsw i32 %63, 1
  store i32 %64, i32* %6
  br label %11
65:
  %66 = load i32, i32* %3
  ret i32 %66
}
declare i32 @isspace(i32)
