@.str = constant [3 x i8] c"0\0A\00"
@.str.1 = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @VowelCount(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8
  store i8* %0, i8** %2
  store i32 0, i32* %3
  %8 = load i8*, i8** %2
  store i8* %8, i8** %4
  br label %9
9:
  %10 = load i8*, i8** %4
  %11 = load i8, i8* %10
  %12 = icmp ne i8 %11, 0
  br i1 %12, label %13, label %61
13:
  %14 = load i8*, i8** %4
  %15 = load i8, i8* %14
  store i8 %15, i8* %5
  %16 = load i8, i8* %5
  %17 = sext i8 %16 to i32
  %18 = icmp eq i32 %17, 97
  br i1 %18, label %55, label %19
19:
  %20 = load i8, i8* %5
  %21 = sext i8 %20 to i32
  %22 = icmp eq i32 %21, 101
  br i1 %22, label %55, label %23
23:
  %24 = load i8, i8* %5
  %25 = sext i8 %24 to i32
  %26 = icmp eq i32 %25, 105
  br i1 %26, label %55, label %27
27:
  %28 = load i8, i8* %5
  %29 = sext i8 %28 to i32
  %30 = icmp eq i32 %29, 111
  br i1 %30, label %55, label %31
31:
  %32 = load i8, i8* %5
  %33 = sext i8 %32 to i32
  %34 = icmp eq i32 %33, 117
  br i1 %34, label %55, label %35
35:
  %36 = load i8, i8* %5
  %37 = sext i8 %36 to i32
  %38 = icmp eq i32 %37, 65
  br i1 %38, label %55, label %39
39:
  %40 = load i8, i8* %5
  %41 = sext i8 %40 to i32
  %42 = icmp eq i32 %41, 69
  br i1 %42, label %55, label %43
43:
  %44 = load i8, i8* %5
  %45 = sext i8 %44 to i32
  %46 = icmp eq i32 %45, 73
  br i1 %46, label %55, label %47
47:
  %48 = load i8, i8* %5
  %49 = sext i8 %48 to i32
  %50 = icmp eq i32 %49, 79
  br i1 %50, label %55, label %51
51:
  %52 = load i8, i8* %5
  %53 = sext i8 %52 to i32
  %54 = icmp eq i32 %53, 85
  br i1 %54, label %55, label %58
55:
  %56 = load i32, i32* %3
  %57 = add nsw i32 %56, 1
  store i32 %57, i32* %3
  br label %58
58:
  %59 = load i8*, i8** %4
  %60 = getelementptr inbounds i8, i8* %59, i32 1
  store i8* %60, i8** %4
  br label %9
61:
  %62 = load i32, i32* %3
  ret i32 %62
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
  br i1 %7, label %8, label %10
8:
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0))
  store i32 0, i32* %3
  br label %16
10:
  %11 = load i8**, i8*** %5
  %12 = getelementptr inbounds i8*, i8** %11, i64 1
  %13 = load i8*, i8** %12
  %14 = call i32 @VowelCount(i8* %13)
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i32 %14)
  store i32 0, i32* %3
  br label %16
16:
  %17 = load i32, i32* %3
  ret i32 %17
}
declare i32 @printf(i8*, ...)
