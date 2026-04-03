@.str = constant [3 x i8] c"%u\00"
@.str.1 = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @MpBr(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 703710, i32* %4
  store i32 0, i32* %5
  br label %9
9:
  %10 = load i32, i32* %5
  %11 = icmp slt i32 %10, 32
  br i1 %11, label %14, label %12
12:
  br label %31
14:
  %15 = load i32, i32* %4
  %16 = mul i32 %15, 3
  %17 = load i32, i32* %5
  %18 = add i32 %16, %17
  store i32 %18, i32* %4
  %19 = load i32, i32* %2
  %20 = urem i32 %19, 2
  %21 = icmp ne i32 %20, 0
  br i1 %21, label %22, label %25
22:
  %23 = load i32, i32* %3
  %24 = add nsw i32 %23, 1
  store i32 %24, i32* %3
  br label %25
25:
  %26 = load i32, i32* %2
  %27 = udiv i32 %26, 2
  store i32 %27, i32* %2
  br label %28
28:
  %29 = load i32, i32* %5
  %30 = add nsw i32 %29, 1
  store i32 %30, i32* %5
  br label %9
31:
  %32 = load i32, i32* %4
  %33 = icmp eq i32 %32, 0
  br i1 %33, label %34, label %37
34:
  %35 = load i32, i32* %4
  %36 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %35)
  br label %37
37:
  %38 = load i32, i32* %3
  ret i32 %38
}
declare i32 @printf(i8*, ...)
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
  %18 = call i32 @MpBr(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
