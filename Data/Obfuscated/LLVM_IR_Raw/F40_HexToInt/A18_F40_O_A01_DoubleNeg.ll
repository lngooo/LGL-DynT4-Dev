@.str = constant [3 x i8] c"%d\00"
define dso_local i32 @y9(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %6
6:
  %7 = load i8*, i8** %2
  %8 = load i8, i8* %7
  %9 = icmp ne i8 %8, 0
  %10 = xor i1 %9, true
  %11 = xor i1 %10, true
  br i1 %11, label %12, label %43
12:
  store i32 0, i32* %4
  %14 = load i8*, i8** %2
  %15 = load i8, i8* %14
  %16 = sext i8 %15 to i32
  %17 = icmp slt i32 %16, 48
  br i1 %17, label %28, label %18
18:
  %19 = load i8*, i8** %2
  %20 = load i8, i8* %19
  %21 = sext i8 %20 to i32
  %22 = icmp sgt i32 %21, 57
  br i1 %22, label %28, label %23
23:
  %24 = load i8*, i8** %2
  %25 = load i8, i8* %24
  %26 = sext i8 %25 to i32
  %27 = sub nsw i32 %26, 48
  store i32 %27, i32* %4
  br label %35
28:
  %29 = load i8*, i8** %2
  %30 = load i8, i8* %29
  %31 = sext i8 %30 to i32
  %32 = or i32 %31, 32
  %33 = sub nsw i32 %32, 97
  %34 = add nsw i32 %33, 10
  store i32 %34, i32* %4
  br label %35
35:
  %36 = load i32, i32* %3
  %37 = mul nsw i32 %36, 16
  %38 = load i32, i32* %4
  %39 = add nsw i32 %37, %38
  store i32 %39, i32* %3
  %40 = load i8*, i8** %2
  %41 = getelementptr inbounds i8, i8* %40, i32 1
  store i8* %41, i8** %2
  br label %6
43:
  %44 = load i32, i32* %3
  ret i32 %44
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
  %13 = call i32 @y9(i8* %12)
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %13)
  store i32 0, i32* %3
  br label %15
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
declare i32 @printf(i8*, ...)
