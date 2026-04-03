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
  store i32 1, i32* %5
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
  %31 = load i64, i64* %4
  %32 = load i64, i64* %7
  %33 = add nsw i64 %32, %31
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
