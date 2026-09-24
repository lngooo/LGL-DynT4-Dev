@.str = constant [3 x i8] c"%u\00"
define dso_local i32 @GrayCode(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %9
9:
  %10 = load i32, i32* %4
  %11 = icmp sge i32 %10, 32
  br i1 %11, label %12, label %13
12:
  br label %44
13:
  %15 = load i32, i32* %2
  %16 = load i32, i32* %4
  %17 = lshr i32 %15, %16
  %18 = and i32 %17, 1
  store i32 %18, i32* %5
  %20 = load i32, i32* %4
  %21 = icmp eq i32 %20, 31
  br i1 %21, label %22, label %23
22:
  br label %29
23:
  %24 = load i32, i32* %2
  %25 = load i32, i32* %4
  %26 = add nsw i32 %25, 1
  %27 = lshr i32 %24, %26
  %28 = and i32 %27, 1
  br label %29
29:
  %30 = phi i32 [ 0, %22 ], [ %28, %23 ]
  store i32 %30, i32* %6
  %31 = load i32, i32* %5
  %32 = load i32, i32* %6
  %33 = icmp ne i32 %31, %32
  br i1 %33, label %34, label %39
34:
  %35 = load i32, i32* %4
  %36 = shl i32 1, %35
  %37 = load i32, i32* %3
  %38 = or i32 %37, %36
  store i32 %38, i32* %3
  br label %39
39:
  %42 = load i32, i32* %4
  %43 = add nsw i32 %42, 1
  store i32 %43, i32* %4
  br label %9
44:
  %45 = load i32, i32* %3
  ret i32 %45
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %7 = load i32, i32* %4
  %8 = icmp slt i32 %7, 2
  br i1 %8, label %9, label %10
9:
  store i32 0, i32* %3
  br label %21
10:
  %12 = load i8**, i8*** %5
  %13 = getelementptr inbounds i8*, i8** %12, i64 1
  %14 = load i8*, i8** %13
  %15 = call i64 @strtoul(i8* %14, i8** null, i32 10)
  %16 = trunc i64 %15 to i32
  store i32 %16, i32* %6
  %17 = load i32, i32* %6
  %18 = call i32 @GrayCode(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
