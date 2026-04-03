@.str = constant [4 x i8] c"%u\0A\00"
define dso_local i32 @GMlg(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i32, i32* %4
  %9 = icmp slt i32 %8, 4
  br i1 %9, label %12, label %10
10:
  br label %23
12:
  %13 = load i32, i32* %3
  %14 = shl i32 %13, 8
  %15 = load i32, i32* %2
  %16 = and i32 %15, 255
  %17 = or i32 %14, %16
  store i32 %17, i32* %3
  %18 = load i32, i32* %2
  %19 = lshr i32 %18, 8
  store i32 %19, i32* %2
  br label %20
20:
  %21 = load i32, i32* %4
  %22 = add nsw i32 %21, 1
  store i32 %22, i32* %4
  br label %7
23:
  %24 = load i32, i32* %3
  ret i32 %24
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
  %18 = call i32 @GMlg(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
