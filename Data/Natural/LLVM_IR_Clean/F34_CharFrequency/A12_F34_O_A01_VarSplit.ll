define dso_local i32 @CharFrequency(i8* %0, i8 signext %1) {
  %3 = alloca i8*
  %4 = alloca i8
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %3
  store i8 %1, i8* %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  store i32 0, i32* %7
  br label %11
11:
  %12 = load i8*, i8** %3
  %13 = load i32, i32* %7
  %14 = sext i32 %13 to i64
  %15 = getelementptr inbounds i8, i8* %12, i64 %14
  %16 = load i8, i8* %15
  %17 = icmp ne i8 %16, 0
  br i1 %17, label %20, label %18
18:
  br label %45
20:
  %21 = load i8*, i8** %3
  %22 = load i32, i32* %7
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i8, i8* %21, i64 %23
  %25 = load i8, i8* %24
  %26 = sext i8 %25 to i32
  %27 = load i8, i8* %4
  %28 = sext i8 %27 to i32
  %29 = icmp eq i32 %26, %28
  br i1 %29, label %30, label %41
30:
  %31 = load i32, i32* %7
  %32 = srem i32 %31, 2
  %33 = icmp eq i32 %32, 0
  br i1 %33, label %34, label %37
34:
  %35 = load i32, i32* %5
  %36 = add nsw i32 %35, 1
  store i32 %36, i32* %5
  br label %40
37:
  %38 = load i32, i32* %6
  %39 = add nsw i32 %38, 1
  store i32 %39, i32* %6
  br label %40
40:
  br label %41
41:
  br label %42
42:
  %43 = load i32, i32* %7
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %7
  br label %11
45:
  %46 = load i32, i32* %5
  %47 = load i32, i32* %6
  %48 = add nsw i32 %46, %47
  ret i32 %48
}
