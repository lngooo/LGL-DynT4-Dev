@.str = constant [3 x i8] c"%d\00"
define dso_local i32 @IsPowerOfTwo(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca double
  store i32 %0, i32* %3
  %5 = load i32, i32* %3
  %6 = icmp eq i32 %5, 0
  br i1 %6, label %7, label %8
7:
  store i32 0, i32* %2
  br label %23
8:
  %10 = load i32, i32* %3
  %11 = uitofp i32 %10 to double
  %12 = call double @log(double %11)
  %13 = call double @log(double 2.000000e+00)
  %14 = fdiv double %12, %13
  store double %14, double* %4
  %15 = load double, double* %4
  %16 = load double, double* %4
  %17 = call double @llvm.round.f64(double %16)
  %18 = fsub double %15, %17
  %19 = call double @llvm.fabs.f64(double %18)
  %20 = fcmp olt double %19, 1.000000e-09
  %21 = zext i1 %20 to i32
  store i32 %21, i32* %2
  br label %23
23:
  %24 = load i32, i32* %2
  ret i32 %24
}
declare double @log(double)
declare double @llvm.round.f64(double)
declare double @llvm.fabs.f64(double)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %7 = load i32, i32* %4
  %8 = icmp slt i32 %7, 2
  br i1 %8, label %9, label %10
9:
  store i32 0, i32* %3
  br label %21
10:
  %12 = load i8**, i8*** %5
  %13 = getelementptr inbounds i8*, i8** %12, i64 1
  %14 = load i8*, i8** %13
  %15 = call i64 @strtoul(i8* %14, i8** null, i32 10)
  %16 = trunc i64 %15 to i32
  store i32 %16, i32* %6
  %17 = load i32, i32* %6
  %18 = call i32 @IsPowerOfTwo(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
