define dso_local i32 @wY3(i8* %0, i8 signext %1) {
  %3 = alloca i8*
  %4 = alloca i8
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %3
  store i8 %1, i8* %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  br label %9
9:
  %10 = load i8*, i8** %3
  %11 = load i32, i32* %6
  %12 = sext i32 %11 to i64
  %13 = getelementptr inbounds i8, i8* %10, i64 %12
  %14 = load i8, i8* %13
  %15 = sext i8 %14 to i32
  %16 = icmp ne i32 %15, 0
  br i1 %16, label %19, label %17
17:
  br label %36
19:
  %20 = load i8*, i8** %3
  %21 = load i32, i32* %6
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i8, i8* %20, i64 %22
  %24 = load i8, i8* %23
  %25 = sext i8 %24 to i32
  %26 = load i8, i8* %4
  %27 = sext i8 %26 to i32
  %28 = icmp eq i32 %25, %27
  br i1 %28, label %29, label %32
29:
  %30 = load i32, i32* %5
  %31 = add nsw i32 %30, 1
  store i32 %31, i32* %5
  br label %32
32:
  br label %33
33:
  %34 = load i32, i32* %6
  %35 = add nsw i32 %34, 1
  store i32 %35, i32* %6
  br label %9
36:
  %37 = load i32, i32* %5
  ret i32 %37
}
