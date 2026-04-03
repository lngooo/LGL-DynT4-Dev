@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @R6(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 10, i32* %4
  br label %7
7:
  %8 = load i32, i32* %4
  %9 = icmp ne i32 %8, 0
  br i1 %9, label %10, label %32
10:
  %11 = load i32, i32* %4
  %12 = icmp eq i32 %11, 10
  br i1 %12, label %13, label %24
13:
  %14 = load i8*, i8** %2
  %15 = load i32, i32* %3
  %16 = sext i32 %15 to i64
  %17 = getelementptr inbounds i8, i8* %14, i64 %16
  %18 = load i8, i8* %17
  %19 = sext i8 %18 to i32
  %20 = icmp ne i32 %19, 0
  br i1 %20, label %21, label %22
21:
  store i32 20, i32* %4
  br label %23
22:
  store i32 0, i32* %4
  br label %23
23:
  br label %31
24:
  %25 = load i32, i32* %4
  %26 = icmp eq i32 %25, 20
  br i1 %26, label %27, label %30
27:
  %28 = load i32, i32* %3
  %29 = add nsw i32 %28, 1
  store i32 %29, i32* %3
  store i32 10, i32* %4
  br label %30
30:
  br label %31
31:
  br label %7
32:
  %33 = load i32, i32* %3
  ret i32 %33
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
  %13 = call i32 @R6(i8* %12)
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %13)
  store i32 0, i32* %3
  br label %15
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
declare i32 @printf(i8*, ...)
