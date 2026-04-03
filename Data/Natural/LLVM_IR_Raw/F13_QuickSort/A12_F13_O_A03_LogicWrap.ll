@.str = constant [5 x i8] c"%d%s\00"
@.str.1 = constant [1 x i8] zeroinitializer
@.str.2 = constant [2 x i8] c" \00"
@.str.3 = constant [2 x i8] c"\0A\00"
define dso_local void @QuickSort(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %11 = load i32, i32* %5
  %12 = load i32, i32* %6
  %13 = icmp sge i32 %11, %12
  br i1 %13, label %14, label %15
14:
  br label %108
15:
  %17 = load i32, i32* %5
  store i32 %17, i32* %7
  %19 = load i32, i32* %6
  store i32 %19, i32* %8
  %21 = load i32*, i32** %4
  %22 = load i32, i32* %5
  %23 = load i32, i32* %6
  %24 = add nsw i32 %22, %23
  %25 = sdiv i32 %24, 2
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i32, i32* %21, i64 %26
  %28 = load i32, i32* %27
  store i32 %28, i32* %9
  br label %29
29:
  %30 = load i32, i32* %7
  %31 = load i32, i32* %8
  %32 = icmp sle i32 %30, %31
  br i1 %32, label %33, label %88
33:
  br label %34
34:
  %35 = load i32*, i32** %4
  %36 = load i32, i32* %7
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i32, i32* %35, i64 %37
  %39 = load i32, i32* %38
  %40 = load i32, i32* %9
  %41 = icmp slt i32 %39, %40
  br i1 %41, label %42, label %45
42:
  %43 = load i32, i32* %7
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %7
  br label %34
45:
  br label %46
46:
  %47 = load i32*, i32** %4
  %48 = load i32, i32* %8
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds i32, i32* %47, i64 %49
  %51 = load i32, i32* %50
  %52 = load i32, i32* %9
  %53 = icmp sgt i32 %51, %52
  br i1 %53, label %54, label %57
54:
  %55 = load i32, i32* %8
  %56 = add nsw i32 %55, -1
  store i32 %56, i32* %8
  br label %46
57:
  %58 = load i32, i32* %7
  %59 = load i32, i32* %8
  %60 = icmp sle i32 %58, %59
  br i1 %60, label %61, label %87
61:
  %63 = load i32*, i32** %4
  %64 = load i32, i32* %7
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i32, i32* %63, i64 %65
  %67 = load i32, i32* %66
  store i32 %67, i32* %10
  %68 = load i32*, i32** %4
  %69 = load i32, i32* %8
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds i32, i32* %68, i64 %70
  %72 = load i32, i32* %71
  %73 = load i32*, i32** %4
  %74 = load i32, i32* %7
  %75 = sext i32 %74 to i64
  %76 = getelementptr inbounds i32, i32* %73, i64 %75
  store i32 %72, i32* %76
  %77 = load i32, i32* %10
  %78 = load i32*, i32** %4
  %79 = load i32, i32* %8
  %80 = sext i32 %79 to i64
  %81 = getelementptr inbounds i32, i32* %78, i64 %80
  store i32 %77, i32* %81
  %82 = load i32, i32* %7
  %83 = add nsw i32 %82, 1
  store i32 %83, i32* %7
  %84 = load i32, i32* %8
  %85 = add nsw i32 %84, -1
  store i32 %85, i32* %8
  br label %87
87:
  br label %29
88:
  %89 = load i32, i32* %5
  %90 = load i32, i32* %8
  %91 = icmp slt i32 %89, %90
  br i1 %91, label %92, label %96
92:
  %93 = load i32*, i32** %4
  %94 = load i32, i32* %5
  %95 = load i32, i32* %8
  call void @QuickSort(i32* %93, i32 %94, i32 %95)
  br label %96
96:
  %97 = load i32, i32* %7
  %98 = load i32, i32* %6
  %99 = icmp slt i32 %97, %98
  br i1 %99, label %100, label %104
100:
  %101 = load i32*, i32** %4
  %102 = load i32, i32* %7
  %103 = load i32, i32* %6
  call void @QuickSort(i32* %101, i32 %102, i32 %103)
  br label %104
104:
  br label %108
108:
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
  br label %78
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
  %48 = sub nsw i32 %47, 1
  call void @QuickSort(i32* %46, i32 0, i32 %48)
  store i32 0, i32* %9
  br label %50
50:
  %51 = load i32, i32* %9
  %52 = load i32, i32* %6
  %53 = icmp slt i32 %51, %52
  br i1 %53, label %56, label %54
54:
  br label %72
56:
  %57 = load i32*, i32** %7
  %58 = load i32, i32* %9
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i32, i32* %57, i64 %59
  %61 = load i32, i32* %60
  %62 = load i32, i32* %9
  %63 = load i32, i32* %6
  %64 = sub nsw i32 %63, 1
  %65 = icmp eq i32 %62, %64
  %66 = zext i1 %65 to i64
  %67 = select i1 %65, i8* getelementptr inbounds ([1 x i8], [1 x i8]* @.str.1, i64 0, i64 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.2, i64 0, i64 0)
  %68 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %61, i8* %67)
  br label %69
69:
  %70 = load i32, i32* %9
  %71 = add nsw i32 %70, 1
  store i32 %71, i32* %9
  br label %50
72:
  %73 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.3, i64 0, i64 0))
  %74 = load i32*, i32** %7
  call void @free(i8* %75)
  store i32 0, i32* %3
  br label %78
78:
  %79 = load i32, i32* %3
  ret i32 %79
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
