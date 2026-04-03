@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @Sum(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32 %0, i32* %3
  %8 = load i32, i32* %3
  %9 = icmp sle i32 %8, 0
  br i1 %9, label %10, label %11
10:
  store i32 0, i32* %2
  br label %61
11:
  %13 = load i32, i32* %3
  %14 = sext i32 %13 to i64
  %15 = mul i64 4, %14
  %16 = call noalias i8* @malloc(i64 %15)
  store i32* %17, i32** %4
  store i32 0, i32* %5
  br label %19
19:
  %20 = load i32, i32* %5
  %21 = load i32, i32* %3
  %22 = icmp slt i32 %20, %21
  br i1 %22, label %25, label %23
23:
  br label %35
25:
  %26 = load i32, i32* %5
  %27 = add nsw i32 %26, 1
  %28 = load i32*, i32** %4
  %29 = load i32, i32* %5
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %28, i64 %30
  store i32 %27, i32* %31
  br label %32
32:
  %33 = load i32, i32* %5
  %34 = add nsw i32 %33, 1
  store i32 %34, i32* %5
  br label %19
35:
  store i32 0, i32* %6
  store i32 0, i32* %7
  br label %38
38:
  %39 = load i32, i32* %7
  %40 = load i32, i32* %3
  %41 = icmp slt i32 %39, %40
  br i1 %41, label %44, label %42
42:
  br label %55
44:
  %45 = load i32*, i32** %4
  %46 = load i32, i32* %7
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i32, i32* %45, i64 %47
  %49 = load i32, i32* %48
  %50 = load i32, i32* %6
  %51 = add nsw i32 %50, %49
  store i32 %51, i32* %6
  br label %52
52:
  %53 = load i32, i32* %7
  %54 = add nsw i32 %53, 1
  store i32 %54, i32* %7
  br label %38
55:
  %56 = load i32*, i32** %4
  call void @free(i8* %57)
  %58 = load i32, i32* %6
  store i32 %58, i32* %2
  br label %61
61:
  %62 = load i32, i32* %2
  ret i32 %62
}
declare noalias i8* @malloc(i64)
declare void @free(i8*)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %9
8:
  store i32 1, i32* %3
  br label %16
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @atoi(i8* %12)
  %14 = call i32 @Sum(i32 %13)
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %14)
  store i32 0, i32* %3
  br label %16
16:
  %17 = load i32, i32* %3
  ret i32 %17
}
declare i32 @printf(i8*, ...)
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i64 @strtol(i8*, i8**, i32)
