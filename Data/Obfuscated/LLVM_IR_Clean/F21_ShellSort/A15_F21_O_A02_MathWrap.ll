define dso_local void @X(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 1, i32* %5
  br label %10
10:
  %11 = load i32, i32* %5
  %12 = load i32, i32* %4
  %13 = sdiv i32 %12, 3
  %14 = icmp slt i32 %11, %13
  br i1 %14, label %15, label %21
15:
  %16 = call double @pow(double 3.000000e+00, double 1.000000e+00)
  %17 = load i32, i32* %5
  %18 = sitofp i32 %17 to double
  %19 = call double @llvm.fmuladd.f64(double %16, double %18, double 1.000000e+00)
  %20 = fptosi double %19 to i32
  store i32 %20, i32* %5
  br label %10
21:
  br label %22
22:
  %23 = load i32, i32* %5
  %24 = icmp sge i32 %23, 1
  br i1 %24, label %25, label %90
25:
  %27 = load i32, i32* %5
  store i32 %27, i32* %6
  br label %28
28:
  %29 = load i32, i32* %6
  %30 = load i32, i32* %4
  %31 = icmp slt i32 %29, %30
  br i1 %31, label %34, label %32
32:
  br label %85
34:
  %36 = load i32*, i32** %3
  %37 = load i32, i32* %6
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i32, i32* %36, i64 %38
  %40 = load i32, i32* %39
  store i32 %40, i32* %7
  %42 = load i32, i32* %6
  store i32 %42, i32* %8
  br label %43
43:
  %44 = load i32, i32* %8
  %45 = load i32, i32* %5
  %46 = icmp sge i32 %44, %45
  br i1 %46, label %47, label %57
47:
  %48 = load i32*, i32** %3
  %49 = load i32, i32* %8
  %50 = load i32, i32* %5
  %51 = sub nsw i32 %49, %50
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i32, i32* %48, i64 %52
  %54 = load i32, i32* %53
  %55 = load i32, i32* %7
  %56 = icmp sgt i32 %54, %55
  br label %57
57:
  %58 = phi i1 [ false, %43 ], [ %56, %47 ]
  br i1 %58, label %59, label %74
59:
  %60 = load i32*, i32** %3
  %61 = load i32, i32* %8
  %62 = load i32, i32* %5
  %63 = sub nsw i32 %61, %62
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i32, i32* %60, i64 %64
  %66 = load i32, i32* %65
  %67 = load i32*, i32** %3
  %68 = load i32, i32* %8
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i32, i32* %67, i64 %69
  store i32 %66, i32* %70
  %71 = load i32, i32* %5
  %72 = load i32, i32* %8
  %73 = sub nsw i32 %72, %71
  store i32 %73, i32* %8
  br label %43
74:
  %75 = load i32, i32* %7
  %76 = load i32*, i32** %3
  %77 = load i32, i32* %8
  %78 = sext i32 %77 to i64
  %79 = getelementptr inbounds i32, i32* %76, i64 %78
  store i32 %75, i32* %79
  br label %82
82:
  %83 = load i32, i32* %6
  %84 = add nsw i32 %83, 1
  store i32 %84, i32* %6
  br label %28
85:
  %86 = call double @sqrt(double 9.000000e+00)
  %87 = fptosi double %86 to i32
  %88 = load i32, i32* %5
  %89 = sdiv i32 %88, %87
  store i32 %89, i32* %5
  br label %22
90:
  ret void
}
declare double @pow(double, double)
declare double @llvm.fmuladd.f64(double, double, double)
declare double @sqrt(double)
