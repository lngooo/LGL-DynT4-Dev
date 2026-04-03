@Sum.table = internal constant [11 x i32] [i32 0, i32 1, i32 3, i32 6, i32 10, i32 15, i32 21, i32 28, i32 36, i32 45, i32 55]
@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @Sum(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp sge i32 %4, 0
  br i1 %5, label %6, label %14
6:
  %7 = load i32, i32* %3
  %8 = icmp sle i32 %7, 10
  br i1 %8, label %9, label %14
9:
  %10 = load i32, i32* %3
  %11 = sext i32 %10 to i64
  %12 = getelementptr inbounds [11 x i32], [11 x i32]* @Sum.table, i64 0, i64 %11
  %13 = load i32, i32* %12
  store i32 %13, i32* %2
  br label %20
14:
  %15 = load i32, i32* %3
  %16 = load i32, i32* %3
  %17 = add nsw i32 %16, 1
  %18 = mul nsw i32 %15, %17
  %19 = sdiv i32 %18, 2
  store i32 %19, i32* %2
  br label %20
20:
  %21 = load i32, i32* %2
  ret i32 %21
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
  %14 = call i32 @Sum(i32 %13)
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
