define dso_local void @Dcjm(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca double
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 1, i32* %5
  br label %10
10:
  %11 = load i32, i32* %5
  %12 = load i32, i32* %4
  %13 = icmp slt i32 %11, %12
  br i1 %13, label %16, label %14
14:
  store i32 2, i32* %6
  br label %93
16:
  %18 = load i32, i32* %5
  store i32 %18, i32* %7
  br label %19
19:
  %20 = load i32, i32* %7
  %21 = icmp sgt i32 %20, 0
  br i1 %21, label %23, label %22
22:
  store i32 5, i32* %6
  br label %87
23:
  %25 = load i32*, i32** %3
  %26 = load i32, i32* %7
  %27 = sub nsw i32 %26, 1
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i32, i32* %25, i64 %28
  %30 = load i32, i32* %29
  %31 = sitofp i32 %30 to double
  %32 = load i32*, i32** %3
  %33 = load i32, i32* %7
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i32, i32* %32, i64 %34
  %36 = load i32, i32* %35
  %37 = sitofp i32 %36 to double
  %38 = fsub double %31, %37
  store double %38, double* %8
  %39 = load double, double* %8
  %40 = fcmp ogt double %39, 0.000000e+00
  br i1 %40, label %41, label %78
41:
  %42 = load i32*, i32** %3
  %43 = load i32, i32* %7
  %44 = sub nsw i32 %43, 1
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i32, i32* %42, i64 %45
  %47 = load i32, i32* %46
  %48 = load i32*, i32** %3
  %49 = load i32, i32* %7
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i32, i32* %48, i64 %50
  %52 = load i32, i32* %51
  %53 = xor i32 %52, %47
  store i32 %53, i32* %51
  %54 = load i32*, i32** %3
  %55 = load i32, i32* %7
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i32, i32* %54, i64 %56
  %58 = load i32, i32* %57
  %59 = load i32*, i32** %3
  %60 = load i32, i32* %7
  %61 = sub nsw i32 %60, 1
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i32, i32* %59, i64 %62
  %64 = load i32, i32* %63
  %65 = xor i32 %64, %58
  store i32 %65, i32* %63
  %66 = load i32*, i32** %3
  %67 = load i32, i32* %7
  %68 = sub nsw i32 %67, 1
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i32, i32* %66, i64 %69
  %71 = load i32, i32* %70
  %72 = load i32*, i32** %3
  %73 = load i32, i32* %7
  %74 = sext i32 %73 to i64
  %75 = getelementptr inbounds i32, i32* %72, i64 %74
  %76 = load i32, i32* %75
  %77 = xor i32 %76, %71
  store i32 %77, i32* %75
  br label %79
78:
  store i32 5, i32* %6
  br label %80
79:
  store i32 0, i32* %6
  br label %80
80:
  %82 = load i32, i32* %6
  switch i32 %82, label %87 [
    i32 0, label %83
  ]
83:
  br label %84
84:
  %85 = load i32, i32* %7
  %86 = add nsw i32 %85, -1
  store i32 %86, i32* %7
  br label %19
87:
  br label %89
89:
  br label %90
90:
  %91 = load i32, i32* %5
  %92 = add nsw i32 %91, 1
  store i32 %92, i32* %5
  br label %10
93:
  ret void
}
