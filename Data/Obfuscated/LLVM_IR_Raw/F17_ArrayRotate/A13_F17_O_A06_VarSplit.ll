@.str = constant [4 x i8] c"%d \00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @tr(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32*
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %11 = load i32, i32* %5
  %12 = icmp eq i32 %11, 0
  br i1 %12, label %13, label %14
13:
  br label %86
14:
  %15 = load i32, i32* %5
  %16 = load i32, i32* %6
  %17 = srem i32 %16, %15
  store i32 %17, i32* %6
  %19 = load i32, i32* %5
  %20 = sext i32 %19 to i64
  %21 = mul i64 %20, 4
  %22 = call noalias i8* @malloc(i64 %21)
  store i32* %23, i32** %7
  store i32 0, i32* %8
  store i32 0, i32* %9
  br label %26
26:
  %27 = load i32, i32* %8
  %28 = load i32, i32* %9
  %29 = add nsw i32 %27, %28
  %30 = load i32, i32* %5
  %31 = icmp slt i32 %29, %30
  br i1 %31, label %32, label %59
32:
  %33 = load i32*, i32** %4
  %34 = load i32, i32* %8
  %35 = load i32, i32* %9
  %36 = add nsw i32 %34, %35
  %37 = load i32, i32* %6
  %38 = add nsw i32 %36, %37
  %39 = load i32, i32* %5
  %40 = srem i32 %38, %39
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i32, i32* %33, i64 %41
  %43 = load i32, i32* %42
  %44 = load i32*, i32** %7
  %45 = load i32, i32* %8
  %46 = load i32, i32* %9
  %47 = add nsw i32 %45, %46
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i32, i32* %44, i64 %48
  store i32 %43, i32* %49
  %50 = load i32, i32* %9
  %51 = add nsw i32 %50, 1
  store i32 %51, i32* %9
  %52 = load i32, i32* %9
  %53 = icmp sge i32 %52, 5
  br i1 %53, label %54, label %58
54:
  %55 = load i32, i32* %9
  %56 = load i32, i32* %8
  %57 = add nsw i32 %56, %55
  store i32 %57, i32* %8
  store i32 0, i32* %9
  br label %58
58:
  br label %26
59:
  store i32 0, i32* %10
  br label %61
61:
  %62 = load i32, i32* %10
  %63 = load i32, i32* %5
  %64 = icmp slt i32 %62, %63
  br i1 %64, label %67, label %65
65:
  br label %80
67:
  %68 = load i32*, i32** %7
  %69 = load i32, i32* %10
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds i32, i32* %68, i64 %70
  %72 = load i32, i32* %71
  %73 = load i32*, i32** %4
  %74 = load i32, i32* %10
  %75 = sext i32 %74 to i64
  %76 = getelementptr inbounds i32, i32* %73, i64 %75
  store i32 %72, i32* %76
  br label %77
77:
  %78 = load i32, i32* %10
  %79 = add nsw i32 %78, 1
  store i32 %79, i32* %10
  br label %61
80:
  %81 = load i32*, i32** %7
  call void @free(i8* %82)
  br label %86
86:
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
  call void @tr(i32* %52, i32 %53, i32 %54)
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
