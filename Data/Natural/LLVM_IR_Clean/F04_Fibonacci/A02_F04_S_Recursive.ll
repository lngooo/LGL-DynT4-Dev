define dso_local i64 @Fibonacci(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp sle i32 %4, 1
  br i1 %5, label %6, label %9
6:
  %7 = load i32, i32* %3
  %8 = sext i32 %7 to i64
  store i64 %8, i64* %2
  br label %17
9:
  %10 = load i32, i32* %3
  %11 = sub nsw i32 %10, 1
  %12 = call i64 @Fibonacci(i32 %11)
  %13 = load i32, i32* %3
  %14 = sub nsw i32 %13, 2
  %15 = call i64 @Fibonacci(i32 %14)
  %16 = add nsw i64 %12, %15
  store i64 %16, i64* %2
  br label %17
17:
  %18 = load i64, i64* %2
  ret i64 %18
}
