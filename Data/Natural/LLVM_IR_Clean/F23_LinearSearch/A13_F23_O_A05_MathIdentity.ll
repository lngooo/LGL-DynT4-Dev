define dso_local i32 @LinearSearch(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32*
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca double
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  %13 = load i32*, i32** %5
  store i32* %13, i32** %8
  store i32 0, i32* %9
  br label %15
15:
  %16 = load i32, i32* %9
  %17 = load i32, i32* %6
  %18 = icmp slt i32 %16, %17
  br i1 %18, label %20, label %19
19:
  store i32 2, i32* %10
  br label %47
20:
  %22 = load i32*, i32** %8
  %23 = load i32, i32* %9
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i32, i32* %22, i64 %24
  %26 = load i32, i32* %25
  %27 = sitofp i32 %26 to double
  %28 = load i32, i32* %7
  %29 = sitofp i32 %28 to double
  %30 = fsub double %27, %29
  store double %30, double* %11
  %31 = load double, double* %11
  %32 = load double, double* %11
  %33 = fmul double %31, %32
  %34 = call double @llvm.floor.f64(double %33)
  %35 = fptosi double %34 to i32
  %36 = icmp eq i32 %35, 0
  br i1 %36, label %37, label %39
37:
  %38 = load i32, i32* %9
  store i32 %38, i32* %4
  store i32 1, i32* %10
  br label %40
39:
  store i32 0, i32* %10
  br label %40
40:
  %42 = load i32, i32* %10
  switch i32 %42, label %47 [
    i32 0, label %43
  ]
43:
  br label %44
44:
  %45 = load i32, i32* %9
  %46 = add nsw i32 %45, 1
  store i32 %46, i32* %9
  br label %15
47:
  %49 = load i32, i32* %10
  switch i32 %49, label %51 [
    i32 2, label %50
  ]
50:
  store i32 -1, i32* %4
  store i32 1, i32* %10
  br label %51
51:
  %53 = load i32, i32* %4
  ret i32 %53
}
declare double @llvm.floor.f64(double)
