@.str = constant [5 x i8] c"%d%s\00"
@.str.1 = constant [1 x i8] zeroinitializer
@.str.2 = constant [2 x i8] c" \00"
@.str.3 = constant [2 x i8] c"\0A\00"
define dso_local void @QuickSort(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32*
  %8 = alloca i32*
  %9 = alloca i32*
  %10 = alloca i32
  %11 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %12 = load i32, i32* %5
  %13 = load i32, i32* %6
  %14 = icmp sge i32 %12, %13
  br i1 %14, label %15, label %16
15:
  br label %92
16:
  %18 = load i32*, i32** %4
  %19 = load i32, i32* %6
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds i32, i32* %18, i64 %20
  store i32* %21, i32** %7
  %23 = load i32*, i32** %4
  %24 = load i32, i32* %5
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i32, i32* %23, i64 %25
  store i32* %26, i32** %8
  %28 = load i32*, i32** %4
  %29 = load i32, i32* %5
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %28, i64 %30
  store i32* %31, i32** %9
  br label %32
32:
  %33 = load i32*, i32** %9
  %34 = load i32*, i32** %7
  %35 = icmp ult i32* %33, %34
  br i1 %35, label %38, label %36
36:
  br label %60
38:
  %39 = load i32*, i32** %9
  %40 = load i32, i32* %39
  %41 = load i32*, i32** %7
  %42 = load i32, i32* %41
  %43 = icmp slt i32 %40, %42
  br i1 %43, label %44, label %56
44:
  %46 = load i32*, i32** %9
  %47 = load i32, i32* %46
  store i32 %47, i32* %10
  %48 = load i32*, i32** %8
  %49 = load i32, i32* %48
  %50 = load i32*, i32** %9
  store i32 %49, i32* %50
  %51 = load i32, i32* %10
  %52 = load i32*, i32** %8
  store i32 %51, i32* %52
  %53 = load i32*, i32** %8
  %54 = getelementptr inbounds i32, i32* %53, i32 1
  store i32* %54, i32** %8
  br label %56
56:
  br label %57
57:
  %58 = load i32*, i32** %9
  %59 = getelementptr inbounds i32, i32* %58, i32 1
  store i32* %59, i32** %9
  br label %32
60:
  %62 = load i32*, i32** %8
  %63 = load i32, i32* %62
  store i32 %63, i32* %11
  %64 = load i32*, i32** %7
  %65 = load i32, i32* %64
  %66 = load i32*, i32** %8
  store i32 %65, i32* %66
  %67 = load i32, i32* %11
  %68 = load i32*, i32** %7
  store i32 %67, i32* %68
  %69 = load i32*, i32** %4
  %70 = load i32, i32* %5
  %71 = load i32*, i32** %8
  %72 = load i32*, i32** %4
  %73 = ptrtoint i32* %71 to i64
  %74 = ptrtoint i32* %72 to i64
  %75 = sub i64 %73, %74
  %76 = sdiv exact i64 %75, 4
  %77 = trunc i64 %76 to i32
  %78 = sub nsw i32 %77, 1
  call void @QuickSort(i32* %69, i32 %70, i32 %78)
  %79 = load i32*, i32** %4
  %80 = load i32*, i32** %8
  %81 = load i32*, i32** %4
  %82 = ptrtoint i32* %80 to i64
  %83 = ptrtoint i32* %81 to i64
  %84 = sub i64 %82, %83
  %85 = sdiv exact i64 %84, 4
  %86 = trunc i64 %85 to i32
  %87 = add nsw i32 %86, 1
  %88 = load i32, i32* %6
  call void @QuickSort(i32* %79, i32 %87, i32 %88)
  br label %92
92:
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
