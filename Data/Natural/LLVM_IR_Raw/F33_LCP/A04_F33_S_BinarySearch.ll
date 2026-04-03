@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @LCP(i8** %0, i32 %1, i8* %2) {
  %4 = alloca i8**
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca i32
  %14 = alloca i32
  %15 = alloca i32
  %16 = alloca i32
  store i8** %0, i8*** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  %17 = load i32, i32* %5
  %18 = icmp sle i32 %17, 0
  br i1 %18, label %19, label %20
19:
  br label %119
20:
  store i32 128, i32* %7
  store i32 0, i32* %8
  br label %23
23:
  %24 = load i32, i32* %8
  %25 = load i32, i32* %5
  %26 = icmp slt i32 %24, %25
  br i1 %26, label %29, label %27
27:
  br label %48
29:
  %31 = load i8**, i8*** %4
  %32 = load i32, i32* %8
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8*, i8** %31, i64 %33
  %35 = load i8*, i8** %34
  %36 = call i64 @strlen(i8* %35)
  %37 = trunc i64 %36 to i32
  store i32 %37, i32* %9
  %38 = load i32, i32* %9
  %39 = load i32, i32* %7
  %40 = icmp slt i32 %38, %39
  br i1 %40, label %41, label %43
41:
  %42 = load i32, i32* %9
  store i32 %42, i32* %7
  br label %43
43:
  br label %45
45:
  %46 = load i32, i32* %8
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %8
  br label %23
48:
  store i32 1, i32* %10
  %51 = load i32, i32* %7
  store i32 %51, i32* %11
  store i32 0, i32* %12
  br label %53
53:
  %54 = load i32, i32* %10
  %55 = load i32, i32* %11
  %56 = icmp sle i32 %54, %55
  br i1 %56, label %57, label %103
57:
  %59 = load i32, i32* %10
  %60 = load i32, i32* %11
  %61 = add nsw i32 %59, %60
  %62 = sdiv i32 %61, 2
  store i32 %62, i32* %13
  store i32 1, i32* %14
  store i32 1, i32* %15
  br label %65
65:
  %66 = load i32, i32* %15
  %67 = load i32, i32* %5
  %68 = icmp slt i32 %66, %67
  br i1 %68, label %70, label %69
69:
  store i32 7, i32* %16
  br label %88
70:
  %71 = load i8**, i8*** %4
  %72 = getelementptr inbounds i8*, i8** %71, i64 0
  %73 = load i8*, i8** %72
  %74 = load i8**, i8*** %4
  %75 = load i32, i32* %15
  %76 = sext i32 %75 to i64
  %77 = getelementptr inbounds i8*, i8** %74, i64 %76
  %78 = load i8*, i8** %77
  %79 = load i32, i32* %13
  %80 = sext i32 %79 to i64
  %81 = call i32 @strncmp(i8* %73, i8* %78, i64 %80)
  %82 = icmp ne i32 %81, 0
  br i1 %82, label %83, label %84
83:
  store i32 0, i32* %14
  store i32 7, i32* %16
  br label %88
84:
  br label %85
85:
  %86 = load i32, i32* %15
  %87 = add nsw i32 %86, 1
  store i32 %87, i32* %15
  br label %65
88:
  br label %90
90:
  %91 = load i32, i32* %14
  %92 = icmp ne i32 %91, 0
  br i1 %92, label %93, label %97
93:
  %94 = load i32, i32* %13
  store i32 %94, i32* %12
  %95 = load i32, i32* %13
  %96 = add nsw i32 %95, 1
  store i32 %96, i32* %10
  br label %100
97:
  %98 = load i32, i32* %13
  %99 = sub nsw i32 %98, 1
  store i32 %99, i32* %11
  br label %100
100:
  br label %53
103:
  %104 = load i8*, i8** %6
  %105 = load i8**, i8*** %4
  %106 = getelementptr inbounds i8*, i8** %105, i64 0
  %107 = load i8*, i8** %106
  %108 = load i32, i32* %12
  %109 = sext i32 %108 to i64
  %110 = call i8* @strncpy(i8* %104, i8* %107, i64 %109)
  %111 = load i8*, i8** %6
  %112 = load i32, i32* %12
  %113 = sext i32 %112 to i64
  %114 = getelementptr inbounds i8, i8* %111, i64 %113
  store i8 0, i8* %114
  br label %119
119:
  ret void
}
declare i64 @strlen(i8*)
declare i32 @strncmp(i8*, i8*, i64)
declare i8* @strncpy(i8*, i8*, i64)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i8**
  %8 = alloca [128 x i8]
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %9 = load i32, i32* %4
  %10 = icmp slt i32 %9, 2
  br i1 %10, label %11, label %12
11:
  store i32 0, i32* %3
  br label %29
12:
  %14 = load i32, i32* %4
  %15 = sub nsw i32 %14, 1
  store i32 %15, i32* %6
  %17 = load i8**, i8*** %5
  %18 = getelementptr inbounds i8*, i8** %17, i64 1
  store i8** %18, i8*** %7
  call void @llvm.memset.p0i8.i64(i8* align 16 %20, i8 0, i64 128, i1 false)
  %21 = load i8**, i8*** %7
  %22 = load i32, i32* %6
  %23 = getelementptr inbounds [128 x i8], [128 x i8]* %8, i64 0, i64 0
  call void @LCP(i8** %21, i32 %22, i8* %23)
  %24 = getelementptr inbounds [128 x i8], [128 x i8]* %8, i64 0, i64 0
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i8* %24)
  store i32 0, i32* %3
  br label %29
29:
  %30 = load i32, i32* %3
  ret i32 %30
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare i32 @printf(i8*, ...)
