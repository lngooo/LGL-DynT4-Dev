@.str = constant [4 x i8] c"%u\0A\00"
define dso_local i32 @pv3(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  %6 = load i32, i32* %5
  %7 = icmp eq i32 %6, 0
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %22
9:
  %10 = load i32, i32* %4
  %11 = and i32 %10, 255
  %12 = load i32, i32* %5
  %13 = sub nsw i32 %12, 1
  %14 = mul nsw i32 8, %13
  %15 = shl i32 %11, %14
  %16 = load i32, i32* %4
  %17 = lshr i32 %16, 8
  %18 = load i32, i32* %5
  %19 = sub nsw i32 %18, 1
  %20 = call i32 @pv3(i32 %17, i32 %19)
  %21 = or i32 %15, %20
  store i32 %21, i32* %3
  br label %22
22:
  %23 = load i32, i32* %3
  ret i32 %23
}
define dso_local i32 @Ut(i32 %0) {
  %2 = alloca i32
  store i32 %0, i32* %2
  %3 = load i32, i32* %2
  %4 = call i32 @pv3(i32 %3, i32 4)
  ret i32 %4
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
  %18 = call i32 @Ut(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
