@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @Sum(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %2
  store i32 1, i32* %3
  %8 = load i32, i32* %2
  store i32 %8, i32* %4
  store i32 0, i32* %5
  br label %10
10:
  %11 = load i32, i32* %3
  %12 = load i32, i32* %4
  %13 = icmp slt i32 %11, %12
  br i1 %13, label %14, label %24
14:
  %15 = load i32, i32* %3
  %16 = load i32, i32* %4
  %17 = add nsw i32 %15, %16
  %18 = load i32, i32* %5
  %19 = add nsw i32 %18, %17
  store i32 %19, i32* %5
  %20 = load i32, i32* %3
  %21 = add nsw i32 %20, 1
  store i32 %21, i32* %3
  %22 = load i32, i32* %4
  %23 = add nsw i32 %22, -1
  store i32 %23, i32* %4
  br label %10
24:
  %25 = load i32, i32* %3
  %26 = load i32, i32* %4
  %27 = icmp eq i32 %25, %26
  br i1 %27, label %28, label %32
28:
  %29 = load i32, i32* %3
  %30 = load i32, i32* %5
  %31 = add nsw i32 %30, %29
  store i32 %31, i32* %5
  br label %32
32:
  %33 = load i32, i32* %5
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
  %14 = call i32 @Sum(i32 %13)
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
