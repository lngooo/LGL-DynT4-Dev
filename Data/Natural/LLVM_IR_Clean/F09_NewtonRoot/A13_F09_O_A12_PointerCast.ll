define dso_local i32 @NewtonRoot(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca float
  %5 = alloca i32*
  %6 = alloca i64
  %7 = alloca i32
  store i32 %0, i32* %3
  %8 = load i32, i32* %3
  %9 = icmp slt i32 %8, 0
  br i1 %9, label %10, label %11
10:
  store i32 -1, i32* %2
  br label %85
11:
  %12 = load i32, i32* %3
  %13 = icmp slt i32 %12, 2
  br i1 %13, label %14, label %16
14:
  %15 = load i32, i32* %3
  store i32 %15, i32* %2
  br label %85
16:
  %18 = load i32, i32* %3
  %19 = sitofp i32 %18 to float
  store float %19, float* %4
  store i32* %21, i32** %5
  %22 = load i32*, i32** %5
  %23 = load i32, i32* %22
  %24 = lshr i32 %23, 1
  %25 = add i32 532487669, %24
  %26 = load i32*, i32** %5
  store i32 %25, i32* %26
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
  store i32 0, i32* %7
  br label %35
35:
  %36 = load i32, i32* %7
  %37 = icmp slt i32 %36, 3
  br i1 %37, label %40, label %38
38:
  br label %55
40:
  %41 = load i64, i64* %6
  %42 = load i32, i32* %3
  %43 = sext i32 %42 to i64
  %44 = load i64, i64* %6
  %45 = sdiv i64 %43, %44
  %46 = add nsw i64 %41, %45
  %47 = ashr i64 %46, 1
  store i64 %47, i64* %6
  %48 = load i64, i64* %6
  %49 = icmp sle i64 %48, 0
  br i1 %49, label %50, label %51
50:
  store i64 1, i64* %6
  br label %51
51:
  br label %52
52:
  %53 = load i32, i32* %7
  %54 = add nsw i32 %53, 1
  store i32 %54, i32* %7
  br label %35
55:
  br label %56
56:
  %57 = load i64, i64* %6
  %58 = load i64, i64* %6
  %59 = mul nsw i64 %57, %58
  %60 = load i32, i32* %3
  %61 = sext i32 %60 to i64
  %62 = icmp sgt i64 %59, %61
  br i1 %62, label %63, label %66
63:
  %64 = load i64, i64* %6
  %65 = add nsw i64 %64, -1
  store i64 %65, i64* %6
  br label %56
66:
  br label %67
67:
  %68 = load i64, i64* %6
  %69 = add nsw i64 %68, 1
  %70 = load i64, i64* %6
  %71 = add nsw i64 %70, 1
  %72 = mul nsw i64 %69, %71
  %73 = load i32, i32* %3
  %74 = sext i32 %73 to i64
  %75 = icmp sle i64 %72, %74
  br i1 %75, label %76, label %79
76:
  %77 = load i64, i64* %6
  %78 = add nsw i64 %77, 1
  store i64 %78, i64* %6
  br label %67
79:
  %80 = load i64, i64* %6
  %81 = trunc i64 %80 to i32
  store i32 %81, i32* %2
  br label %85
85:
  %86 = load i32, i32* %2
  ret i32 %86
}
