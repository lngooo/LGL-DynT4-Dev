@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @xNo(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp sle i32 %6, 1
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %2
  br label %32
9:
  store i32 2, i32* %4
  br label %11
11:
  %12 = load i32, i32* %4
  %13 = load i32, i32* %4
  %14 = mul nsw i32 %12, %13
  %15 = load i32, i32* %3
  %16 = icmp sle i32 %14, %15
  br i1 %16, label %18, label %17
17:
  store i32 2, i32* %5
  br label %28
18:
  %19 = load i32, i32* %3
  %20 = load i32, i32* %4
  %21 = srem i32 %19, %20
  %22 = icmp eq i32 %21, 0
  br i1 %22, label %23, label %24
23:
  store i32 0, i32* %2
  store i32 1, i32* %5
  br label %28
24:
  br label %25
25:
  %26 = load i32, i32* %4
  %27 = add nsw i32 %26, 1
  store i32 %27, i32* %4
  br label %11
28:
  %30 = load i32, i32* %5
  switch i32 %30, label %34 [
    i32 2, label %31
    i32 1, label %32
  ]
31:
  store i32 1, i32* %2
  br label %32
32:
  %33 = load i32, i32* %2
  ret i32 %33
34:
  unreachable
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
  store i32 1, i32* %3
  br label %16
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @atoi(i8* %12)
  %14 = call i32 @xNo(i32 %13)
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %14)
  store i32 0, i32* %3
  br label %16
16:
  %17 = load i32, i32* %3
  ret i32 %17
}
declare i32 @printf(i8*, ...)
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i64 @strtol(i8*, i8**, i32)
