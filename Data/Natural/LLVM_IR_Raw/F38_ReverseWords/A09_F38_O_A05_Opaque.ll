@.str = constant [2 x i8] c" \00"
@.str.1 = constant [4 x i8] c"%s\0A\00"
define dso_local void @ReverseWords(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i8
  %7 = alloca i8*
  %8 = alloca i8*
  %9 = alloca i8*
  %10 = alloca i8*
  %11 = alloca i8
  store i8* %0, i8** %2
  %13 = load i8*, i8** %2
  store i8* %13, i8** %3
  br label %14
14:
  %15 = load i8*, i8** %3
  %16 = load i8, i8* %15
  %17 = icmp ne i8 %16, 0
  br i1 %17, label %18, label %21
18:
  %19 = load i8*, i8** %3
  %20 = getelementptr inbounds i8, i8* %19, i32 1
  store i8* %20, i8** %3
  br label %14
21:
  %22 = call double @sqrt(double 1.600000e+01)
  %23 = call double @llvm.floor.f64(double %22)
  %24 = fptosi double %23 to i32
  %25 = icmp eq i32 %24, 4
  br i1 %25, label %26, label %49
26:
  %28 = load i8*, i8** %2
  store i8* %28, i8** %4
  %30 = load i8*, i8** %3
  %31 = getelementptr inbounds i8, i8* %30, i64 -1
  store i8* %31, i8** %5
  br label %32
32:
  %33 = load i8*, i8** %4
  %34 = load i8*, i8** %5
  %35 = icmp ult i8* %33, %34
  br i1 %35, label %36, label %46
36:
  %37 = load i8*, i8** %4
  %38 = load i8, i8* %37
  store i8 %38, i8* %6
  %39 = load i8*, i8** %5
  %40 = load i8, i8* %39
  %41 = load i8*, i8** %4
  %42 = getelementptr inbounds i8, i8* %41, i32 1
  store i8* %42, i8** %4
  store i8 %40, i8* %41
  %43 = load i8, i8* %6
  %44 = load i8*, i8** %5
  %45 = getelementptr inbounds i8, i8* %44, i32 -1
  store i8* %45, i8** %5
  store i8 %43, i8* %44
  br label %32
46:
  br label %49
49:
  %51 = load i8*, i8** %2
  store i8* %51, i8** %7
  %53 = load i8*, i8** %2
  store i8* %53, i8** %8
  br label %54
54:
  %55 = load i8*, i8** %8
  %56 = load i8*, i8** %3
  %57 = icmp ule i8* %55, %56
  br i1 %57, label %60, label %58
58:
  br label %103
60:
  %61 = load i8*, i8** %8
  %62 = icmp ne i8* %61, null
  br i1 %62, label %63, label %99
63:
  %64 = load i8*, i8** %8
  %65 = load i8, i8* %64
  %66 = sext i8 %65 to i32
  %67 = icmp eq i32 %66, 32
  br i1 %67, label %73, label %68
68:
  %69 = load i8*, i8** %8
  %70 = load i8, i8* %69
  %71 = sext i8 %70 to i32
  %72 = icmp eq i32 %71, 0
  br i1 %72, label %73, label %98
73:
  %75 = load i8*, i8** %7
  store i8* %75, i8** %9
  %77 = load i8*, i8** %8
  %78 = getelementptr inbounds i8, i8* %77, i64 -1
  store i8* %78, i8** %10
  br label %79
79:
  %80 = load i8*, i8** %9
  %81 = load i8*, i8** %10
  %82 = icmp ult i8* %80, %81
  br i1 %82, label %83, label %93
83:
  %84 = load i8*, i8** %9
  %85 = load i8, i8* %84
  store i8 %85, i8* %11
  %86 = load i8*, i8** %10
  %87 = load i8, i8* %86
  %88 = load i8*, i8** %9
  %89 = getelementptr inbounds i8, i8* %88, i32 1
  store i8* %89, i8** %9
  store i8 %87, i8* %88
  %90 = load i8, i8* %11
  %91 = load i8*, i8** %10
  %92 = getelementptr inbounds i8, i8* %91, i32 -1
  store i8* %92, i8** %10
  store i8 %90, i8* %91
  br label %79
93:
  %94 = load i8*, i8** %8
  %95 = getelementptr inbounds i8, i8* %94, i64 1
  store i8* %95, i8** %7
  br label %98
98:
  br label %99
99:
  br label %100
100:
  %101 = load i8*, i8** %8
  %102 = getelementptr inbounds i8, i8* %101, i32 1
  store i8* %102, i8** %8
  br label %54
103:
  ret void
}
declare double @sqrt(double)
declare double @llvm.floor.f64(double)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca [512 x i8]
  %7 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %8 = load i32, i32* %4
  %9 = icmp slt i32 %8, 2
  br i1 %9, label %10, label %11
10:
  store i32 0, i32* %3
  br label %45
11:
  call void @llvm.memset.p0i8.i64(i8* align 16 %13, i8 0, i64 512, i1 false)
  store i32 1, i32* %7
  br label %15
15:
  %16 = load i32, i32* %7
  %17 = load i32, i32* %4
  %18 = icmp slt i32 %16, %17
  br i1 %18, label %21, label %19
19:
  br label %40
21:
  %22 = getelementptr inbounds [512 x i8], [512 x i8]* %6, i64 0, i64 0
  %23 = load i8**, i8*** %5
  %24 = load i32, i32* %7
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i8*, i8** %23, i64 %25
  %27 = load i8*, i8** %26
  %28 = call i8* @strcat(i8* %22, i8* %27)
  %29 = load i32, i32* %7
  %30 = load i32, i32* %4
  %31 = sub nsw i32 %30, 1
  %32 = icmp slt i32 %29, %31
  br i1 %32, label %33, label %36
33:
  %34 = getelementptr inbounds [512 x i8], [512 x i8]* %6, i64 0, i64 0
  %35 = call i8* @strcat(i8* %34, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  br label %36
36:
  br label %37
37:
  %38 = load i32, i32* %7
  %39 = add nsw i32 %38, 1
  store i32 %39, i32* %7
  br label %15
40:
  %41 = getelementptr inbounds [512 x i8], [512 x i8]* %6, i64 0, i64 0
  call void @ReverseWords(i8* %41)
  %42 = getelementptr inbounds [512 x i8], [512 x i8]* %6, i64 0, i64 0
  %43 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i8* %42)
  store i32 0, i32* %3
  br label %45
45:
  %46 = load i32, i32* %3
  ret i32 %46
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare i8* @strcat(i8*, i8*)
declare i32 @printf(i8*, ...)
