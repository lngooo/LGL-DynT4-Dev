@.str = constant [4 x i8] c"%u\0A\00"
define dso_local i32 @ByteSwap(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 1, i32* %4
  br label %7
7:
  %8 = load i32, i32* %4
  %9 = icmp ne i32 %8, 0
  br i1 %9, label %10, label %37
10:
  %11 = load i32, i32* %4
  switch i32 %11, label %36 [
    i32 1, label %12
    i32 2, label %18
    i32 3, label %24
    i32 4, label %30
  ]
12:
  %13 = load i32, i32* %2
  %14 = and i32 %13, 255
  %15 = shl i32 %14, 24
  %16 = load i32, i32* %3
  %17 = or i32 %16, %15
  store i32 %17, i32* %3
  store i32 2, i32* %4
  br label %36
18:
  %19 = load i32, i32* %2
  %20 = and i32 %19, 65280
  %21 = shl i32 %20, 8
  %22 = load i32, i32* %3
  %23 = or i32 %22, %21
  store i32 %23, i32* %3
  store i32 3, i32* %4
  br label %36
24:
  %25 = load i32, i32* %2
  %26 = and i32 %25, 16711680
  %27 = lshr i32 %26, 8
  %28 = load i32, i32* %3
  %29 = or i32 %28, %27
  store i32 %29, i32* %3
  store i32 4, i32* %4
  br label %36
30:
  %31 = load i32, i32* %2
  %32 = and i32 %31, -16777216
  %33 = lshr i32 %32, 24
  %34 = load i32, i32* %3
  %35 = or i32 %34, %33
  store i32 %35, i32* %3
  store i32 0, i32* %4
  br label %36
36:
  br label %7
37:
  %38 = load i32, i32* %3
  ret i32 %38
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
  %18 = call i32 @ByteSwap(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
