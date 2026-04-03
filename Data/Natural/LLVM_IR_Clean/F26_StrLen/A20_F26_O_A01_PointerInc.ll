define dso_local i32 @StrLen(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %5
5:
  %6 = load i8*, i8** %2
  %7 = getelementptr inbounds i8, i8* %6, i32 1
  store i8* %7, i8** %2
  %8 = load i8, i8* %6
  %9 = icmp ne i8 %8, 0
  br i1 %9, label %10, label %13
10:
  %11 = load i32, i32* %3
  %12 = add nsw i32 %11, 1
  store i32 %12, i32* %3
  br label %5
13:
  %14 = load i32, i32* %3
  ret i32 %14
}
