define dso_local i64 @Factorial(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp sle i32 %4, 0
  br i1 %5, label %6, label %7
6:
  store i64 1, i64* %2
  br label %14
7:
  %8 = load i32, i32* %3
  %9 = sext i32 %8 to i64
  %10 = load i32, i32* %3
  %11 = sub nsw i32 %10, 1
  %12 = call i64 @Factorial(i32 %11)
  %13 = mul nsw i64 %9, %12
  store i64 %13, i64* %2
  br label %14
14:
  %15 = load i64, i64* %2
  ret i64 %15
}
