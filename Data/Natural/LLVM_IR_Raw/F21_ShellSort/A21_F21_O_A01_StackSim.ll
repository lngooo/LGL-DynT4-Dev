@.str = constant [5 x i8] c"%d%c\00"
define dso_local void @ShellSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca [32 x i32]
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 -1, i32* %6
  %15 = load i32, i32* %4
  %16 = sdiv i32 %15, 2
  store i32 %16, i32* %7
  br label %17
17:
  %18 = load i32, i32* %7
  %19 = icmp sgt i32 %18, 0
  br i1 %19, label %20, label %28
20:
  %21 = load i32, i32* %7
  %22 = load i32, i32* %6
  %23 = add nsw i32 %22, 1
  store i32 %23, i32* %6
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds [32 x i32], [32 x i32]* %5, i64 0, i64 %24
  store i32 %21, i32* %25
  %26 = load i32, i32* %7
  %27 = sdiv i32 %26, 2
  store i32 %27, i32* %7
  br label %17
28:
  br label %29
29:
  %30 = load i32, i32* %6
  %31 = icmp sge i32 %30, 0
  br i1 %31, label %32, label %100
32:
  %34 = load i32, i32* %6
  %35 = add nsw i32 %34, -1
  store i32 %35, i32* %6
  %36 = sext i32 %34 to i64
  %37 = getelementptr inbounds [32 x i32], [32 x i32]* %5, i64 0, i64 %36
  %38 = load i32, i32* %37
  store i32 %38, i32* %8
  %40 = load i32, i32* %8
  store i32 %40, i32* %9
  br label %41
41:
  %42 = load i32, i32* %9
  %43 = load i32, i32* %4
  %44 = icmp slt i32 %42, %43
  br i1 %44, label %47, label %45
45:
  br label %98
47:
  %49 = load i32*, i32** %3
  %50 = load i32, i32* %9
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i32, i32* %49, i64 %51
  %53 = load i32, i32* %52
  store i32 %53, i32* %10
  %55 = load i32, i32* %9
  store i32 %55, i32* %11
  br label %56
56:
  %57 = load i32, i32* %11
  %58 = load i32, i32* %8
  %59 = icmp sge i32 %57, %58
  br i1 %59, label %60, label %70
60:
  %61 = load i32*, i32** %3
  %62 = load i32, i32* %11
  %63 = load i32, i32* %8
  %64 = sub nsw i32 %62, %63
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i32, i32* %61, i64 %65
  %67 = load i32, i32* %66
  %68 = load i32, i32* %10
  %69 = icmp sgt i32 %67, %68
  br label %70
70:
  %71 = phi i1 [ false, %56 ], [ %69, %60 ]
  br i1 %71, label %72, label %87
72:
  %73 = load i32*, i32** %3
  %74 = load i32, i32* %11
  %75 = load i32, i32* %8
  %76 = sub nsw i32 %74, %75
  %77 = sext i32 %76 to i64
  %78 = getelementptr inbounds i32, i32* %73, i64 %77
  %79 = load i32, i32* %78
  %80 = load i32*, i32** %3
  %81 = load i32, i32* %11
  %82 = sext i32 %81 to i64
  %83 = getelementptr inbounds i32, i32* %80, i64 %82
  store i32 %79, i32* %83
  %84 = load i32, i32* %8
  %85 = load i32, i32* %11
  %86 = sub nsw i32 %85, %84
  store i32 %86, i32* %11
  br label %56
87:
  %88 = load i32, i32* %10
  %89 = load i32*, i32** %3
  %90 = load i32, i32* %11
  %91 = sext i32 %90 to i64
  %92 = getelementptr inbounds i32, i32* %89, i64 %91
  store i32 %88, i32* %92
  br label %95
95:
  %96 = load i32, i32* %9
  %97 = add nsw i32 %96, 1
  store i32 %97, i32* %9
  br label %41
98:
  br label %29
100:
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
  call void @ShellSort(i32* %46, i32 %47)
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
