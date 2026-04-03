@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @IsPrime(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp eq i32 %6, 2
  br i1 %7, label %11, label %8
8:
  %9 = load i32, i32* %3
  %10 = icmp eq i32 %9, 3
  br i1 %10, label %11, label %12
11:
  store i32 1, i32* %2
  br label %57
12:
  %13 = load i32, i32* %3
  %14 = icmp slt i32 %13, 2
  br i1 %14, label %23, label %15
15:
  %16 = load i32, i32* %3
  %17 = srem i32 %16, 2
  %18 = icmp eq i32 %17, 0
  br i1 %18, label %23, label %19
19:
  %20 = load i32, i32* %3
  %21 = srem i32 %20, 3
  %22 = icmp eq i32 %21, 0
  br i1 %22, label %23, label %24
23:
  store i32 0, i32* %2
  br label %57
24:
  store i32 1, i32* %4
  br label %26
26:
  %27 = load i32, i32* %4
  %28 = mul nsw i32 6, %27
  %29 = sub nsw i32 %28, 1
  %30 = load i32, i32* %4
  %31 = mul nsw i32 6, %30
  %32 = sub nsw i32 %31, 1
  %33 = mul nsw i32 %29, %32
  %34 = load i32, i32* %3
  %35 = icmp sle i32 %33, %34
  br i1 %35, label %36, label %54
36:
  %37 = load i32, i32* %3
  %38 = load i32, i32* %4
  %39 = mul nsw i32 6, %38
  %40 = sub nsw i32 %39, 1
  %41 = srem i32 %37, %40
  %42 = icmp eq i32 %41, 0
  br i1 %42, label %50, label %43
43:
  %44 = load i32, i32* %3
  %45 = load i32, i32* %4
  %46 = mul nsw i32 6, %45
  %47 = add nsw i32 %46, 1
  %48 = srem i32 %44, %47
  %49 = icmp eq i32 %48, 0
  br i1 %49, label %50, label %51
50:
  store i32 0, i32* %2
  store i32 1, i32* %5
  br label %55
51:
  %52 = load i32, i32* %4
  %53 = add nsw i32 %52, 1
  store i32 %53, i32* %4
  br label %26
54:
  store i32 1, i32* %2
  store i32 1, i32* %5
  br label %55
55:
  br label %57
57:
  %58 = load i32, i32* %2
  ret i32 %58
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
