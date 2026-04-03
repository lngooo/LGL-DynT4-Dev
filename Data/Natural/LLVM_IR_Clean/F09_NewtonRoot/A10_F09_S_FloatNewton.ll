define dso_local i32 @NewtonRoot(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca double
  %5 = alloca double
  %6 = alloca i32
  store i32 %0, i32* %3
  %7 = load i32, i32* %3
  %8 = icmp slt i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store i32 -1, i32* %2
  br label %63
10:
  %11 = load i32, i32* %3
  %12 = icmp eq i32 %11, 0
  br i1 %12, label %13, label %14
13:
  store i32 0, i32* %2
  br label %63
14:
  %16 = load i32, i32* %3
  %17 = sitofp i32 %16 to double
  store double %17, double* %4
  %19 = load double, double* %4
  %20 = load i32, i32* %3
  %21 = sitofp i32 %20 to double
  %22 = load double, double* %4
  %23 = fdiv double %21, %22
  %24 = fadd double %19, %23
  %25 = fmul double 5.000000e-01, %24
  store double %25, double* %5
  br label %26
26:
  %27 = load double, double* %4
  %28 = load double, double* %5
  %29 = fsub double %27, %28
  %30 = call double @llvm.fabs.f64(double %29)
  %31 = fcmp oge double %30, 1.000000e+00
  br i1 %31, label %32, label %41
32:
  %33 = load double, double* %5
  store double %33, double* %4
  %34 = load double, double* %4
  %35 = load i32, i32* %3
  %36 = sitofp i32 %35 to double
  %37 = load double, double* %4
  %38 = fdiv double %36, %37
  %39 = fadd double %34, %38
  %40 = fmul double 5.000000e-01, %39
  store double %40, double* %5
  br label %26
41:
  %43 = load double, double* %5
  %44 = fptosi double %43 to i32
  store i32 %44, i32* %6
  %45 = load i32, i32* %6
  %46 = add nsw i32 %45, 1
  %47 = sext i32 %46 to i64
  %48 = load i32, i32* %6
  %49 = add nsw i32 %48, 1
  %50 = sext i32 %49 to i64
  %51 = mul nsw i64 %47, %50
  %52 = load i32, i32* %3
  %53 = sext i32 %52 to i64
  %54 = icmp sle i64 %51, %53
  br i1 %54, label %55, label %58
55:
  %56 = load i32, i32* %6
  %57 = add nsw i32 %56, 1
  store i32 %57, i32* %6
  br label %58
58:
  %59 = load i32, i32* %6
  store i32 %59, i32* %2
  br label %63
63:
  %64 = load i32, i32* %2
  ret i32 %64
}
declare double @llvm.fabs.f64(double)
