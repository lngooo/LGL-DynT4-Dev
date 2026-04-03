@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @g8(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  %13 = load i32, i32* %6
  %14 = icmp eq i32 %13, 0
  br i1 %14, label %15, label %16
15:
  store i32 -1, i32* %4
  br label %103
16:
  %17 = load i32*, i32** %5
  %18 = getelementptr inbounds i32, i32* %17, i64 0
  %19 = load i32, i32* %18
  %20 = load i32, i32* %7
  %21 = icmp eq i32 %19, %20
  br i1 %21, label %22, label %23
22:
  store i32 0, i32* %4
  br label %103
23:
  store i32 1, i32* %8
  br label %25
25:
  %26 = load i32, i32* %8
  %27 = load i32, i32* %6
  %28 = icmp slt i32 %26, %27
  br i1 %28, label %29, label %37
29:
  %30 = load i32*, i32** %5
  %31 = load i32, i32* %8
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i32, i32* %30, i64 %32
  %34 = load i32, i32* %33
  %35 = load i32, i32* %7
  %36 = icmp sle i32 %34, %35
  br label %37
37:
  %38 = phi i1 [ false, %25 ], [ %36, %29 ]
  br i1 %38, label %39, label %42
39:
  %40 = load i32, i32* %8
  %41 = mul nsw i32 %40, 2
  store i32 %41, i32* %8
  br label %25
42:
  %44 = load i32, i32* %8
  %45 = sdiv i32 %44, 2
  store i32 %45, i32* %9
  %47 = load i32, i32* %8
  %48 = load i32, i32* %6
  %49 = sub nsw i32 %48, 1
  %50 = icmp slt i32 %47, %49
  br i1 %50, label %51, label %53
51:
  %52 = load i32, i32* %8
  br label %56
53:
  %54 = load i32, i32* %6
  %55 = sub nsw i32 %54, 1
  br label %56
56:
  %57 = phi i32 [ %52, %51 ], [ %55, %53 ]
  store i32 %57, i32* %10
  br label %58
58:
  %59 = load i32, i32* %9
  %60 = load i32, i32* %10
  %61 = icmp sle i32 %59, %60
  br i1 %61, label %62, label %98
62:
  %64 = load i32, i32* %9
  %65 = load i32, i32* %10
  %66 = load i32, i32* %9
  %67 = sub nsw i32 %65, %66
  %68 = sdiv i32 %67, 2
  %69 = add nsw i32 %64, %68
  store i32 %69, i32* %11
  %70 = load i32*, i32** %5
  %71 = load i32, i32* %11
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds i32, i32* %70, i64 %72
  %74 = load i32, i32* %73
  %75 = load i32, i32* %7
  %76 = icmp eq i32 %74, %75
  br i1 %76, label %77, label %79
77:
  %78 = load i32, i32* %11
  store i32 %78, i32* %4
  store i32 1, i32* %12
  br label %94
79:
  %80 = load i32*, i32** %5
  %81 = load i32, i32* %11
  %82 = sext i32 %81 to i64
  %83 = getelementptr inbounds i32, i32* %80, i64 %82
  %84 = load i32, i32* %83
  %85 = load i32, i32* %7
  %86 = icmp slt i32 %84, %85
  br i1 %86, label %87, label %90
87:
  %88 = load i32, i32* %11
  %89 = add nsw i32 %88, 1
  store i32 %89, i32* %9
  br label %93
90:
  %91 = load i32, i32* %11
  %92 = sub nsw i32 %91, 1
  store i32 %92, i32* %10
  br label %93
93:
  store i32 0, i32* %12
  br label %94
94:
  %96 = load i32, i32* %12
  switch i32 %96, label %99 [
    i32 0, label %97
  ]
97:
  br label %58
98:
  store i32 -1, i32* %4
  store i32 1, i32* %12
  br label %99
99:
  br label %103
103:
  %104 = load i32, i32* %4
  ret i32 %104
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32*
  %9 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %10 = load i32, i32* %4
  %11 = icmp slt i32 %10, 3
  br i1 %11, label %12, label %13
12:
  store i32 1, i32* %3
  br label %61
13:
  %15 = load i8**, i8*** %5
  %16 = getelementptr inbounds i8*, i8** %15, i64 1
  %17 = load i8*, i8** %16
  %18 = call i32 @atoi(i8* %17)
  store i32 %18, i32* %6
  %20 = load i32, i32* %4
  %21 = sub nsw i32 %20, 2
  store i32 %21, i32* %7
  %23 = load i32, i32* %7
  %24 = sext i32 %23 to i64
  %25 = mul i64 %24, 4
  %26 = call noalias i8* @malloc(i64 %25)
  store i32* %27, i32** %8
  store i32 0, i32* %9
  br label %29
29:
  %30 = load i32, i32* %9
  %31 = load i32, i32* %7
  %32 = icmp slt i32 %30, %31
  br i1 %32, label %35, label %33
33:
  br label %50
35:
  %36 = load i8**, i8*** %5
  %37 = load i32, i32* %9
  %38 = add nsw i32 %37, 2
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8*, i8** %36, i64 %39
  %41 = load i8*, i8** %40
  %42 = call i32 @atoi(i8* %41)
  %43 = load i32*, i32** %8
  %44 = load i32, i32* %9
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i32, i32* %43, i64 %45
  store i32 %42, i32* %46
  br label %47
47:
  %48 = load i32, i32* %9
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %9
  br label %29
50:
  %51 = load i32*, i32** %8
  %52 = load i32, i32* %7
  %53 = load i32, i32* %6
  %54 = call i32 @g8(i32* %51, i32 %52, i32 %53)
  %55 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %54)
  %56 = load i32*, i32** %8
  call void @free(i8* %57)
  store i32 0, i32* %3
  br label %61
61:
  %62 = load i32, i32* %3
  ret i32 %62
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
