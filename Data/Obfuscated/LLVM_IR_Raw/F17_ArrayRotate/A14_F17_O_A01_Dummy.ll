@.str = constant [4 x i8] c"%d \00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @JDN9(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca [3 x [2 x i32]]
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %14 = load i32, i32* %5
  %15 = icmp eq i32 %14, 0
  br i1 %15, label %16, label %17
16:
  br label %106
17:
  %18 = load i32, i32* %5
  %19 = load i32, i32* %6
  %20 = srem i32 %19, %18
  store i32 %20, i32* %6
  %22 = getelementptr inbounds [3 x [2 x i32]], [3 x [2 x i32]]* %7, i64 0, i64 0
  %23 = getelementptr inbounds [2 x i32], [2 x i32]* %22, i64 0, i64 0
  store i32 0, i32* %23
  %24 = getelementptr inbounds i32, i32* %23, i64 1
  %25 = load i32, i32* %6
  %26 = sub nsw i32 %25, 1
  store i32 %26, i32* %24
  %27 = getelementptr inbounds [2 x i32], [2 x i32]* %22, i64 1
  %28 = getelementptr inbounds [2 x i32], [2 x i32]* %27, i64 0, i64 0
  %29 = load i32, i32* %6
  store i32 %29, i32* %28
  %30 = getelementptr inbounds i32, i32* %28, i64 1
  %31 = load i32, i32* %5
  %32 = sub nsw i32 %31, 1
  store i32 %32, i32* %30
  %33 = getelementptr inbounds [2 x i32], [2 x i32]* %27, i64 1
  %34 = getelementptr inbounds [2 x i32], [2 x i32]* %33, i64 0, i64 0
  store i32 0, i32* %34
  %35 = getelementptr inbounds i32, i32* %34, i64 1
  %36 = load i32, i32* %5
  %37 = sub nsw i32 %36, 1
  store i32 %37, i32* %35
  store i32 0, i32* %8
  br label %39
39:
  %40 = load i32, i32* %8
  %41 = icmp slt i32 %40, 3
  br i1 %41, label %44, label %42
42:
  store i32 2, i32* %9
  br label %104
44:
  %46 = load i32, i32* %8
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds [3 x [2 x i32]], [3 x [2 x i32]]* %7, i64 0, i64 %47
  %49 = getelementptr inbounds [2 x i32], [2 x i32]* %48, i64 0, i64 0
  %50 = load i32, i32* %49
  store i32 %50, i32* %10
  %52 = load i32, i32* %8
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds [3 x [2 x i32]], [3 x [2 x i32]]* %7, i64 0, i64 %53
  %55 = getelementptr inbounds [2 x i32], [2 x i32]* %54, i64 0, i64 1
  %56 = load i32, i32* %55
  store i32 %56, i32* %11
  br label %57
57:
  %58 = load i32, i32* %10
  %59 = load i32, i32* %11
  %60 = icmp slt i32 %58, %59
  br i1 %60, label %61, label %98
61:
  store i32 0, i32* %12
  br label %63
63:
  %64 = load i32, i32* %12
  %65 = icmp slt i32 %64, 1
  br i1 %65, label %68, label %66
66:
  store i32 7, i32* %9
  br label %93
68:
  %70 = load i32*, i32** %4
  %71 = load i32, i32* %10
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds i32, i32* %70, i64 %72
  %74 = load i32, i32* %73
  store i32 %74, i32* %13
  %75 = load i32*, i32** %4
  %76 = load i32, i32* %11
  %77 = sext i32 %76 to i64
  %78 = getelementptr inbounds i32, i32* %75, i64 %77
  %79 = load i32, i32* %78
  %80 = load i32*, i32** %4
  %81 = load i32, i32* %10
  %82 = sext i32 %81 to i64
  %83 = getelementptr inbounds i32, i32* %80, i64 %82
  store i32 %79, i32* %83
  %84 = load i32, i32* %13
  %85 = load i32*, i32** %4
  %86 = load i32, i32* %11
  %87 = sext i32 %86 to i64
  %88 = getelementptr inbounds i32, i32* %85, i64 %87
  store i32 %84, i32* %88
  br label %90
90:
  %91 = load i32, i32* %12
  %92 = add nsw i32 %91, 1
  store i32 %92, i32* %12
  br label %63
93:
  %94 = load i32, i32* %10
  %95 = add nsw i32 %94, 1
  store i32 %95, i32* %10
  %96 = load i32, i32* %11
  %97 = add nsw i32 %96, -1
  store i32 %97, i32* %11
  br label %57
98:
  br label %101
101:
  %102 = load i32, i32* %8
  %103 = add nsw i32 %102, 1
  store i32 %103, i32* %8
  br label %39
104:
  br label %106
106:
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
  call void @JDN9(i32* %52, i32 %53, i32 %54)
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
