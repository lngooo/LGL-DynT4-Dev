@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @KthSmallest(i32* %0, i32 %1, i32 %2, i32 %3) {
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca i32
  %14 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  store i32 %3, i32* %8
  %16 = load i32, i32* %7
  %17 = load i32, i32* %6
  %18 = sub nsw i32 %16, %17
  %19 = add nsw i32 %18, 1
  store i32 %19, i32* %9
  store i32 0, i32* %10
  br label %21
21:
  %22 = load i32, i32* %10
  %23 = load i32, i32* %9
  %24 = icmp slt i32 %22, %23
  br i1 %24, label %27, label %25
25:
  store i32 2, i32* %11
  br label %74
27:
  %29 = load i32, i32* %10
  %30 = add nsw i32 %29, 1
  store i32 %30, i32* %12
  br label %31
31:
  %32 = load i32, i32* %12
  %33 = load i32, i32* %9
  %34 = icmp slt i32 %32, %33
  br i1 %34, label %37, label %35
35:
  store i32 5, i32* %11
  br label %70
37:
  %39 = load i32*, i32** %5
  %40 = load i32, i32* %10
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i32, i32* %39, i64 %41
  %43 = load i32, i32* %42
  store i32 %43, i32* %13
  %45 = load i32*, i32** %5
  %46 = load i32, i32* %12
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i32, i32* %45, i64 %47
  %49 = load i32, i32* %48
  store i32 %49, i32* %14
  %50 = load i32, i32* %13
  %51 = load i32, i32* %14
  %52 = icmp sgt i32 %50, %51
  br i1 %52, label %53, label %64
53:
  %54 = load i32, i32* %14
  %55 = load i32*, i32** %5
  %56 = load i32, i32* %10
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i32, i32* %55, i64 %57
  store i32 %54, i32* %58
  %59 = load i32, i32* %13
  %60 = load i32*, i32** %5
  %61 = load i32, i32* %12
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i32, i32* %60, i64 %62
  store i32 %59, i32* %63
  br label %64
64:
  br label %67
67:
  %68 = load i32, i32* %12
  %69 = add nsw i32 %68, 1
  store i32 %69, i32* %12
  br label %31
70:
  br label %71
71:
  %72 = load i32, i32* %10
  %73 = add nsw i32 %72, 1
  store i32 %73, i32* %10
  br label %21
74:
  %75 = load i32*, i32** %5
  %76 = load i32, i32* %8
  %77 = sub nsw i32 %76, 1
  %78 = sext i32 %77 to i64
  %79 = getelementptr inbounds i32, i32* %75, i64 %78
  %80 = load i32, i32* %79
  store i32 1, i32* %11
  ret i32 %80
}
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
  br label %66
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
  %53 = load i32*, i32** %8
  %54 = load i32, i32* %7
  %55 = sub nsw i32 %54, 1
  %56 = load i32, i32* %6
  %57 = call i32 @KthSmallest(i32* %53, i32 0, i32 %55, i32 %56)
  store i32 %57, i32* %10
  %58 = load i32, i32* %10
  %59 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %58)
  %60 = load i32*, i32** %8
  call void @free(i8* %61)
  store i32 0, i32* %3
  br label %66
66:
  %67 = load i32, i32* %3
  ret i32 %67
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
