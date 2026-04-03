@.str = constant [6 x i8] c"%lld\0A\00"
define dso_local i64 @Factorial(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i64
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32 %0, i32* %3
  %9 = load i32, i32* %3
  %10 = icmp slt i32 %9, 0
  br i1 %10, label %11, label %12
11:
  store i64 0, i64* %2
  br label %62
12:
  %13 = load i32, i32* %3
  %14 = icmp eq i32 %13, 0
  br i1 %14, label %15, label %16
15:
  store i64 1, i64* %2
  br label %62
16:
  store i64 1, i64* %4
  store i64 1, i64* %5
  %20 = load i32, i32* %3
  %21 = sdiv i32 %20, 2
  store i32 %21, i32* %6
  store i32 1, i32* %7
  br label %23
23:
  %24 = load i32, i32* %7
  %25 = load i32, i32* %6
  %26 = icmp sle i32 %24, %25
  br i1 %26, label %29, label %27
27:
  br label %37
29:
  %30 = load i32, i32* %7
  %31 = sext i32 %30 to i64
  %32 = load i64, i64* %4
  %33 = mul nsw i64 %32, %31
  store i64 %33, i64* %4
  br label %34
34:
  %35 = load i32, i32* %7
  %36 = add nsw i32 %35, 1
  store i32 %36, i32* %7
  br label %23
37:
  %39 = load i32, i32* %6
  %40 = add nsw i32 %39, 1
  store i32 %40, i32* %8
  br label %41
41:
  %42 = load i32, i32* %8
  %43 = load i32, i32* %3
  %44 = icmp sle i32 %42, %43
  br i1 %44, label %47, label %45
45:
  br label %55
47:
  %48 = load i32, i32* %8
  %49 = sext i32 %48 to i64
  %50 = load i64, i64* %5
  %51 = mul nsw i64 %50, %49
  store i64 %51, i64* %5
  br label %52
52:
  %53 = load i32, i32* %8
  %54 = add nsw i32 %53, 1
  store i32 %54, i32* %8
  br label %41
55:
  %56 = load i64, i64* %4
  %57 = load i64, i64* %5
  %58 = mul nsw i64 %56, %57
  store i64 %58, i64* %2
  br label %62
62:
  %63 = load i64, i64* %2
  ret i64 %63
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
  %14 = call i64 @Factorial(i32 %13)
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @.str, i64 0, i64 0), i64 %14)
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
