@.str = constant [3 x i8] c"%u\00"
define dso_local i32 @GrayCode(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i8
  %8 = alloca i8
  store i32 %0, i32* %2
  store i32 0, i32* %3
  %11 = load i32, i32* %2
  %12 = lshr i32 %11, 1
  store i32 %12, i32* %4
  store i32* %2, i32** %5
  store i32 0, i32* %6
  br label %15
15:
  %16 = load i32, i32* %6
  %17 = icmp slt i32 %16, 8
  br i1 %17, label %20, label %18
18:
  br label %47
20:
  %21 = load i32*, i32** %5
  %22 = load i32, i32* %21
  %23 = load i32, i32* %6
  %24 = mul nsw i32 %23, 4
  %25 = lshr i32 %22, %24
  %26 = and i32 %25, 15
  %27 = trunc i32 %26 to i8
  store i8 %27, i8* %7
  %28 = load i32, i32* %4
  %29 = load i32, i32* %6
  %30 = mul nsw i32 %29, 4
  %31 = lshr i32 %28, %30
  %32 = and i32 %31, 15
  %33 = trunc i32 %32 to i8
  store i8 %33, i8* %8
  %34 = load i8, i8* %7
  %35 = zext i8 %34 to i32
  %36 = load i8, i8* %8
  %37 = zext i8 %36 to i32
  %38 = xor i32 %35, %37
  %39 = load i32, i32* %6
  %40 = mul nsw i32 %39, 4
  %41 = shl i32 %38, %40
  %42 = load i32, i32* %3
  %43 = or i32 %42, %41
  store i32 %43, i32* %3
  br label %44
44:
  %45 = load i32, i32* %6
  %46 = add nsw i32 %45, 1
  store i32 %46, i32* %6
  br label %15
47:
  %48 = load i32, i32* %3
  ret i32 %48
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
