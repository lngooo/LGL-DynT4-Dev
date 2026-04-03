define dso_local i32 @StrLen(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i8*
  store i8* %0, i8** %2
  %5 = load i8*, i8** %2
  store i8* %5, i8** %3
  br label %6
6:
  %7 = load i8*, i8** %3
  %8 = load i8, i8* %7
  %9 = icmp ne i8 %8, 0
  br i1 %9, label %10, label %14
10:
  br label %11
11:
  %12 = load i8*, i8** %3
  %13 = getelementptr inbounds i8, i8* %12, i32 1
  store i8* %13, i8** %3
  br label %6
14:
  %15 = load i8*, i8** %3
  %16 = load i8*, i8** %2
  %17 = ptrtoint i8* %15 to i64
  %18 = ptrtoint i8* %16 to i64
  %19 = sub i64 %17, %18
  %20 = trunc i64 %19 to i32
  ret i32 %20
}
