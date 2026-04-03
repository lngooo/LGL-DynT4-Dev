define dso_local i32 @cRYj(i8* %0, i8 signext %1) {
  %3 = alloca i8*
  %4 = alloca i8
  %5 = alloca [1 x i8]
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %3
  store i8 %1, i8* %4
  %9 = getelementptr inbounds [1 x i8], [1 x i8]* %5, i64 0, i64 0
  %10 = load i8, i8* %4
  store i8 %10, i8* %9
  store i32 0, i32* %6
  store i32 0, i32* %7
  br label %13
13:
  %14 = load i8*, i8** %3
  %15 = load i32, i32* %7
  %16 = sext i32 %15 to i64
  %17 = getelementptr inbounds i8, i8* %14, i64 %16
  %18 = load i8, i8* %17
  %19 = icmp ne i8 %18, 0
  br i1 %19, label %22, label %20
20:
  br label %40
22:
  %23 = load i8*, i8** %3
  %24 = load i32, i32* %7
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i8, i8* %23, i64 %25
  %27 = load i8, i8* %26
  %28 = sext i8 %27 to i32
  %29 = getelementptr inbounds [1 x i8], [1 x i8]* %5, i64 0, i64 0
  %30 = load i8, i8* %29
  %31 = sext i8 %30 to i32
  %32 = icmp eq i32 %28, %31
  br i1 %32, label %33, label %36
33:
  %34 = load i32, i32* %6
  %35 = add nsw i32 %34, 1
  store i32 %35, i32* %6
  br label %36
36:
  br label %37
37:
  %38 = load i32, i32* %7
  %39 = add nsw i32 %38, 1
  store i32 %39, i32* %7
  br label %13
40:
  %41 = load i32, i32* %6
  ret i32 %41
}
