@LOOKUP = internal constant [16 x i32] [i32 0, i32 1, i32 1, i32 2, i32 1, i32 2, i32 2, i32 3, i32 1, i32 2, i32 2, i32 3, i32 2, i32 3, i32 3, i32 4]
@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @BitCount(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i32, i32* %4
  %9 = icmp slt i32 %8, 8
  br i1 %9, label %12, label %10
10:
  br label %25
12:
  %13 = load i32, i32* %2
  %14 = and i32 %13, 15
  %15 = zext i32 %14 to i64
  %16 = getelementptr inbounds [16 x i32], [16 x i32]* @LOOKUP, i64 0, i64 %15
  %17 = load i32, i32* %16
  %18 = load i32, i32* %3
  %19 = add nsw i32 %18, %17
  store i32 %19, i32* %3
  %20 = load i32, i32* %2
  %21 = lshr i32 %20, 4
  store i32 %21, i32* %2
  br label %22
22:
  %23 = load i32, i32* %4
  %24 = add nsw i32 %23, 1
  store i32 %24, i32* %4
  br label %7
25:
  %26 = load i32, i32* %3
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
  %18 = call i32 @BitCount(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
