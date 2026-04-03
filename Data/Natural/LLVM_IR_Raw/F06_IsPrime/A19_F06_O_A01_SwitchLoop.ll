@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @IsPrime(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %2
  br label %30
9:
  store i32 2, i32* %4
  br label %11
11:
  br label %12
12:
  %13 = load i32, i32* %4
  %14 = load i32, i32* %4
  %15 = mul nsw i32 %13, %14
  %16 = load i32, i32* %3
  %17 = icmp sgt i32 %15, %16
  br i1 %17, label %18, label %19
18:
  store i32 1, i32* %2
  store i32 1, i32* %5
  br label %28
19:
  %20 = load i32, i32* %3
  %21 = load i32, i32* %4
  %22 = srem i32 %20, %21
  switch i32 %22, label %24 [
    i32 0, label %23
  ]
23:
  store i32 0, i32* %2
  store i32 1, i32* %5
  br label %28
24:
  %25 = load i32, i32* %4
  %26 = add nsw i32 %25, 1
  store i32 %26, i32* %4
  br label %27
27:
  br label %11
28:
  br label %30
30:
  %31 = load i32, i32* %2
  ret i32 %31
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
