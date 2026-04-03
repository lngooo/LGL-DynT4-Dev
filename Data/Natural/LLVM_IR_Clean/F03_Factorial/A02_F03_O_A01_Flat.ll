define dso_local i64 @Factorial(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %3
  %7 = load i32, i32* %3
  %8 = icmp slt i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store i64 0, i64* %2
  br label %38
10:
  store i64 1, i64* %4
  store i32 1, i32* %5
  store i32 0, i32* %6
  br label %14
14:
  %15 = load i32, i32* %6
  %16 = icmp ne i32 %15, 2
  br i1 %16, label %17, label %33
17:
  %18 = load i32, i32* %6
  switch i32 %18, label %32 [
    i32 0, label %19
    i32 1, label %25
  ]
19:
  %20 = load i32, i32* %5
  %21 = load i32, i32* %3
  %22 = icmp sle i32 %20, %21
  %23 = zext i1 %22 to i64
  %24 = select i1 %22, i32 1, i32 2
  store i32 %24, i32* %6
  br label %32
25:
  %26 = load i32, i32* %5
  %27 = sext i32 %26 to i64
  %28 = load i64, i64* %4
  %29 = mul nsw i64 %28, %27
  store i64 %29, i64* %4
  %30 = load i32, i32* %5
  %31 = add nsw i32 %30, 1
  store i32 %31, i32* %5
  store i32 0, i32* %6
  br label %32
32:
  br label %14
33:
  %34 = load i64, i64* %4
  store i64 %34, i64* %2
  br label %38
38:
  %39 = load i64, i64* %2
  ret i64 %39
}
