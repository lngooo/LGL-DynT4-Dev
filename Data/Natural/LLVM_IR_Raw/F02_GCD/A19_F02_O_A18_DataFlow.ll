@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @GCD(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca [2 x i32]
  %6 = alloca i32
  %7 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %9 = getelementptr inbounds [2 x i32], [2 x i32]* %5, i64 0, i64 0
  %10 = load i32, i32* %3
  %11 = call i32 @abs(i32 %10)
  store i32 %11, i32* %9
  %12 = getelementptr inbounds i32, i32* %9, i64 1
  %13 = load i32, i32* %4
  %14 = call i32 @abs(i32 %13)
  store i32 %14, i32* %12
  br label %15
15:
  %16 = getelementptr inbounds [2 x i32], [2 x i32]* %5, i64 0, i64 1
  %17 = load i32, i32* %16
  %18 = icmp ne i32 %17, 0
  br i1 %18, label %19, label %41
19:
  %21 = getelementptr inbounds [2 x i32], [2 x i32]* %5, i64 0, i64 0
  %22 = load i32, i32* %21
  %23 = getelementptr inbounds [2 x i32], [2 x i32]* %5, i64 0, i64 1
  %24 = load i32, i32* %23
  %25 = sdiv i32 %22, %24
  store i32 %25, i32* %6
  %27 = getelementptr inbounds [2 x i32], [2 x i32]* %5, i64 0, i64 0
  %28 = load i32, i32* %27
  %29 = getelementptr inbounds [2 x i32], [2 x i32]* %5, i64 0, i64 1
  %30 = load i32, i32* %29
  %31 = srem i32 %28, %30
  store i32 %31, i32* %7
  %32 = getelementptr inbounds [2 x i32], [2 x i32]* %5, i64 0, i64 1
  %33 = load i32, i32* %32
  %34 = getelementptr inbounds [2 x i32], [2 x i32]* %5, i64 0, i64 0
  store i32 %33, i32* %34
  %35 = load i32, i32* %7
  %36 = getelementptr inbounds [2 x i32], [2 x i32]* %5, i64 0, i64 1
  store i32 %35, i32* %36
  %37 = load i32, i32* %6
  %38 = add nsw i32 %37, 0
  store i32 %38, i32* %6
  br label %15
41:
  %42 = getelementptr inbounds [2 x i32], [2 x i32]* %5, i64 0, i64 0
  %43 = load i32, i32* %42
  ret i32 %43
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
