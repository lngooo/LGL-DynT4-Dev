define dso_local void @TrimSpace(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i8
  store i8* %0, i8** %2
  %8 = load i8*, i8** %2
  store i8* %8, i8** %3
  store i32 0, i32* %4
  store i32 0, i32* %5
  br label %11
11:
  %12 = load i8*, i8** %3
  %13 = load i32, i32* %5
  %14 = sext i32 %13 to i64
  %15 = getelementptr inbounds i8, i8* %12, i64 %14
  %16 = load i8, i8* %15
  %17 = icmp ne i8 %16, 0
  br i1 %17, label %20, label %18
18:
  br label %49
20:
  %21 = load i8*, i8** %3
  %22 = load i32, i32* %5
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i8, i8* %21, i64 %23
  %25 = load i8, i8* %24
  store i8 %25, i8* %6
  %26 = load i8, i8* %6
  %27 = sext i8 %26 to i32
  %28 = icmp ne i32 %27, 32
  br i1 %28, label %29, label %45
29:
  %30 = load i8, i8* %6
  %31 = sext i8 %30 to i32
  %32 = icmp ne i32 %31, 9
  br i1 %32, label %33, label %45
33:
  %34 = load i8, i8* %6
  %35 = sext i8 %34 to i32
  %36 = icmp ne i32 %35, 10
  br i1 %36, label %37, label %45
37:
  %38 = load i8, i8* %6
  %39 = load i8*, i8** %3
  %40 = load i32, i32* %4
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i8, i8* %39, i64 %41
  store i8 %38, i8* %42
  %43 = load i32, i32* %4
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %4
  br label %45
45:
  br label %46
46:
  %47 = load i32, i32* %5
  %48 = add nsw i32 %47, 1
  store i32 %48, i32* %5
  br label %11
49:
  %50 = load i8*, i8** %3
  %51 = load i32, i32* %4
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i8, i8* %50, i64 %52
  store i8 0, i8* %53
  ret void
}
