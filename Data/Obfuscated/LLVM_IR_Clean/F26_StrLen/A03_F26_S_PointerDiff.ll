define dso_local i32 @uHIL(i8* %0) {
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
  br i1 %9, label %10, label %13
10:
  %11 = load i8*, i8** %3
  %12 = getelementptr inbounds i8, i8* %11, i32 1
  store i8* %12, i8** %3
  br label %6
13:
  %14 = load i8*, i8** %3
  %15 = load i8*, i8** %2
  %16 = ptrtoint i8* %14 to i64
  %17 = ptrtoint i8* %15 to i64
  %18 = sub i64 %16, %17
  %19 = trunc i64 %18 to i32
  ret i32 %19
}
