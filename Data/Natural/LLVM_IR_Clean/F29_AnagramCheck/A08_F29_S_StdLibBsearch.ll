define dso_local i32 @cmp(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  %5 = load i8*, i8** %3
  %6 = load i8, i8* %5
  %7 = sext i8 %6 to i32
  %8 = load i8*, i8** %4
  %9 = load i8, i8* %8
  %10 = sext i8 %9 to i32
  %11 = sub nsw i32 %7, %10
  ret i32 %11
}
define dso_local i32 @AnagramCheck(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %10 = load i8*, i8** %4
  %11 = call i64 @strlen(i8* %10)
  %12 = trunc i64 %11 to i32
  store i32 %12, i32* %6
  %14 = load i8*, i8** %5
  %15 = call i64 @strlen(i8* %14)
  %16 = trunc i64 %15 to i32
  store i32 %16, i32* %7
  %17 = load i32, i32* %6
  %18 = load i32, i32* %7
  %19 = icmp ne i32 %17, %18
  br i1 %19, label %20, label %21
20:
  store i32 0, i32* %3
  store i32 1, i32* %8
  br label %35
21:
  %22 = load i8*, i8** %4
  %23 = load i32, i32* %6
  %24 = sext i32 %23 to i64
  call void @qsort(i8* %22, i64 %24, i64 1, i32 (i8*, i8*)* @cmp)
  %25 = load i8*, i8** %5
  %26 = load i32, i32* %7
  %27 = sext i32 %26 to i64
  call void @qsort(i8* %25, i64 %27, i64 1, i32 (i8*, i8*)* @cmp)
  %28 = load i8*, i8** %4
  %29 = load i8*, i8** %5
  %30 = load i32, i32* %6
  %31 = sext i32 %30 to i64
  %32 = call i32 @memcmp(i8* %28, i8* %29, i64 %31)
  %33 = icmp eq i32 %32, 0
  %34 = zext i1 %33 to i32
  store i32 %34, i32* %3
  store i32 1, i32* %8
  br label %35
35:
  %38 = load i32, i32* %3
  ret i32 %38
}
declare i64 @strlen(i8*)
declare void @qsort(i8*, i64, i64, i32 (i8*, i8*)*)
declare i32 @memcmp(i8*, i8*, i64)
