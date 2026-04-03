define dso_local double @ArrayAverage(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca float
  %6 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store float 0.000000e+00, float* %5
  store i32 0, i32* %6
  br label %9
9:
  %10 = load i32, i32* %6
  %11 = load i32, i32* %4
  %12 = icmp slt i32 %10, %11
  br i1 %12, label %15, label %13
13:
  br label %27
15:
  %16 = load i32*, i32** %3
  %17 = load i32, i32* %6
  %18 = sext i32 %17 to i64
  %19 = getelementptr inbounds i32, i32* %16, i64 %18
  %20 = load i32, i32* %19
  %21 = sitofp i32 %20 to float
  %22 = load float, float* %5
  %23 = fadd float %22, %21
  store float %23, float* %5
  br label %24
24:
  %25 = load i32, i32* %6
  %26 = add nsw i32 %25, 1
  store i32 %26, i32* %6
  br label %9
27:
  %28 = load float, float* %5
  %29 = load i32, i32* %4
  %30 = sitofp i32 %29 to float
  %31 = fdiv float %28, %30
  %32 = fpext float %31 to double
  ret double %32
}
