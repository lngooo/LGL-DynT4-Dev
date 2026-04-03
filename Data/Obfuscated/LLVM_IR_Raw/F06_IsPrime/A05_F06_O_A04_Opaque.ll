@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @TdhW(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i64
  %7 = alloca i64
  %8 = alloca i64
  %9 = alloca i32
  store i32 %0, i32* %3
  %10 = load i32, i32* %3
  %11 = icmp sle i32 %10, 1
  br i1 %11, label %12, label %13
12:
  store i32 0, i32* %2
  br label %93
13:
  %15 = load i32, i32* %3
  %16 = load i32, i32* %3
  %17 = mul nsw i32 %15, %16
  store i32 %17, i32* %4
  %18 = load i32, i32* %4
  %19 = icmp sge i32 %18, 0
  br i1 %19, label %20, label %68
20:
  %21 = load i32, i32* %3
  %22 = icmp eq i32 %21, 2
  br i1 %22, label %26, label %23
23:
  %24 = load i32, i32* %3
  %25 = icmp eq i32 %24, 3
  br i1 %25, label %26, label %27
26:
  store i32 1, i32* %2
  store i32 1, i32* %5
  br label %91
27:
  store i64 1, i64* %6
  store i64 2, i64* %7
  %31 = load i32, i32* %3
  %32 = sub nsw i32 %31, 1
  %33 = sext i32 %32 to i64
  store i64 %33, i64* %8
  br label %34
34:
  %35 = load i64, i64* %8
  %36 = icmp sgt i64 %35, 0
  br i1 %36, label %37, label %57
37:
  %38 = load i64, i64* %8
  %39 = and i64 %38, 1
  %40 = icmp ne i64 %39, 0
  br i1 %40, label %41, label %48
41:
  %42 = load i64, i64* %6
  %43 = load i64, i64* %7
  %44 = mul nsw i64 %42, %43
  %45 = load i32, i32* %3
  %46 = sext i32 %45 to i64
  %47 = srem i64 %44, %46
  store i64 %47, i64* %6
  br label %48
48:
  %49 = load i64, i64* %7
  %50 = load i64, i64* %7
  %51 = mul nsw i64 %49, %50
  %52 = load i32, i32* %3
  %53 = sext i32 %52 to i64
  %54 = srem i64 %51, %53
  store i64 %54, i64* %7
  %55 = load i64, i64* %8
  %56 = ashr i64 %55, 1
  store i64 %56, i64* %8
  br label %34
57:
  %58 = load i64, i64* %6
  %59 = icmp ne i64 %58, 1
  br i1 %59, label %60, label %61
60:
  store i32 0, i32* %2
  store i32 1, i32* %5
  br label %62
61:
  store i32 0, i32* %5
  br label %62
62:
  %66 = load i32, i32* %5
  switch i32 %66, label %91 [
    i32 0, label %67
  ]
67:
  br label %68
68:
  store i32 2, i32* %9
  br label %70
70:
  %71 = load i32, i32* %9
  %72 = load i32, i32* %9
  %73 = mul nsw i32 %71, %72
  %74 = load i32, i32* %3
  %75 = icmp sle i32 %73, %74
  br i1 %75, label %77, label %76
76:
  store i32 4, i32* %5
  br label %87
77:
  %78 = load i32, i32* %3
  %79 = load i32, i32* %9
  %80 = srem i32 %78, %79
  %81 = icmp eq i32 %80, 0
  br i1 %81, label %82, label %83
82:
  store i32 0, i32* %2
  store i32 1, i32* %5
  br label %87
83:
  br label %84
84:
  %85 = load i32, i32* %9
  %86 = add nsw i32 %85, 1
  store i32 %86, i32* %9
  br label %70
87:
  %89 = load i32, i32* %5
  switch i32 %89, label %91 [
    i32 4, label %90
  ]
90:
  store i32 1, i32* %2
  store i32 1, i32* %5
  br label %91
91:
  br label %93
93:
  %94 = load i32, i32* %2
  ret i32 %94
}
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
  %14 = call i32 @TdhW(i32 %13)
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
