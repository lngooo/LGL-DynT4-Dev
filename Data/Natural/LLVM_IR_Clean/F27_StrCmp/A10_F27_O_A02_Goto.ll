define dso_local i32 @StrCmp(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  br label %7
7:
  %8 = load i8*, i8** %3
  %9 = load i32, i32* %5
  %10 = sext i32 %9 to i64
  %11 = getelementptr inbounds i8, i8* %8, i64 %10
  %12 = load i8, i8* %11
  %13 = sext i8 %12 to i32
  %14 = icmp eq i32 %13, 0
  br i1 %14, label %29, label %15
15:
  %16 = load i8*, i8** %3
  %17 = load i32, i32* %5
  %18 = sext i32 %17 to i64
  %19 = getelementptr inbounds i8, i8* %16, i64 %18
  %20 = load i8, i8* %19
  %21 = sext i8 %20 to i32
  %22 = load i8*, i8** %4
  %23 = load i32, i32* %5
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i8, i8* %22, i64 %24
  %26 = load i8, i8* %25
  %27 = sext i8 %26 to i32
  %28 = icmp ne i32 %21, %27
  br i1 %28, label %29, label %30
29:
  br label %33
30:
  %31 = load i32, i32* %5
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %5
  br label %7
33:
  %34 = load i8*, i8** %3
  %35 = load i32, i32* %5
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i8, i8* %34, i64 %36
  %38 = load i8, i8* %37
  %39 = zext i8 %38 to i32
  %40 = load i8*, i8** %4
  %41 = load i32, i32* %5
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %40, i64 %42
  %44 = load i8, i8* %43
  %45 = zext i8 %44 to i32
  %46 = sub nsw i32 %39, %45
  ret i32 %46
}
