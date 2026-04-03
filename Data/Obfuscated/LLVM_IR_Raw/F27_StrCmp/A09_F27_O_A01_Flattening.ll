@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @R(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 1, i32* %5
  store i32 0, i32* %6
  br label %9
9:
  %10 = load i32, i32* %5
  %11 = icmp ne i32 %10, 0
  br i1 %11, label %12, label %44
12:
  %13 = load i32, i32* %5
  switch i32 %13, label %43 [
    i32 1, label %14
    i32 2, label %30
    i32 3, label %35
  ]
14:
  %15 = load i8*, i8** %3
  %16 = load i8, i8* %15
  %17 = sext i8 %16 to i32
  %18 = icmp ne i32 %17, 0
  br i1 %18, label %19, label %28
19:
  %20 = load i8*, i8** %3
  %21 = load i8, i8* %20
  %22 = sext i8 %21 to i32
  %23 = load i8*, i8** %4
  %24 = load i8, i8* %23
  %25 = sext i8 %24 to i32
  %26 = icmp eq i32 %22, %25
  br i1 %26, label %27, label %28
27:
  store i32 2, i32* %5
  br label %29
28:
  store i32 3, i32* %5
  br label %29
29:
  br label %43
30:
  %31 = load i8*, i8** %3
  %32 = getelementptr inbounds i8, i8* %31, i32 1
  store i8* %32, i8** %3
  %33 = load i8*, i8** %4
  %34 = getelementptr inbounds i8, i8* %33, i32 1
  store i8* %34, i8** %4
  store i32 1, i32* %5
  br label %43
35:
  %36 = load i8*, i8** %3
  %37 = load i8, i8* %36
  %38 = zext i8 %37 to i32
  %39 = load i8*, i8** %4
  %40 = load i8, i8* %39
  %41 = zext i8 %40 to i32
  %42 = sub nsw i32 %38, %41
  store i32 %42, i32* %6
  store i32 0, i32* %5
  br label %43
43:
  br label %9
44:
  %45 = load i32, i32* %6
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
  %7 = icmp slt i32 %6, 3
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %18
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 2
  %15 = load i8*, i8** %14
  %16 = call i32 @R(i8* %12, i8* %15)
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %16)
  store i32 0, i32* %3
  br label %18
18:
  %19 = load i32, i32* %3
  ret i32 %19
}
declare i32 @printf(i8*, ...)
