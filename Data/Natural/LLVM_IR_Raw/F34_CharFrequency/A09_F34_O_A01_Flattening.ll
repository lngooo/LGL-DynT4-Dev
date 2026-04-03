@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @CharFrequency(i8* %0, i8 signext %1) {
  %3 = alloca i8*
  %4 = alloca i8
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %3
  store i8 %1, i8* %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  store i32 0, i32* %7
  br label %11
11:
  %12 = load i32, i32* %7
  %13 = icmp ne i32 %12, -1
  br i1 %13, label %14, label %45
14:
  %15 = load i32, i32* %7
  switch i32 %15, label %44 [
    i32 0, label %16
    i32 1, label %26
    i32 2, label %40
    i32 3, label %43
  ]
16:
  %17 = load i8*, i8** %3
  %18 = load i32, i32* %6
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i8, i8* %17, i64 %19
  %21 = load i8, i8* %20
  %22 = sext i8 %21 to i32
  %23 = icmp ne i32 %22, 0
  %24 = zext i1 %23 to i64
  %25 = select i1 %23, i32 1, i32 3
  store i32 %25, i32* %7
  br label %44
26:
  %27 = load i8*, i8** %3
  %28 = load i32, i32* %6
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i8, i8* %27, i64 %29
  %31 = load i8, i8* %30
  %32 = sext i8 %31 to i32
  %33 = load i8, i8* %4
  %34 = sext i8 %33 to i32
  %35 = icmp eq i32 %32, %34
  br i1 %35, label %36, label %39
36:
  %37 = load i32, i32* %5
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* %5
  br label %39
39:
  store i32 2, i32* %7
  br label %44
40:
  %41 = load i32, i32* %6
  %42 = add nsw i32 %41, 1
  store i32 %42, i32* %6
  store i32 0, i32* %7
  br label %44
43:
  store i32 -1, i32* %7
  br label %44
44:
  br label %11
45:
  %46 = load i32, i32* %5
  ret i32 %46
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
  %18 = call i32 @CharFrequency(i8* %12, i8 signext %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %20
20:
  %21 = load i32, i32* %3
  ret i32 %21
}
declare i32 @printf(i8*, ...)
