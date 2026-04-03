@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @NewtonRoot(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i64
  %6 = alloca i32
  store i32 %0, i32* %3
  %7 = load i32, i32* %3
  %8 = icmp slt i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store i32 -1, i32* %2
  br label %47
10:
  store i32 0, i32* %6
  br label %14
14:
  %15 = load i32, i32* %6
  %16 = icmp ne i32 %15, 3
  br i1 %16, label %17, label %41
17:
  %18 = load i32, i32* %6
  switch i32 %18, label %40 [
    i32 0, label %19
    i32 1, label %25
    i32 2, label %31
  ]
19:
  %20 = load i32, i32* %3
  %21 = sext i32 %20 to i64
  store i64 %21, i64* %4
  %22 = load i64, i64* %4
  %23 = add nsw i64 %22, 1
  %24 = sdiv i64 %23, 2
  store i64 %24, i64* %5
  store i32 1, i32* %6
  br label %40
25:
  %26 = load i64, i64* %5
  %27 = load i64, i64* %4
  %28 = icmp slt i64 %26, %27
  %29 = zext i1 %28 to i64
  %30 = select i1 %28, i32 2, i32 3
  store i32 %30, i32* %6
  br label %40
31:
  %32 = load i64, i64* %5
  store i64 %32, i64* %4
  %33 = load i64, i64* %4
  %34 = load i32, i32* %3
  %35 = sext i32 %34 to i64
  %36 = load i64, i64* %4
  %37 = sdiv i64 %35, %36
  %38 = add nsw i64 %33, %37
  %39 = sdiv i64 %38, 2
  store i64 %39, i64* %5
  store i32 1, i32* %6
  br label %40
40:
  br label %14
41:
  %42 = load i64, i64* %4
  %43 = trunc i64 %42 to i32
  store i32 %43, i32* %2
  br label %47
47:
  %48 = load i32, i32* %2
  ret i32 %48
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
  %14 = call i32 @NewtonRoot(i32 %13)
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
