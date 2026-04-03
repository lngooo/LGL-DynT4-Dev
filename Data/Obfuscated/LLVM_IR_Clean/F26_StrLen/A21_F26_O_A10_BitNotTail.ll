define dso_local i32 @zLO(i8* %0) {
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
  br i1 %9, label %10, label %15
10:
  %11 = load i8*, i8** %3
  %12 = ptrtoint i8* %11 to i64
  %13 = add i64 %12, 1
  %14 = inttoptr i64 %13 to i8*
  store i8* %14, i8** %3
  br label %6
15:
  %16 = load i8*, i8** %3
  %17 = load i8*, i8** %2
  %18 = ptrtoint i8* %16 to i64
  %19 = ptrtoint i8* %17 to i64
  %20 = sub i64 %18, %19
  %21 = trunc i64 %20 to i32
  ret i32 %21
}
