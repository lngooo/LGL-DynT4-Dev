define dso_local i64 @py(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca double
  %5 = alloca i32
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp slt i32 %6, 0
  br i1 %7, label %8, label %9
8:
  store i64 0, i64* %2
  br label %38
9:
  %10 = load i32, i32* %3
  %11 = icmp eq i32 %10, 0
  br i1 %11, label %12, label %13
12:
  store i64 1, i64* %2
  br label %38
13:
  store double 0.000000e+00, double* %4
  store i32 1, i32* %5
  br label %16
16:
  %17 = load i32, i32* %5
  %18 = load i32, i32* %3
  %19 = icmp sle i32 %17, %18
  br i1 %19, label %22, label %20
20:
  br label %31
22:
  %23 = load i32, i32* %5
  %24 = sitofp i32 %23 to double
  %25 = call double @log(double %24)
  %26 = load double, double* %4
  %27 = fadd double %26, %25
  store double %27, double* %4
  br label %28
28:
  %29 = load i32, i32* %5
  %30 = add nsw i32 %29, 1
  store i32 %30, i32* %5
  br label %16
31:
  %32 = load double, double* %4
  %33 = call double @exp(double %32)
  %34 = fadd double %33, 5.000000e-01
  %35 = call double @llvm.floor.f64(double %34)
  %36 = fptosi double %35 to i64
  store i64 %36, i64* %2
  br label %38
38:
  %39 = load i64, i64* %2
  ret i64 %39
}
declare double @log(double)
declare double @exp(double)
declare double @llvm.floor.f64(double)
