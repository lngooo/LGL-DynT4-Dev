@WAAW = internal global i32 0
define dso_local i32 @w8(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i8*
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %7 = load i32, i32* @WAAW
  %8 = add nsw i32 %7, 1
  store i32 %8, i32* @WAAW
  %9 = load i8*, i8** %5
  %10 = call i64 @strlen(i8* %9)
  %11 = icmp eq i64 %10, 0
  br i1 %11, label %12, label %13
12:
  store i32 0, i32* %3
  br label %31
13:
  %15 = load i8*, i8** %4
  %16 = load i8*, i8** %5
  %17 = call i8* @strstr(i8* %15, i8* %16)
  store i8* %17, i8** %6
  %18 = load i8*, i8** %6
  %19 = icmp ne i8* %18, null
  br i1 %19, label %20, label %27
20:
  %21 = load i8*, i8** %6
  %22 = load i8*, i8** %4
  %23 = ptrtoint i8* %21 to i64
  %24 = ptrtoint i8* %22 to i64
  %25 = sub i64 %23, %24
  %26 = trunc i64 %25 to i32
  br label %28
27:
  br label %28
28:
  %29 = phi i32 [ %26, %20 ], [ -1, %27 ]
  store i32 %29, i32* %3
  br label %31
31:
  %32 = load i32, i32* %3
  ret i32 %32
}
declare i64 @strlen(i8*)
declare i8* @strstr(i8*, i8*)
