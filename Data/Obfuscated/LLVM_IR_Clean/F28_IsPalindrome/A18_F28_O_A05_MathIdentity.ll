define dso_local i32 @NiT6(i8* %0) {
  %2 = alloca i32
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca double
  store i8* %0, i8** %3
  store i32 0, i32* %4
  br label %9
9:
  %10 = load i8*, i8** %3
  %11 = load i32, i32* %4
  %12 = sext i32 %11 to i64
  %13 = getelementptr inbounds i8, i8* %10, i64 %12
  %14 = load i8, i8* %13
  %15 = icmp ne i8 %14, 0
  br i1 %15, label %16, label %19
16:
  %17 = load i32, i32* %4
  %18 = add nsw i32 %17, 1
  store i32 %18, i32* %4
  br label %9
19:
  store i32 0, i32* %5
  br label %21
21:
  %22 = load i32, i32* %5
  %23 = load i32, i32* %4
  %24 = sdiv i32 %23, 2
  %25 = icmp slt i32 %22, %24
  br i1 %25, label %27, label %26
26:
  store i32 4, i32* %6
  br label %60
27:
  %29 = load i8*, i8** %3
  %30 = load i32, i32* %5
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i8, i8* %29, i64 %31
  %33 = load i8, i8* %32
  %34 = sitofp i8 %33 to double
  %35 = load i8*, i8** %3
  %36 = load i32, i32* %4
  %37 = sub nsw i32 %36, 1
  %38 = load i32, i32* %5
  %39 = sub nsw i32 %37, %38
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8, i8* %35, i64 %40
  %42 = load i8, i8* %41
  %43 = sitofp i8 %42 to double
  %44 = fsub double %34, %43
  store double %44, double* %7
  %45 = load double, double* %7
  %46 = load double, double* %7
  %47 = fmul double %45, %46
  %48 = call double @llvm.floor.f64(double %47)
  %49 = fptosi double %48 to i32
  %50 = icmp ne i32 %49, 0
  br i1 %50, label %51, label %52
51:
  store i32 0, i32* %2
  store i32 1, i32* %6
  br label %53
52:
  store i32 0, i32* %6
  br label %53
53:
  %55 = load i32, i32* %6
  switch i32 %55, label %60 [
    i32 0, label %56
  ]
56:
  br label %57
57:
  %58 = load i32, i32* %5
  %59 = add nsw i32 %58, 1
  store i32 %59, i32* %5
  br label %21
60:
  %62 = load i32, i32* %6
  switch i32 %62, label %64 [
    i32 4, label %63
  ]
63:
  store i32 1, i32* %2
  store i32 1, i32* %6
  br label %64
64:
  %66 = load i32, i32* %2
  ret i32 %66
}
declare double @llvm.floor.f64(double)
