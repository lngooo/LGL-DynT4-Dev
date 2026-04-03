define dso_local i32 @StrCmp(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  store i32 -1, i32* %6
  br label %9
9:
  %10 = load i32, i32* %6
  %11 = add nsw i32 %10, 1
  store i32 %11, i32* %6
  %12 = load i8*, i8** %4
  %13 = load i32, i32* %6
  %14 = sext i32 %13 to i64
  %15 = getelementptr inbounds i8, i8* %12, i64 %14
  %16 = load i8, i8* %15
  %17 = sext i8 %16 to i32
  %18 = load i8*, i8** %5
  %19 = load i32, i32* %6
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds i8, i8* %18, i64 %20
  %22 = load i8, i8* %21
  %23 = sext i8 %22 to i32
  %24 = icmp ne i32 %17, %23
  br i1 %24, label %25, label %39
25:
  %26 = load i8*, i8** %4
  %27 = load i32, i32* %6
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i8, i8* %26, i64 %28
  %30 = load i8, i8* %29
  %31 = zext i8 %30 to i32
  %32 = load i8*, i8** %5
  %33 = load i32, i32* %6
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i8, i8* %32, i64 %34
  %36 = load i8, i8* %35
  %37 = zext i8 %36 to i32
  %38 = sub nsw i32 %31, %37
  store i32 %38, i32* %3
  store i32 1, i32* %7
  br label %49
39:
  br label %40
40:
  %41 = load i8*, i8** %4
  %42 = load i32, i32* %6
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i8, i8* %41, i64 %43
  %45 = load i8, i8* %44
  %46 = sext i8 %45 to i32
  %47 = icmp ne i32 %46, 0
  br i1 %47, label %9, label %48
48:
  store i32 0, i32* %3
  store i32 1, i32* %7
  br label %49
49:
  %51 = load i32, i32* %3
  ret i32 %51
}
