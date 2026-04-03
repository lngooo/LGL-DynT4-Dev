@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @tIlw1(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  %5 = load i32, i32* %2
  %6 = icmp eq i32 %5, 0
  br i1 %6, label %7, label %8
7:
  br label %23
8:
  br label %9
9:
  %10 = load i32, i32* %2
  %11 = sub i32 %10, 1
  %12 = load i32, i32* %2
  %13 = and i32 %12, %11
  store i32 %13, i32* %2
  %14 = load i32, i32* %3
  %15 = add nsw i32 %14, 1
  store i32 %15, i32* %3
  %16 = load i32, i32* %2
  %17 = icmp ne i32 %16, 0
  br i1 %17, label %18, label %19
18:
  br label %9
19:
  br label %23
20:
  %21 = load i32, i32* %3
  %22 = add nsw i32 %21, -1
  store i32 %22, i32* %3
  br label %23
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
  %18 = call i32 @tIlw1(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
