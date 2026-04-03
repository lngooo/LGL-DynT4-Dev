@.str = constant [6 x i8] c"%lld\0A\00"
define dso_local i64 @HKa(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp sle i32 %4, 0
  br i1 %5, label %6, label %14
6:
  %7 = load i32, i32* %3
  %8 = load i32, i32* %3
  %9 = mul nsw i32 %7, %8
  %10 = add nsw i32 %9, 7
  %11 = icmp sgt i32 %10, 0
  br i1 %11, label %12, label %13
12:
  store i64 1, i64* %2
  br label %21
13:
  store i64 0, i64* %2
  br label %21
14:
  %15 = load i32, i32* %3
  %16 = sext i32 %15 to i64
  %17 = load i32, i32* %3
  %18 = sub nsw i32 %17, 1
  %19 = call i64 @HKa(i32 %18)
  %20 = mul nsw i64 %16, %19
  store i64 %20, i64* %2
  br label %21
21:
  %22 = load i64, i64* %2
  ret i64 %22
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %7 = load i32, i32* %4
  %8 = icmp slt i32 %7, 2
  br i1 %8, label %9, label %10
9:
  store i32 1, i32* %3
  br label %26
10:
  %12 = load i8**, i8*** %5
  %13 = getelementptr inbounds i8*, i8** %12, i64 1
  %14 = load i8*, i8** %13
  %15 = call i32 @atoi(i8* %14)
  store i32 %15, i32* %6
  %16 = load i32, i32* %6
  %17 = icmp slt i32 %16, 0
  br i1 %17, label %18, label %19
18:
  br label %22
19:
  %20 = load i32, i32* %6
  %21 = call i64 @HKa(i32 %20)
  br label %22
22:
  %23 = phi i64 [ 0, %18 ], [ %21, %19 ]
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @.str, i64 0, i64 0), i64 %23)
  store i32 0, i32* %3
  br label %26
26:
  %27 = load i32, i32* %3
  ret i32 %27
}
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare i64 @strtol(i8*, i8**, i32)
