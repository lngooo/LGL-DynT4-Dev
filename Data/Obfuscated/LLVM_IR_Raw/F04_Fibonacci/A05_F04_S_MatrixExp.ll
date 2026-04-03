@__const.YDON.Jl = constant [2 x [2 x i64]] [[2 x i64] [i64 1, i64 1], [2 x i64] [i64 1, i64 0]]
@__const.YDON.AaR1 = constant [2 x [2 x i64]] [[2 x i64] [i64 1, i64 1], [2 x i64] [i64 1, i64 0]]
@.str = constant [3 x i8] c"0\0A\00"
@.str.1 = constant [5 x i8] c"%ld\0A\00"
define dso_local i64 @YDON(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca [2 x [2 x i64]]
  %5 = alloca [2 x [2 x i64]]
  %6 = alloca i32
  %7 = alloca i64
  %8 = alloca i64
  %9 = alloca i64
  %10 = alloca i64
  store i32 %0, i32* %3
  %11 = load i32, i32* %3
  %12 = icmp eq i32 %11, 0
  br i1 %12, label %13, label %14
13:
  store i64 0, i64* %2
  br label %121
14:
  %15 = load i32, i32* %3
  %16 = icmp eq i32 %15, 1
  br i1 %16, label %17, label %18
17:
  store i64 1, i64* %2
  br label %121
18:
  store i32 1, i32* %6
  br label %24
24:
  %25 = load i32, i32* %6
  %26 = load i32, i32* %3
  %27 = sub nsw i32 %26, 1
  %28 = icmp slt i32 %25, %27
  br i1 %28, label %31, label %29
29:
  br label %115
31:
  %33 = getelementptr inbounds [2 x [2 x i64]], [2 x [2 x i64]]* %5, i64 0, i64 0
  %34 = getelementptr inbounds [2 x i64], [2 x i64]* %33, i64 0, i64 0
  %35 = load i64, i64* %34
  %36 = getelementptr inbounds [2 x [2 x i64]], [2 x [2 x i64]]* %4, i64 0, i64 0
  %37 = getelementptr inbounds [2 x i64], [2 x i64]* %36, i64 0, i64 0
  %38 = load i64, i64* %37
  %39 = mul nsw i64 %35, %38
  %40 = getelementptr inbounds [2 x [2 x i64]], [2 x [2 x i64]]* %5, i64 0, i64 0
  %41 = getelementptr inbounds [2 x i64], [2 x i64]* %40, i64 0, i64 1
  %42 = load i64, i64* %41
  %43 = getelementptr inbounds [2 x [2 x i64]], [2 x [2 x i64]]* %4, i64 0, i64 1
  %44 = getelementptr inbounds [2 x i64], [2 x i64]* %43, i64 0, i64 0
  %45 = load i64, i64* %44
  %46 = mul nsw i64 %42, %45
  %47 = add nsw i64 %39, %46
  store i64 %47, i64* %7
  %49 = getelementptr inbounds [2 x [2 x i64]], [2 x [2 x i64]]* %5, i64 0, i64 0
  %50 = getelementptr inbounds [2 x i64], [2 x i64]* %49, i64 0, i64 0
  %51 = load i64, i64* %50
  %52 = getelementptr inbounds [2 x [2 x i64]], [2 x [2 x i64]]* %4, i64 0, i64 0
  %53 = getelementptr inbounds [2 x i64], [2 x i64]* %52, i64 0, i64 1
  %54 = load i64, i64* %53
  %55 = mul nsw i64 %51, %54
  %56 = getelementptr inbounds [2 x [2 x i64]], [2 x [2 x i64]]* %5, i64 0, i64 0
  %57 = getelementptr inbounds [2 x i64], [2 x i64]* %56, i64 0, i64 1
  %58 = load i64, i64* %57
  %59 = getelementptr inbounds [2 x [2 x i64]], [2 x [2 x i64]]* %4, i64 0, i64 1
  %60 = getelementptr inbounds [2 x i64], [2 x i64]* %59, i64 0, i64 1
  %61 = load i64, i64* %60
  %62 = mul nsw i64 %58, %61
  %63 = add nsw i64 %55, %62
  store i64 %63, i64* %8
  %65 = getelementptr inbounds [2 x [2 x i64]], [2 x [2 x i64]]* %5, i64 0, i64 1
  %66 = getelementptr inbounds [2 x i64], [2 x i64]* %65, i64 0, i64 0
  %67 = load i64, i64* %66
  %68 = getelementptr inbounds [2 x [2 x i64]], [2 x [2 x i64]]* %4, i64 0, i64 0
  %69 = getelementptr inbounds [2 x i64], [2 x i64]* %68, i64 0, i64 0
  %70 = load i64, i64* %69
  %71 = mul nsw i64 %67, %70
  %72 = getelementptr inbounds [2 x [2 x i64]], [2 x [2 x i64]]* %5, i64 0, i64 1
  %73 = getelementptr inbounds [2 x i64], [2 x i64]* %72, i64 0, i64 1
  %74 = load i64, i64* %73
  %75 = getelementptr inbounds [2 x [2 x i64]], [2 x [2 x i64]]* %4, i64 0, i64 1
  %76 = getelementptr inbounds [2 x i64], [2 x i64]* %75, i64 0, i64 0
  %77 = load i64, i64* %76
  %78 = mul nsw i64 %74, %77
  %79 = add nsw i64 %71, %78
  store i64 %79, i64* %9
  %81 = getelementptr inbounds [2 x [2 x i64]], [2 x [2 x i64]]* %5, i64 0, i64 1
  %82 = getelementptr inbounds [2 x i64], [2 x i64]* %81, i64 0, i64 0
  %83 = load i64, i64* %82
  %84 = getelementptr inbounds [2 x [2 x i64]], [2 x [2 x i64]]* %4, i64 0, i64 0
  %85 = getelementptr inbounds [2 x i64], [2 x i64]* %84, i64 0, i64 1
  %86 = load i64, i64* %85
  %87 = mul nsw i64 %83, %86
  %88 = getelementptr inbounds [2 x [2 x i64]], [2 x [2 x i64]]* %5, i64 0, i64 1
  %89 = getelementptr inbounds [2 x i64], [2 x i64]* %88, i64 0, i64 1
  %90 = load i64, i64* %89
  %91 = getelementptr inbounds [2 x [2 x i64]], [2 x [2 x i64]]* %4, i64 0, i64 1
  %92 = getelementptr inbounds [2 x i64], [2 x i64]* %91, i64 0, i64 1
  %93 = load i64, i64* %92
  %94 = mul nsw i64 %90, %93
  %95 = add nsw i64 %87, %94
  store i64 %95, i64* %10
  %96 = load i64, i64* %7
  %97 = getelementptr inbounds [2 x [2 x i64]], [2 x [2 x i64]]* %5, i64 0, i64 0
  %98 = getelementptr inbounds [2 x i64], [2 x i64]* %97, i64 0, i64 0
  store i64 %96, i64* %98
  %99 = load i64, i64* %8
  %100 = getelementptr inbounds [2 x [2 x i64]], [2 x [2 x i64]]* %5, i64 0, i64 0
  %101 = getelementptr inbounds [2 x i64], [2 x i64]* %100, i64 0, i64 1
  store i64 %99, i64* %101
  %102 = load i64, i64* %9
  %103 = getelementptr inbounds [2 x [2 x i64]], [2 x [2 x i64]]* %5, i64 0, i64 1
  %104 = getelementptr inbounds [2 x i64], [2 x i64]* %103, i64 0, i64 0
  store i64 %102, i64* %104
  %105 = load i64, i64* %10
  %106 = getelementptr inbounds [2 x [2 x i64]], [2 x [2 x i64]]* %5, i64 0, i64 1
  %107 = getelementptr inbounds [2 x i64], [2 x i64]* %106, i64 0, i64 1
  store i64 %105, i64* %107
  br label %112
112:
  %113 = load i32, i32* %6
  %114 = add nsw i32 %113, 1
  store i32 %114, i32* %6
  br label %24
115:
  %116 = getelementptr inbounds [2 x [2 x i64]], [2 x [2 x i64]]* %5, i64 0, i64 0
  %117 = getelementptr inbounds [2 x i64], [2 x i64]* %116, i64 0, i64 0
  %118 = load i64, i64* %117
  store i64 %118, i64* %2
  br label %121
121:
  %122 = load i64, i64* %2
  ret i64 %122
}
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i64
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %9 = load i32, i32* %4
  %10 = icmp slt i32 %9, 2
  br i1 %10, label %11, label %12
11:
  store i32 1, i32* %3
  br label %31
12:
  %14 = load i8**, i8*** %5
  %15 = getelementptr inbounds i8*, i8** %14, i64 1
  %16 = load i8*, i8** %15
  %17 = call i32 @atoi(i8* %16)
  store i32 %17, i32* %6
  %18 = load i32, i32* %6
  %19 = icmp slt i32 %18, 0
  br i1 %19, label %20, label %22
20:
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0))
  store i32 0, i32* %3
  store i32 1, i32* %7
  br label %29
22:
  %24 = load i32, i32* %6
  %25 = call i64 @YDON(i32 %24)
  store i64 %25, i64* %8
  %26 = load i64, i64* %8
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.1, i64 0, i64 0), i64 %26)
  store i32 0, i32* %3
  store i32 1, i32* %7
  br label %29
29:
  br label %31
31:
  %32 = load i32, i32* %3
  ret i32 %32
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
