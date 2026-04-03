@.str = constant [3 x i8] c"%d\00"
define dso_local i32 @iOqE(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %3
  %5 = load i32, i32* %3
  %6 = icmp eq i32 %5, 0
  br i1 %6, label %7, label %8
7:
  store i32 0, i32* %2
  br label %29
8:
  store i32 0, i32* %4
  br label %10
10:
  %11 = load i32, i32* %3
  %12 = icmp ule i32 %11, 0
  br i1 %12, label %13, label %14
13:
  br label %24
14:
  %15 = load i32, i32* %3
  %16 = and i32 %15, 1
  %17 = icmp ne i32 %16, 0
  br i1 %17, label %18, label %21
18:
  %19 = load i32, i32* %4
  %20 = add nsw i32 %19, 1
  store i32 %20, i32* %4
  br label %21
21:
  %22 = load i32, i32* %3
  %23 = lshr i32 %22, 1
  store i32 %23, i32* %3
  br label %10
24:
  %25 = load i32, i32* %4
  %26 = icmp eq i32 %25, 1
  %27 = zext i1 %26 to i32
  store i32 %27, i32* %2
  br label %29
29:
  %30 = load i32, i32* %2
  ret i32 %30
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
  %18 = call i32 @iOqE(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
