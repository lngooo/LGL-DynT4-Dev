define dso_local void @QuickSort(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca double
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %14 = load i32, i32* %5
  %15 = load i32, i32* %6
  %16 = icmp slt i32 %14, %15
  br i1 %16, label %17, label %113
17:
  %19 = load i32*, i32** %4
  %20 = load i32, i32* %6
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i32, i32* %19, i64 %21
  %23 = load i32, i32* %22
  store i32 %23, i32* %7
  %25 = load i32, i32* %5
  %26 = sub nsw i32 %25, 1
  store i32 %26, i32* %8
  %28 = load i32, i32* %5
  store i32 %28, i32* %9
  br label %29
29:
  %30 = load i32, i32* %9
  %31 = load i32, i32* %6
  %32 = icmp slt i32 %30, %31
  br i1 %32, label %35, label %33
33:
  br label %77
35:
  %37 = load i32*, i32** %4
  %38 = load i32, i32* %9
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i32, i32* %37, i64 %39
  %41 = load i32, i32* %40
  %42 = sitofp i32 %41 to double
  %43 = load i32, i32* %7
  %44 = sitofp i32 %43 to double
  %45 = fsub double %42, %44
  store double %45, double* %10
  %46 = load double, double* %10
  %47 = fcmp olt double %46, 0.000000e+00
  br i1 %47, label %48, label %72
48:
  %49 = load i32, i32* %8
  %50 = add nsw i32 %49, 1
  store i32 %50, i32* %8
  %52 = load i32*, i32** %4
  %53 = load i32, i32* %8
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i32, i32* %52, i64 %54
  %56 = load i32, i32* %55
  store i32 %56, i32* %11
  %57 = load i32*, i32** %4
  %58 = load i32, i32* %9
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i32, i32* %57, i64 %59
  %61 = load i32, i32* %60
  %62 = load i32*, i32** %4
  %63 = load i32, i32* %8
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i32, i32* %62, i64 %64
  store i32 %61, i32* %65
  %66 = load i32, i32* %11
  %67 = load i32*, i32** %4
  %68 = load i32, i32* %9
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i32, i32* %67, i64 %69
  store i32 %66, i32* %70
  br label %72
72:
  br label %74
74:
  %75 = load i32, i32* %9
  %76 = add nsw i32 %75, 1
  store i32 %76, i32* %9
  br label %29
77:
  %79 = load i32, i32* %8
  %80 = add nsw i32 %79, 1
  store i32 %80, i32* %12
  %82 = load i32*, i32** %4
  %83 = load i32, i32* %12
  %84 = sext i32 %83 to i64
  %85 = getelementptr inbounds i32, i32* %82, i64 %84
  %86 = load i32, i32* %85
  store i32 %86, i32* %13
  %87 = load i32*, i32** %4
  %88 = load i32, i32* %6
  %89 = sext i32 %88 to i64
  %90 = getelementptr inbounds i32, i32* %87, i64 %89
  %91 = load i32, i32* %90
  %92 = load i32*, i32** %4
  %93 = load i32, i32* %12
  %94 = sext i32 %93 to i64
  %95 = getelementptr inbounds i32, i32* %92, i64 %94
  store i32 %91, i32* %95
  %96 = load i32, i32* %13
  %97 = load i32*, i32** %4
  %98 = load i32, i32* %6
  %99 = sext i32 %98 to i64
  %100 = getelementptr inbounds i32, i32* %97, i64 %99
  store i32 %96, i32* %100
  %101 = load i32*, i32** %4
  %102 = load i32, i32* %5
  %103 = load i32, i32* %12
  %104 = sub nsw i32 %103, 1
  call void @QuickSort(i32* %101, i32 %102, i32 %104)
  %105 = load i32*, i32** %4
  %106 = load i32, i32* %12
  %107 = add nsw i32 %106, 1
  %108 = load i32, i32* %6
  call void @QuickSort(i32* %105, i32 %107, i32 %108)
  br label %113
113:
  ret void
}
