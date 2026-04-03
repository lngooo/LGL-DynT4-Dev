@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i64 @nr_helper(i64 %0, i32 %1) {
  %3 = alloca i64
  %4 = alloca i64
  %5 = alloca i32
  %6 = alloca i64
  %7 = alloca i32
  store i64 %0, i64* %4
  store i32 %1, i32* %5
  %9 = load i64, i64* %4
  %10 = load i32, i32* %5
  %11 = sext i32 %10 to i64
  %12 = load i64, i64* %4
  %13 = sdiv i64 %11, %12
  %14 = add nsw i64 %9, %13
  %15 = sdiv i64 %14, 2
  store i64 %15, i64* %6
  %16 = load i64, i64* %6
  %17 = load i64, i64* %4
  %18 = icmp sge i64 %16, %17
  br i1 %18, label %19, label %21
19:
  %20 = load i64, i64* %4
  store i64 %20, i64* %3
  store i32 1, i32* %7
  br label %25
21:
  %22 = load i64, i64* %6
  %23 = load i32, i32* %5
  %24 = call i64 @nr_helper(i64 %22, i32 %23)
  store i64 %24, i64* %3
  store i32 1, i32* %7
  br label %25
25:
  %27 = load i64, i64* %3
  ret i64 %27
}
define dso_local i32 @NewtonRoot(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp slt i32 %4, 0
  br i1 %5, label %6, label %7
6:
  store i32 -1, i32* %2
  br label %18
7:
  %8 = load i32, i32* %3
  %9 = icmp slt i32 %8, 2
  br i1 %9, label %10, label %12
10:
  %11 = load i32, i32* %3
  store i32 %11, i32* %2
  br label %18
12:
  %13 = load i32, i32* %3
  %14 = sext i32 %13 to i64
  %15 = load i32, i32* %3
  %16 = call i64 @nr_helper(i64 %14, i32 %15)
  %17 = trunc i64 %16 to i32
  store i32 %17, i32* %2
  br label %18
18:
  %19 = load i32, i32* %2
  ret i32 %19
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
