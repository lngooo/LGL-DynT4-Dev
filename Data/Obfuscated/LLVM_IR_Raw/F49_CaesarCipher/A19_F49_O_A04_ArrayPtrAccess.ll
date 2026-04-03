@__const.DK5.wr = constant [27 x i8] c"abcdefghijklmnopqrstuvwxyz\00"
@__const.DK5.tw9 = constant [27 x i8] c"ABCDEFGHIJKLMNOPQRSTUVWXYZ\00"
@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @DK5(i8* %0, i32 %1) {
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca [27 x i8]
  %7 = alloca [27 x i8]
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i8* %0, i8** %3
  store i32 %1, i32* %4
  %12 = load i32, i32* %4
  %13 = srem i32 %12, 26
  %14 = add nsw i32 %13, 26
  %15 = srem i32 %14, 26
  store i32 %15, i32* %5
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 16 %17, i8* align 16 getelementptr inbounds ([27 x i8], [27 x i8]* @__const.DK5.wr, i32 0, i32 0), i64 27, i1 false)
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 16 %19, i8* align 16 getelementptr inbounds ([27 x i8], [27 x i8]* @__const.DK5.tw9, i32 0, i32 0), i64 27, i1 false)
  store i32 0, i32* %8
  br label %21
21:
  %22 = load i8*, i8** %3
  %23 = load i32, i32* %8
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i8, i8* %22, i64 %24
  %26 = load i8, i8* %25
  %27 = icmp ne i8 %26, 0
  br i1 %27, label %30, label %28
28:
  store i32 2, i32* %9
  br label %96
30:
  store i32 0, i32* %10
  br label %32
32:
  %33 = load i32, i32* %10
  %34 = icmp slt i32 %33, 26
  br i1 %34, label %36, label %35
35:
  store i32 5, i32* %9
  br label %90
36:
  %37 = load i8*, i8** %3
  %38 = load i32, i32* %8
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8, i8* %37, i64 %39
  %41 = load i8, i8* %40
  %42 = sext i8 %41 to i32
  %43 = load i32, i32* %10
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds [27 x i8], [27 x i8]* %6, i64 0, i64 %44
  %46 = load i8, i8* %45
  %47 = sext i8 %46 to i32
  %48 = icmp eq i32 %42, %47
  br i1 %48, label %49, label %61
49:
  %50 = load i32, i32* %10
  %51 = load i32, i32* %5
  %52 = add nsw i32 %50, %51
  %53 = srem i32 %52, 26
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds [27 x i8], [27 x i8]* %6, i64 0, i64 %54
  %56 = load i8, i8* %55
  %57 = load i8*, i8** %3
  %58 = load i32, i32* %8
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i8, i8* %57, i64 %59
  store i8 %56, i8* %60
  store i32 5, i32* %9
  br label %90
61:
  %62 = load i8*, i8** %3
  %63 = load i32, i32* %8
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i8, i8* %62, i64 %64
  %66 = load i8, i8* %65
  %67 = sext i8 %66 to i32
  %68 = load i32, i32* %10
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds [27 x i8], [27 x i8]* %7, i64 0, i64 %69
  %71 = load i8, i8* %70
  %72 = sext i8 %71 to i32
  %73 = icmp eq i32 %67, %72
  br i1 %73, label %74, label %86
74:
  %75 = load i32, i32* %10
  %76 = load i32, i32* %5
  %77 = add nsw i32 %75, %76
  %78 = srem i32 %77, 26
  %79 = sext i32 %78 to i64
  %80 = getelementptr inbounds [27 x i8], [27 x i8]* %7, i64 0, i64 %79
  %81 = load i8, i8* %80
  %82 = load i8*, i8** %3
  %83 = load i32, i32* %8
  %84 = sext i32 %83 to i64
  %85 = getelementptr inbounds i8, i8* %82, i64 %84
  store i8 %81, i8* %85
  store i32 5, i32* %9
  br label %90
86:
  br label %87
87:
  %88 = load i32, i32* %10
  %89 = add nsw i32 %88, 1
  store i32 %89, i32* %10
  br label %32
90:
  br label %92
92:
  br label %93
93:
  %94 = load i32, i32* %8
  %95 = add nsw i32 %94, 1
  store i32 %95, i32* %8
  br label %21
96:
  ret void
}
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %7 = load i32, i32* %4
  %8 = icmp slt i32 %7, 3
  br i1 %8, label %9, label %10
9:
  store i32 1, i32* %3
  br label %25
10:
  %12 = load i8**, i8*** %5
  %13 = getelementptr inbounds i8*, i8** %12, i64 2
  %14 = load i8*, i8** %13
  %15 = call i32 @atoi(i8* %14)
  store i32 %15, i32* %6
  %16 = load i8**, i8*** %5
  %17 = getelementptr inbounds i8*, i8** %16, i64 1
  %18 = load i8*, i8** %17
  %19 = load i32, i32* %6
  call void @DK5(i8* %18, i32 %19)
  %20 = load i8**, i8*** %5
  %21 = getelementptr inbounds i8*, i8** %20, i64 1
  %22 = load i8*, i8** %21
  %23 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i8* %22)
  store i32 0, i32* %3
  br label %25
25:
  %26 = load i32, i32* %3
  ret i32 %26
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
