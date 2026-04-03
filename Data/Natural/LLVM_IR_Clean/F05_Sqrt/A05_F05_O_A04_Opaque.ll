define dso_local i32 @Sqrt(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i64
  %6 = alloca i64
  %7 = alloca i64
  store i32 %0, i32* %3
  %8 = load i32, i32* %3
  %9 = icmp slt i32 %8, 0
  br i1 %9, label %10, label %11
10:
  store i32 -1, i32* %2
  br label %56
11:
  store i64 0, i64* %4
  %14 = load i32, i32* %3
  %15 = sext i32 %14 to i64
  store i64 %15, i64* %5
  store i64 0, i64* %6
  br label %17
17:
  %18 = load i64, i64* %4
  %19 = load i64, i64* %5
  %20 = icmp sle i64 %18, %19
  br i1 %20, label %21, label %50
21:
  %23 = load i64, i64* %4
  %24 = load i64, i64* %5
  %25 = load i64, i64* %4
  %26 = sub nsw i64 %24, %25
  %27 = sdiv i64 %26, 2
  %28 = add nsw i64 %23, %27
  store i64 %28, i64* %7
  %29 = load i64, i64* %7
  %30 = load i64, i64* %7
  %31 = mul nsw i64 %29, %30
  %32 = load i32, i32* %3
  %33 = sext i32 %32 to i64
  %34 = icmp sle i64 %31, %33
  br i1 %34, label %35, label %45
35:
  %36 = load i64, i64* %7
  store i64 %36, i64* %6
  %37 = load i64, i64* %7
  %38 = load i64, i64* %7
  %39 = mul nsw i64 %37, %38
  %40 = icmp sge i64 %39, 0
  br i1 %40, label %41, label %44
41:
  %42 = load i64, i64* %7
  %43 = add nsw i64 %42, 1
  store i64 %43, i64* %4
  br label %44
44:
  br label %48
45:
  %46 = load i64, i64* %7
  %47 = sub nsw i64 %46, 1
  store i64 %47, i64* %5
  br label %48
48:
  br label %17
50:
  %51 = load i64, i64* %6
  %52 = trunc i64 %51 to i32
  store i32 %52, i32* %2
  br label %56
56:
  %57 = load i32, i32* %2
  ret i32 %57
}
