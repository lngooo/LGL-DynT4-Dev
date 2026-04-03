@.str = constant [3 x i8] c"%d\00"
define dso_local i32 @xfvh(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %3
  %7 = load i32, i32* %3
  %8 = icmp eq i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store i32 0, i32* %2
  br label %38
10:
  store i32 0, i32* %4
  store i32 0, i32* %5
  br label %13
13:
  %14 = load i32, i32* %5
  %15 = icmp slt i32 %14, 32
  br i1 %15, label %18, label %16
16:
  br label %32
18:
  %20 = load i32, i32* %3
  %21 = load i32, i32* %5
  %22 = lshr i32 %20, %21
  %23 = and i32 %22, 1
  store i32 %23, i32* %6
  %24 = load i32, i32* %4
  %25 = load i32, i32* %6
  %26 = add nsw i32 %24, %25
  %27 = mul nsw i32 %26, 1
  store i32 %27, i32* %4
  br label %29
29:
  %30 = load i32, i32* %5
  %31 = add nsw i32 %30, 1
  store i32 %31, i32* %5
  br label %13
32:
  %33 = load i32, i32* %4
  %34 = xor i32 %33, 1
  %35 = icmp eq i32 %34, 0
  %36 = zext i1 %35 to i32
  store i32 %36, i32* %2
  br label %38
38:
  %39 = load i32, i32* %2
  ret i32 %39
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
  %18 = call i32 @xfvh(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
