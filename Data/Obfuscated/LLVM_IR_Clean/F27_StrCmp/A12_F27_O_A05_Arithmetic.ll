define dso_local i32 @e(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  br label %5
5:
  %6 = load i8*, i8** %3
  %7 = load i8, i8* %6
  %8 = sext i8 %7 to i32
  %9 = load i8*, i8** %4
  %10 = load i8, i8* %9
  %11 = sext i8 %10 to i32
  %12 = sub nsw i32 %8, %11
  %13 = icmp ne i32 %12, 0
  br i1 %13, label %19, label %14
14:
  %15 = load i8*, i8** %3
  %16 = load i8, i8* %15
  %17 = sext i8 %16 to i32
  %18 = icmp ne i32 %17, 0
  br label %19
19:
  %20 = phi i1 [ false, %5 ], [ %18, %14 ]
  br i1 %20, label %21, label %30
21:
  %22 = load i8*, i8** %3
  %23 = ptrtoint i8* %22 to i64
  %24 = add i64 %23, 1
  %25 = inttoptr i64 %24 to i8*
  store i8* %25, i8** %3
  %26 = load i8*, i8** %4
  %27 = ptrtoint i8* %26 to i64
  %28 = add i64 %27, 1
  %29 = inttoptr i64 %28 to i8*
  store i8* %29, i8** %4
  br label %5
30:
  %31 = load i8*, i8** %3
  %32 = load i8, i8* %31
  %33 = zext i8 %32 to i32
  %34 = load i8*, i8** %4
  %35 = load i8, i8* %34
  %36 = zext i8 %35 to i32
  %37 = sub nsw i32 %33, %36
  ret i32 %37
}
