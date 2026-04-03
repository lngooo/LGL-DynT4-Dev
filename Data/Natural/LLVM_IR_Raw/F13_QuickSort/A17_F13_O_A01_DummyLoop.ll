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
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %14 = load i32, i32* %5
  %15 = load i32, i32* %6
  %16 = icmp slt i32 %14, %15
  br i1 %16, label %17, label %115
17:
  %19 = load i32*, i32** %4
  %20 = load i32, i32* %6
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i32, i32* %19, i64 %21
  %23 = load i32, i32* %22
  store i32 %23, i32* %7
  %25 = load i32, i32* %5
  %26 = sub nsw i32 %25, 1
  store i32 %26, i32* %8
  %28 = load i32, i32* %5
  store i32 %28, i32* %9
  br label %29
29:
  %30 = load i32, i32* %9
  %31 = load i32, i32* %6
  %32 = icmp slt i32 %30, %31
  br i1 %32, label %35, label %33
33:
  store i32 2, i32* %10
  br label %82
35:
  store i32 0, i32* %11
  br label %37
37:
  %38 = load i32, i32* %11
  %39 = icmp slt i32 %38, 1
  br i1 %39, label %42, label %40
40:
  store i32 5, i32* %10
  br label %78
42:
  %43 = load i32*, i32** %4
  %44 = load i32, i32* %9
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i32, i32* %43, i64 %45
  %47 = load i32, i32* %46
  %48 = load i32, i32* %7
  %49 = icmp slt i32 %47, %48
  br i1 %49, label %50, label %74
50:
  %51 = load i32, i32* %8
  %52 = add nsw i32 %51, 1
  store i32 %52, i32* %8
  %54 = load i32*, i32** %4
  %55 = load i32, i32* %8
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i32, i32* %54, i64 %56
  %58 = load i32, i32* %57
  store i32 %58, i32* %12
  %59 = load i32*, i32** %4
  %60 = load i32, i32* %9
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i32, i32* %59, i64 %61
  %63 = load i32, i32* %62
  %64 = load i32*, i32** %4
  %65 = load i32, i32* %8
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds i32, i32* %64, i64 %66
  store i32 %63, i32* %67
  %68 = load i32, i32* %12
  %69 = load i32*, i32** %4
  %70 = load i32, i32* %9
  %71 = sext i32 %70 to i64
  %72 = getelementptr inbounds i32, i32* %69, i64 %71
  store i32 %68, i32* %72
  br label %74
74:
  br label %75
75:
  %76 = load i32, i32* %11
  %77 = add nsw i32 %76, 1
  store i32 %77, i32* %11
  br label %37
78:
  br label %79
79:
  %80 = load i32, i32* %9
  %81 = add nsw i32 %80, 1
  store i32 %81, i32* %9
  br label %29
82:
  %84 = load i32*, i32** %4
  %85 = load i32, i32* %8
  %86 = add nsw i32 %85, 1
  %87 = sext i32 %86 to i64
  %88 = getelementptr inbounds i32, i32* %84, i64 %87
  %89 = load i32, i32* %88
  store i32 %89, i32* %13
  %90 = load i32*, i32** %4
  %91 = load i32, i32* %6
  %92 = sext i32 %91 to i64
  %93 = getelementptr inbounds i32, i32* %90, i64 %92
  %94 = load i32, i32* %93
  %95 = load i32*, i32** %4
  %96 = load i32, i32* %8
  %97 = add nsw i32 %96, 1
  %98 = sext i32 %97 to i64
  %99 = getelementptr inbounds i32, i32* %95, i64 %98
  store i32 %94, i32* %99
  %100 = load i32, i32* %13
  %101 = load i32*, i32** %4
  %102 = load i32, i32* %6
  %103 = sext i32 %102 to i64
  %104 = getelementptr inbounds i32, i32* %101, i64 %103
  store i32 %100, i32* %104
  %105 = load i32*, i32** %4
  %106 = load i32, i32* %5
  %107 = load i32, i32* %8
  call void @QuickSort(i32* %105, i32 %106, i32 %107)
  %108 = load i32*, i32** %4
  %109 = load i32, i32* %8
  %110 = add nsw i32 %109, 2
  %111 = load i32, i32* %6
  call void @QuickSort(i32* %108, i32 %110, i32 %111)
  br label %115
115:
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
