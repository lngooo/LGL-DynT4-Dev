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
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  %12 = load i32, i32* %4
  %13 = call i32 @abs(i32 %12)
  store i32 %13, i32* %6
  %15 = load i32, i32* %5
  %16 = call i32 @abs(i32 %15)
  store i32 %16, i32* %7
  store i32 1, i32* %8
  store i32 2, i32* %9
  %19 = load i32, i32* %6
  %20 = icmp ne i32 %19, 0
  br i1 %20, label %21, label %24
21:
  %22 = load i32, i32* %7
  %23 = icmp ne i32 %22, 0
  br i1 %23, label %28, label %24
24:
  %25 = load i32, i32* %6
  %26 = load i32, i32* %7
  %27 = or i32 %25, %26
  store i32 %27, i32* %3
  store i32 1, i32* %10
  br label %68
28:
  br label %29
29:
  %30 = load i32, i32* %9
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
  %40 = icmp sle i32 %30, %39
  br i1 %40, label %41, label %66
41:
  %42 = load i32, i32* %6
  %43 = load i32, i32* %9
  %44 = srem i32 %42, %43
  %45 = icmp eq i32 %44, 0
  br i1 %45, label %46, label %61
46:
  %47 = load i32, i32* %7
  %48 = load i32, i32* %9
  %49 = srem i32 %47, %48
  %50 = icmp eq i32 %49, 0
  br i1 %50, label %51, label %61
51:
  %52 = load i32, i32* %9
  %53 = load i32, i32* %8
  %54 = mul nsw i32 %53, %52
  store i32 %54, i32* %8
  %55 = load i32, i32* %9
  %56 = load i32, i32* %6
  %57 = sdiv i32 %56, %55
  store i32 %57, i32* %6
  %58 = load i32, i32* %9
  %59 = load i32, i32* %7
  %60 = sdiv i32 %59, %58
  store i32 %60, i32* %7
  br label %64
61:
  %62 = load i32, i32* %9
  %63 = add nsw i32 %62, 1
  store i32 %63, i32* %9
  br label %64
64:
  %65 = phi i32 [ %60, %51 ], [ %62, %61 ]
  br label %29
66:
  %67 = load i32, i32* %8
  store i32 %67, i32* %3
  store i32 1, i32* %10
  br label %68
68:
  %73 = load i32, i32* %3
  ret i32 %73
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
