define dso_local i32 @Q6bn(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i8*
  store i8* %0, i8** %2
  %5 = load i8*, i8** %2
  store i8* %5, i8** %3
  br label %6
6:
  %7 = load i8*, i8** %3
  %8 = load i8, i8* %7
  %9 = zext i8 %8 to i32
  %10 = xor i32 %9, -1
  %11 = icmp ne i32 %10, -1
  br i1 %11, label %12, label %17
12:
  %13 = load i8*, i8** %3
  %14 = ptrtoint i8* %13 to i64
  %15 = add i64 %14, 1
  %16 = inttoptr i64 %15 to i8*
  store i8* %16, i8** %3
  br label %6
17:
  %18 = load i8*, i8** %3
  %19 = load i8*, i8** %2
  %20 = ptrtoint i8* %18 to i64
  %21 = ptrtoint i8* %19 to i64
  %22 = sub i64 %20, %21
  %23 = trunc i64 %22 to i32
  ret i32 %23
}
