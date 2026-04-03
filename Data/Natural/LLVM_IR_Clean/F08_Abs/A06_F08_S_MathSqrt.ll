define dso_local i32 @Abs(i32 %0) {
  %2 = alloca i32
  %3 = alloca double
  store i32 %0, i32* %2
  %5 = load i32, i32* %2
  %6 = sitofp i32 %5 to double
  store double %6, double* %3
  %7 = load double, double* %3
  %8 = load double, double* %3
  %9 = fmul double %7, %8
  %10 = call double @sqrt(double %9)
  %11 = fptosi double %10 to i32
  ret i32 %11
}
declare double @sqrt(double)
