@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @NewtonRoot(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i64
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp slt i32 %6, 0
  br i1 %7, label %8, label %9
8:
  store i32 -1, i32* %2
  br label %46
9:
  %10 = load i32, i32* %3
  %11 = icmp slt i32 %10, 2
  br i1 %11, label %12, label %14
12:
  %13 = load i32, i32* %3
  store i32 %13, i32* %2
  br label %46
14:
  %16 = load i32, i32* %3
  %17 = sext i32 %16 to i64
  store i64 %17, i64* %4
  br label %19
19:
  %20 = load i64, i64* %4
  %21 = load i32, i32* %3
  %22 = sext i32 %21 to i64
  %23 = load i64, i64* %4
  %24 = sdiv i64 %22, %23
  %25 = add nsw i64 %20, %24
  %26 = sdiv i64 %25, 2
  store i64 %26, i64* %5
  br label %27
27:
  %28 = load i64, i64* %5
  %29 = load i64, i64* %4
  %30 = icmp sge i64 %28, %29
  br i1 %30, label %31, label %32
31:
  br label %41
32:
  %33 = load i64, i64* %5
  store i64 %33, i64* %4
  %34 = load i64, i64* %4
  %35 = load i32, i32* %3
  %36 = sext i32 %35 to i64
  %37 = load i64, i64* %4
  %38 = sdiv i64 %36, %37
  %39 = add nsw i64 %34, %38
  %40 = sdiv i64 %39, 2
  store i64 %40, i64* %5
  br label %27
41:
  %42 = load i64, i64* %4
  %43 = trunc i64 %42 to i32
  store i32 %43, i32* %2
  br label %46
46:
  %47 = load i32, i32* %2
  ret i32 %47
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
