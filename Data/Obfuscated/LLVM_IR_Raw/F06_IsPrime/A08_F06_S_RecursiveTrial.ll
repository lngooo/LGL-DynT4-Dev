@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @d(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  %6 = load i32, i32* %5
  %7 = load i32, i32* %5
  %8 = mul nsw i32 %6, %7
  %9 = load i32, i32* %4
  %10 = icmp sgt i32 %8, %9
  br i1 %10, label %11, label %12
11:
  store i32 1, i32* %3
  br label %23
12:
  %13 = load i32, i32* %4
  %14 = load i32, i32* %5
  %15 = srem i32 %13, %14
  %16 = icmp eq i32 %15, 0
  br i1 %16, label %17, label %18
17:
  store i32 0, i32* %3
  br label %23
18:
  %19 = load i32, i32* %4
  %20 = load i32, i32* %5
  %21 = add nsw i32 %20, 1
  %22 = call i32 @d(i32 %19, i32 %21)
  store i32 %22, i32* %3
  br label %23
23:
  %24 = load i32, i32* %3
  ret i32 %24
}
define dso_local i32 @e(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp sle i32 %4, 1
  br i1 %5, label %6, label %7
6:
  store i32 0, i32* %2
  br label %10
7:
  %8 = load i32, i32* %3
  %9 = call i32 @d(i32 %8, i32 2)
  store i32 %9, i32* %2
  br label %10
10:
  %11 = load i32, i32* %2
  ret i32 %11
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
  %14 = call i32 @e(i32 %13)
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
