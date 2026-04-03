@.str = constant [4 x i8] c"%u\0A\00"
define dso_local i32 @hkj(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  store i32 %0, i32* %2
  store i8* %9, i8** %4
  store i8* %11, i8** %5
  store i32 0, i32* %6
  br label %13
13:
  %14 = load i32, i32* %6
  %15 = icmp slt i32 %14, 4
  br i1 %15, label %18, label %16
16:
  br label %32
18:
  %19 = load i8*, i8** %4
  %20 = load i32, i32* %6
  %21 = sub nsw i32 3, %20
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i8, i8* %19, i64 %22
  %24 = load i8, i8* %23
  %25 = load i8*, i8** %5
  %26 = load i32, i32* %6
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i8, i8* %25, i64 %27
  store i8 %24, i8* %28
  br label %29
29:
  %30 = load i32, i32* %6
  %31 = add nsw i32 %30, 1
  store i32 %31, i32* %6
  br label %13
32:
  %33 = load i32, i32* %3
  ret i32 %33
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
  %18 = call i32 @hkj(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
