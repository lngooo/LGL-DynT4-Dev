@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @GCD(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %5 = load i32, i32* %3
  %6 = call i32 @abs(i32 %5)
  %7 = load i32, i32* %4
  %8 = call i32 @abs(i32 %7)
  %9 = call i32 @_internal_gcd_switch_loop(i32 %6, i32 %8)
  ret i32 %9
}
define internal i32 @_internal_gcd_switch_loop(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  store i32 0, i32* %6
  store i32 0, i32* %7
  store i32 0, i32* %8
  br label %13
13:
  br label %14
14:
  %15 = load i32, i32* %6
  switch i32 %15, label %30 [
    i32 0, label %16
    i32 1, label %22
    i32 2, label %27
  ]
16:
  %17 = load i32, i32* %5
  %18 = icmp eq i32 %17, 0
  br i1 %18, label %19, label %21
19:
  %20 = load i32, i32* %4
  store i32 %20, i32* %3
  store i32 1, i32* %9
  br label %33
21:
  store i32 1, i32* %6
  br label %32
22:
  %23 = load i32, i32* %5
  store i32 %23, i32* %7
  %24 = load i32, i32* %4
  %25 = load i32, i32* %5
  %26 = srem i32 %24, %25
  store i32 %26, i32* %8
  store i32 2, i32* %6
  br label %32
27:
  %28 = load i32, i32* %7
  store i32 %28, i32* %4
  %29 = load i32, i32* %8
  store i32 %29, i32* %5
  store i32 0, i32* %6
  br label %32
30:
  %31 = load i32, i32* %4
  store i32 %31, i32* %3
  store i32 1, i32* %9
  br label %33
32:
  br label %13
33:
  %37 = load i32, i32* %3
  ret i32 %37
}
declare i32 @abs(i32)
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
  %18 = call i32 @GCD(i32 %13, i32 %17)
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
