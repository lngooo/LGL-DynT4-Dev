@.str = constant [5 x i8] c"%d%s\00"
@.str.1 = constant [1 x i8] zeroinitializer
@.str.2 = constant [2 x i8] c" \00"
@.str.3 = constant [2 x i8] c"\0A\00"
define dso_local void @NnYy6(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 1, i32* %5
  br label %13
13:
  %14 = load i32, i32* %5
  %15 = load i32, i32* %4
  %16 = icmp slt i32 %14, %15
  br i1 %16, label %19, label %17
17:
  store i32 2, i32* %6
  br label %93
19:
  %21 = load i32*, i32** %3
  %22 = load i32, i32* %5
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i32, i32* %21, i64 %23
  %25 = load i32, i32* %24
  store i32 %25, i32* %7
  store i32 0, i32* %8
  %28 = load i32, i32* %5
  %29 = sub nsw i32 %28, 1
  store i32 %29, i32* %9
  br label %30
30:
  %31 = load i32, i32* %8
  %32 = load i32, i32* %9
  %33 = icmp sle i32 %31, %32
  br i1 %33, label %34, label %57
34:
  %36 = load i32, i32* %8
  %37 = load i32, i32* %9
  %38 = load i32, i32* %8
  %39 = sub nsw i32 %37, %38
  %40 = sdiv i32 %39, 2
  %41 = add nsw i32 %36, %40
  store i32 %41, i32* %10
  %42 = load i32, i32* %7
  %43 = load i32*, i32** %3
  %44 = load i32, i32* %10
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i32, i32* %43, i64 %45
  %47 = load i32, i32* %46
  %48 = icmp slt i32 %42, %47
  br i1 %48, label %49, label %52
49:
  %50 = load i32, i32* %10
  %51 = sub nsw i32 %50, 1
  store i32 %51, i32* %9
  br label %55
52:
  %53 = load i32, i32* %10
  %54 = add nsw i32 %53, 1
  store i32 %54, i32* %8
  br label %55
55:
  br label %30
57:
  %59 = load i32, i32* %5
  %60 = sub nsw i32 %59, 1
  store i32 %60, i32* %11
  br label %61
61:
  %62 = load i32, i32* %11
  %63 = load i32, i32* %8
  %64 = icmp sge i32 %62, %63
  br i1 %64, label %67, label %65
65:
  store i32 7, i32* %6
  br label %81
67:
  %68 = load i32*, i32** %3
  %69 = load i32, i32* %11
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds i32, i32* %68, i64 %70
  %72 = load i32, i32* %71
  %73 = load i32*, i32** %3
  %74 = load i32, i32* %11
  %75 = add nsw i32 %74, 1
  %76 = sext i32 %75 to i64
  %77 = getelementptr inbounds i32, i32* %73, i64 %76
  store i32 %72, i32* %77
  br label %78
78:
  %79 = load i32, i32* %11
  %80 = add nsw i32 %79, -1
  store i32 %80, i32* %11
  br label %61
81:
  %82 = load i32, i32* %7
  %83 = load i32*, i32** %3
  %84 = load i32, i32* %8
  %85 = sext i32 %84 to i64
  %86 = getelementptr inbounds i32, i32* %83, i64 %85
  store i32 %82, i32* %86
  br label %90
90:
  %91 = load i32, i32* %5
  %92 = add nsw i32 %91, 1
  store i32 %92, i32* %5
  br label %13
93:
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
  br label %77
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
  call void @NnYy6(i32* %46, i32 %47)
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
  %66 = select i1 %64, i8* getelementptr inbounds ([1 x i8], [1 x i8]* @.str.1, i64 0, i64 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.2, i64 0, i64 0)
  %67 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %60, i8* %66)
  br label %68
68:
  %69 = load i32, i32* %9
  %70 = add nsw i32 %69, 1
  store i32 %70, i32* %9
  br label %49
71:
  %72 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.3, i64 0, i64 0))
  %73 = load i32*, i32** %7
  call void @free(i8* %74)
  store i32 0, i32* %3
  br label %77
77:
  %78 = load i32, i32* %3
  ret i32 %78
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
