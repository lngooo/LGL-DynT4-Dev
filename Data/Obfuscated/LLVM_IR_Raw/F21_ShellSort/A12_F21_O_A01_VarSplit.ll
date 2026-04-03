@.str = constant [5 x i8] c"%d%c\00"
define dso_local void @utvQ(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %14 = load i32, i32* %4
  %15 = sdiv i32 %14, 4
  store i32 %15, i32* %5
  %17 = load i32, i32* %4
  %18 = sdiv i32 %17, 4
  store i32 %18, i32* %6
  %20 = load i32, i32* %5
  %21 = load i32, i32* %6
  %22 = add nsw i32 %20, %21
  %23 = load i32, i32* %4
  %24 = srem i32 %23, 2
  %25 = sdiv i32 %24, 2
  %26 = add nsw i32 %22, %25
  store i32 %26, i32* %7
  br label %27
27:
  %28 = load i32, i32* %7
  %29 = icmp sgt i32 %28, 0
  br i1 %29, label %32, label %30
30:
  store i32 2, i32* %8
  br label %111
32:
  %34 = load i32, i32* %7
  store i32 %34, i32* %9
  br label %35
35:
  %36 = load i32, i32* %9
  %37 = load i32, i32* %4
  %38 = icmp slt i32 %36, %37
  br i1 %38, label %41, label %39
39:
  store i32 5, i32* %8
  br label %107
41:
  %43 = load i32*, i32** %3
  %44 = load i32, i32* %9
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i32, i32* %43, i64 %45
  %47 = load i32, i32* %46
  %48 = srem i32 %47, 10
  store i32 %48, i32* %10
  %50 = load i32*, i32** %3
  %51 = load i32, i32* %9
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i32, i32* %50, i64 %52
  %54 = load i32, i32* %53
  %55 = sdiv i32 %54, 10
  store i32 %55, i32* %11
  %57 = load i32, i32* %9
  store i32 %57, i32* %12
  br label %58
58:
  %59 = load i32, i32* %12
  %60 = load i32, i32* %7
  %61 = icmp sge i32 %59, %60
  br i1 %61, label %62, label %75
62:
  %63 = load i32*, i32** %3
  %64 = load i32, i32* %12
  %65 = load i32, i32* %7
  %66 = sub nsw i32 %64, %65
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds i32, i32* %63, i64 %67
  %69 = load i32, i32* %68
  %70 = load i32, i32* %11
  %71 = mul nsw i32 %70, 10
  %72 = load i32, i32* %10
  %73 = add nsw i32 %71, %72
  %74 = icmp sgt i32 %69, %73
  br label %75
75:
  %76 = phi i1 [ false, %58 ], [ %74, %62 ]
  br i1 %76, label %77, label %92
77:
  %78 = load i32*, i32** %3
  %79 = load i32, i32* %12
  %80 = load i32, i32* %7
  %81 = sub nsw i32 %79, %80
  %82 = sext i32 %81 to i64
  %83 = getelementptr inbounds i32, i32* %78, i64 %82
  %84 = load i32, i32* %83
  %85 = load i32*, i32** %3
  %86 = load i32, i32* %12
  %87 = sext i32 %86 to i64
  %88 = getelementptr inbounds i32, i32* %85, i64 %87
  store i32 %84, i32* %88
  %89 = load i32, i32* %7
  %90 = load i32, i32* %12
  %91 = sub nsw i32 %90, %89
  store i32 %91, i32* %12
  br label %58
92:
  %93 = load i32, i32* %11
  %94 = mul nsw i32 %93, 10
  %95 = load i32, i32* %10
  %96 = add nsw i32 %94, %95
  %97 = load i32*, i32** %3
  %98 = load i32, i32* %12
  %99 = sext i32 %98 to i64
  %100 = getelementptr inbounds i32, i32* %97, i64 %99
  store i32 %96, i32* %100
  br label %104
104:
  %105 = load i32, i32* %9
  %106 = add nsw i32 %105, 1
  store i32 %106, i32* %9
  br label %35
107:
  br label %108
108:
  %109 = load i32, i32* %7
  %110 = sdiv i32 %109, 2
  store i32 %110, i32* %7
  br label %27
111:
  ret void
}
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
  br label %76
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
  call void @utvQ(i32* %46, i32 %47)
  store i32 0, i32* %9
  br label %49
49:
  %50 = load i32, i32* %9
  %51 = load i32, i32* %6
  %52 = icmp slt i32 %50, %51
  br i1 %52, label %55, label %53
53:
  br label %71
55:
  %56 = load i32*, i32** %7
  %57 = load i32, i32* %9
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i32, i32* %56, i64 %58
  %60 = load i32, i32* %59
  %61 = load i32, i32* %9
  %62 = load i32, i32* %6
  %63 = sub nsw i32 %62, 1
  %64 = icmp eq i32 %61, %63
  %65 = zext i1 %64 to i64
  %66 = select i1 %64, i32 10, i32 32
  %67 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %60, i32 %66)
  br label %68
68:
  %69 = load i32, i32* %9
  %70 = add nsw i32 %69, 1
  store i32 %70, i32* %9
  br label %49
71:
  %72 = load i32*, i32** %7
  call void @free(i8* %73)
  store i32 0, i32* %3
  br label %76
76:
  %77 = load i32, i32* %3
  ret i32 %77
}
declare noalias i8* @malloc(i64)
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare void @free(i8*)
declare i64 @strtol(i8*, i8**, i32)
