define dso_local void @Nfm(i32* %0, i32 %1) {
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
  br i1 %20, label %21, label %89
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
  br label %85
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
  %46 = icmp sge i32 %44, %45
  br i1 %46, label %47, label %57
47:
  %48 = load i32*, i32** %3
  %49 = load i32, i32* %9
  %50 = load i32, i32* %6
  %51 = sub nsw i32 %49, %50
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i32, i32* %48, i64 %52
  %54 = load i32, i32* %53
  %55 = load i32, i32* %8
  %56 = icmp sgt i32 %54, %55
  br label %57
57:
  %58 = phi i1 [ false, %43 ], [ %56, %47 ]
  br i1 %58, label %59, label %74
59:
  %60 = load i32*, i32** %3
  %61 = load i32, i32* %9
  %62 = load i32, i32* %6
  %63 = sub nsw i32 %61, %62
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i32, i32* %60, i64 %64
  %66 = load i32, i32* %65
  %67 = load i32*, i32** %3
  %68 = load i32, i32* %9
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i32, i32* %67, i64 %69
  store i32 %66, i32* %70
  %71 = load i32, i32* %6
  %72 = load i32, i32* %9
  %73 = sub nsw i32 %72, %71
  store i32 %73, i32* %9
  br label %43
74:
  %75 = load i32, i32* %8
  %76 = load i32*, i32** %3
  %77 = load i32, i32* %9
  %78 = sext i32 %77 to i64
  %79 = getelementptr inbounds i32, i32* %76, i64 %78
  store i32 %75, i32* %79
  br label %82
82:
  %83 = load i32, i32* %7
  %84 = add nsw i32 %83, 1
  store i32 %84, i32* %7
  br label %28
85:
  %86 = load i32, i32* %5
  %87 = add nsw i32 %86, -1
  store i32 %87, i32* %5
  br label %18
89:
  ret void
}
declare double @log10(double)
