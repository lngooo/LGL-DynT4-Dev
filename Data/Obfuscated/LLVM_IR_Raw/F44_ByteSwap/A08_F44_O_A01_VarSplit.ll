@.str = constant [4 x i8] c"%u\0A\00"
define dso_local i32 @ogvb(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  %7 = load i32, i32* %2
  %8 = and i32 %7, 255
  %9 = shl i32 %8, 24
  %10 = load i32, i32* %3
  %11 = or i32 %10, %9
  store i32 %11, i32* %3
  %12 = load i32, i32* %2
  %13 = and i32 %12, 65280
  %14 = shl i32 %13, 8
  %15 = load i32, i32* %3
  %16 = or i32 %15, %14
  store i32 %16, i32* %3
  %17 = load i32, i32* %2
  %18 = and i32 %17, 16711680
  %19 = lshr i32 %18, 8
  %20 = load i32, i32* %4
  %21 = or i32 %20, %19
  store i32 %21, i32* %4
  %22 = load i32, i32* %2
  %23 = and i32 %22, -16777216
  %24 = lshr i32 %23, 24
  %25 = load i32, i32* %4
  %26 = or i32 %25, %24
  store i32 %26, i32* %4
  %27 = load i32, i32* %3
  %28 = load i32, i32* %4
  %29 = or i32 %27, %28
  ret i32 %29
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
  %18 = call i32 @ogvb(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
