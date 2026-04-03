define dso_local i32 @NewtonRoot(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca double (double)*
  %5 = alloca double
  %6 = alloca double
  store i32 %0, i32* %3
  %7 = load i32, i32* %3
  %8 = icmp slt i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store i32 -1, i32* %2
  br label %46
10:
  store double (double)* @fabs, double (double)** %4
  %13 = load i32, i32* %3
  %14 = sitofp i32 %13 to double
  store double %14, double* %5
  %16 = load double, double* %5
  %17 = load i32, i32* %3
  %18 = sitofp i32 %17 to double
  %19 = load double, double* %5
  %20 = fdiv double %18, %19
  %21 = fadd double %16, %20
  %22 = fdiv double %21, 2.000000e+00
  store double %22, double* %6
  br label %23
23:
  %24 = load double (double)*, double (double)** %4
  %25 = load double, double* %5
  %26 = load double, double* %6
  %27 = fsub double %25, %26
  %28 = call double %24(double %27)
  %29 = fcmp oge double %28, 0x3FEFF7CED916872B
  br i1 %29, label %30, label %39
30:
  %31 = load double, double* %6
  store double %31, double* %5
  %32 = load double, double* %5
  %33 = load i32, i32* %3
  %34 = sitofp i32 %33 to double
  %35 = load double, double* %5
  %36 = fdiv double %34, %35
  %37 = fadd double %32, %36
  %38 = fdiv double %37, 2.000000e+00
  store double %38, double* %6
  br label %23
39:
  %40 = load double, double* %6
  %41 = fadd double %40, 0x3EB0C6F7A0B5ED8D
  %42 = fptosi double %41 to i32
  store i32 %42, i32* %2
  br label %46
46:
  %47 = load i32, i32* %2
  ret i32 %47
}
declare double @fabs(double)
