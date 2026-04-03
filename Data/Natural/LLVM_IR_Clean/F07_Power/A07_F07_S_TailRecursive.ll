define dso_local i32 @power_tail(i32 %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32 %0, i32* %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  %8 = load i32, i32* %6
  %9 = icmp sle i32 %8, 0
  br i1 %9, label %10, label %12
10:
  %11 = load i32, i32* %7
  store i32 %11, i32* %4
  br label %20
12:
  %13 = load i32, i32* %5
  %14 = load i32, i32* %6
  %15 = sub nsw i32 %14, 1
  %16 = load i32, i32* %7
  %17 = load i32, i32* %5
  %18 = mul nsw i32 %16, %17
  %19 = call i32 @power_tail(i32 %13, i32 %15, i32 %18)
  store i32 %19, i32* %4
  br label %20
20:
  %21 = load i32, i32* %4
  ret i32 %21
}
define dso_local i32 @Power(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %5 = load i32, i32* %3
  %6 = load i32, i32* %4
  %7 = call i32 @power_tail(i32 %5, i32 %6, i32 1)
  ret i32 %7
}
