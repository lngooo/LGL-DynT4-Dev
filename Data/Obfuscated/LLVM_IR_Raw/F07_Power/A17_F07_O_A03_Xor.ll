@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @WhJB8(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  store i32 1, i32* %5
  br label %7
7:
  %8 = load i32, i32* %4
  %9 = xor i32 %8, 0
  %10 = icmp ne i32 %9, 0
  br i1 %10, label %11, label %25
11:
  %12 = load i32, i32* %4
  %13 = and i32 %12, 1
  %14 = icmp ne i32 %13, 0
  br i1 %14, label %15, label %19
15:
  %16 = load i32, i32* %3
  %17 = load i32, i32* %5
  %18 = mul nsw i32 %17, %16
  store i32 %18, i32* %5
  br label %19
19:
  %20 = load i32, i32* %3
  %21 = load i32, i32* %3
  %22 = mul nsw i32 %21, %20
  store i32 %22, i32* %3
  %23 = load i32, i32* %4
  %24 = ashr i32 %23, 1
  store i32 %24, i32* %4
  br label %7
25:
  %26 = load i32, i32* %5
  ret i32 %26
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
  %18 = call i32 @WhJB8(i32 %13, i32 %17)
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
