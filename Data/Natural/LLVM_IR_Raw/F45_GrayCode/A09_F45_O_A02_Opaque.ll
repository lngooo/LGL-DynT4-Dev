@.str = constant [3 x i8] c"%u\00"
define dso_local i32 @GrayCode(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 10, i32* %4
  store i32 0, i32* %5
  br label %9
9:
  %10 = load i32, i32* %5
  %11 = icmp slt i32 %10, 31
  br i1 %11, label %14, label %12
12:
  br label %44
14:
  %15 = load i32, i32* %4
  %16 = load i32, i32* %4
  %17 = mul nsw i32 %15, %16
  %18 = icmp sge i32 %17, 100
  br i1 %18, label %19, label %37
19:
  %20 = load i32, i32* %2
  %21 = load i32, i32* %5
  %22 = lshr i32 %20, %21
  %23 = and i32 %22, 1
  %24 = load i32, i32* %2
  %25 = load i32, i32* %5
  %26 = add nsw i32 %25, 1
  %27 = lshr i32 %24, %26
  %28 = and i32 %27, 1
  %29 = xor i32 %23, %28
  %30 = icmp ne i32 %29, 0
  br i1 %30, label %31, label %36
31:
  %32 = load i32, i32* %5
  %33 = shl i32 1, %32
  %34 = load i32, i32* %3
  %35 = or i32 %34, %33
  store i32 %35, i32* %3
  br label %36
36:
  br label %40
37:
  %38 = load i32, i32* %2
  %39 = add i32 %38, 1
  store i32 %39, i32* %2
  br label %40
40:
  br label %41
41:
  %42 = load i32, i32* %5
  %43 = add nsw i32 %42, 1
  store i32 %43, i32* %5
  br label %9
44:
  %45 = load i32, i32* %2
  %46 = and i32 %45, -2147483648
  %47 = load i32, i32* %3
  %48 = or i32 %47, %46
  store i32 %48, i32* %3
  %49 = load i32, i32* %3
  ret i32 %49
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
