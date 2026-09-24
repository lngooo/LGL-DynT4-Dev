@.str = constant [3 x i8] c"%u\00"
define dso_local i32 @Cf(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 0, i32* %6
  br label %11
11:
  %12 = load i32, i32* %6
  %13 = icmp slt i32 %12, 32
  br i1 %13, label %16, label %14
14:
  br label %44
16:
  %17 = load i32, i32* %2
  %18 = load i32, i32* %6
  %19 = lshr i32 %17, %18
  %20 = and i32 %19, 1
  store i32 %20, i32* %4
  %21 = load i32, i32* %6
  %22 = icmp eq i32 %21, 31
  br i1 %22, label %23, label %24
23:
  br label %30
24:
  %25 = load i32, i32* %2
  %26 = load i32, i32* %6
  %27 = add nsw i32 %26, 1
  %28 = lshr i32 %25, %27
  %29 = and i32 %28, 1
  br label %30
30:
  %31 = phi i32 [ 0, %23 ], [ %29, %24 ]
  store i32 %31, i32* %5
  %32 = load i32, i32* %4
  %33 = load i32, i32* %5
  %34 = icmp ne i32 %32, %33
  br i1 %34, label %35, label %40
35:
  %36 = load i32, i32* %6
  %37 = shl i32 1, %36
  %38 = load i32, i32* %3
  %39 = or i32 %38, %37
  store i32 %39, i32* %3
  br label %40
40:
  br label %41
41:
  %42 = load i32, i32* %6
  %43 = add nsw i32 %42, 1
  store i32 %43, i32* %6
  br label %11
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
  %18 = call i32 @Cf(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
