define dso_local i64 @Fibonacci(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i64
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i64
  store i32 %0, i32* %3
  store i64 0, i64* %4
  store i64 1, i64* %5
  %11 = load i32, i32* %3
  %12 = icmp eq i32 %11, 0
  br i1 %12, label %13, label %14
13:
  store i64 0, i64* %2
  store i32 1, i32* %6
  br label %53
14:
  store i32 2, i32* %7
  br label %16
16:
  %17 = load i32, i32* %7
  %18 = load i32, i32* %3
  %19 = icmp sle i32 %17, %18
  br i1 %19, label %22, label %20
20:
  store i32 2, i32* %6
  br label %45
22:
  %23 = load i32, i32* %7
  %24 = load i32, i32* %7
  %25 = mul nsw i32 %23, %24
  %26 = load i32, i32* %7
  %27 = add nsw i32 %25, %26
  %28 = srem i32 %27, 2
  %29 = icmp eq i32 %28, 0
  br i1 %29, label %30, label %38
30:
  %32 = load i64, i64* %4
  %33 = load i64, i64* %5
  %34 = add nsw i64 %32, %33
  store i64 %34, i64* %8
  %35 = load i64, i64* %5
  store i64 %35, i64* %4
  %36 = load i64, i64* %8
  store i64 %36, i64* %5
  br label %41
38:
  %39 = load i64, i64* %4
  %40 = mul nsw i64 %39, 1
  store i64 %40, i64* %4
  br label %41
41:
  br label %42
42:
  %43 = load i32, i32* %7
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %7
  br label %16
45:
  %46 = load i32, i32* %3
  %47 = icmp eq i32 %46, 1
  br i1 %47, label %48, label %49
48:
  br label %51
49:
  %50 = load i64, i64* %5
  br label %51
51:
  %52 = phi i64 [ 1, %48 ], [ %50, %49 ]
  store i64 %52, i64* %2
  store i32 1, i32* %6
  br label %53
53:
  %56 = load i64, i64* %2
  ret i64 %56
}
