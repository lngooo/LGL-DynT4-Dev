define dso_local i64 @b_add(i64 %0, i64 %1) {
  %3 = alloca i64
  %4 = alloca i64
  %5 = alloca i64
  store i64 %0, i64* %3
  store i64 %1, i64* %4
  br label %6
6:
  %7 = load i64, i64* %4
  %8 = icmp ne i64 %7, 0
  br i1 %8, label %9, label %20
9:
  %11 = load i64, i64* %3
  %12 = load i64, i64* %4
  %13 = and i64 %11, %12
  store i64 %13, i64* %5
  %14 = load i64, i64* %3
  %15 = load i64, i64* %4
  %16 = xor i64 %14, %15
  store i64 %16, i64* %3
  %17 = load i64, i64* %5
  %18 = shl i64 %17, 1
  store i64 %18, i64* %4
  br label %6
20:
  %21 = load i64, i64* %3
  ret i64 %21
}
define dso_local i64 @Factorial(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i64
  %8 = alloca i32
  store i32 %0, i32* %3
  %9 = load i32, i32* %3
  %10 = icmp slt i32 %9, 0
  br i1 %10, label %11, label %12
11:
  store i64 0, i64* %2
  br label %46
12:
  store i64 1, i64* %4
  store i32 2, i32* %5
  br label %15
15:
  %16 = load i32, i32* %5
  %17 = load i32, i32* %3
  %18 = icmp sle i32 %16, %17
  br i1 %18, label %21, label %19
19:
  store i32 2, i32* %6
  br label %43
21:
  store i64 0, i64* %7
  store i32 0, i32* %8
  br label %24
24:
  %25 = load i32, i32* %8
  %26 = load i32, i32* %5
  %27 = icmp slt i32 %25, %26
  br i1 %27, label %30, label %28
28:
  store i32 5, i32* %6
  br label %37
30:
  %31 = load i64, i64* %7
  %32 = load i64, i64* %4
  %33 = call i64 @b_add(i64 %31, i64 %32)
  store i64 %33, i64* %7
  br label %34
34:
  %35 = load i32, i32* %8
  %36 = add nsw i32 %35, 1
  store i32 %36, i32* %8
  br label %24
37:
  %38 = load i64, i64* %7
  store i64 %38, i64* %4
  br label %40
40:
  %41 = load i32, i32* %5
  %42 = add nsw i32 %41, 1
  store i32 %42, i32* %5
  br label %15
43:
  %44 = load i64, i64* %4
  store i64 %44, i64* %2
  store i32 1, i32* %6
  br label %46
46:
  %47 = load i64, i64* %2
  ret i64 %47
}
