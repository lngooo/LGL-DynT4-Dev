@.str = constant [3 x i8] c"0\0A\00"
@.str.1 = constant [5 x i8] c"%ld\0A\00"
define dso_local i64 @t(i32 %0) {
  %2 = alloca i32
  %3 = alloca double
  %4 = alloca double
  store i32 %0, i32* %2
  %6 = call double @sqrt(double 5.000000e+00)
  store double %6, double* %3
  %8 = load double, double* %3
  %9 = fadd double 1.000000e+00, %8
  %10 = fdiv double %9, 2.000000e+00
  store double %10, double* %4
  %11 = load i32, i32* %2
  %12 = sitofp i32 %11 to double
  %13 = load double, double* %4
  %14 = call double @log(double %13)
  %15 = fmul double %12, %14
  %16 = call double @exp(double %15)
  %17 = load double, double* %3
  %18 = fdiv double %16, %17
  %19 = fadd double %18, 5.000000e-01
  %20 = call double @llvm.floor.f64(double %19)
  %21 = fptosi double %20 to i64
  ret i64 %21
}
declare double @sqrt(double)
declare double @exp(double)
declare double @log(double)
declare double @llvm.floor.f64(double)
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
  %25 = call i64 @t(i32 %24)
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
