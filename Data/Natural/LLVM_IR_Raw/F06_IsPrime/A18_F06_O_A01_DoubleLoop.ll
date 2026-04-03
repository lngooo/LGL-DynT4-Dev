@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @IsPrime(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %3
  %7 = load i32, i32* %3
  %8 = icmp slt i32 %7, 2
  br i1 %8, label %9, label %10
9:
  store i32 0, i32* %2
  br label %43
10:
  store i32 0, i32* %4
  store i32 1, i32* %5
  br label %13
13:
  %14 = load i32, i32* %5
  %15 = load i32, i32* %3
  %16 = icmp sle i32 %14, %15
  br i1 %16, label %18, label %17
17:
  store i32 2, i32* %6
  br label %34
18:
  %19 = load i32, i32* %3
  %20 = load i32, i32* %5
  %21 = srem i32 %19, %20
  %22 = icmp eq i32 %21, 0
  br i1 %22, label %23, label %26
23:
  %24 = load i32, i32* %4
  %25 = add nsw i32 %24, 1
  store i32 %25, i32* %4
  br label %26
26:
  %27 = load i32, i32* %4
  %28 = icmp sgt i32 %27, 2
  br i1 %28, label %29, label %30
29:
  store i32 0, i32* %2
  store i32 1, i32* %6
  br label %34
30:
  br label %31
31:
  %32 = load i32, i32* %5
  %33 = add nsw i32 %32, 1
  store i32 %33, i32* %5
  br label %13
34:
  %36 = load i32, i32* %6
  switch i32 %36, label %41 [
    i32 2, label %37
  ]
37:
  %38 = load i32, i32* %4
  %39 = icmp eq i32 %38, 2
  %40 = zext i1 %39 to i32
  store i32 %40, i32* %2
  store i32 1, i32* %6
  br label %41
41:
  br label %43
43:
  %44 = load i32, i32* %2
  ret i32 %44
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
