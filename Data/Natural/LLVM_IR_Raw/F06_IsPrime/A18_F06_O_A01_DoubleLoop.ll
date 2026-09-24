@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @IsPrime(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32 %0, i32* %3
  %8 = load i32, i32* %3
  %9 = icmp slt i32 %8, 2
  br i1 %9, label %10, label %11
10:
  store i32 0, i32* %2
  br label %52
11:
  store i32 1, i32* %4
  store i32 2, i32* %5
  br label %14
14:
  %15 = load i32, i32* %5
  %16 = load i32, i32* %3
  %17 = load i32, i32* %5
  %18 = sdiv i32 %16, %17
  %19 = icmp sle i32 %15, %18
  br i1 %19, label %21, label %20
20:
  store i32 2, i32* %6
  br label %47
21:
  store i32 0, i32* %7
  br label %23
23:
  %24 = load i32, i32* %7
  %25 = icmp slt i32 %24, 1
  br i1 %25, label %27, label %26
26:
  store i32 5, i32* %6
  br label %37
27:
  %28 = load i32, i32* %3
  %29 = load i32, i32* %5
  %30 = srem i32 %28, %29
  %31 = icmp eq i32 %30, 0
  br i1 %31, label %32, label %33
32:
  store i32 0, i32* %4
  store i32 5, i32* %6
  br label %37
33:
  br label %34
34:
  %35 = load i32, i32* %7
  %36 = add nsw i32 %35, 1
  store i32 %36, i32* %7
  br label %23
37:
  br label %39
39:
  %40 = load i32, i32* %4
  %41 = icmp ne i32 %40, 0
  br i1 %41, label %43, label %42
42:
  store i32 2, i32* %6
  br label %47
43:
  br label %44
44:
  %45 = load i32, i32* %5
  %46 = add nsw i32 %45, 1
  store i32 %46, i32* %5
  br label %14
47:
  br label %49
49:
  %50 = load i32, i32* %4
  store i32 %50, i32* %2
  store i32 1, i32* %6
  br label %52
52:
  %53 = load i32, i32* %2
  ret i32 %53
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
  %14 = call i32 @IsPrime(i32 %13)
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
