@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @Zgm(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32 %0, i32* %2
  store i32 2748, i32* %3
  %10 = load i32, i32* %3
  %11 = xor i32 0, %10
  store i32 %11, i32* %4
  %13 = load i32, i32* %4
  %14 = load i32, i32* %3
  %15 = xor i32 %13, %14
  store i32 %15, i32* %5
  store i32 1, i32* %6
  br label %17
17:
  %18 = load i32, i32* %6
  %19 = load i32, i32* %2
  %20 = icmp sle i32 %18, %19
  br i1 %20, label %23, label %21
21:
  br label %35
23:
  %25 = load i32, i32* %6
  %26 = add nsw i32 %25, 5
  %27 = sub nsw i32 %26, 5
  store i32 %27, i32* %7
  %28 = load i32, i32* %7
  %29 = load i32, i32* %5
  %30 = add nsw i32 %29, %28
  store i32 %30, i32* %5
  br label %32
32:
  %33 = load i32, i32* %6
  %34 = add nsw i32 %33, 1
  store i32 %34, i32* %6
  br label %17
35:
  %36 = load i32, i32* %5
  ret i32 %36
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
  %14 = call i32 @Zgm(i32 %13)
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
