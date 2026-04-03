@.str = constant [3 x i8] c"0\0A\00"
@.str.1 = constant [5 x i8] c"%ld\0A\00"
define dso_local i64 @mLHR1(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i64
  %6 = alloca i64
  %7 = alloca i64
  %8 = alloca i32
  %9 = alloca i32
  store i32 %0, i32* %3
  store i32 0, i32* %4
  store i64 0, i64* %5
  store i64 1, i64* %6
  store i32 2, i32* %8
  br label %15
15:
  %16 = load i32, i32* %4
  %17 = icmp ne i32 %16, 3
  br i1 %17, label %18, label %40
18:
  %19 = load i32, i32* %4
  switch i32 %19, label %39 [
    i32 0, label %20
    i32 1, label %25
    i32 2, label %31
  ]
20:
  %21 = load i32, i32* %3
  %22 = icmp eq i32 %21, 0
  br i1 %22, label %23, label %24
23:
  store i64 0, i64* %2
  store i32 1, i32* %9
  br label %48
24:
  store i32 1, i32* %4
  br label %39
25:
  %26 = load i32, i32* %8
  %27 = load i32, i32* %3
  %28 = icmp sle i32 %26, %27
  %29 = zext i1 %28 to i64
  %30 = select i1 %28, i32 2, i32 3
  store i32 %30, i32* %4
  br label %39
31:
  %32 = load i64, i64* %5
  %33 = load i64, i64* %6
  %34 = add nsw i64 %32, %33
  store i64 %34, i64* %7
  %35 = load i64, i64* %6
  store i64 %35, i64* %5
  %36 = load i64, i64* %7
  store i64 %36, i64* %6
  %37 = load i32, i32* %8
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* %8
  store i32 1, i32* %4
  br label %39
39:
  br label %15
40:
  %41 = load i32, i32* %3
  %42 = icmp eq i32 %41, 1
  br i1 %42, label %43, label %44
43:
  br label %46
44:
  %45 = load i64, i64* %6
  br label %46
46:
  %47 = phi i64 [ 1, %43 ], [ %45, %44 ]
  store i64 %47, i64* %2
  store i32 1, i32* %9
  br label %48
48:
  %54 = load i64, i64* %2
  ret i64 %54
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i64
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %9 = load i32, i32* %4
  %10 = icmp slt i32 %9, 2
  br i1 %10, label %11, label %12
11:
  store i32 1, i32* %3
  br label %31
12:
  %14 = load i8**, i8*** %5
  %15 = getelementptr inbounds i8*, i8** %14, i64 1
  %16 = load i8*, i8** %15
  %17 = call i32 @atoi(i8* %16)
  store i32 %17, i32* %6
  %18 = load i32, i32* %6
  %19 = icmp slt i32 %18, 0
  br i1 %19, label %20, label %22
20:
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0))
  store i32 0, i32* %3
  store i32 1, i32* %7
  br label %29
22:
  %24 = load i32, i32* %6
  %25 = call i64 @mLHR1(i32 %24)
  store i64 %25, i64* %8
  %26 = load i64, i64* %8
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.1, i64 0, i64 0), i64 %26)
  store i32 0, i32* %3
  store i32 1, i32* %7
  br label %29
29:
  br label %31
31:
  %32 = load i32, i32* %3
  ret i32 %32
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
