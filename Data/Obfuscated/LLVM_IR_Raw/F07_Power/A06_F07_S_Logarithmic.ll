@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @h1(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca double
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  %7 = load i32, i32* %5
  %8 = icmp eq i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store i32 1, i32* %3
  br label %29
10:
  %11 = load i32, i32* %4
  %12 = icmp eq i32 %11, 0
  br i1 %12, label %13, label %14
13:
  store i32 0, i32* %3
  br label %29
14:
  %16 = load i32, i32* %5
  %17 = sitofp i32 %16 to double
  %18 = load i32, i32* %4
  %19 = sitofp i32 %18 to double
  %20 = call double @log(double %19)
  %21 = fmul double %17, %20
  store double %21, double* %6
  %22 = load double, double* %6
  %23 = fptrunc double %22 to float
  %24 = call float @expf(float %23)
  %25 = fpext float %24 to double
  %26 = fadd double %25, 5.000000e-01
  %27 = fptosi double %26 to i32
  store i32 %27, i32* %3
  br label %29
29:
  %30 = load i32, i32* %3
  ret i32 %30
}
declare double @log(double)
declare float @expf(float)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 3
  br i1 %7, label %8, label %9
8:
  store i32 1, i32* %3
  br label %20
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @atoi(i8* %12)
  %14 = load i8**, i8*** %5
  %15 = getelementptr inbounds i8*, i8** %14, i64 2
  %16 = load i8*, i8** %15
  %17 = call i32 @atoi(i8* %16)
  %18 = call i32 @h1(i32 %13, i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %20
20:
  %21 = load i32, i32* %3
  ret i32 %21
}
declare i32 @printf(i8*, ...)
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i64 @strtol(i8*, i8**, i32)
