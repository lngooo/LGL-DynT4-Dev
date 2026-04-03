@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @rH(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp sle i32 %6, 3
  br i1 %7, label %8, label %12
8:
  %9 = load i32, i32* %3
  %10 = icmp sgt i32 %9, 1
  %11 = zext i1 %10 to i32
  store i32 %11, i32* %2
  br label %47
12:
  %13 = load i32, i32* %3
  %14 = srem i32 %13, 2
  %15 = icmp eq i32 %14, 0
  br i1 %15, label %20, label %16
16:
  %17 = load i32, i32* %3
  %18 = srem i32 %17, 3
  %19 = icmp eq i32 %18, 0
  br i1 %19, label %20, label %21
20:
  store i32 0, i32* %2
  br label %47
21:
  store i32 5, i32* %4
  br label %23
23:
  %24 = load i32, i32* %4
  %25 = load i32, i32* %4
  %26 = mul nsw i32 %24, %25
  %27 = load i32, i32* %3
  %28 = icmp sle i32 %26, %27
  br i1 %28, label %29, label %44
29:
  %30 = load i32, i32* %3
  %31 = load i32, i32* %4
  %32 = srem i32 %30, %31
  %33 = icmp eq i32 %32, 0
  br i1 %33, label %40, label %34
34:
  %35 = load i32, i32* %3
  %36 = load i32, i32* %4
  %37 = add nsw i32 %36, 2
  %38 = srem i32 %35, %37
  %39 = icmp eq i32 %38, 0
  br i1 %39, label %40, label %41
40:
  store i32 0, i32* %2
  store i32 1, i32* %5
  br label %45
41:
  %42 = load i32, i32* %4
  %43 = add nsw i32 %42, 6
  store i32 %43, i32* %4
  br label %23
44:
  store i32 1, i32* %2
  store i32 1, i32* %5
  br label %45
45:
  br label %47
47:
  %48 = load i32, i32* %2
  ret i32 %48
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
  %14 = call i32 @rH(i32 %13)
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
