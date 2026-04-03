define dso_local i32 @fGd8(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %5
5:
  %6 = load i8*, i8** %2
  %7 = load i32, i32* %3
  %8 = sext i32 %7 to i64
  %9 = getelementptr inbounds i8, i8* %6, i64 %8
  %10 = load i8, i8* %9
  %11 = sext i8 %10 to i32
  %12 = icmp ne i32 %11, 0
  br i1 %12, label %13, label %26
13:
  %14 = load i32, i32* %3
  %15 = load i32, i32* %3
  %16 = mul nsw i32 %14, %15
  %17 = add nsw i32 %16, 1
  %18 = icmp sgt i32 %17, 0
  br i1 %18, label %19, label %22
19:
  %20 = load i32, i32* %3
  %21 = add nsw i32 %20, 1
  store i32 %21, i32* %3
  br label %25
22:
  %23 = load i32, i32* %3
  %24 = add nsw i32 %23, -1
  store i32 %24, i32* %3
  br label %25
25:
  br label %5
26:
  %27 = load i32, i32* %3
  ret i32 %27
}
