@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @BitCount(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %2
  %5 = load i32, i32* %2
  %6 = load i32, i32* %2
  %7 = lshr i32 %6, 1
  %8 = and i32 %7, 1431655765
  %9 = sub i32 %5, %8
  store i32 %9, i32* %3
  %10 = load i32, i32* %3
  %11 = and i32 %10, 858993459
  %12 = load i32, i32* %3
  %13 = lshr i32 %12, 2
  %14 = and i32 %13, 858993459
  %15 = xor i32 %11, %14
  store i32 %15, i32* %3
  %16 = load i32, i32* %3
  %17 = load i32, i32* %3
  %18 = lshr i32 %17, 2
  %19 = add i32 %16, %18
  %20 = and i32 %19, 858993459
  store i32 %20, i32* %3
  %21 = load i32, i32* %2
  %22 = load i32, i32* %2
  %23 = lshr i32 %22, 1
  %24 = and i32 %23, 1431655765
  %25 = sub i32 %21, %24
  %26 = and i32 %25, 858993459
  %27 = load i32, i32* %2
  %28 = load i32, i32* %2
  %29 = lshr i32 %28, 1
  %30 = and i32 %29, 1431655765
  %31 = sub i32 %27, %30
  %32 = lshr i32 %31, 2
  %33 = and i32 %32, 858993459
  %34 = add i32 %26, %33
  %35 = load i32, i32* %2
  %36 = load i32, i32* %2
  %37 = lshr i32 %36, 1
  %38 = and i32 %37, 1431655765
  %39 = sub i32 %35, %38
  %40 = and i32 %39, 858993459
  %41 = load i32, i32* %2
  %42 = load i32, i32* %2
  %43 = lshr i32 %42, 1
  %44 = and i32 %43, 1431655765
  %45 = sub i32 %41, %44
  %46 = lshr i32 %45, 2
  %47 = and i32 %46, 858993459
  %48 = add i32 %40, %47
  %49 = lshr i32 %48, 4
  %50 = add i32 %34, %49
  %51 = and i32 %50, 252645135
  %52 = mul i32 %51, 16843009
  %53 = lshr i32 %52, 24
  ret i32 %53
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %9 = load i32, i32* %4
  %10 = icmp slt i32 %9, 2
  br i1 %10, label %11, label %12
11:
  store i32 0, i32* %3
  br label %45
12:
  %14 = load i8**, i8*** %5
  %15 = getelementptr inbounds i8*, i8** %14, i64 1
  %16 = load i8*, i8** %15
  %17 = call i64 @strtoul(i8* %16, i8** null, i32 10)
  %18 = trunc i64 %17 to i32
  store i32 %18, i32* %6
  %20 = load i32, i32* %6
  store i32 %20, i32* %7
  %21 = load i32, i32* %7
  %22 = load i32, i32* %7
  %23 = lshr i32 %22, 1
  %24 = and i32 %23, 1431655765
  %25 = sub i32 %21, %24
  store i32 %25, i32* %7
  %26 = load i32, i32* %7
  %27 = and i32 %26, 858993459
  %28 = load i32, i32* %7
  %29 = lshr i32 %28, 2
  %30 = and i32 %29, 858993459
  %31 = add i32 %27, %30
  store i32 %31, i32* %7
  %33 = load i32, i32* %7
  %34 = load i32, i32* %7
  %35 = lshr i32 %34, 4
  %36 = add i32 %33, %35
  %37 = and i32 %36, 252645135
  %38 = mul i32 %37, 16843009
  %39 = lshr i32 %38, 24
  store i32 %39, i32* %8
  %40 = load i32, i32* %8
  %41 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %40)
  store i32 0, i32* %3
  br label %45
45:
  %46 = load i32, i32* %3
  ret i32 %46
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
