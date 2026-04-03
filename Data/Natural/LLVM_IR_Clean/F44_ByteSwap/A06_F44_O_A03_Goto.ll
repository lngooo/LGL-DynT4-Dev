define dso_local i32 @ByteSwap(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  store i32 %0, i32* %2
  store i8* %9, i8** %4
  store i8* %11, i8** %5
  store i32 0, i32* %6
  br label %13
13:
  %14 = load i32, i32* %6
  %15 = icmp sge i32 %14, 4
  br i1 %15, label %16, label %17
16:
  br label %30
17:
  %18 = load i8*, i8** %4
  %19 = load i32, i32* %6
  %20 = sub nsw i32 3, %19
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i8, i8* %18, i64 %21
  %23 = load i8, i8* %22
  %24 = load i8*, i8** %5
  %25 = load i32, i32* %6
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i8, i8* %24, i64 %26
  store i8 %23, i8* %27
  %28 = load i32, i32* %6
  %29 = add nsw i32 %28, 1
  store i32 %29, i32* %6
  br label %13
30:
  %31 = load i32, i32* %3
  ret i32 %31
}
