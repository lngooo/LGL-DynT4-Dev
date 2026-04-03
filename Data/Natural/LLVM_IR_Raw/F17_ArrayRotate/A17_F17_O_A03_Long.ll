@.str = constant [4 x i8] c"%d \00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @ArrayRotate(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i64
  %8 = alloca i64
  %9 = alloca i32*
  %10 = alloca i64
  %11 = alloca i64
  %12 = alloca i64
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %13 = load i32, i32* %5
  %14 = icmp eq i32 %13, 0
  br i1 %14, label %15, label %16
15:
  br label %101
16:
  %18 = load i32, i32* %5
  %19 = sext i32 %18 to i64
  store i64 %19, i64* %7
  %21 = load i32, i32* %6
  %22 = load i32, i32* %5
  %23 = srem i32 %21, %22
  %24 = sext i32 %23 to i64
  store i64 %24, i64* %8
  %26 = load i64, i64* %8
  %27 = mul i64 %26, 4
  %28 = call noalias i8* @malloc(i64 %27)
  store i32* %29, i32** %9
  store i64 0, i64* %10
  br label %31
31:
  %32 = load i64, i64* %10
  %33 = load i64, i64* %8
  %34 = icmp slt i64 %32, %33
  br i1 %34, label %37, label %35
35:
  br label %48
37:
  %38 = load i32*, i32** %4
  %39 = load i64, i64* %10
  %40 = getelementptr inbounds i32, i32* %38, i64 %39
  %41 = load i32, i32* %40
  %42 = load i32*, i32** %9
  %43 = load i64, i64* %10
  %44 = getelementptr inbounds i32, i32* %42, i64 %43
  store i32 %41, i32* %44
  br label %45
45:
  %46 = load i64, i64* %10
  %47 = add nsw i64 %46, 1
  store i64 %47, i64* %10
  br label %31
48:
  store i64 0, i64* %11
  br label %50
50:
  %51 = load i64, i64* %11
  %52 = load i64, i64* %7
  %53 = load i64, i64* %8
  %54 = sub nsw i64 %52, %53
  %55 = icmp slt i64 %51, %54
  br i1 %55, label %58, label %56
56:
  br label %71
58:
  %59 = load i32*, i32** %4
  %60 = load i64, i64* %11
  %61 = getelementptr inbounds i32, i32* %59, i64 %60
  %62 = load i64, i64* %8
  %63 = getelementptr inbounds i32, i32* %61, i64 %62
  %64 = load i32, i32* %63
  %65 = load i32*, i32** %4
  %66 = load i64, i64* %11
  %67 = getelementptr inbounds i32, i32* %65, i64 %66
  store i32 %64, i32* %67
  br label %68
68:
  %69 = load i64, i64* %11
  %70 = add nsw i64 %69, 1
  store i64 %70, i64* %11
  br label %50
71:
  store i64 0, i64* %12
  br label %73
73:
  %74 = load i64, i64* %12
  %75 = load i64, i64* %8
  %76 = icmp slt i64 %74, %75
  br i1 %76, label %79, label %77
77:
  br label %95
79:
  %80 = load i32*, i32** %9
  %81 = load i64, i64* %12
  %82 = getelementptr inbounds i32, i32* %80, i64 %81
  %83 = load i32, i32* %82
  %84 = load i32*, i32** %4
  %85 = load i64, i64* %7
  %86 = getelementptr inbounds i32, i32* %84, i64 %85
  %87 = load i64, i64* %8
  %88 = sub i64 0, %87
  %89 = getelementptr inbounds i32, i32* %86, i64 %88
  %90 = load i64, i64* %12
  %91 = getelementptr inbounds i32, i32* %89, i64 %90
  store i32 %83, i32* %91
  br label %92
92:
  %93 = load i64, i64* %12
  %94 = add nsw i64 %93, 1
  store i64 %94, i64* %12
  br label %73
95:
  %96 = load i32*, i32** %9
  call void @free(i8* %97)
  br label %101
101:
  ret void
}
declare noalias i8* @malloc(i64)
declare void @free(i8*)
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
declare i32 @printf(i8*, ...)
declare i64 @strtol(i8*, i8**, i32)
