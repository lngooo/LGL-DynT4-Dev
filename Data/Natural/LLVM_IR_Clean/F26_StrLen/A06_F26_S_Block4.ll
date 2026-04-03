define dso_local i32 @StrLen(i8* %0) {
  %2 = alloca i32
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  store i8* %0, i8** %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i8*, i8** %3
  %9 = getelementptr inbounds i8, i8* %8, i64 0
  %10 = load i8, i8* %9
  %11 = sext i8 %10 to i32
  %12 = icmp eq i32 %11, 0
  br i1 %12, label %13, label %15
13:
  %14 = load i32, i32* %4
  store i32 %14, i32* %2
  store i32 1, i32* %5
  br label %47
15:
  %16 = load i8*, i8** %3
  %17 = getelementptr inbounds i8, i8* %16, i64 1
  %18 = load i8, i8* %17
  %19 = sext i8 %18 to i32
  %20 = icmp eq i32 %19, 0
  br i1 %20, label %21, label %24
21:
  %22 = load i32, i32* %4
  %23 = add nsw i32 %22, 1
  store i32 %23, i32* %2
  store i32 1, i32* %5
  br label %47
24:
  %25 = load i8*, i8** %3
  %26 = getelementptr inbounds i8, i8* %25, i64 2
  %27 = load i8, i8* %26
  %28 = sext i8 %27 to i32
  %29 = icmp eq i32 %28, 0
  br i1 %29, label %30, label %33
30:
  %31 = load i32, i32* %4
  %32 = add nsw i32 %31, 2
  store i32 %32, i32* %2
  store i32 1, i32* %5
  br label %47
33:
  %34 = load i8*, i8** %3
  %35 = getelementptr inbounds i8, i8* %34, i64 3
  %36 = load i8, i8* %35
  %37 = sext i8 %36 to i32
  %38 = icmp eq i32 %37, 0
  br i1 %38, label %39, label %42
39:
  %40 = load i32, i32* %4
  %41 = add nsw i32 %40, 3
  store i32 %41, i32* %2
  store i32 1, i32* %5
  br label %47
42:
  %43 = load i8*, i8** %3
  %44 = getelementptr inbounds i8, i8* %43, i64 4
  store i8* %44, i8** %3
  %45 = load i32, i32* %4
  %46 = add nsw i32 %45, 4
  store i32 %46, i32* %4
  br label %7
47:
  %49 = load i32, i32* %2
  ret i32 %49
}
