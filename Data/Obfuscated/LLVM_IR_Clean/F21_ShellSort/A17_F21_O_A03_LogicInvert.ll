define dso_local void @a(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %11 = load i32, i32* %4
  %12 = add nsw i32 %11, 1
  %13 = sitofp i32 %12 to double
  %14 = call double @log10(double %13)
  %15 = call double @log10(double 2.000000e+00)
  %16 = fdiv double %14, %15
  %17 = fptosi double %16 to i32
  store i32 %17, i32* %5
  br label %18
18:
  %19 = load i32, i32* %5
  %20 = icmp sgt i32 %19, 0
  br i1 %20, label %21, label %90
21:
  %23 = load i32, i32* %5
  %24 = shl i32 1, %23
  %25 = sub nsw i32 %24, 1
  store i32 %25, i32* %6
  %27 = load i32, i32* %6
  store i32 %27, i32* %7
  br label %28
28:
  %29 = load i32, i32* %7
  %30 = load i32, i32* %4
  %31 = icmp slt i32 %29, %30
  br i1 %31, label %34, label %32
32:
  br label %86
34:
  %36 = load i32*, i32** %3
  %37 = load i32, i32* %7
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i32, i32* %36, i64 %38
  %40 = load i32, i32* %39
  store i32 %40, i32* %8
  %42 = load i32, i32* %7
  store i32 %42, i32* %9
  br label %43
43:
  %44 = load i32, i32* %9
  %45 = load i32, i32* %6
  %46 = icmp slt i32 %44, %45
  br i1 %46, label %57, label %47
47:
  %48 = load i32*, i32** %3
  %49 = load i32, i32* %9
  %50 = load i32, i32* %6
  %51 = sub nsw i32 %49, %50
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i32, i32* %48, i64 %52
  %54 = load i32, i32* %53
  %55 = load i32, i32* %8
  %56 = icmp sle i32 %54, %55
  br label %57
57:
  %58 = phi i1 [ true, %43 ], [ %56, %47 ]
  %59 = xor i1 %58, true
  br i1 %59, label %60, label %75
60:
  %61 = load i32*, i32** %3
  %62 = load i32, i32* %9
  %63 = load i32, i32* %6
  %64 = sub nsw i32 %62, %63
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i32, i32* %61, i64 %65
  %67 = load i32, i32* %66
  %68 = load i32*, i32** %3
  %69 = load i32, i32* %9
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds i32, i32* %68, i64 %70
  store i32 %67, i32* %71
  %72 = load i32, i32* %6
  %73 = load i32, i32* %9
  %74 = sub nsw i32 %73, %72
  store i32 %74, i32* %9
  br label %43
75:
  %76 = load i32, i32* %8
  %77 = load i32*, i32** %3
  %78 = load i32, i32* %9
  %79 = sext i32 %78 to i64
  %80 = getelementptr inbounds i32, i32* %77, i64 %79
  store i32 %76, i32* %80
  br label %83
83:
  %84 = load i32, i32* %7
  %85 = add nsw i32 %84, 1
  store i32 %85, i32* %7
  br label %28
86:
  %87 = load i32, i32* %5
  %88 = add nsw i32 %87, -1
  store i32 %88, i32* %5
  br label %18
90:
  ret void
}
declare double @log10(double)
