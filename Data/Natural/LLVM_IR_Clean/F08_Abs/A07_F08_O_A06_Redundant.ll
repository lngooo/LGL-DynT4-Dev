define dso_local i32 @Abs(i32 %0) {
  %2 = alloca i32
  %3 = alloca float
  %4 = alloca double
  store i32 %0, i32* %2
  %6 = load i32, i32* %2
  %7 = sitofp i32 %6 to float
  store float %7, float* %3
  %9 = load float, float* %3
  %10 = fpext float %9 to double
  %11 = call double @pow(double %10, double 2.000000e+00)
  store double %11, double* %4
  %12 = load double, double* %4
  %13 = call double @pow(double %12, double 5.000000e-01)
  %14 = fptosi double %13 to i32
  ret i32 %14
}
declare double @pow(double, double)
