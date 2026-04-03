define dso_local i32 @StrLen(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  store i8* %0, i8** %2
  store volatile i32 0, i32* %3
  br label %5
5:
  %6 = load i8*, i8** %2
  %7 = load volatile i32, i32* %3
  %8 = sext i32 %7 to i64
  %9 = getelementptr inbounds i8, i8* %6, i64 %8
  %10 = load i8, i8* %9
  %11 = icmp ne i8 %10, 0
  br i1 %11, label %12, label %15
12:
  %13 = load volatile i32, i32* %3
  %14 = add nsw i32 %13, 1
  store volatile i32 %14, i32* %3
  br label %5
15:
  %16 = load volatile i32, i32* %3
  ret i32 %16
}
