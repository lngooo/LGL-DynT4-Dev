@.str = constant [3 x i8] c"%u\00"
define dso_local i32 @GrayCode(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %2
  %8 = load i32, i32* %2
  store i32 %8, i32* %3
  %10 = load i32, i32* %2
  %11 = lshr i32 %10, 1
  store i32 %11, i32* %4
  %13 = load i32, i32* %3
  %14 = and i32 %13, 0
  %15 = load i32, i32* %4
  %16 = and i32 %15, 0
  %17 = or i32 %14, %16
  store i32 %17, i32* %5
  %19 = load i32, i32* %3
  %20 = load i32, i32* %4
  %21 = xor i32 %19, %20
  %22 = load i32, i32* %5
  %23 = or i32 %21, %22
  store i32 %23, i32* %6
  %24 = load i32, i32* %6
  %25 = and i32 %24, -1
  ret i32 %25
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %7 = load i32, i32* %4
  %8 = icmp slt i32 %7, 2
  br i1 %8, label %9, label %10
9:
  store i32 0, i32* %3
  br label %21
10:
  %12 = load i8**, i8*** %5
  %13 = getelementptr inbounds i8*, i8** %12, i64 1
  %14 = load i8*, i8** %13
  %15 = call i64 @strtoul(i8* %14, i8** null, i32 10)
  %16 = trunc i64 %15 to i32
  store i32 %16, i32* %6
  %17 = load i32, i32* %6
  %18 = call i32 @GrayCode(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
