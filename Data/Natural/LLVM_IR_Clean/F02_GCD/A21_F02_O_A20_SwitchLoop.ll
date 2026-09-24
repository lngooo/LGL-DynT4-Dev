define dso_local i32 @GCD(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %5 = load i32, i32* %3
  %6 = call i32 @abs(i32 %5)
  %7 = load i32, i32* %4
  %8 = call i32 @abs(i32 %7)
  %9 = call i32 @_internal_gcd_switch_loop(i32 %6, i32 %8)
  ret i32 %9
}
define internal i32 @_internal_gcd_switch_loop(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  store i32 0, i32* %6
  store i32 0, i32* %7
  store i32 0, i32* %8
  br label %13
13:
  br label %14
14:
  %15 = load i32, i32* %6
  switch i32 %15, label %30 [
    i32 0, label %16
    i32 1, label %22
    i32 2, label %27
  ]
16:
  %17 = load i32, i32* %5
  %18 = icmp eq i32 %17, 0
  br i1 %18, label %19, label %21
19:
  %20 = load i32, i32* %4
  store i32 %20, i32* %3
  store i32 1, i32* %9
  br label %33
21:
  store i32 1, i32* %6
  br label %32
22:
  %23 = load i32, i32* %5
  store i32 %23, i32* %7
  %24 = load i32, i32* %4
  %25 = load i32, i32* %5
  %26 = srem i32 %24, %25
  store i32 %26, i32* %8
  store i32 2, i32* %6
  br label %32
27:
  %28 = load i32, i32* %7
  store i32 %28, i32* %4
  %29 = load i32, i32* %8
  store i32 %29, i32* %5
  store i32 0, i32* %6
  br label %32
30:
  %31 = load i32, i32* %4
  store i32 %31, i32* %3
  store i32 1, i32* %9
  br label %33
32:
  br label %13
33:
  %37 = load i32, i32* %3
  ret i32 %37
}
declare i32 @abs(i32)
