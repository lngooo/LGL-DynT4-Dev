define dso_local i32 @ic(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca float
  %5 = alloca i32
  %6 = alloca i64
  store i32 %0, i32* %3
  %7 = load i32, i32* %3
  %8 = icmp slt i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store i32 -1, i32* %2
  br label %77
10:
  %11 = load i32, i32* %3
  %12 = icmp slt i32 %11, 2
  br i1 %12, label %13, label %15
13:
  %14 = load i32, i32* %3
  store i32 %14, i32* %2
  br label %77
15:
  %17 = load i32, i32* %3
  %18 = sitofp i32 %17 to float
  store float %18, float* %4
  %21 = load i32, i32* %20
  store i32 %21, i32* %5
  %22 = load i32, i32* %5
  %23 = lshr i32 %22, 1
  %24 = add i32 532487669, %23
  store i32 %24, i32* %5
  %26 = load float, float* %25
  store float %26, float* %4
  %28 = load float, float* %4
  %29 = fptosi float %28 to i64
  store i64 %29, i64* %6
  %30 = load i64, i64* %6
  %31 = icmp sle i64 %30, 0
  br i1 %31, label %32, label %33
32:
  store i64 1, i64* %6
  br label %33
33:
  %34 = load i64, i64* %6
  %35 = load i32, i32* %3
  %36 = sext i32 %35 to i64
  %37 = load i64, i64* %6
  %38 = sdiv i64 %36, %37
  %39 = add nsw i64 %34, %38
  %40 = sdiv i64 %39, 2
  store i64 %40, i64* %6
  %41 = load i64, i64* %6
  %42 = load i32, i32* %3
  %43 = sext i32 %42 to i64
  %44 = load i64, i64* %6
  %45 = sdiv i64 %43, %44
  %46 = add nsw i64 %41, %45
  %47 = sdiv i64 %46, 2
  store i64 %47, i64* %6
  br label %48
48:
  %49 = load i64, i64* %6
  %50 = load i64, i64* %6
  %51 = mul nsw i64 %49, %50
  %52 = load i32, i32* %3
  %53 = sext i32 %52 to i64
  %54 = icmp sgt i64 %51, %53
  br i1 %54, label %55, label %58
55:
  %56 = load i64, i64* %6
  %57 = add nsw i64 %56, -1
  store i64 %57, i64* %6
  br label %48
58:
  br label %59
59:
  %60 = load i64, i64* %6
  %61 = add nsw i64 %60, 1
  %62 = load i64, i64* %6
  %63 = add nsw i64 %62, 1
  %64 = mul nsw i64 %61, %63
  %65 = load i32, i32* %3
  %66 = sext i32 %65 to i64
  %67 = icmp sle i64 %64, %66
  br i1 %67, label %68, label %71
68:
  %69 = load i64, i64* %6
  %70 = add nsw i64 %69, 1
  store i64 %70, i64* %6
  br label %59
71:
  %72 = load i64, i64* %6
  %73 = trunc i64 %72 to i32
  store i32 %73, i32* %2
  br label %77
77:
  %78 = load i32, i32* %2
  ret i32 %78
}
