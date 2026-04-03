@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @q(i32* %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32*
  %7 = alloca i32
  %8 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  %9 = load i32, i32* %5
  %10 = icmp sle i32 %9, 0
  br i1 %10, label %11, label %12
11:
  store i32 0, i32* %3
  br label %43
12:
  %14 = load i32*, i32** %4
  store i32* %14, i32** %6
  %16 = load i32*, i32** %6
  %17 = load i32, i32* %16
  store i32 %17, i32* %7
  store i32 1, i32* %8
  br label %19
19:
  %20 = load i32, i32* %8
  %21 = load i32, i32* %5
  %22 = icmp slt i32 %20, %21
  br i1 %22, label %25, label %23
23:
  br label %39
25:
  %26 = load i32*, i32** %6
  %27 = getelementptr inbounds i32, i32* %26, i32 1
  store i32* %27, i32** %6
  %28 = load i32*, i32** %6
  %29 = load i32, i32* %28
  %30 = load i32, i32* %7
  %31 = icmp sgt i32 %29, %30
  br i1 %31, label %32, label %35
32:
  %33 = load i32*, i32** %6
  %34 = load i32, i32* %33
  store i32 %34, i32* %7
  br label %35
35:
  br label %36
36:
  %37 = load i32, i32* %8
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* %8
  br label %19
39:
  %40 = load i32, i32* %7
  store i32 %40, i32* %3
  br label %43
43:
  %44 = load i32, i32* %3
  ret i32 %44
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32*
  %8 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %9 = load i32, i32* %4
  %10 = icmp slt i32 %9, 2
  br i1 %10, label %11, label %12
11:
  store i32 0, i32* %3
  br label %53
12:
  %14 = load i32, i32* %4
  %15 = sub nsw i32 %14, 1
  store i32 %15, i32* %6
  %17 = load i32, i32* %6
  %18 = sext i32 %17 to i64
  %19 = mul i64 %18, 4
  %20 = call noalias i8* @malloc(i64 %19)
  store i32* %21, i32** %7
  store i32 0, i32* %8
  br label %23
23:
  %24 = load i32, i32* %8
  %25 = load i32, i32* %6
  %26 = icmp slt i32 %24, %25
  br i1 %26, label %29, label %27
27:
  br label %44
29:
  %30 = load i8**, i8*** %5
  %31 = load i32, i32* %8
  %32 = add nsw i32 %31, 1
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8*, i8** %30, i64 %33
  %35 = load i8*, i8** %34
  %36 = call i32 @atoi(i8* %35)
  %37 = load i32*, i32** %7
  %38 = load i32, i32* %8
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i32, i32* %37, i64 %39
  store i32 %36, i32* %40
  br label %41
41:
  %42 = load i32, i32* %8
  %43 = add nsw i32 %42, 1
  store i32 %43, i32* %8
  br label %23
44:
  %45 = load i32*, i32** %7
  %46 = load i32, i32* %6
  %47 = call i32 @q(i32* %45, i32 %46)
  %48 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %47)
  %49 = load i32*, i32** %7
  call void @free(i8* %50)
  store i32 0, i32* %3
  br label %53
53:
  %54 = load i32, i32* %3
  ret i32 %54
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
