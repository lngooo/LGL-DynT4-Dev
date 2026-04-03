@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @kZHc(i8* %0, i32 %1) {
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i8**
  store i8* %0, i8** %3
  store i32 %1, i32* %4
  %9 = load i8*, i8** %3
  store i8* %9, i8** %5
  %11 = load i32, i32* %4
  %12 = srem i32 %11, 26
  %13 = add nsw i32 %12, 26
  %14 = srem i32 %13, 26
  store i32 %14, i32* %6
  br label %15
15:
  %16 = load i8*, i8** %5
  %17 = load i8, i8* %16
  %18 = sext i8 %17 to i32
  %19 = icmp ne i32 %18, 0
  br i1 %19, label %20, label %76
20:
  store i8** %5, i8*** %7
  %22 = load i8**, i8*** %7
  %23 = load i8*, i8** %22
  %24 = load i8, i8* %23
  %25 = sext i8 %24 to i32
  %26 = icmp sge i32 %25, 65
  br i1 %26, label %27, label %46
27:
  %28 = load i8**, i8*** %7
  %29 = load i8*, i8** %28
  %30 = load i8, i8* %29
  %31 = sext i8 %30 to i32
  %32 = icmp sle i32 %31, 90
  br i1 %32, label %33, label %46
33:
  %34 = load i8**, i8*** %7
  %35 = load i8*, i8** %34
  %36 = load i8, i8* %35
  %37 = sext i8 %36 to i32
  %38 = sub nsw i32 %37, 65
  %39 = load i32, i32* %6
  %40 = add nsw i32 %38, %39
  %41 = srem i32 %40, 26
  %42 = add nsw i32 %41, 65
  %43 = trunc i32 %42 to i8
  %44 = load i8**, i8*** %7
  %45 = load i8*, i8** %44
  store i8 %43, i8* %45
  br label %72
46:
  %47 = load i8**, i8*** %7
  %48 = load i8*, i8** %47
  %49 = load i8, i8* %48
  %50 = sext i8 %49 to i32
  %51 = icmp sge i32 %50, 97
  br i1 %51, label %52, label %71
52:
  %53 = load i8**, i8*** %7
  %54 = load i8*, i8** %53
  %55 = load i8, i8* %54
  %56 = sext i8 %55 to i32
  %57 = icmp sle i32 %56, 122
  br i1 %57, label %58, label %71
58:
  %59 = load i8**, i8*** %7
  %60 = load i8*, i8** %59
  %61 = load i8, i8* %60
  %62 = sext i8 %61 to i32
  %63 = sub nsw i32 %62, 97
  %64 = load i32, i32* %6
  %65 = add nsw i32 %63, %64
  %66 = srem i32 %65, 26
  %67 = add nsw i32 %66, 97
  %68 = trunc i32 %67 to i8
  %69 = load i8**, i8*** %7
  %70 = load i8*, i8** %69
  store i8 %68, i8* %70
  br label %71
71:
  br label %72
72:
  %73 = load i8*, i8** %5
  %74 = getelementptr inbounds i8, i8* %73, i32 1
  store i8* %74, i8** %5
  br label %15
76:
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
  call void @kZHc(i8* %18, i32 %19)
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
