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
  br label %60
9:
  %10 = load i32, i32* %3
  %11 = icmp slt i32 %10, 2
  br i1 %11, label %12, label %14
12:
  %13 = load i32, i32* %3
  store i32 %13, i32* %2
  br label %60
14:
  store i64 1, i64* %4
  br label %16
16:
  %17 = load i64, i64* %4
  %18 = shl i64 %17, 2
  %19 = load i32, i32* %3
  %20 = sext i32 %19 to i64
  %21 = icmp sle i64 %18, %20
  br i1 %21, label %22, label %26
22:
  br label %23
23:
  %24 = load i64, i64* %4
  %25 = shl i64 %24, 1
  store i64 %25, i64* %4
  br label %16
26:
  %28 = load i64, i64* %4
  %29 = load i32, i32* %3
  %30 = sext i32 %29 to i64
  %31 = load i64, i64* %4
  %32 = sdiv i64 %30, %31
  %33 = or i64 %28, %32
  %34 = ashr i64 %33, 1
  store i64 %34, i64* %5
  %35 = load i64, i64* %4
  %36 = load i32, i32* %3
  %37 = sext i32 %36 to i64
  %38 = load i64, i64* %4
  %39 = sdiv i64 %37, %38
  %40 = add nsw i64 %35, %39
  %41 = ashr i64 %40, 1
  store i64 %41, i64* %5
  br label %42
42:
  %43 = load i64, i64* %5
  %44 = load i64, i64* %4
  %45 = icmp slt i64 %43, %44
  br i1 %45, label %46, label %55
46:
  %47 = load i64, i64* %5
  store i64 %47, i64* %4
  %48 = load i64, i64* %4
  %49 = load i32, i32* %3
  %50 = sext i32 %49 to i64
  %51 = load i64, i64* %4
  %52 = sdiv i64 %50, %51
  %53 = add nsw i64 %48, %52
  %54 = ashr i64 %53, 1
  store i64 %54, i64* %5
  br label %42
55:
  %56 = load i64, i64* %4
  %57 = trunc i64 %56 to i32
  store i32 %57, i32* %2
  br label %60
60:
  %61 = load i32, i32* %2
  ret i32 %61
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
