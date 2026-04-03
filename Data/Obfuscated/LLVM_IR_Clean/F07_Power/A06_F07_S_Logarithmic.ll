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
