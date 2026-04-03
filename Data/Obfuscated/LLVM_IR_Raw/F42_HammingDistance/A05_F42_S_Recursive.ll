@.str = constant [3 x i8] c"%d\00"
define dso_local i32 @Xh(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  %6 = load i32, i32* %4
  %7 = icmp eq i32 %6, 0
  br i1 %7, label %8, label %12
8:
  %9 = load i32, i32* %5
  %10 = icmp eq i32 %9, 0
  br i1 %10, label %11, label %12
11:
  store i32 0, i32* %3
  br label %25
12:
  %13 = load i32, i32* %4
  %14 = and i32 %13, 1
  %15 = load i32, i32* %5
  %16 = and i32 %15, 1
  %17 = icmp ne i32 %14, %16
  %18 = zext i1 %17 to i32
  %19 = load i32, i32* %4
  %20 = lshr i32 %19, 1
  %21 = load i32, i32* %5
  %22 = lshr i32 %21, 1
  %23 = call i32 @Xh(i32 %20, i32 %22)
  %24 = add nsw i32 %18, %23
  store i32 %24, i32* %3
  br label %25
25:
  %26 = load i32, i32* %3
  ret i32 %26
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %8 = load i32, i32* %4
  %9 = icmp slt i32 %8, 3
  br i1 %9, label %10, label %11
10:
  store i32 0, i32* %3
  br label %30
11:
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 1
  %15 = load i8*, i8** %14
  %16 = call i64 @strtoul(i8* %15, i8** null, i32 10)
  %17 = trunc i64 %16 to i32
  store i32 %17, i32* %6
  %19 = load i8**, i8*** %5
  %20 = getelementptr inbounds i8*, i8** %19, i64 2
  %21 = load i8*, i8** %20
  %22 = call i64 @strtoul(i8* %21, i8** null, i32 10)
  %23 = trunc i64 %22 to i32
  store i32 %23, i32* %7
  %24 = load i32, i32* %6
  %25 = load i32, i32* %7
  %26 = call i32 @Xh(i32 %24, i32 %25)
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %26)
  store i32 0, i32* %3
  br label %30
30:
  %31 = load i32, i32* %3
  ret i32 %31
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
