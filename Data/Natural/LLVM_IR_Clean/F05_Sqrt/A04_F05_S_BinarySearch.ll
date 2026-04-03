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
  br label %55
11:
  %12 = load i32, i32* %3
  %13 = icmp slt i32 %12, 2
  br i1 %13, label %14, label %16
14:
  %15 = load i32, i32* %3
  store i32 %15, i32* %2
  br label %55
16:
  store i64 0, i64* %4
  %19 = load i32, i32* %3
  %20 = sext i32 %19 to i64
  store i64 %20, i64* %5
  store i64 0, i64* %6
  br label %22
22:
  %23 = load i64, i64* %4
  %24 = load i64, i64* %5
  %25 = icmp sle i64 %23, %24
  br i1 %25, label %26, label %49
26:
  %28 = load i64, i64* %4
  %29 = load i64, i64* %5
  %30 = load i64, i64* %4
  %31 = sub nsw i64 %29, %30
  %32 = sdiv i64 %31, 2
  %33 = add nsw i64 %28, %32
  store i64 %33, i64* %7
  %34 = load i64, i64* %7
  %35 = load i64, i64* %7
  %36 = mul nsw i64 %34, %35
  %37 = load i32, i32* %3
  %38 = sext i32 %37 to i64
  %39 = icmp sle i64 %36, %38
  br i1 %39, label %40, label %44
40:
  %41 = load i64, i64* %7
  store i64 %41, i64* %6
  %42 = load i64, i64* %7
  %43 = add nsw i64 %42, 1
  store i64 %43, i64* %4
  br label %47
44:
  %45 = load i64, i64* %7
  %46 = sub nsw i64 %45, 1
  store i64 %46, i64* %5
  br label %47
47:
  br label %22
49:
  %50 = load i64, i64* %6
  %51 = trunc i64 %50 to i32
  store i32 %51, i32* %2
  br label %55
55:
  %56 = load i32, i32* %2
  ret i32 %56
}
