@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @RUB(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  %10 = load i32, i32* %6
  %11 = icmp sle i32 %10, 0
  br i1 %11, label %12, label %13
12:
  store i32 -1, i32* %4
  br label %61
13:
  %15 = load i32*, i32** %5
  %16 = load i32, i32* %6
  %17 = sub nsw i32 %16, 1
  %18 = sext i32 %17 to i64
  %19 = getelementptr inbounds i32, i32* %15, i64 %18
  %20 = load i32, i32* %19
  store i32 %20, i32* %8
  %21 = load i32, i32* %7
  %22 = load i32*, i32** %5
  %23 = load i32, i32* %6
  %24 = sub nsw i32 %23, 1
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i32, i32* %22, i64 %25
  store i32 %21, i32* %26
  store i32 0, i32* %9
  br label %28
28:
  %29 = load i32*, i32** %5
  %30 = load i32, i32* %9
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %29, i64 %31
  %33 = load i32, i32* %32
  %34 = load i32, i32* %7
  %35 = icmp ne i32 %33, %34
  br i1 %35, label %36, label %39
36:
  %37 = load i32, i32* %9
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* %9
  br label %28
39:
  %40 = load i32, i32* %8
  %41 = load i32*, i32** %5
  %42 = load i32, i32* %6
  %43 = sub nsw i32 %42, 1
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i32, i32* %41, i64 %44
  store i32 %40, i32* %45
  %46 = load i32, i32* %9
  %47 = load i32, i32* %6
  %48 = sub nsw i32 %47, 1
  %49 = icmp slt i32 %46, %48
  br i1 %49, label %54, label %50
50:
  %51 = load i32, i32* %8
  %52 = load i32, i32* %7
  %53 = icmp eq i32 %51, %52
  br i1 %53, label %54, label %56
54:
  %55 = load i32, i32* %9
  br label %57
56:
  br label %57
57:
  %58 = phi i32 [ %55, %54 ], [ -1, %56 ]
  store i32 %58, i32* %4
  br label %61
61:
  %62 = load i32, i32* %4
  ret i32 %62
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
  %50 = call i32 @RUB(i32* %47, i32 %48, i32 %49)
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
