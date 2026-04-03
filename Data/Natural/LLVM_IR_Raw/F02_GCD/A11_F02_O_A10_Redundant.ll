@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @GCD(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  %15 = load i32, i32* %4
  %16 = call i32 @abs(i32 %15)
  store i32 %16, i32* %6
  %18 = load i32, i32* %5
  %19 = call i32 @abs(i32 %18)
  store i32 %19, i32* %7
  %20 = load i32, i32* %6
  %21 = load i32, i32* %7
  %22 = mul nsw i32 %20, %21
  %23 = icmp eq i32 %22, 0
  br i1 %23, label %24, label %28
24:
  %25 = load i32, i32* %6
  %26 = load i32, i32* %7
  %27 = add nsw i32 %25, %26
  store i32 %27, i32* %3
  store i32 1, i32* %8
  br label %73
28:
  store i32 1, i32* %9
  %31 = load i32, i32* %6
  %32 = load i32, i32* %7
  %33 = icmp slt i32 %31, %32
  br i1 %33, label %34, label %36
34:
  %35 = load i32, i32* %6
  br label %38
36:
  %37 = load i32, i32* %7
  br label %38
38:
  %39 = phi i32 [ %35, %34 ], [ %37, %36 ]
  store i32 %39, i32* %10
  store i32 1, i32* %11
  br label %41
41:
  %42 = load i32, i32* %11
  %43 = load i32, i32* %10
  %44 = icmp sle i32 %42, %43
  br i1 %44, label %47, label %45
45:
  store i32 2, i32* %8
  br label %69
47:
  %49 = load i32, i32* %6
  %50 = load i32, i32* %11
  %51 = srem i32 %49, %50
  store i32 %51, i32* %12
  %53 = load i32, i32* %7
  %54 = load i32, i32* %11
  %55 = srem i32 %53, %54
  store i32 %55, i32* %13
  %56 = load i32, i32* %12
  %57 = icmp eq i32 %56, 0
  br i1 %57, label %58, label %63
58:
  %59 = load i32, i32* %13
  %60 = icmp eq i32 %59, 0
  br i1 %60, label %61, label %63
61:
  %62 = load i32, i32* %11
  store i32 %62, i32* %9
  br label %63
63:
  br label %66
66:
  %67 = load i32, i32* %11
  %68 = add nsw i32 %67, 1
  store i32 %68, i32* %11
  br label %41
69:
  %70 = load i32, i32* %9
  store i32 %70, i32* %3
  store i32 1, i32* %8
  br label %73
73:
  %76 = load i32, i32* %3
  ret i32 %76
}
declare i32 @abs(i32)
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
  store i32 1, i32* %3
  br label %20
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @atoi(i8* %12)
  %14 = load i8**, i8*** %5
  %15 = getelementptr inbounds i8*, i8** %14, i64 2
  %16 = load i8*, i8** %15
  %17 = call i32 @atoi(i8* %16)
  %18 = call i32 @GCD(i32 %13, i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %20
20:
  %21 = load i32, i32* %3
  ret i32 %21
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
