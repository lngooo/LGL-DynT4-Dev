define dso_local i32 @StrLen(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %5
5:
  %6 = load i8*, i8** %2
  %7 = load i8, i8* %6
  %8 = sext i8 %7 to i32
  %9 = icmp eq i32 %8, 0
  br i1 %9, label %10, label %11
10:
  br label %16
11:
  %12 = load i8*, i8** %2
  %13 = getelementptr inbounds i8, i8* %12, i32 1
  store i8* %13, i8** %2
  %14 = load i32, i32* %3
  %15 = add nsw i32 %14, 1
  store i32 %15, i32* %3
  br label %5
16:
  %17 = load i32, i32* %3
  ret i32 %17
}
