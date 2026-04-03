@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @ArraySum(i32* %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  %7 = load i32, i32* %5
  %8 = icmp sle i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store i32 0, i32* %3
  br label %34
10:
  %11 = load i32, i32* %5
  %12 = icmp eq i32 %11, 1
  br i1 %12, label %13, label %17
13:
  %14 = load i32*, i32** %4
  %15 = getelementptr inbounds i32, i32* %14, i64 0
  %16 = load i32, i32* %15
  store i32 %16, i32* %3
  br label %34
17:
  %19 = load i32, i32* %5
  %20 = sdiv i32 %19, 2
  store i32 %20, i32* %6
  %21 = load i32*, i32** %4
  %22 = load i32, i32* %6
  %23 = call i32 @ArraySum(i32* %21, i32 %22)
  %24 = load i32*, i32** %4
  %25 = load i32, i32* %6
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i32, i32* %24, i64 %26
  %28 = load i32, i32* %5
  %29 = load i32, i32* %6
  %30 = sub nsw i32 %28, %29
  %31 = call i32 @ArraySum(i32* %27, i32 %30)
  %32 = add nsw i32 %23, %31
  store i32 %32, i32* %3
  br label %34
34:
  %35 = load i32, i32* %3
  ret i32 %35
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32*
  %8 = alloca i32
  %9 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %10 = load i32, i32* %4
  %11 = icmp slt i32 %10, 2
  br i1 %11, label %12, label %13
12:
  store i32 0, i32* %3
  br label %57
13:
  %15 = load i32, i32* %4
  %16 = sub nsw i32 %15, 1
  store i32 %16, i32* %6
  %18 = load i32, i32* %6
  %19 = sext i32 %18 to i64
  %20 = mul i64 %19, 4
  %21 = call noalias i8* @malloc(i64 %20)
  store i32* %22, i32** %7
  store i32 0, i32* %8
  br label %24
24:
  %25 = load i32, i32* %8
  %26 = load i32, i32* %6
  %27 = icmp slt i32 %25, %26
  br i1 %27, label %30, label %28
28:
  br label %45
30:
  %31 = load i8**, i8*** %5
  %32 = load i32, i32* %8
  %33 = add nsw i32 %32, 1
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i8*, i8** %31, i64 %34
  %36 = load i8*, i8** %35
  %37 = call i32 @atoi(i8* %36)
  %38 = load i32*, i32** %7
  %39 = load i32, i32* %8
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i32, i32* %38, i64 %40
  store i32 %37, i32* %41
  br label %42
42:
  %43 = load i32, i32* %8
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %8
  br label %24
45:
  %47 = load i32*, i32** %7
  %48 = load i32, i32* %6
  %49 = call i32 @ArraySum(i32* %47, i32 %48)
  store i32 %49, i32* %9
  %50 = load i32, i32* %9
  %51 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %50)
  %52 = load i32*, i32** %7
  call void @free(i8* %53)
  store i32 0, i32* %3
  br label %57
57:
  %58 = load i32, i32* %3
  ret i32 %58
}
declare noalias i8* @malloc(i64)
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare void @free(i8*)
declare i64 @strtol(i8*, i8**, i32)
