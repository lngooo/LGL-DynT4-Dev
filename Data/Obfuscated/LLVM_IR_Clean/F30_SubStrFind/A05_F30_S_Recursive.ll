define dso_local i32 @I(i8* %0, i8* %1, i32 %2, i32 %3) {
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i8*
  %8 = alloca i32
  %9 = alloca i32
  store i8* %0, i8** %6
  store i8* %1, i8** %7
  store i32 %2, i32* %8
  store i32 %3, i32* %9
  %10 = load i8*, i8** %6
  %11 = load i8, i8* %10
  %12 = sext i8 %11 to i32
  %13 = icmp eq i32 %12, 0
  br i1 %13, label %14, label %15
14:
  store i32 -1, i32* %5
  br label %32
15:
  %16 = load i8*, i8** %6
  %17 = load i8*, i8** %7
  %18 = load i32, i32* %9
  %19 = sext i32 %18 to i64
  %20 = call i32 @strncmp(i8* %16, i8* %17, i64 %19)
  %21 = icmp eq i32 %20, 0
  br i1 %21, label %22, label %24
22:
  %23 = load i32, i32* %8
  store i32 %23, i32* %5
  br label %32
24:
  %25 = load i8*, i8** %6
  %26 = getelementptr inbounds i8, i8* %25, i64 1
  %27 = load i8*, i8** %7
  %28 = load i32, i32* %8
  %29 = add nsw i32 %28, 1
  %30 = load i32, i32* %9
  %31 = call i32 @I(i8* %26, i8* %27, i32 %29, i32 %30)
  store i32 %31, i32* %5
  br label %32
32:
  %33 = load i32, i32* %5
  ret i32 %33
}
declare i32 @strncmp(i8*, i8*, i64)
define dso_local i32 @j3(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %9 = load i8*, i8** %5
  %10 = call i64 @strlen(i8* %9)
  %11 = trunc i64 %10 to i32
  store i32 %11, i32* %6
  %12 = load i32, i32* %6
  %13 = icmp eq i32 %12, 0
  br i1 %13, label %14, label %15
14:
  store i32 0, i32* %3
  store i32 1, i32* %7
  br label %20
15:
  %16 = load i8*, i8** %4
  %17 = load i8*, i8** %5
  %18 = load i32, i32* %6
  %19 = call i32 @I(i8* %16, i8* %17, i32 0, i32 %18)
  store i32 %19, i32* %3
  store i32 1, i32* %7
  br label %20
20:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strlen(i8*)
