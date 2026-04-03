define dso_local i64 @Fibonacci(i32 %0) {
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
