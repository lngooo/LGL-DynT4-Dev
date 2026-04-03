@.str = constant [4 x i8] c"%d \00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @Kh(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %8 = load i32, i32* %4
  %9 = icmp sle i32 %8, 1
  br i1 %9, label %10, label %11
10:
  br label %66
11:
  %13 = load i32, i32* %4
  %14 = sext i32 %13 to i64
  %15 = mul i64 %14, 4
  %16 = call noalias i8* @malloc(i64 %15)
  store i32* %17, i32** %5
  store i32 0, i32* %6
  br label %19
19:
  %20 = load i32, i32* %6
  %21 = load i32, i32* %4
  %22 = icmp slt i32 %20, %21
  br i1 %22, label %25, label %23
23:
  br label %38
25:
  %26 = load i32*, i32** %3
  %27 = load i32, i32* %6
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i32, i32* %26, i64 %28
  %30 = load i32, i32* %29
  %31 = load i32*, i32** %5
  %32 = load i32, i32* %6
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i32, i32* %31, i64 %33
  store i32 %30, i32* %34
  br label %35
35:
  %36 = load i32, i32* %6
  %37 = add nsw i32 %36, 1
  store i32 %37, i32* %6
  br label %19
38:
  store i32 0, i32* %7
  br label %40
40:
  %41 = load i32, i32* %7
  %42 = load i32, i32* %4
  %43 = icmp slt i32 %41, %42
  br i1 %43, label %46, label %44
44:
  br label %62
46:
  %47 = load i32*, i32** %5
  %48 = load i32, i32* %4
  %49 = sub nsw i32 %48, 1
  %50 = load i32, i32* %7
  %51 = sub nsw i32 %49, %50
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i32, i32* %47, i64 %52
  %54 = load i32, i32* %53
  %55 = load i32*, i32** %3
  %56 = load i32, i32* %7
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i32, i32* %55, i64 %57
  store i32 %54, i32* %58
  br label %59
59:
  %60 = load i32, i32* %7
  %61 = add nsw i32 %60, 1
  store i32 %61, i32* %7
  br label %40
62:
  %63 = load i32*, i32** %5
  call void @free(i8* %64)
  br label %66
66:
  ret void
}
declare noalias i8* @malloc(i64)
declare void @free(i8*)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32*
  %8 = alloca i32
  %9 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %10 = load i32, i32* %4
  %11 = icmp slt i32 %10, 2
  br i1 %11, label %12, label %13
12:
  store i32 0, i32* %3
  br label %71
13:
  %15 = load i32, i32* %4
  %16 = sub nsw i32 %15, 1
  store i32 %16, i32* %6
  %18 = load i32, i32* %6
  %19 = sext i32 %18 to i64
  %20 = mul i64 %19, 4
  %21 = call noalias i8* @malloc(i64 %20)
  store i32* %22, i32** %7
  store i32 0, i32* %8
  br label %24
24:
  %25 = load i32, i32* %8
  %26 = load i32, i32* %6
  %27 = icmp slt i32 %25, %26
  br i1 %27, label %30, label %28
28:
  br label %45
30:
  %31 = load i8**, i8*** %5
  %32 = load i32, i32* %8
  %33 = add nsw i32 %32, 1
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i8*, i8** %31, i64 %34
  %36 = load i8*, i8** %35
  %37 = call i32 @atoi(i8* %36)
  %38 = load i32*, i32** %7
  %39 = load i32, i32* %8
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i32, i32* %38, i64 %40
  store i32 %37, i32* %41
  br label %42
42:
  %43 = load i32, i32* %8
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %8
  br label %24
45:
  %46 = load i32*, i32** %7
  %47 = load i32, i32* %6
  call void @Kh(i32* %46, i32 %47)
  store i32 0, i32* %9
  br label %49
49:
  %50 = load i32, i32* %9
  %51 = load i32, i32* %6
  %52 = icmp slt i32 %50, %51
  br i1 %52, label %55, label %53
53:
  br label %65
55:
  %56 = load i32*, i32** %7
  %57 = load i32, i32* %9
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i32, i32* %56, i64 %58
  %60 = load i32, i32* %59
  %61 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %60)
  br label %62
62:
  %63 = load i32, i32* %9
  %64 = add nsw i32 %63, 1
  store i32 %64, i32* %9
  br label %49
65:
  %66 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0))
  %67 = load i32*, i32** %7
  call void @free(i8* %68)
  store i32 0, i32* %3
  br label %71
71:
  %72 = load i32, i32* %3
  ret i32 %72
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
