define dso_local i32 @StrLen(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %5
5:
  br label %6
6:
  %7 = load i8*, i8** %2
  %8 = load i32, i32* %3
  %9 = sext i32 %8 to i64
  %10 = getelementptr inbounds i8, i8* %7, i64 %9
  %11 = load i8, i8* %10
  %12 = sext i8 %11 to i32
  %13 = icmp eq i32 %12, 0
  br i1 %13, label %14, label %15
14:
  br label %18
15:
  %16 = load i32, i32* %3
  %17 = add nsw i32 %16, 1
  store i32 %17, i32* %3
  br label %5
18:
  %19 = load i32, i32* %3
  ret i32 %19
}
