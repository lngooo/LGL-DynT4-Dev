@.str = constant [5 x i8] c"%c%d\00"
@.str.1 = constant [4 x i8] c"%s\0A\00"
define dso_local void @RLEEncode(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca double
  %8 = alloca i32
  %9 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  br label %12
12:
  %13 = load i8*, i8** %3
  %14 = load i32, i32* %5
  %15 = sext i32 %14 to i64
  %16 = getelementptr inbounds i8, i8* %13, i64 %15
  %17 = load i8, i8* %16
  %18 = icmp ne i8 %17, 0
  br i1 %18, label %19, label %100
19:
  br label %20
20:
  %21 = load i8*, i8** %3
  %22 = load i32, i32* %5
  %23 = load i32, i32* %6
  %24 = add nsw i32 %22, %23
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i8, i8* %21, i64 %25
  %27 = load i8, i8* %26
  %28 = sext i8 %27 to i32
  %29 = icmp ne i32 %28, 0
  br i1 %29, label %30, label %46
30:
  %31 = load i8*, i8** %3
  %32 = load i32, i32* %5
  %33 = load i32, i32* %6
  %34 = add nsw i32 %32, %33
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i8, i8* %31, i64 %35
  %37 = load i8, i8* %36
  %38 = sext i8 %37 to i32
  %39 = load i8*, i8** %3
  %40 = load i32, i32* %5
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i8, i8* %39, i64 %41
  %43 = load i8, i8* %42
  %44 = sext i8 %43 to i32
  %45 = icmp eq i32 %38, %44
  br label %46
46:
  %47 = phi i1 [ false, %20 ], [ %45, %30 ]
  br i1 %47, label %48, label %79
48:
  %50 = load i8*, i8** %3
  %51 = load i32, i32* %5
  %52 = load i32, i32* %6
  %53 = add nsw i32 %51, %52
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i8, i8* %50, i64 %54
  %56 = load i8, i8* %55
  %57 = sitofp i8 %56 to double
  %58 = load i8*, i8** %3
  %59 = load i32, i32* %5
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i8, i8* %58, i64 %60
  %62 = load i8, i8* %61
  %63 = sitofp i8 %62 to double
  %64 = fsub double %57, %63
  store double %64, double* %7
  %65 = load double, double* %7
  %66 = load double, double* %7
  %67 = fmul double %65, %66
  %68 = call double @llvm.floor.f64(double %67)
  %69 = fptosi double %68 to i32
  %70 = icmp ne i32 %69, 0
  br i1 %70, label %71, label %72
71:
  store i32 5, i32* %8
  br label %75
72:
  %73 = load i32, i32* %6
  %74 = add nsw i32 %73, 1
  store i32 %74, i32* %6
  store i32 0, i32* %8
  br label %75
75:
  %77 = load i32, i32* %8
  switch i32 %77, label %103 [
    i32 0, label %78
    i32 5, label %79
  ]
78:
  br label %20
79:
  %81 = load i8*, i8** %4
  %82 = call i64 @strlen(i8* %81)
  %83 = trunc i64 %82 to i32
  store i32 %83, i32* %9
  %84 = load i8*, i8** %4
  %85 = load i32, i32* %9
  %86 = sext i32 %85 to i64
  %87 = getelementptr inbounds i8, i8* %84, i64 %86
  %88 = load i8*, i8** %3
  %89 = load i32, i32* %5
  %90 = sext i32 %89 to i64
  %91 = getelementptr inbounds i8, i8* %88, i64 %90
  %92 = load i8, i8* %91
  %93 = sext i8 %92 to i32
  %94 = load i32, i32* %6
  %95 = call i32 (i8*, i8*, ...) @sprintf(i8* %87, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %93, i32 %94)
  %96 = load i32, i32* %6
  %97 = load i32, i32* %5
  %98 = add nsw i32 %97, %96
  store i32 %98, i32* %5
  store i32 0, i32* %6
  br label %12
100:
  ret void
103:
  unreachable
}
declare double @llvm.floor.f64(double)
declare i64 @strlen(i8*)
declare i32 @sprintf(i8*, i8*, ...)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i8*
  %7 = alloca [256 x i8]
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %8 = load i32, i32* %4
  %9 = icmp slt i32 %8, 2
  br i1 %9, label %10, label %11
10:
  store i32 0, i32* %3
  br label %24
11:
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 1
  %15 = load i8*, i8** %14
  store i8* %15, i8** %6
  call void @llvm.memset.p0i8.i64(i8* align 16 %17, i8 0, i64 256, i1 false)
  %18 = load i8*, i8** %6
  %19 = getelementptr inbounds [256 x i8], [256 x i8]* %7, i64 0, i64 0
  call void @RLEEncode(i8* %18, i8* %19)
  %20 = getelementptr inbounds [256 x i8], [256 x i8]* %7, i64 0, i64 0
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i8* %20)
  store i32 0, i32* %3
  br label %24
24:
  %25 = load i32, i32* %3
  ret i32 %25
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare i32 @printf(i8*, ...)
