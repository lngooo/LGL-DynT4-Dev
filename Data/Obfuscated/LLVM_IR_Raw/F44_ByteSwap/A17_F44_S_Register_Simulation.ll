@.str = constant [4 x i8] c"%u\0A\00"
define dso_local i32 @GgZm7(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %2
  %11 = load i32, i32* %2
  %12 = lshr i32 %11, 0
  %13 = and i32 %12, 255
  store i32 %13, i32* %3
  %14 = load i32, i32* %2
  %15 = lshr i32 %14, 8
  %16 = and i32 %15, 255
  store i32 %16, i32* %4
  %17 = load i32, i32* %2
  %18 = lshr i32 %17, 16
  %19 = and i32 %18, 255
  store i32 %19, i32* %5
  %20 = load i32, i32* %2
  %21 = lshr i32 %20, 24
  %22 = and i32 %21, 255
  store i32 %22, i32* %6
  %23 = load i32, i32* %3
  %24 = shl i32 %23, 24
  %25 = load i32, i32* %4
  %26 = shl i32 %25, 16
  %27 = or i32 %24, %26
  %28 = load i32, i32* %5
  %29 = shl i32 %28, 8
  %30 = or i32 %27, %29
  %31 = load i32, i32* %6
  %32 = or i32 %30, %31
  ret i32 %32
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
  %18 = call i32 @GgZm7(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
