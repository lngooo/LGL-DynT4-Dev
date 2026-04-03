@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @H(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  %8 = load i32, i32* %5
  %9 = icmp eq i32 %8, 0
  br i1 %9, label %10, label %11
10:
  store i32 1, i32* %3
  br label %32
11:
  %13 = load i32, i32* %4
  %14 = load i32, i32* %5
  %15 = sdiv i32 %14, 2
  %16 = call i32 @H(i32 %13, i32 %15)
  store i32 %16, i32* %6
  %17 = load i32, i32* %5
  %18 = srem i32 %17, 2
  %19 = icmp eq i32 %18, 0
  br i1 %19, label %20, label %24
20:
  %21 = load i32, i32* %6
  %22 = load i32, i32* %6
  %23 = mul nsw i32 %21, %22
  store i32 %23, i32* %3
  store i32 1, i32* %7
  br label %30
24:
  %25 = load i32, i32* %4
  %26 = load i32, i32* %6
  %27 = mul nsw i32 %25, %26
  %28 = load i32, i32* %6
  %29 = mul nsw i32 %27, %28
  store i32 %29, i32* %3
  store i32 1, i32* %7
  br label %30
30:
  br label %32
32:
  %33 = load i32, i32* %3
  ret i32 %33
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 3
  br i1 %7, label %8, label %9
8:
  store i32 1, i32* %3
  br label %20
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @atoi(i8* %12)
  %14 = load i8**, i8*** %5
  %15 = getelementptr inbounds i8*, i8** %14, i64 2
  %16 = load i8*, i8** %15
  %17 = call i32 @atoi(i8* %16)
  %18 = call i32 @H(i32 %13, i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %20
20:
  %21 = load i32, i32* %3
  ret i32 %21
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
