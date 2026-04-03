@.str = constant [4 x i8] c"%d \00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @rev(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  store i32 0, i32* %7
  br label %10
10:
  %11 = load i32, i32* %7
  %12 = icmp ne i32 %11, -1
  br i1 %12, label %13, label %48
13:
  %14 = load i32, i32* %7
  switch i32 %14, label %47 [
    i32 0, label %15
    i32 1, label %21
  ]
15:
  %16 = load i32, i32* %5
  %17 = load i32, i32* %6
  %18 = icmp slt i32 %16, %17
  %19 = zext i1 %18 to i64
  %20 = select i1 %18, i32 1, i32 -1
  store i32 %20, i32* %7
  br label %47
21:
  %23 = load i32*, i32** %4
  %24 = load i32, i32* %5
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i32, i32* %23, i64 %25
  %27 = load i32, i32* %26
  store i32 %27, i32* %8
  %28 = load i32*, i32** %4
  %29 = load i32, i32* %6
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %28, i64 %30
  %32 = load i32, i32* %31
  %33 = load i32*, i32** %4
  %34 = load i32, i32* %5
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i32, i32* %33, i64 %35
  store i32 %32, i32* %36
  %37 = load i32, i32* %8
  %38 = load i32*, i32** %4
  %39 = load i32, i32* %6
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i32, i32* %38, i64 %40
  store i32 %37, i32* %41
  %42 = load i32, i32* %5
  %43 = add nsw i32 %42, 1
  store i32 %43, i32* %5
  %44 = load i32, i32* %6
  %45 = add nsw i32 %44, -1
  store i32 %45, i32* %6
  store i32 0, i32* %7
  br label %47
47:
  br label %10
48:
  ret void
}
define dso_local void @ArrayRotate(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %8 = load i32, i32* %5
  %9 = icmp eq i32 %8, 0
  br i1 %9, label %10, label %11
10:
  br label %44
11:
  %12 = load i32, i32* %5
  %13 = load i32, i32* %6
  %14 = srem i32 %13, %12
  store i32 %14, i32* %6
  store i32 1, i32* %7
  br label %16
16:
  %17 = load i32, i32* %7
  %18 = icmp sle i32 %17, 3
  br i1 %18, label %19, label %42
19:
  %20 = load i32, i32* %7
  %21 = icmp eq i32 %20, 1
  br i1 %21, label %22, label %26
22:
  %23 = load i32*, i32** %4
  %24 = load i32, i32* %6
  %25 = sub nsw i32 %24, 1
  call void @rev(i32* %23, i32 0, i32 %25)
  br label %39
26:
  %27 = load i32, i32* %7
  %28 = icmp eq i32 %27, 2
  br i1 %28, label %29, label %34
29:
  %30 = load i32*, i32** %4
  %31 = load i32, i32* %6
  %32 = load i32, i32* %5
  %33 = sub nsw i32 %32, 1
  call void @rev(i32* %30, i32 %31, i32 %33)
  br label %38
34:
  %35 = load i32*, i32** %4
  %36 = load i32, i32* %5
  %37 = sub nsw i32 %36, 1
  call void @rev(i32* %35, i32 0, i32 %37)
  br label %38
38:
  br label %39
39:
  %40 = load i32, i32* %7
  %41 = add nsw i32 %40, 1
  store i32 %41, i32* %7
  br label %16
42:
  br label %44
44:
  ret void
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32*
  %9 = alloca i32
  %10 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %11 = load i32, i32* %4
  %12 = icmp slt i32 %11, 3
  br i1 %12, label %13, label %14
13:
  store i32 0, i32* %3
  br label %79
14:
  %16 = load i8**, i8*** %5
  %17 = getelementptr inbounds i8*, i8** %16, i64 1
  %18 = load i8*, i8** %17
  %19 = call i32 @atoi(i8* %18)
  store i32 %19, i32* %6
  %21 = load i32, i32* %4
  %22 = sub nsw i32 %21, 2
  store i32 %22, i32* %7
  %24 = load i32, i32* %7
  %25 = sext i32 %24 to i64
  %26 = mul i64 %25, 4
  %27 = call noalias i8* @malloc(i64 %26)
  store i32* %28, i32** %8
  store i32 0, i32* %9
  br label %30
30:
  %31 = load i32, i32* %9
  %32 = load i32, i32* %7
  %33 = icmp slt i32 %31, %32
  br i1 %33, label %36, label %34
34:
  br label %51
36:
  %37 = load i8**, i8*** %5
  %38 = load i32, i32* %9
  %39 = add nsw i32 %38, 2
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8*, i8** %37, i64 %40
  %42 = load i8*, i8** %41
  %43 = call i32 @atoi(i8* %42)
  %44 = load i32*, i32** %8
  %45 = load i32, i32* %9
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i32, i32* %44, i64 %46
  store i32 %43, i32* %47
  br label %48
48:
  %49 = load i32, i32* %9
  %50 = add nsw i32 %49, 1
  store i32 %50, i32* %9
  br label %30
51:
  %52 = load i32*, i32** %8
  %53 = load i32, i32* %7
  %54 = load i32, i32* %6
  call void @ArrayRotate(i32* %52, i32 %53, i32 %54)
  store i32 0, i32* %10
  br label %56
56:
  %57 = load i32, i32* %10
  %58 = load i32, i32* %7
  %59 = icmp slt i32 %57, %58
  br i1 %59, label %62, label %60
60:
  br label %72
62:
  %63 = load i32*, i32** %8
  %64 = load i32, i32* %10
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i32, i32* %63, i64 %65
  %67 = load i32, i32* %66
  %68 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %67)
  br label %69
69:
  %70 = load i32, i32* %10
  %71 = add nsw i32 %70, 1
  store i32 %71, i32* %10
  br label %56
72:
  %73 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0))
  %74 = load i32*, i32** %8
  call void @free(i8* %75)
  store i32 0, i32* %3
  br label %79
79:
  %80 = load i32, i32* %3
  ret i32 %80
}
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare noalias i8* @malloc(i64)
declare i32 @printf(i8*, ...)
declare void @free(i8*)
declare i64 @strtol(i8*, i8**, i32)
