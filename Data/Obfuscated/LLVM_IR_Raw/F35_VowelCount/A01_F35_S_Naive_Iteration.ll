@.str = constant [3 x i8] c"0\0A\00"
@.str.1 = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @uT(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %8
8:
  %9 = load i8*, i8** %2
  %10 = load i32, i32* %4
  %11 = sext i32 %10 to i64
  %12 = getelementptr inbounds i8, i8* %9, i64 %11
  %13 = load i8, i8* %12
  %14 = sext i8 %13 to i32
  %15 = icmp ne i32 %14, 0
  br i1 %15, label %18, label %16
16:
  br label %70
18:
  %19 = load i8*, i8** %2
  %20 = load i32, i32* %4
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i8, i8* %19, i64 %21
  %23 = load i8, i8* %22
  store i8 %23, i8* %5
  %24 = load i8, i8* %5
  %25 = sext i8 %24 to i32
  %26 = icmp eq i32 %25, 97
  br i1 %26, label %63, label %27
27:
  %28 = load i8, i8* %5
  %29 = sext i8 %28 to i32
  %30 = icmp eq i32 %29, 101
  br i1 %30, label %63, label %31
31:
  %32 = load i8, i8* %5
  %33 = sext i8 %32 to i32
  %34 = icmp eq i32 %33, 105
  br i1 %34, label %63, label %35
35:
  %36 = load i8, i8* %5
  %37 = sext i8 %36 to i32
  %38 = icmp eq i32 %37, 111
  br i1 %38, label %63, label %39
39:
  %40 = load i8, i8* %5
  %41 = sext i8 %40 to i32
  %42 = icmp eq i32 %41, 117
  br i1 %42, label %63, label %43
43:
  %44 = load i8, i8* %5
  %45 = sext i8 %44 to i32
  %46 = icmp eq i32 %45, 65
  br i1 %46, label %63, label %47
47:
  %48 = load i8, i8* %5
  %49 = sext i8 %48 to i32
  %50 = icmp eq i32 %49, 69
  br i1 %50, label %63, label %51
51:
  %52 = load i8, i8* %5
  %53 = sext i8 %52 to i32
  %54 = icmp eq i32 %53, 73
  br i1 %54, label %63, label %55
55:
  %56 = load i8, i8* %5
  %57 = sext i8 %56 to i32
  %58 = icmp eq i32 %57, 79
  br i1 %58, label %63, label %59
59:
  %60 = load i8, i8* %5
  %61 = sext i8 %60 to i32
  %62 = icmp eq i32 %61, 85
  br i1 %62, label %63, label %66
63:
  %64 = load i32, i32* %3
  %65 = add nsw i32 %64, 1
  store i32 %65, i32* %3
  br label %66
66:
  br label %67
67:
  %68 = load i32, i32* %4
  %69 = add nsw i32 %68, 1
  store i32 %69, i32* %4
  br label %8
70:
  %71 = load i32, i32* %3
  ret i32 %71
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
  %14 = call i32 @uT(i8* %13)
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i32 %14)
  store i32 0, i32* %3
  br label %16
16:
  %17 = load i32, i32* %3
  ret i32 %17
}
declare i32 @printf(i8*, ...)
