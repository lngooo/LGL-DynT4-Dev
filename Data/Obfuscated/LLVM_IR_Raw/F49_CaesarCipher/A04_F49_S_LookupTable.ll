@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @kk(i8* %0, i32 %1) {
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca [26 x i8]
  %6 = alloca [26 x i8]
  %7 = alloca i32
  %8 = alloca i32
  store i8* %0, i8** %3
  store i32 %1, i32* %4
  %12 = load i32, i32* %4
  %13 = srem i32 %12, 26
  %14 = add nsw i32 %13, 26
  %15 = srem i32 %14, 26
  store i32 %15, i32* %7
  store i32 0, i32* %8
  br label %17
17:
  %18 = load i32, i32* %8
  %19 = icmp slt i32 %18, 26
  br i1 %19, label %22, label %20
20:
  br label %44
22:
  %23 = load i32, i32* %8
  %24 = load i32, i32* %7
  %25 = add nsw i32 %23, %24
  %26 = srem i32 %25, 26
  %27 = add nsw i32 97, %26
  %28 = trunc i32 %27 to i8
  %29 = load i32, i32* %8
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds [26 x i8], [26 x i8]* %5, i64 0, i64 %30
  store i8 %28, i8* %31
  %32 = load i32, i32* %8
  %33 = load i32, i32* %7
  %34 = add nsw i32 %32, %33
  %35 = srem i32 %34, 26
  %36 = add nsw i32 65, %35
  %37 = trunc i32 %36 to i8
  %38 = load i32, i32* %8
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds [26 x i8], [26 x i8]* %6, i64 0, i64 %39
  store i8 %37, i8* %40
  br label %41
41:
  %42 = load i32, i32* %8
  %43 = add nsw i32 %42, 1
  store i32 %43, i32* %8
  br label %17
44:
  br label %45
45:
  %46 = load i8*, i8** %3
  %47 = load i8, i8* %46
  %48 = icmp ne i8 %47, 0
  br i1 %48, label %49, label %91
49:
  %50 = load i8*, i8** %3
  %51 = load i8, i8* %50
  %52 = sext i8 %51 to i32
  %53 = icmp sge i32 %52, 97
  br i1 %53, label %54, label %68
54:
  %55 = load i8*, i8** %3
  %56 = load i8, i8* %55
  %57 = sext i8 %56 to i32
  %58 = icmp sle i32 %57, 122
  br i1 %58, label %59, label %68
59:
  %60 = load i8*, i8** %3
  %61 = load i8, i8* %60
  %62 = sext i8 %61 to i32
  %63 = sub nsw i32 %62, 97
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds [26 x i8], [26 x i8]* %5, i64 0, i64 %64
  %66 = load i8, i8* %65
  %67 = load i8*, i8** %3
  store i8 %66, i8* %67
  br label %88
68:
  %69 = load i8*, i8** %3
  %70 = load i8, i8* %69
  %71 = sext i8 %70 to i32
  %72 = icmp sge i32 %71, 65
  br i1 %72, label %73, label %87
73:
  %74 = load i8*, i8** %3
  %75 = load i8, i8* %74
  %76 = sext i8 %75 to i32
  %77 = icmp sle i32 %76, 90
  br i1 %77, label %78, label %87
78:
  %79 = load i8*, i8** %3
  %80 = load i8, i8* %79
  %81 = sext i8 %80 to i32
  %82 = sub nsw i32 %81, 65
  %83 = sext i32 %82 to i64
  %84 = getelementptr inbounds [26 x i8], [26 x i8]* %6, i64 0, i64 %83
  %85 = load i8, i8* %84
  %86 = load i8*, i8** %3
  store i8 %85, i8* %86
  br label %87
87:
  br label %88
88:
  %89 = load i8*, i8** %3
  %90 = getelementptr inbounds i8, i8* %89, i32 1
  store i8* %90, i8** %3
  br label %45
91:
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
  call void @kk(i8* %18, i32 %19)
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
