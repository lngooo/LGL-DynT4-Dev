define dso_local i32 @dSc1(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %6 = load i32, i32* %3
  %7 = call i32 @abs(i32 %6)
  store i32 %7, i32* %3
  %8 = load i32, i32* %4
  %9 = call i32 @abs(i32 %8)
  store i32 %9, i32* %4
  br label %10
10:
  %11 = load i32, i32* %4
  %12 = icmp eq i32 %11, 0
  br i1 %12, label %13, label %14
13:
  br label %20
14:
  %15 = load i32, i32* %4
  store i32 %15, i32* %5
  %16 = load i32, i32* %3
  %17 = load i32, i32* %4
  %18 = srem i32 %16, %17
  store i32 %18, i32* %4
  %19 = load i32, i32* %5
  store i32 %19, i32* %3
  br label %10
20:
  %21 = load i32, i32* %3
  ret i32 %21
}
declare i32 @abs(i32)
