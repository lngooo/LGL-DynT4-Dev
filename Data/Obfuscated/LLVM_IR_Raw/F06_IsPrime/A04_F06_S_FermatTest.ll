@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i64 @p(i64 %0, i64 %1, i64 %2) {
  %4 = alloca i64
  %5 = alloca i64
  %6 = alloca i64
  %7 = alloca i64
  store i64 %0, i64* %4
  store i64 %1, i64* %5
  store i64 %2, i64* %6
  store i64 1, i64* %7
  %9 = load i64, i64* %6
  %10 = load i64, i64* %4
  %11 = srem i64 %10, %9
  store i64 %11, i64* %4
  br label %12
12:
  %13 = load i64, i64* %5
  %14 = icmp sgt i64 %13, 0
  br i1 %14, label %15, label %33
15:
  %16 = load i64, i64* %5
  %17 = srem i64 %16, 2
  %18 = icmp eq i64 %17, 1
  br i1 %18, label %19, label %25
19:
  %20 = load i64, i64* %7
  %21 = load i64, i64* %4
  %22 = mul nsw i64 %20, %21
  %23 = load i64, i64* %6
  %24 = srem i64 %22, %23
  store i64 %24, i64* %7
  br label %25
25:
  %26 = load i64, i64* %4
  %27 = load i64, i64* %4
  %28 = mul nsw i64 %26, %27
  %29 = load i64, i64* %6
  %30 = srem i64 %28, %29
  store i64 %30, i64* %4
  %31 = load i64, i64* %5
  %32 = sdiv i64 %31, 2
  store i64 %32, i64* %5
  br label %12
33:
  %34 = load i64, i64* %7
  ret i64 %34
}
define dso_local i32 @AEfa(i32 %0) {
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
  br label %45
9:
  %10 = load i32, i32* %3
  %11 = icmp sle i32 %10, 3
  br i1 %11, label %12, label %13
12:
  store i32 1, i32* %2
  br label %45
13:
  %14 = load i32, i32* %3
  %15 = sub nsw i32 %14, 1
  %16 = sext i32 %15 to i64
  %17 = load i32, i32* %3
  %18 = sext i32 %17 to i64
  %19 = call i64 @p(i64 2, i64 %16, i64 %18)
  %20 = icmp ne i64 %19, 1
  br i1 %20, label %21, label %22
21:
  store i32 0, i32* %2
  br label %45
22:
  store i32 2, i32* %4
  br label %24
24:
  %25 = load i32, i32* %4
  %26 = load i32, i32* %4
  %27 = mul nsw i32 %25, %26
  %28 = load i32, i32* %3
  %29 = icmp sle i32 %27, %28
  br i1 %29, label %31, label %30
30:
  store i32 2, i32* %5
  br label %41
31:
  %32 = load i32, i32* %3
  %33 = load i32, i32* %4
  %34 = srem i32 %32, %33
  %35 = icmp eq i32 %34, 0
  br i1 %35, label %36, label %37
36:
  store i32 0, i32* %2
  store i32 1, i32* %5
  br label %41
37:
  br label %38
38:
  %39 = load i32, i32* %4
  %40 = add nsw i32 %39, 1
  store i32 %40, i32* %4
  br label %24
41:
  %43 = load i32, i32* %5
  switch i32 %43, label %47 [
    i32 2, label %44
    i32 1, label %45
  ]
44:
  store i32 1, i32* %2
  br label %45
45:
  %46 = load i32, i32* %2
  ret i32 %46
47:
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
  %14 = call i32 @AEfa(i32 %13)
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
