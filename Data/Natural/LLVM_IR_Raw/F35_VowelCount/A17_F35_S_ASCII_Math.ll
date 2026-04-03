@.str = constant [3 x i8] c"0\0A\00"
@.str.1 = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @VowelCount(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %6
6:
  %7 = load i8*, i8** %2
  %8 = load i8, i8* %7
  %9 = icmp ne i8 %8, 0
  br i1 %9, label %10, label %51
10:
  %12 = load i8*, i8** %2
  %13 = load i8, i8* %12
  %14 = zext i8 %13 to i32
  store i32 %14, i32* %4
  %15 = load i32, i32* %4
  %16 = icmp eq i32 %15, 97
  br i1 %16, label %44, label %17
17:
  %18 = load i32, i32* %4
  %19 = icmp eq i32 %18, 101
  br i1 %19, label %44, label %20
20:
  %21 = load i32, i32* %4
  %22 = icmp eq i32 %21, 105
  br i1 %22, label %44, label %23
23:
  %24 = load i32, i32* %4
  %25 = icmp eq i32 %24, 111
  br i1 %25, label %44, label %26
26:
  %27 = load i32, i32* %4
  %28 = icmp eq i32 %27, 117
  br i1 %28, label %44, label %29
29:
  %30 = load i32, i32* %4
  %31 = icmp eq i32 %30, 65
  br i1 %31, label %44, label %32
32:
  %33 = load i32, i32* %4
  %34 = icmp eq i32 %33, 69
  br i1 %34, label %44, label %35
35:
  %36 = load i32, i32* %4
  %37 = icmp eq i32 %36, 73
  br i1 %37, label %44, label %38
38:
  %39 = load i32, i32* %4
  %40 = icmp eq i32 %39, 79
  br i1 %40, label %44, label %41
41:
  %42 = load i32, i32* %4
  %43 = icmp eq i32 %42, 85
  br i1 %43, label %44, label %47
44:
  %45 = load i32, i32* %3
  %46 = add nsw i32 %45, 1
  store i32 %46, i32* %3
  br label %47
47:
  %48 = load i8*, i8** %2
  %49 = getelementptr inbounds i8, i8* %48, i32 1
  store i8* %49, i8** %2
  br label %6
51:
  %52 = load i32, i32* %3
  ret i32 %52
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
