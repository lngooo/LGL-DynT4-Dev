define dso_local i32 @SFw(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %7 = load i32, i32* %3
  %8 = call i32 @abs(i32 %7)
  store i32 %8, i32* %3
  %9 = load i32, i32* %4
  %10 = call i32 @abs(i32 %9)
  store i32 %10, i32* %4
  br label %11
11:
  %12 = load i32, i32* %4
  %13 = icmp eq i32 %12, 0
  br i1 %13, label %14, label %16
14:
  %15 = load i32, i32* %3
  ret i32 %15
16:
  %18 = load i32, i32* %4
  store i32 %18, i32* %5
  %20 = load i32, i32* %3
  %21 = load i32, i32* %4
  %22 = srem i32 %20, %21
  store i32 %22, i32* %6
  %23 = load i32, i32* %5
  store i32 %23, i32* %3
  %24 = load i32, i32* %6
  store i32 %24, i32* %4
  br label %11
}
declare i32 @abs(i32)
