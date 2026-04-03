@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @oQj9(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  br label %5
5:
  %6 = load i32, i32* %2
  %7 = icmp ne i32 %6, 0
  br i1 %7, label %8, label %50
8:
  %9 = load i32, i32* %2
  %10 = and i32 %9, 1
  %11 = load i32, i32* %3
  %12 = add i32 %11, %10
  store i32 %12, i32* %3
  %13 = load i32, i32* %2
  %14 = lshr i32 %13, 1
  %15 = and i32 %14, 1
  %16 = load i32, i32* %3
  %17 = add i32 %16, %15
  store i32 %17, i32* %3
  %18 = load i32, i32* %2
  %19 = lshr i32 %18, 2
  %20 = and i32 %19, 1
  %21 = load i32, i32* %3
  %22 = add i32 %21, %20
  store i32 %22, i32* %3
  %23 = load i32, i32* %2
  %24 = lshr i32 %23, 3
  %25 = and i32 %24, 1
  %26 = load i32, i32* %3
  %27 = add i32 %26, %25
  store i32 %27, i32* %3
  %28 = load i32, i32* %2
  %29 = lshr i32 %28, 4
  %30 = and i32 %29, 1
  %31 = load i32, i32* %3
  %32 = add i32 %31, %30
  store i32 %32, i32* %3
  %33 = load i32, i32* %2
  %34 = lshr i32 %33, 5
  %35 = and i32 %34, 1
  %36 = load i32, i32* %3
  %37 = add i32 %36, %35
  store i32 %37, i32* %3
  %38 = load i32, i32* %2
  %39 = lshr i32 %38, 6
  %40 = and i32 %39, 1
  %41 = load i32, i32* %3
  %42 = add i32 %41, %40
  store i32 %42, i32* %3
  %43 = load i32, i32* %2
  %44 = lshr i32 %43, 7
  %45 = and i32 %44, 1
  %46 = load i32, i32* %3
  %47 = add i32 %46, %45
  store i32 %47, i32* %3
  %48 = load i32, i32* %2
  %49 = lshr i32 %48, 8
  store i32 %49, i32* %2
  br label %5
50:
  %51 = load i32, i32* %3
  ret i32 %51
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
  %18 = call i32 @oQj9(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
