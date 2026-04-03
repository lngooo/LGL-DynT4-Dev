@.str = constant [3 x i8] c"%d\00"
define dso_local i32 @WYr(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %8 = load i32, i32* %3
  %9 = load i32, i32* %4
  %10 = add i32 %8, %9
  %11 = load i32, i32* %3
  %12 = load i32, i32* %4
  %13 = and i32 %11, %12
  %14 = mul i32 2, %13
  %15 = sub i32 %10, %14
  store i32 %15, i32* %5
  store i32 0, i32* %6
  br label %17
17:
  %18 = load i32, i32* %5
  %19 = icmp ne i32 %18, 0
  br i1 %19, label %20, label %27
20:
  %21 = load i32, i32* %5
  %22 = urem i32 %21, 2
  %23 = load i32, i32* %6
  %24 = add i32 %23, %22
  store i32 %24, i32* %6
  %25 = load i32, i32* %5
  %26 = udiv i32 %25, 2
  store i32 %26, i32* %5
  br label %17
27:
  %28 = load i32, i32* %6
  ret i32 %28
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
  %26 = call i32 @WYr(i32 %24, i32 %25)
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %26)
  store i32 0, i32* %3
  br label %30
30:
  %31 = load i32, i32* %3
  ret i32 %31
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
