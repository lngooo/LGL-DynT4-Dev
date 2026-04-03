@.str = constant [5 x i8] c"%d%s\00"
@.str.1 = constant [1 x i8] zeroinitializer
@.str.2 = constant [2 x i8] c" \00"
@.str.3 = constant [2 x i8] c"\0A\00"
define dso_local void @MergeSort(i32* %0, i32 %1, i32 %2) {
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
  %13 = icmp slt i32 %11, %12
  br i1 %13, label %14, label %87
14:
  %16 = load i32, i32* %5
  %17 = load i32, i32* %6
  %18 = add nsw i32 %16, %17
  %19 = sdiv i32 %18, 2
  store i32 %19, i32* %7
  %20 = load i32*, i32** %4
  %21 = load i32, i32* %5
  %22 = load i32, i32* %7
  call void @MergeSort(i32* %20, i32 %21, i32 %22)
  %23 = load i32*, i32** %4
  %24 = load i32, i32* %7
  %25 = add nsw i32 %24, 1
  %26 = load i32, i32* %6
  call void @MergeSort(i32* %23, i32 %25, i32 %26)
  %28 = load i32, i32* %7
  %29 = add nsw i32 %28, 1
  store i32 %29, i32* %8
  br label %30
30:
  %31 = load i32, i32* %8
  %32 = load i32, i32* %6
  %33 = icmp sle i32 %31, %32
  br i1 %33, label %36, label %34
34:
  br label %85
36:
  %38 = load i32*, i32** %4
  %39 = load i32, i32* %8
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i32, i32* %38, i64 %40
  %42 = load i32, i32* %41
  store i32 %42, i32* %9
  %44 = load i32, i32* %8
  %45 = sub nsw i32 %44, 1
  store i32 %45, i32* %10
  br label %46
46:
  %47 = load i32, i32* %10
  %48 = load i32, i32* %5
  %49 = icmp sge i32 %47, %48
  br i1 %49, label %50, label %58
50:
  %51 = load i32*, i32** %4
  %52 = load i32, i32* %10
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds i32, i32* %51, i64 %53
  %55 = load i32, i32* %54
  %56 = load i32, i32* %9
  %57 = icmp sgt i32 %55, %56
  br label %58
58:
  %59 = phi i1 [ false, %46 ], [ %57, %50 ]
  br i1 %59, label %60, label %73
60:
  %61 = load i32*, i32** %4
  %62 = load i32, i32* %10
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds i32, i32* %61, i64 %63
  %65 = load i32, i32* %64
  %66 = load i32*, i32** %4
  %67 = load i32, i32* %10
  %68 = add nsw i32 %67, 1
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i32, i32* %66, i64 %69
  store i32 %65, i32* %70
  %71 = load i32, i32* %10
  %72 = add nsw i32 %71, -1
  store i32 %72, i32* %10
  br label %46
73:
  %74 = load i32, i32* %9
  %75 = load i32*, i32** %4
  %76 = load i32, i32* %10
  %77 = add nsw i32 %76, 1
  %78 = sext i32 %77 to i64
  %79 = getelementptr inbounds i32, i32* %75, i64 %78
  store i32 %74, i32* %79
  br label %82
82:
  %83 = load i32, i32* %8
  %84 = add nsw i32 %83, 1
  store i32 %84, i32* %8
  br label %30
85:
  br label %87
87:
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
  call void @MergeSort(i32* %46, i32 0, i32 %48)
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
