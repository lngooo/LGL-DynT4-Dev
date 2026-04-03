@.str = constant [3 x i8] c"%d\00"
define dso_local i32 @HammingDistance(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  store i32 0, i32* %6
  br label %9
9:
  %10 = load i32, i32* %6
  %11 = icmp slt i32 %10, 1
  br i1 %11, label %13, label %12
12:
  store i32 2, i32* %7
  br label %36
13:
  %14 = load i32, i32* %4
  %15 = icmp eq i32 %14, 0
  br i1 %15, label %16, label %20
16:
  %17 = load i32, i32* %5
  %18 = icmp eq i32 %17, 0
  br i1 %18, label %19, label %20
19:
  store i32 0, i32* %3
  store i32 1, i32* %7
  br label %36
20:
  %21 = load i32, i32* %4
  %22 = and i32 %21, 1
  %23 = load i32, i32* %5
  %24 = and i32 %23, 1
  %25 = icmp ne i32 %22, %24
  %26 = zext i1 %25 to i32
  %27 = load i32, i32* %4
  %28 = lshr i32 %27, 1
  %29 = load i32, i32* %5
  %30 = lshr i32 %29, 1
  %31 = call i32 @HammingDistance(i32 %28, i32 %30)
  %32 = add nsw i32 %26, %31
  store i32 %32, i32* %3
  store i32 1, i32* %7
  br label %36
33:
  %34 = load i32, i32* %6
  %35 = add nsw i32 %34, 1
  store i32 %35, i32* %6
  br label %9
36:
  %38 = load i32, i32* %7
  switch i32 %38, label %42 [
    i32 2, label %39
    i32 1, label %40
  ]
39:
  store i32 -1, i32* %3
  br label %40
40:
  %41 = load i32, i32* %3
  ret i32 %41
42:
  unreachable
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %8 = load i32, i32* %4
  %9 = icmp slt i32 %8, 3
  br i1 %9, label %10, label %11
10:
  store i32 0, i32* %3
  br label %30
11:
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 1
  %15 = load i8*, i8** %14
  %16 = call i64 @strtoul(i8* %15, i8** null, i32 10)
  %17 = trunc i64 %16 to i32
  store i32 %17, i32* %6
  %19 = load i8**, i8*** %5
  %20 = getelementptr inbounds i8*, i8** %19, i64 2
  %21 = load i8*, i8** %20
  %22 = call i64 @strtoul(i8* %21, i8** null, i32 10)
  %23 = trunc i64 %22 to i32
  store i32 %23, i32* %7
  %24 = load i32, i32* %6
  %25 = load i32, i32* %7
  %26 = call i32 @HammingDistance(i32 %24, i32 %25)
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %26)
  store i32 0, i32* %3
  br label %30
30:
  %31 = load i32, i32* %3
  ret i32 %31
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
