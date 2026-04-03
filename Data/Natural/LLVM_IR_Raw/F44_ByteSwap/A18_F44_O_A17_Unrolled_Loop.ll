@.str = constant [4 x i8] c"%u\0A\00"
define dso_local i32 @ByteSwap(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  %7 = load i32, i32* %2
  %8 = lshr i32 %7, 0
  %9 = and i32 %8, 255
  store i32 %9, i32* %4
  %10 = load i32, i32* %4
  %11 = shl i32 %10, 24
  %12 = load i32, i32* %3
  %13 = or i32 %12, %11
  store i32 %13, i32* %3
  %14 = load i32, i32* %2
  %15 = lshr i32 %14, 8
  %16 = and i32 %15, 255
  store i32 %16, i32* %4
  %17 = load i32, i32* %4
  %18 = shl i32 %17, 16
  %19 = load i32, i32* %3
  %20 = or i32 %19, %18
  store i32 %20, i32* %3
  %21 = load i32, i32* %2
  %22 = lshr i32 %21, 16
  %23 = and i32 %22, 255
  store i32 %23, i32* %4
  %24 = load i32, i32* %4
  %25 = shl i32 %24, 8
  %26 = load i32, i32* %3
  %27 = or i32 %26, %25
  store i32 %27, i32* %3
  %28 = load i32, i32* %2
  %29 = lshr i32 %28, 24
  %30 = and i32 %29, 255
  store i32 %30, i32* %4
  %31 = load i32, i32* %4
  %32 = shl i32 %31, 0
  %33 = load i32, i32* %3
  %34 = or i32 %33, %32
  store i32 %34, i32* %3
  %35 = load i32, i32* %3
  ret i32 %35
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
  %18 = call i32 @ByteSwap(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
