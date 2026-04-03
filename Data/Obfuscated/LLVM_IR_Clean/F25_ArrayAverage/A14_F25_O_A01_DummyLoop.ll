define dso_local double @vsKV(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca double
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store double 0.000000e+00, double* %5
  store i32 0, i32* %6
  br label %11
11:
  %12 = load i32, i32* %6
  %13 = load i32, i32* %4
  %14 = icmp slt i32 %12, %13
  br i1 %14, label %17, label %15
15:
  store i32 2, i32* %7
  br label %40
17:
  store i32 0, i32* %8
  br label %19
19:
  %20 = load i32, i32* %8
  %21 = icmp slt i32 %20, 1
  br i1 %21, label %24, label %22
22:
  store i32 5, i32* %7
  br label %36
24:
  %25 = load i32*, i32** %3
  %26 = load i32, i32* %6
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i32, i32* %25, i64 %27
  %29 = load i32, i32* %28
  %30 = sitofp i32 %29 to double
  %31 = load double, double* %5
  %32 = fadd double %31, %30
  store double %32, double* %5
  br label %33
33:
  %34 = load i32, i32* %8
  %35 = add nsw i32 %34, 1
  store i32 %35, i32* %8
  br label %19
36:
  br label %37
37:
  %38 = load i32, i32* %6
  %39 = add nsw i32 %38, 1
  store i32 %39, i32* %6
  br label %11
40:
  %41 = load i32, i32* %4
  %42 = icmp sgt i32 %41, 0
  br i1 %42, label %43, label %48
43:
  %44 = load double, double* %5
  %45 = load i32, i32* %4
  %46 = sitofp i32 %45 to double
  %47 = fdiv double %44, %46
  br label %49
48:
  br label %49
49:
  %50 = phi double [ %47, %43 ], [ 0.000000e+00, %48 ]
  store i32 1, i32* %7
  ret double %50
}
