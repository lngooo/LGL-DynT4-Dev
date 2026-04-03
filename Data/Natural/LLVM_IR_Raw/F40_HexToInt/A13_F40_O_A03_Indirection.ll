@HexToInt.m = internal global [256 x i32] zeroinitializer
@.str = constant [3 x i8] c"%d\00"
define dso_local i32 @HexToInt(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32*
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %8
8:
  %9 = load i32, i32* %3
  %10 = icmp slt i32 %9, 10
  br i1 %10, label %13, label %11
11:
  br label %22
13:
  %14 = load i32, i32* %3
  %15 = load i32, i32* %3
  %16 = add nsw i32 48, %15
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds [256 x i32], [256 x i32]* @HexToInt.m, i64 0, i64 %17
  store i32 %14, i32* %18
  br label %19
19:
  %20 = load i32, i32* %3
  %21 = add nsw i32 %20, 1
  store i32 %21, i32* %3
  br label %8
22:
  store i32 0, i32* %4
  br label %24
24:
  %25 = load i32, i32* %4
  %26 = icmp slt i32 %25, 6
  br i1 %26, label %29, label %27
27:
  br label %45
29:
  %30 = load i32, i32* %4
  %31 = add nsw i32 10, %30
  %32 = load i32, i32* %4
  %33 = add nsw i32 97, %32
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds [256 x i32], [256 x i32]* @HexToInt.m, i64 0, i64 %34
  store i32 %31, i32* %35
  %36 = load i32, i32* %4
  %37 = add nsw i32 10, %36
  %38 = load i32, i32* %4
  %39 = add nsw i32 65, %38
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds [256 x i32], [256 x i32]* @HexToInt.m, i64 0, i64 %40
  store i32 %37, i32* %41
  br label %42
42:
  %43 = load i32, i32* %4
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %4
  br label %24
45:
  store i32 0, i32* %5
  store i32* getelementptr inbounds ([256 x i32], [256 x i32]* @HexToInt.m, i64 0, i64 0), i32** %6
  br label %48
48:
  %49 = load i8*, i8** %2
  %50 = load i8, i8* %49
  %51 = icmp ne i8 %50, 0
  br i1 %51, label %52, label %65
52:
  %53 = load i32, i32* %5
  %54 = shl i32 %53, 4
  %55 = load i32*, i32** %6
  %56 = load i8*, i8** %2
  %57 = load i8, i8* %56
  %58 = zext i8 %57 to i32
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i32, i32* %55, i64 %59
  %61 = load i32, i32* %60
  %62 = add nsw i32 %54, %61
  store i32 %62, i32* %5
  %63 = load i8*, i8** %2
  %64 = getelementptr inbounds i8, i8* %63, i32 1
  store i8* %64, i8** %2
  br label %48
65:
  %66 = load i32, i32* %5
  ret i32 %66
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %15
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @HexToInt(i8* %12)
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %13)
  store i32 0, i32* %3
  br label %15
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
declare i32 @printf(i8*, ...)
