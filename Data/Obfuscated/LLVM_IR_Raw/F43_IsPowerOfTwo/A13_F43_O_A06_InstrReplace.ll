@.str = constant [3 x i8] c"%d\00"
define dso_local i32 @hl(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %3
  store i32 -2147483648, i32* %4
  %7 = load i32, i32* %3
  %8 = icmp eq i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store i32 0, i32* %2
  store i32 1, i32* %5
  br label %24
10:
  %11 = load i32, i32* %3
  %12 = icmp ugt i32 %11, 0
  br i1 %12, label %13, label %21
13:
  %14 = load i32, i32* %4
  %15 = load i32, i32* %3
  %16 = udiv i32 %14, %15
  %17 = load i32, i32* %3
  %18 = mul i32 %16, %17
  %19 = load i32, i32* %4
  %20 = icmp eq i32 %18, %19
  br label %21
21:
  %22 = phi i1 [ false, %10 ], [ %20, %13 ]
  %23 = zext i1 %22 to i32
  store i32 %23, i32* %2
  store i32 1, i32* %5
  br label %24
24:
  %26 = load i32, i32* %2
  ret i32 %26
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
  %18 = call i32 @hl(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
