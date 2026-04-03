@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @qj9(i8* %0, i32 %1) {
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i8* %0, i8** %3
  store i32 %1, i32* %4
  %10 = load i32, i32* %4
  %11 = srem i32 %10, 26
  store i32 %11, i32* %5
  store i32 52, i32* %6
  %14 = load i32, i32* %5
  %15 = load i32, i32* %6
  %16 = add nsw i32 %14, %15
  %17 = srem i32 %16, 26
  store i32 %17, i32* %7
  store i32 0, i32* %8
  br label %19
19:
  %20 = load i8*, i8** %3
  %21 = load i32, i32* %8
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i8, i8* %20, i64 %22
  %24 = load i8, i8* %23
  %25 = icmp ne i8 %24, 0
  br i1 %25, label %28, label %26
26:
  br label %99
28:
  %29 = load i8*, i8** %3
  %30 = load i32, i32* %8
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i8, i8* %29, i64 %31
  %33 = load i8, i8* %32
  %34 = sext i8 %33 to i32
  %35 = icmp sge i32 %34, 97
  br i1 %35, label %36, label %61
36:
  %37 = load i8*, i8** %3
  %38 = load i32, i32* %8
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8, i8* %37, i64 %39
  %41 = load i8, i8* %40
  %42 = sext i8 %41 to i32
  %43 = icmp sle i32 %42, 122
  br i1 %43, label %44, label %61
44:
  %45 = load i8*, i8** %3
  %46 = load i32, i32* %8
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i8, i8* %45, i64 %47
  %49 = load i8, i8* %48
  %50 = sext i8 %49 to i32
  %51 = sub nsw i32 %50, 97
  %52 = load i32, i32* %7
  %53 = add nsw i32 %51, %52
  %54 = srem i32 %53, 26
  %55 = add nsw i32 %54, 97
  %56 = trunc i32 %55 to i8
  %57 = load i8*, i8** %3
  %58 = load i32, i32* %8
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i8, i8* %57, i64 %59
  store i8 %56, i8* %60
  br label %95
61:
  %62 = load i8*, i8** %3
  %63 = load i32, i32* %8
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i8, i8* %62, i64 %64
  %66 = load i8, i8* %65
  %67 = sext i8 %66 to i32
  %68 = icmp sge i32 %67, 65
  br i1 %68, label %69, label %94
69:
  %70 = load i8*, i8** %3
  %71 = load i32, i32* %8
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds i8, i8* %70, i64 %72
  %74 = load i8, i8* %73
  %75 = sext i8 %74 to i32
  %76 = icmp sle i32 %75, 90
  br i1 %76, label %77, label %94
77:
  %78 = load i8*, i8** %3
  %79 = load i32, i32* %8
  %80 = sext i32 %79 to i64
  %81 = getelementptr inbounds i8, i8* %78, i64 %80
  %82 = load i8, i8* %81
  %83 = sext i8 %82 to i32
  %84 = sub nsw i32 %83, 65
  %85 = load i32, i32* %7
  %86 = add nsw i32 %84, %85
  %87 = srem i32 %86, 26
  %88 = add nsw i32 %87, 65
  %89 = trunc i32 %88 to i8
  %90 = load i8*, i8** %3
  %91 = load i32, i32* %8
  %92 = sext i32 %91 to i64
  %93 = getelementptr inbounds i8, i8* %90, i64 %92
  store i8 %89, i8* %93
  br label %94
94:
  br label %95
95:
  br label %96
96:
  %97 = load i32, i32* %8
  %98 = add nsw i32 %97, 1
  store i32 %98, i32* %8
  br label %19
99:
  ret void
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %7 = load i32, i32* %4
  %8 = icmp slt i32 %7, 3
  br i1 %8, label %9, label %10
9:
  store i32 1, i32* %3
  br label %25
10:
  %12 = load i8**, i8*** %5
  %13 = getelementptr inbounds i8*, i8** %12, i64 2
  %14 = load i8*, i8** %13
  %15 = call i32 @atoi(i8* %14)
  store i32 %15, i32* %6
  %16 = load i8**, i8*** %5
  %17 = getelementptr inbounds i8*, i8** %16, i64 1
  %18 = load i8*, i8** %17
  %19 = load i32, i32* %6
  call void @qj9(i8* %18, i32 %19)
  %20 = load i8**, i8*** %5
  %21 = getelementptr inbounds i8*, i8** %20, i64 1
  %22 = load i8*, i8** %21
  %23 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i8* %22)
  store i32 0, i32* %3
  br label %25
25:
  %26 = load i32, i32* %3
  ret i32 %26
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
