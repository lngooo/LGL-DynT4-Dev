define dso_local i32 @GCD(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  %6 = load i32, i32* %4
  %7 = call i32 @abs(i32 %6)
  store i32 %7, i32* %4
  %8 = load i32, i32* %5
  %9 = call i32 @abs(i32 %8)
  store i32 %9, i32* %5
  %10 = load i32, i32* %5
  %11 = icmp eq i32 %10, 0
  br i1 %11, label %12, label %14
12:
  %13 = load i32, i32* %4
  store i32 %13, i32* %3
  br label %20
14:
  %15 = load i32, i32* %5
  %16 = load i32, i32* %4
  %17 = load i32, i32* %5
  %18 = srem i32 %16, %17
  %19 = call i32 @GCD(i32 %15, i32 %18)
  store i32 %19, i32* %3
  br label %20
20:
  %21 = load i32, i32* %3
  ret i32 %21
}
declare i32 @abs(i32)
