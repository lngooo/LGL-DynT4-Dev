@.str = constant [3 x i8] c"%d\00"
define dso_local i32 @IsPowerOfTwo(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp eq i32 %4, 0
  br i1 %5, label %6, label %7
6:
  store i32 0, i32* %2
  br label %19
7:
  br label %8
8:
  %9 = load i32, i32* %3
  %10 = urem i32 %9, 2
  %11 = icmp eq i32 %10, 0
  br i1 %11, label %12, label %15
12:
  %13 = load i32, i32* %3
  %14 = udiv i32 %13, 2
  store i32 %14, i32* %3
  br label %8
15:
  %16 = load i32, i32* %3
  %17 = icmp eq i32 %16, 1
  %18 = zext i1 %17 to i32
  store i32 %18, i32* %2
  br label %19
19:
  %20 = load i32, i32* %2
  ret i32 %20
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
  %18 = call i32 @IsPowerOfTwo(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
