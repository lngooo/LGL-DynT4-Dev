@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @Log2(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  br label %5
5:
  %6 = load i32, i32* %2
  %7 = icmp sge i32 %6, 4
  br i1 %7, label %8, label %13
8:
  %9 = load i32, i32* %2
  %10 = ashr i32 %9, 2
  store i32 %10, i32* %2
  %11 = load i32, i32* %3
  %12 = add nsw i32 %11, 2
  store i32 %12, i32* %3
  br label %5
13:
  br label %14
14:
  %15 = load i32, i32* %2
  %16 = icmp sge i32 %15, 2
  br i1 %16, label %17, label %22
17:
  %18 = load i32, i32* %2
  %19 = ashr i32 %18, 1
  store i32 %19, i32* %2
  %20 = load i32, i32* %3
  %21 = add nsw i32 %20, 1
  store i32 %21, i32* %3
  br label %14
22:
  %23 = load i32, i32* %3
  ret i32 %23
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
  br label %30
12:
  %14 = load i8**, i8*** %5
  %15 = getelementptr inbounds i8*, i8** %14, i64 1
  %16 = load i8*, i8** %15
  %17 = call i32 @atoi(i8* %16)
  store i32 %17, i32* %6
  %18 = load i32, i32* %6
  %19 = icmp sle i32 %18, 0
  br i1 %19, label %20, label %21
20:
  store i32 0, i32* %3
  store i32 1, i32* %7
  br label %28
21:
  %23 = load i32, i32* %6
  %24 = call i32 @Log2(i32 %23)
  store i32 %24, i32* %8
  %25 = load i32, i32* %8
  %26 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %25)
  store i32 0, i32* %3
  store i32 1, i32* %7
  br label %28
28:
  br label %30
30:
  %31 = load i32, i32* %3
  ret i32 %31
}
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare i64 @strtol(i8*, i8**, i32)
