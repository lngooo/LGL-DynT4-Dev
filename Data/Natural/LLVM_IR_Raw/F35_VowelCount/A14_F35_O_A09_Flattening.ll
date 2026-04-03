@.str = constant [3 x i8] c"0\0A\00"
@.str.1 = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @VowelCount(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  store i32 5, i32* %5
  br label %9
9:
  %10 = load i32, i32* %5
  %11 = icmp ne i32 %10, 0
  br i1 %11, label %12, label %43
12:
  %13 = load i32, i32* %5
  %14 = icmp eq i32 %13, 5
  br i1 %14, label %15, label %25
15:
  %16 = load i8*, i8** %2
  %17 = load i32, i32* %4
  %18 = sext i32 %17 to i64
  %19 = getelementptr inbounds i8, i8* %16, i64 %18
  %20 = load i8, i8* %19
  %21 = icmp ne i8 %20, 0
  br i1 %21, label %22, label %23
22:
  store i32 3, i32* %5
  br label %24
23:
  store i32 0, i32* %5
  br label %24
24:
  br label %42
25:
  %26 = load i32, i32* %5
  %27 = icmp eq i32 %26, 3
  br i1 %27, label %28, label %41
28:
  %29 = load i8*, i8** %2
  %30 = load i32, i32* %4
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i8, i8* %29, i64 %31
  %33 = load i8, i8* %32
  %34 = sext i8 %33 to i32
  switch i32 %34, label %38 [
    i32 97, label %35
    i32 101, label %35
    i32 105, label %35
    i32 111, label %35
    i32 117, label %35
    i32 65, label %35
    i32 69, label %35
    i32 73, label %35
    i32 79, label %35
    i32 85, label %35
  ]
35:
  %36 = load i32, i32* %3
  %37 = add nsw i32 %36, 1
  store i32 %37, i32* %3
  br label %38
38:
  %39 = load i32, i32* %4
  %40 = add nsw i32 %39, 1
  store i32 %40, i32* %4
  store i32 5, i32* %5
  br label %41
41:
  br label %42
42:
  br label %9
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
  br i1 %7, label %8, label %10
8:
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0))
  store i32 0, i32* %3
  br label %16
10:
  %11 = load i8**, i8*** %5
  %12 = getelementptr inbounds i8*, i8** %11, i64 1
  %13 = load i8*, i8** %12
  %14 = call i32 @VowelCount(i8* %13)
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i32 %14)
  store i32 0, i32* %3
  br label %16
16:
  %17 = load i32, i32* %3
  ret i32 %17
}
declare i32 @printf(i8*, ...)
