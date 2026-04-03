define dso_local i64 @Factorial(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp sle i32 %4, 0
  br i1 %5, label %6, label %14
6:
  %7 = load i32, i32* %3
  %8 = load i32, i32* %3
  %9 = mul nsw i32 %7, %8
  %10 = add nsw i32 %9, 7
  %11 = icmp sgt i32 %10, 0
  br i1 %11, label %12, label %13
12:
  store i64 1, i64* %2
  br label %21
13:
  store i64 0, i64* %2
  br label %21
14:
  %15 = load i32, i32* %3
  %16 = sext i32 %15 to i64
  %17 = load i32, i32* %3
  %18 = sub nsw i32 %17, 1
  %19 = call i64 @Factorial(i32 %18)
  %20 = mul nsw i64 %16, %19
  store i64 %20, i64* %2
  br label %21
21:
  %22 = load i64, i64* %2
  ret i64 %22
}
