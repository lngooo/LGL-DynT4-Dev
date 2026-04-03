define dso_local i64 @fact_helper(i32 %0, i64 %1) {
  %3 = alloca i64
  %4 = alloca i32
  %5 = alloca i64
  store i32 %0, i32* %4
  store i64 %1, i64* %5
  %6 = load i32, i32* %4
  %7 = icmp sle i32 %6, 0
  br i1 %7, label %8, label %10
8:
  %9 = load i64, i64* %5
  store i64 %9, i64* %3
  br label %18
10:
  %11 = load i32, i32* %4
  %12 = sub nsw i32 %11, 1
  %13 = load i64, i64* %5
  %14 = load i32, i32* %4
  %15 = sext i32 %14 to i64
  %16 = mul nsw i64 %13, %15
  %17 = call i64 @fact_helper(i32 %12, i64 %16)
  store i64 %17, i64* %3
  br label %18
18:
  %19 = load i64, i64* %3
  ret i64 %19
}
define dso_local i64 @Factorial(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp slt i32 %4, 0
  br i1 %5, label %6, label %7
6:
  store i64 0, i64* %2
  br label %10
7:
  %8 = load i32, i32* %3
  %9 = call i64 @fact_helper(i32 %8, i64 1)
  store i64 %9, i64* %2
  br label %10
10:
  %11 = load i64, i64* %2
  ret i64 %11
}
