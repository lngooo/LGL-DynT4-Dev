define dso_local i32 @BinarySearch(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i64
  %9 = alloca i64
  %10 = alloca i64
  %11 = alloca i64
  %12 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  %14 = load i32, i32* %6
  %15 = sext i32 %14 to i64
  store i64 %15, i64* %8
  %17 = load i32, i32* %7
  %18 = sext i32 %17 to i64
  store i64 %18, i64* %9
  %20 = load i64, i64* %8
  %21 = sitofp i64 %20 to double
  %22 = call double @sqrt(double %21)
  %23 = fptosi double %22 to i64
  store i64 %23, i64* %10
  store i64 0, i64* %11
  br label %25
25:
  %26 = load i32*, i32** %5
  %27 = load i64, i64* %10
  %28 = load i64, i64* %8
  %29 = icmp slt i64 %27, %28
  br i1 %29, label %30, label %32
30:
  %31 = load i64, i64* %10
  br label %34
32:
  %33 = load i64, i64* %8
  br label %34
34:
  %35 = phi i64 [ %31, %30 ], [ %33, %32 ]
  %36 = sub nsw i64 %35, 1
  %37 = getelementptr inbounds i32, i32* %26, i64 %36
  %38 = load i32, i32* %37
  %39 = sext i32 %38 to i64
  %40 = load i64, i64* %9
  %41 = icmp slt i64 %39, %40
  br i1 %41, label %42, label %56
42:
  %43 = load i64, i64* %10
  store i64 %43, i64* %11
  %44 = load i64, i64* %8
  %45 = sitofp i64 %44 to double
  %46 = call double @sqrt(double %45)
  %47 = load i64, i64* %10
  %48 = sitofp i64 %47 to double
  %49 = fadd double %48, %46
  %50 = fptosi double %49 to i64
  store i64 %50, i64* %10
  %51 = load i64, i64* %11
  %52 = load i64, i64* %8
  %53 = icmp sge i64 %51, %52
  br i1 %53, label %54, label %55
54:
  store i32 -1, i32* %4
  store i32 1, i32* %12
  br label %95
55:
  br label %25
56:
  br label %57
57:
  %58 = load i32*, i32** %5
  %59 = load i64, i64* %11
  %60 = getelementptr inbounds i32, i32* %58, i64 %59
  %61 = load i32, i32* %60
  %62 = sext i32 %61 to i64
  %63 = load i64, i64* %9
  %64 = icmp slt i64 %62, %63
  br i1 %64, label %65, label %81
65:
  %66 = load i64, i64* %11
  %67 = add nsw i64 %66, 1
  store i64 %67, i64* %11
  %68 = load i64, i64* %11
  %69 = load i64, i64* %10
  %70 = load i64, i64* %8
  %71 = icmp slt i64 %69, %70
  br i1 %71, label %72, label %74
72:
  %73 = load i64, i64* %10
  br label %76
74:
  %75 = load i64, i64* %8
  br label %76
76:
  %77 = phi i64 [ %73, %72 ], [ %75, %74 ]
  %78 = icmp eq i64 %68, %77
  br i1 %78, label %79, label %80
79:
  store i32 -1, i32* %4
  store i32 1, i32* %12
  br label %95
80:
  br label %57
81:
  %82 = load i32*, i32** %5
  %83 = load i64, i64* %11
  %84 = getelementptr inbounds i32, i32* %82, i64 %83
  %85 = load i32, i32* %84
  %86 = sext i32 %85 to i64
  %87 = load i64, i64* %9
  %88 = icmp eq i64 %86, %87
  br i1 %88, label %89, label %92
89:
  %90 = load i64, i64* %11
  %91 = trunc i64 %90 to i32
  br label %93
92:
  br label %93
93:
  %94 = phi i32 [ %91, %89 ], [ -1, %92 ]
  store i32 %94, i32* %4
  store i32 1, i32* %12
  br label %95
95:
  %100 = load i32, i32* %4
  ret i32 %100
}
declare double @sqrt(double)
