define dso_local void @m(i32* %0, i32 %1) {
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
  br i1 %14, label %15, label %19
15:
  %16 = load i32, i32* %5
  %17 = mul nsw i32 3, %16
  %18 = add nsw i32 %17, 1
  store i32 %18, i32* %5
  br label %10
19:
  br label %20
20:
  %21 = load i32, i32* %5
  %22 = icmp sge i32 %21, 1
  br i1 %22, label %23, label %91
23:
  %24 = call double @exp(double 0.000000e+00)
  %25 = fptosi double %24 to i32
  %26 = icmp eq i32 %25, 1
  br i1 %26, label %27, label %88
27:
  %29 = load i32, i32* %5
  store i32 %29, i32* %6
  br label %30
30:
  %31 = load i32, i32* %6
  %32 = load i32, i32* %4
  %33 = icmp slt i32 %31, %32
  br i1 %33, label %36, label %34
34:
  br label %87
36:
  %38 = load i32*, i32** %3
  %39 = load i32, i32* %6
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i32, i32* %38, i64 %40
  %42 = load i32, i32* %41
  store i32 %42, i32* %7
  %44 = load i32, i32* %6
  store i32 %44, i32* %8
  br label %45
45:
  %46 = load i32, i32* %8
  %47 = load i32, i32* %5
  %48 = icmp sge i32 %46, %47
  br i1 %48, label %49, label %59
49:
  %50 = load i32*, i32** %3
  %51 = load i32, i32* %8
  %52 = load i32, i32* %5
  %53 = sub nsw i32 %51, %52
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i32, i32* %50, i64 %54
  %56 = load i32, i32* %55
  %57 = load i32, i32* %7
  %58 = icmp sgt i32 %56, %57
  br label %59
59:
  %60 = phi i1 [ false, %45 ], [ %58, %49 ]
  br i1 %60, label %61, label %76
61:
  %62 = load i32*, i32** %3
  %63 = load i32, i32* %8
  %64 = load i32, i32* %5
  %65 = sub nsw i32 %63, %64
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds i32, i32* %62, i64 %66
  %68 = load i32, i32* %67
  %69 = load i32*, i32** %3
  %70 = load i32, i32* %8
  %71 = sext i32 %70 to i64
  %72 = getelementptr inbounds i32, i32* %69, i64 %71
  store i32 %68, i32* %72
  %73 = load i32, i32* %5
  %74 = load i32, i32* %8
  %75 = sub nsw i32 %74, %73
  store i32 %75, i32* %8
  br label %45
76:
  %77 = load i32, i32* %7
  %78 = load i32*, i32** %3
  %79 = load i32, i32* %8
  %80 = sext i32 %79 to i64
  %81 = getelementptr inbounds i32, i32* %78, i64 %80
  store i32 %77, i32* %81
  br label %84
84:
  %85 = load i32, i32* %6
  %86 = add nsw i32 %85, 1
  store i32 %86, i32* %6
  br label %30
87:
  br label %88
88:
  %89 = load i32, i32* %5
  %90 = sdiv i32 %89, 3
  store i32 %90, i32* %5
  br label %20
91:
  ret void
}
declare double @exp(double)
