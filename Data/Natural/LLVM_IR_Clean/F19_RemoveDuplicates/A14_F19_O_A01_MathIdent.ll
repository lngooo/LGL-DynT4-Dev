define dso_local i32 @RemoveDuplicates(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca double
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  br label %13
13:
  %14 = load i32, i32* %6
  %15 = load i32, i32* %4
  %16 = icmp slt i32 %14, %15
  br i1 %16, label %19, label %17
17:
  store i32 2, i32* %7
  br label %74
19:
  store i32 0, i32* %8
  store i32 0, i32* %9
  br label %22
22:
  %23 = load i32, i32* %9
  %24 = load i32, i32* %5
  %25 = icmp slt i32 %23, %24
  br i1 %25, label %28, label %26
26:
  store i32 5, i32* %7
  br label %55
28:
  %30 = load i32*, i32** %3
  %31 = load i32, i32* %6
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i32, i32* %30, i64 %32
  %34 = load i32, i32* %33
  %35 = sitofp i32 %34 to double
  %36 = load i32*, i32** %3
  %37 = load i32, i32* %9
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i32, i32* %36, i64 %38
  %40 = load i32, i32* %39
  %41 = sitofp i32 %40 to double
  %42 = fsub double %35, %41
  store double %42, double* %10
  %43 = load double, double* %10
  %44 = load double, double* %10
  %45 = fmul double %43, %44
  %46 = call double @llvm.floor.f64(double %45)
  %47 = fptosi double %46 to i32
  %48 = icmp eq i32 %47, 0
  br i1 %48, label %49, label %50
49:
  store i32 1, i32* %8
  br label %50
50:
  br label %52
52:
  %53 = load i32, i32* %9
  %54 = add nsw i32 %53, 1
  store i32 %54, i32* %9
  br label %22
55:
  %56 = load i32, i32* %8
  %57 = icmp ne i32 %56, 0
  br i1 %57, label %69, label %58
58:
  %59 = load i32*, i32** %3
  %60 = load i32, i32* %6
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i32, i32* %59, i64 %61
  %63 = load i32, i32* %62
  %64 = load i32*, i32** %3
  %65 = load i32, i32* %5
  %66 = add nsw i32 %65, 1
  store i32 %66, i32* %5
  %67 = sext i32 %65 to i64
  %68 = getelementptr inbounds i32, i32* %64, i64 %67
  store i32 %63, i32* %68
  br label %69
69:
  br label %71
71:
  %72 = load i32, i32* %6
  %73 = add nsw i32 %72, 1
  store i32 %73, i32* %6
  br label %13
74:
  %75 = load i32, i32* %5
  store i32 1, i32* %7
  ret i32 %75
}
declare double @llvm.floor.f64(double)
