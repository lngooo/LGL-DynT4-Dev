@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @CvW(i8* %0, i8 signext %1) {
  %3 = alloca i8*
  %4 = alloca i8
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %3
  store i8 %1, i8* %4
  store i32 0, i32* %5
  store i32 7, i32* %6
  br label %9
9:
  %10 = load i8*, i8** %3
  %11 = load i8, i8* %10
  %12 = icmp ne i8 %11, 0
  br i1 %12, label %13, label %36
13:
  %14 = load i32, i32* %6
  %15 = load i32, i32* %6
  %16 = mul nsw i32 %14, %15
  %17 = srem i32 %16, 2
  %18 = icmp ne i32 %17, 0
  br i1 %18, label %19, label %32
19:
  %20 = load i8*, i8** %3
  %21 = load i8, i8* %20
  %22 = sext i8 %21 to i32
  %23 = load i8, i8* %4
  %24 = sext i8 %23 to i32
  %25 = icmp eq i32 %22, %24
  br i1 %25, label %26, label %29
26:
  %27 = load i32, i32* %5
  %28 = add nsw i32 %27, 1
  store i32 %28, i32* %5
  br label %29
29:
  %30 = load i8*, i8** %3
  %31 = getelementptr inbounds i8, i8* %30, i32 1
  store i8* %31, i8** %3
  br label %35
32:
  %33 = load i8*, i8** %3
  %34 = getelementptr inbounds i8, i8* %33, i32 -1
  store i8* %34, i8** %3
  br label %35
35:
  br label %9
36:
  %37 = load i32, i32* %5
  ret i32 %37
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 3
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %20
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 2
  %15 = load i8*, i8** %14
  %16 = getelementptr inbounds i8, i8* %15, i64 0
  %17 = load i8, i8* %16
  %18 = call i32 @CvW(i8* %12, i8 signext %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %20
20:
  %21 = load i32, i32* %3
  ret i32 %21
}
declare i32 @printf(i8*, ...)
