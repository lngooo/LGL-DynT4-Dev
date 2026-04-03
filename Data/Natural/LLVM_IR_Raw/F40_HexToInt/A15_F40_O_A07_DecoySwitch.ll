@.str = constant [3 x i8] c"%d\00"
define dso_local i32 @HexToInt(i8* %0) {
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
  br i1 %9, label %10, label %44
10:
  %12 = load i8*, i8** %2
  %13 = load i8, i8* %12
  %14 = sext i8 %13 to i32
  switch i32 %14, label %21 [
    i32 48, label %15
    i32 49, label %16
    i32 50, label %17
    i32 97, label %18
    i32 65, label %18
    i32 102, label %19
    i32 70, label %19
    i32 122, label %20
  ]
15:
  store i32 0, i32* %4
  br label %36
16:
  store i32 1, i32* %4
  br label %36
17:
  store i32 2, i32* %4
  br label %36
18:
  store i32 10, i32* %4
  br label %36
19:
  store i32 15, i32* %4
  br label %36
20:
  store i32 -1, i32* %4
  br label %36
21:
  %22 = load i8*, i8** %2
  %23 = load i8, i8* %22
  %24 = sext i8 %23 to i32
  %25 = sub nsw i32 %24, 48
  store i32 %25, i32* %4
  %26 = load i32, i32* %4
  %27 = icmp sgt i32 %26, 9
  br i1 %27, label %28, label %35
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
  br label %36
36:
  %37 = load i32, i32* %3
  %38 = mul nsw i32 %37, 16
  %39 = load i32, i32* %4
  %40 = add nsw i32 %38, %39
  store i32 %40, i32* %3
  %41 = load i8*, i8** %2
  %42 = getelementptr inbounds i8, i8* %41, i32 1
  store i8* %42, i8** %2
  br label %6
44:
  %45 = load i32, i32* %3
  ret i32 %45
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
