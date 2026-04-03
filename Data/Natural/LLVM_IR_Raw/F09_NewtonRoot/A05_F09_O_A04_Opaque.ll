@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i64 @helper(i64 %0, i32 %1) {
  %3 = alloca i64
  %4 = alloca i64
  %5 = alloca i32
  %6 = alloca i64
  store i64 %0, i64* %4
  store i32 %1, i32* %5
  %7 = load i64, i64* %4
  %8 = load i64, i64* %4
  %9 = mul nsw i64 %7, %8
  %10 = add nsw i64 %9, 7
  %11 = icmp slt i64 %10, 0
  br i1 %11, label %12, label %13
12:
  store i64 0, i64* %3
  br label %34
13:
  %15 = load i64, i64* %4
  %16 = load i32, i32* %5
  %17 = sext i32 %16 to i64
  %18 = load i64, i64* %4
  %19 = sdiv i64 %17, %18
  %20 = add nsw i64 %15, %19
  %21 = sdiv i64 %20, 2
  store i64 %21, i64* %6
  %22 = load i64, i64* %6
  %23 = load i64, i64* %4
  %24 = icmp sge i64 %22, %23
  br i1 %24, label %25, label %27
25:
  %26 = load i64, i64* %4
  br label %31
27:
  %28 = load i64, i64* %6
  %29 = load i32, i32* %5
  %30 = call i64 @helper(i64 %28, i32 %29)
  br label %31
31:
  %32 = phi i64 [ %26, %25 ], [ %30, %27 ]
  store i64 %32, i64* %3
  br label %34
34:
  %35 = load i64, i64* %3
  ret i64 %35
}
define dso_local i32 @NewtonRoot(i32 %0) {
  %2 = alloca i32
  store i32 %0, i32* %2
  %3 = load i32, i32* %2
  %4 = icmp slt i32 %3, 0
  br i1 %4, label %5, label %6
5:
  br label %12
6:
  %7 = load i32, i32* %2
  %8 = sext i32 %7 to i64
  %9 = load i32, i32* %2
  %10 = call i64 @helper(i64 %8, i32 %9)
  %11 = trunc i64 %10 to i32
  br label %12
12:
  %13 = phi i32 [ -1, %5 ], [ %11, %6 ]
  ret i32 %13
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
