@.str = constant [4 x i8] c"%u\0A\00"
define dso_local i32 @rs(i32 %0) {
  %2 = alloca i32
  %3 = alloca i64
  %4 = alloca i64
  store i32 %0, i32* %2
  %6 = load i32, i32* %2
  %7 = zext i32 %6 to i64
  store i64 %7, i64* %3
  store i64 0, i64* %4
  %9 = load i64, i64* %3
  %10 = and i64 %9, 255
  %11 = shl i64 %10, 24
  %12 = load i64, i64* %4
  %13 = or i64 %12, %11
  store i64 %13, i64* %4
  %14 = load i64, i64* %3
  %15 = and i64 %14, 65280
  %16 = shl i64 %15, 8
  %17 = load i64, i64* %4
  %18 = or i64 %17, %16
  store i64 %18, i64* %4
  %19 = load i64, i64* %3
  %20 = and i64 %19, 16711680
  %21 = lshr i64 %20, 8
  %22 = load i64, i64* %4
  %23 = or i64 %22, %21
  store i64 %23, i64* %4
  %24 = load i64, i64* %3
  %25 = and i64 %24, 4278190080
  %26 = lshr i64 %25, 24
  %27 = load i64, i64* %4
  %28 = or i64 %27, %26
  store i64 %28, i64* %4
  %29 = load i64, i64* %4
  %30 = trunc i64 %29 to i32
  ret i32 %30
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
  %18 = call i32 @rs(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
