define dso_local i32 @eH6(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %5
5:
  %6 = load i8*, i8** %2
  %7 = load i8, i8* %6
  %8 = icmp ne i8 %7, 0
  br i1 %8, label %10, label %9
9:
  br label %16
10:
  br label %11
11:
  %12 = load i32, i32* %3
  %13 = add nsw i32 %12, 1
  store i32 %13, i32* %3
  %14 = load i8*, i8** %2
  %15 = getelementptr inbounds i8, i8* %14, i32 1
  store i8* %15, i8** %2
  br label %5
16:
  %17 = load i32, i32* %3
  ret i32 %17
}
