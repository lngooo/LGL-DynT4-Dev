@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @gEK(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  store i32 0, i32* %8
  store i32 0, i32* %9
  br label %13
13:
  %14 = load i32, i32* %8
  %15 = icmp ne i32 %14, 3
  br i1 %15, label %16, label %39
16:
  %17 = load i32, i32* %8
  switch i32 %17, label %38 [
    i32 0, label %18
    i32 1, label %24
    i32 2, label %37
  ]
18:
  %19 = load i32, i32* %9
  %20 = load i32, i32* %6
  %21 = icmp slt i32 %19, %20
  %22 = zext i1 %21 to i64
  %23 = select i1 %21, i32 1, i32 2
  store i32 %23, i32* %8
  br label %38
24:
  %25 = load i32*, i32** %5
  %26 = load i32, i32* %9
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i32, i32* %25, i64 %27
  %29 = load i32, i32* %28
  %30 = load i32, i32* %7
  %31 = icmp eq i32 %29, %30
  br i1 %31, label %32, label %34
32:
  %33 = load i32, i32* %9
  store i32 %33, i32* %4
  store i32 1, i32* %10
  br label %40
34:
  %35 = load i32, i32* %9
  %36 = add nsw i32 %35, 1
  store i32 %36, i32* %9
  store i32 0, i32* %8
  br label %38
37:
  store i32 -1, i32* %4
  store i32 1, i32* %10
  br label %40
38:
  br label %13
39:
  store i32 -1, i32* %4
  store i32 1, i32* %10
  br label %40
40:
  %43 = load i32, i32* %4
  ret i32 %43
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca [100 x i32]
  %9 = alloca i32
  %10 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %11 = load i32, i32* %4
  %12 = icmp slt i32 %11, 3
  br i1 %12, label %13, label %14
13:
  store i32 1, i32* %3
  br label %57
14:
  %16 = load i8**, i8*** %5
  %17 = getelementptr inbounds i8*, i8** %16, i64 1
  %18 = load i8*, i8** %17
  %19 = call i32 @atoi(i8* %18)
  store i32 %19, i32* %6
  %21 = load i32, i32* %4
  %22 = sub nsw i32 %21, 2
  store i32 %22, i32* %7
  store i32 0, i32* %9
  br label %25
25:
  %26 = load i32, i32* %9
  %27 = load i32, i32* %7
  %28 = icmp slt i32 %26, %27
  br i1 %28, label %31, label %29
29:
  br label %45
31:
  %32 = load i8**, i8*** %5
  %33 = load i32, i32* %9
  %34 = add nsw i32 %33, 2
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i8*, i8** %32, i64 %35
  %37 = load i8*, i8** %36
  %38 = call i32 @atoi(i8* %37)
  %39 = load i32, i32* %9
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds [100 x i32], [100 x i32]* %8, i64 0, i64 %40
  store i32 %38, i32* %41
  br label %42
42:
  %43 = load i32, i32* %9
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %9
  br label %25
45:
  %47 = getelementptr inbounds [100 x i32], [100 x i32]* %8, i64 0, i64 0
  %48 = load i32, i32* %7
  %49 = load i32, i32* %6
  %50 = call i32 @gEK(i32* %47, i32 %48, i32 %49)
  store i32 %50, i32* %10
  %51 = load i32, i32* %10
  %52 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %51)
  store i32 0, i32* %3
  br label %57
57:
  %58 = load i32, i32* %3
  ret i32 %58
}
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare i64 @strtol(i8*, i8**, i32)
