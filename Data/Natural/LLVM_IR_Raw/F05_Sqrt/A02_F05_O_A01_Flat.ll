@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @Sqrt(i32 %0) {
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
  br label %53
10:
  %11 = load i32, i32* %3
  %12 = icmp slt i32 %11, 2
  br i1 %12, label %13, label %15
13:
  %14 = load i32, i32* %3
  store i32 %14, i32* %2
  br label %53
15:
  store i32 0, i32* %6
  br label %19
19:
  %20 = load i32, i32* %6
  %21 = icmp ne i32 %20, 3
  br i1 %21, label %22, label %47
22:
  %23 = load i32, i32* %6
  switch i32 %23, label %46 [
    i32 0, label %24
    i32 1, label %30
    i32 2, label %37
  ]
24:
  %25 = load i32, i32* %3
  %26 = sext i32 %25 to i64
  store i64 %26, i64* %4
  %27 = load i64, i64* %4
  %28 = add nsw i64 %27, 1
  %29 = sdiv i64 %28, 2
  store i64 %29, i64* %5
  store i32 1, i32* %6
  br label %46
30:
  %31 = load i64, i64* %5
  %32 = load i64, i64* %4
  %33 = icmp slt i64 %31, %32
  br i1 %33, label %34, label %35
34:
  store i32 2, i32* %6
  br label %36
35:
  store i32 3, i32* %6
  br label %36
36:
  br label %46
37:
  %38 = load i64, i64* %5
  store i64 %38, i64* %4
  %39 = load i64, i64* %4
  %40 = load i32, i32* %3
  %41 = sext i32 %40 to i64
  %42 = load i64, i64* %4
  %43 = sdiv i64 %41, %42
  %44 = add nsw i64 %39, %43
  %45 = sdiv i64 %44, 2
  store i64 %45, i64* %5
  store i32 1, i32* %6
  br label %46
46:
  br label %19
47:
  %48 = load i64, i64* %4
  %49 = trunc i64 %48 to i32
  store i32 %49, i32* %2
  br label %53
53:
  %54 = load i32, i32* %2
  ret i32 %54
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
  %14 = call i32 @Sqrt(i32 %13)
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
