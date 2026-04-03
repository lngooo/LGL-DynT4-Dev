@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @g(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  store i32 0, i32* %8
  %15 = load i32, i32* %6
  %16 = sub nsw i32 %15, 1
  store i32 %16, i32* %9
  br label %17
17:
  %18 = load i32, i32* %8
  %19 = load i32, i32* %9
  %20 = icmp sle i32 %18, %19
  br i1 %20, label %21, label %55
21:
  %23 = load i32, i32* %8
  %24 = load i32, i32* %9
  %25 = add nsw i32 %23, %24
  %26 = sdiv i32 %25, 2
  store i32 %26, i32* %10
  %28 = load i32*, i32** %5
  %29 = load i32, i32* %10
  %30 = add nsw i32 %29, 0
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %28, i64 %31
  %33 = load i32, i32* %32
  store i32 %33, i32* %11
  %34 = load i32, i32* %11
  %35 = load i32, i32* %7
  %36 = icmp eq i32 %34, %35
  br i1 %36, label %37, label %39
37:
  %38 = load i32, i32* %10
  store i32 %38, i32* %4
  store i32 1, i32* %12
  br label %50
39:
  %40 = load i32, i32* %11
  %41 = load i32, i32* %7
  %42 = icmp slt i32 %40, %41
  br i1 %42, label %43, label %46
43:
  %44 = load i32, i32* %10
  %45 = add nsw i32 %44, 1
  store i32 %45, i32* %8
  br label %49
46:
  %47 = load i32, i32* %10
  %48 = sub nsw i32 %47, 1
  store i32 %48, i32* %9
  br label %49
49:
  store i32 0, i32* %12
  br label %50
50:
  %53 = load i32, i32* %12
  switch i32 %53, label %56 [
    i32 0, label %54
  ]
54:
  br label %17
55:
  store i32 -1, i32* %4
  store i32 1, i32* %12
  br label %56
56:
  %59 = load i32, i32* %4
  ret i32 %59
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32*
  %9 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %10 = load i32, i32* %4
  %11 = icmp slt i32 %10, 3
  br i1 %11, label %12, label %13
12:
  store i32 1, i32* %3
  br label %61
13:
  %15 = load i8**, i8*** %5
  %16 = getelementptr inbounds i8*, i8** %15, i64 1
  %17 = load i8*, i8** %16
  %18 = call i32 @atoi(i8* %17)
  store i32 %18, i32* %6
  %20 = load i32, i32* %4
  %21 = sub nsw i32 %20, 2
  store i32 %21, i32* %7
  %23 = load i32, i32* %7
  %24 = sext i32 %23 to i64
  %25 = mul i64 %24, 4
  %26 = call noalias i8* @malloc(i64 %25)
  store i32* %27, i32** %8
  store i32 0, i32* %9
  br label %29
29:
  %30 = load i32, i32* %9
  %31 = load i32, i32* %7
  %32 = icmp slt i32 %30, %31
  br i1 %32, label %35, label %33
33:
  br label %50
35:
  %36 = load i8**, i8*** %5
  %37 = load i32, i32* %9
  %38 = add nsw i32 %37, 2
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8*, i8** %36, i64 %39
  %41 = load i8*, i8** %40
  %42 = call i32 @atoi(i8* %41)
  %43 = load i32*, i32** %8
  %44 = load i32, i32* %9
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i32, i32* %43, i64 %45
  store i32 %42, i32* %46
  br label %47
47:
  %48 = load i32, i32* %9
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %9
  br label %29
50:
  %51 = load i32*, i32** %8
  %52 = load i32, i32* %7
  %53 = load i32, i32* %6
  %54 = call i32 @g(i32* %51, i32 %52, i32 %53)
  %55 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %54)
  %56 = load i32*, i32** %8
  call void @free(i8* %57)
  store i32 0, i32* %3
  br label %61
61:
  %62 = load i32, i32* %3
  ret i32 %62
}
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare noalias i8* @malloc(i64)
declare i32 @printf(i8*, ...)
declare void @free(i8*)
declare i64 @strtol(i8*, i8**, i32)
