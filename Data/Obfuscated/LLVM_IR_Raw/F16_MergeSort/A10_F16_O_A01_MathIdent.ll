@.str = constant [5 x i8] c"%d%s\00"
@.str.1 = constant [1 x i8] zeroinitializer
@.str.2 = constant [2 x i8] c" \00"
@.str.3 = constant [2 x i8] c"\0A\00"
define dso_local void @v(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32*
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %13 = load i32, i32* %5
  %14 = load i32, i32* %6
  %15 = icmp slt i32 %13, %14
  br i1 %15, label %16, label %131
16:
  %18 = load i32, i32* %5
  %19 = load i32, i32* %6
  %20 = load i32, i32* %5
  %21 = sub nsw i32 %19, %20
  %22 = sitofp i32 %21 to double
  %23 = fdiv double %22, 2.000000e+00
  %24 = call double @llvm.floor.f64(double %23)
  %25 = fptosi double %24 to i32
  %26 = add nsw i32 %18, %25
  store i32 %26, i32* %7
  %27 = load i32*, i32** %4
  %28 = load i32, i32* %5
  %29 = load i32, i32* %7
  call void @v(i32* %27, i32 %28, i32 %29)
  %30 = load i32*, i32** %4
  %31 = load i32, i32* %7
  %32 = add nsw i32 %31, 1
  %33 = load i32, i32* %6
  call void @v(i32* %30, i32 %32, i32 %33)
  %35 = load i32, i32* %5
  store i32 %35, i32* %8
  %37 = load i32, i32* %7
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* %9
  store i32 0, i32* %10
  %41 = load i32, i32* %6
  %42 = load i32, i32* %5
  %43 = sub nsw i32 %41, %42
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %11
  %46 = load i32, i32* %11
  %47 = sext i32 %46 to i64
  %48 = mul i64 %47, 4
  %49 = call noalias i8* @malloc(i64 %48)
  store i32* %50, i32** %12
  br label %51
51:
  %52 = load i32, i32* %10
  %53 = load i32, i32* %11
  %54 = icmp slt i32 %52, %53
  br i1 %54, label %55, label %102
55:
  %56 = load i32, i32* %8
  %57 = load i32, i32* %7
  %58 = icmp sle i32 %56, %57
  br i1 %58, label %59, label %89
59:
  %60 = load i32, i32* %9
  %61 = load i32, i32* %6
  %62 = icmp sgt i32 %60, %61
  br i1 %62, label %77, label %63
63:
  %64 = load i32*, i32** %4
  %65 = load i32, i32* %8
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds i32, i32* %64, i64 %66
  %68 = load i32, i32* %67
  %69 = sitofp i32 %68 to double
  %70 = load i32*, i32** %4
  %71 = load i32, i32* %9
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds i32, i32* %70, i64 %72
  %74 = load i32, i32* %73
  %75 = sitofp i32 %74 to double
  %76 = fcmp ole double %69, %75
  br i1 %76, label %77, label %89
77:
  %78 = load i32*, i32** %4
  %79 = load i32, i32* %8
  %80 = add nsw i32 %79, 1
  store i32 %80, i32* %8
  %81 = sext i32 %79 to i64
  %82 = getelementptr inbounds i32, i32* %78, i64 %81
  %83 = load i32, i32* %82
  %84 = load i32*, i32** %12
  %85 = load i32, i32* %10
  %86 = add nsw i32 %85, 1
  store i32 %86, i32* %10
  %87 = sext i32 %85 to i64
  %88 = getelementptr inbounds i32, i32* %84, i64 %87
  store i32 %83, i32* %88
  br label %101
89:
  %90 = load i32*, i32** %4
  %91 = load i32, i32* %9
  %92 = add nsw i32 %91, 1
  store i32 %92, i32* %9
  %93 = sext i32 %91 to i64
  %94 = getelementptr inbounds i32, i32* %90, i64 %93
  %95 = load i32, i32* %94
  %96 = load i32*, i32** %12
  %97 = load i32, i32* %10
  %98 = add nsw i32 %97, 1
  store i32 %98, i32* %10
  %99 = sext i32 %97 to i64
  %100 = getelementptr inbounds i32, i32* %96, i64 %99
  store i32 %95, i32* %100
  br label %101
101:
  br label %51
102:
  store i32 0, i32* %8
  br label %103
103:
  %104 = load i32, i32* %8
  %105 = load i32, i32* %11
  %106 = icmp slt i32 %104, %105
  br i1 %106, label %107, label %122
107:
  %108 = load i32*, i32** %12
  %109 = load i32, i32* %8
  %110 = sext i32 %109 to i64
  %111 = getelementptr inbounds i32, i32* %108, i64 %110
  %112 = load i32, i32* %111
  %113 = load i32*, i32** %4
  %114 = load i32, i32* %5
  %115 = load i32, i32* %8
  %116 = add nsw i32 %114, %115
  %117 = sext i32 %116 to i64
  %118 = getelementptr inbounds i32, i32* %113, i64 %117
  store i32 %112, i32* %118
  br label %119
119:
  %120 = load i32, i32* %8
  %121 = add nsw i32 %120, 1
  store i32 %121, i32* %8
  br label %103
122:
  %123 = load i32*, i32** %12
  call void @free(i8* %124)
  br label %131
131:
  ret void
}
declare double @llvm.floor.f64(double)
declare noalias i8* @malloc(i64)
declare void @free(i8*)
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
  call void @v(i32* %46, i32 0, i32 %48)
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
