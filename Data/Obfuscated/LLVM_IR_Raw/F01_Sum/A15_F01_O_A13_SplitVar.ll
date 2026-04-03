@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @eL(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  store i32 1, i32* %5
  br label %9
9:
  %10 = load i32, i32* %5
  %11 = load i32, i32* %2
  %12 = icmp sle i32 %10, %11
  br i1 %12, label %15, label %13
13:
  br label %31
15:
  %16 = load i32, i32* %5
  %17 = srem i32 %16, 2
  %18 = icmp eq i32 %17, 0
  br i1 %18, label %19, label %23
19:
  %20 = load i32, i32* %5
  %21 = load i32, i32* %3
  %22 = add nsw i32 %21, %20
  store i32 %22, i32* %3
  br label %27
23:
  %24 = load i32, i32* %5
  %25 = load i32, i32* %4
  %26 = add nsw i32 %25, %24
  store i32 %26, i32* %4
  br label %27
27:
  br label %28
28:
  %29 = load i32, i32* %5
  %30 = add nsw i32 %29, 1
  store i32 %30, i32* %5
  br label %9
31:
  %32 = load i32, i32* %3
  %33 = load i32, i32* %4
  %34 = add nsw i32 %32, %33
  ret i32 %34
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
  %14 = call i32 @eL(i32 %13)
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
