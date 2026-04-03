define dso_local i32 @GCD(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %5 = load i32, i32* %3
  %6 = call i32 @abs(i32 %5)
  %7 = load i32, i32* %4
  %8 = call i32 @abs(i32 %7)
  %9 = call i32 @_internal_gcd(i32 %6, i32 %8)
  ret i32 %9
}
define internal i32 @_internal_gcd(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %5 = load i32, i32* %4
  %6 = icmp eq i32 %5, 0
  br i1 %6, label %7, label %9
7:
  %8 = load i32, i32* %3
  br label %15
9:
  %10 = load i32, i32* %4
  %11 = load i32, i32* %3
  %12 = load i32, i32* %4
  %13 = srem i32 %11, %12
  %14 = call i32 @_internal_gcd(i32 %10, i32 %13)
  br label %15
15:
  %16 = phi i32 [ %8, %7 ], [ %14, %9 ]
  ret i32 %16
}
declare i32 @abs(i32)
