@.str = constant [4 x i8] c"%u\0A\00"
define dso_local i32 @UJ5(i32 %0) {
  %2 = alloca i32
  %3 = alloca [4 x i8]
  store i32 %0, i32* %2
  %5 = load i32, i32* %2
  %6 = trunc i32 %5 to i8
  %7 = getelementptr inbounds [4 x i8], [4 x i8]* %3, i64 0, i64 0
  store i8 %6, i8* %7
  %8 = load i32, i32* %2
  %9 = lshr i32 %8, 8
  %10 = trunc i32 %9 to i8
  %11 = getelementptr inbounds [4 x i8], [4 x i8]* %3, i64 0, i64 1
  store i8 %10, i8* %11
  %12 = load i32, i32* %2
  %13 = lshr i32 %12, 16
  %14 = trunc i32 %13 to i8
  %15 = getelementptr inbounds [4 x i8], [4 x i8]* %3, i64 0, i64 2
  store i8 %14, i8* %15
  %16 = load i32, i32* %2
  %17 = lshr i32 %16, 24
  %18 = trunc i32 %17 to i8
  %19 = getelementptr inbounds [4 x i8], [4 x i8]* %3, i64 0, i64 3
  store i8 %18, i8* %19
  %20 = getelementptr inbounds [4 x i8], [4 x i8]* %3, i64 0, i64 0
  %21 = load i8, i8* %20
  %22 = zext i8 %21 to i32
  %23 = shl i32 %22, 24
  %24 = getelementptr inbounds [4 x i8], [4 x i8]* %3, i64 0, i64 1
  %25 = load i8, i8* %24
  %26 = zext i8 %25 to i32
  %27 = shl i32 %26, 16
  %28 = or i32 %23, %27
  %29 = getelementptr inbounds [4 x i8], [4 x i8]* %3, i64 0, i64 2
  %30 = load i8, i8* %29
  %31 = zext i8 %30 to i32
  %32 = shl i32 %31, 8
  %33 = or i32 %28, %32
  %34 = getelementptr inbounds [4 x i8], [4 x i8]* %3, i64 0, i64 3
  %35 = load i8, i8* %34
  %36 = zext i8 %35 to i32
  %37 = or i32 %33, %36
  ret i32 %37
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
  %18 = call i32 @UJ5(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
