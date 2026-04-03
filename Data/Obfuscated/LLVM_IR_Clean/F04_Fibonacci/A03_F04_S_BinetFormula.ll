define dso_local i64 @lPPt(i32 %0) {
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
  %11 = load double, double* %4
  %12 = load i32, i32* %2
  %13 = sitofp i32 %12 to double
  %14 = call double @pow(double %11, double %13)
  %15 = load double, double* %3
  %16 = fdiv double %14, %15
  %17 = call double @llvm.round.f64(double %16)
  %18 = fptosi double %17 to i64
  ret i64 %18
}
declare double @sqrt(double)
declare double @pow(double, double)
declare double @llvm.round.f64(double)
