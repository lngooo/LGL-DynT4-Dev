define dso_local i32 @vzI(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  %6 = load i32, i32* %5
  %7 = icmp eq i32 %6, 0
  br i1 %7, label %8, label %10
8:
  %9 = load i32, i32* %4
  store i32 %9, i32* %3
  br label %19
10:
  %11 = load i32, i32* %4
  %12 = load i32, i32* %5
  %13 = xor i32 %11, %12
  %14 = load i32, i32* %4
  %15 = load i32, i32* %5
  %16 = and i32 %14, %15
  %17 = shl i32 %16, 1
  %18 = call i32 @vzI(i32 %13, i32 %17)
  store i32 %18, i32* %3
  br label %19
19:
  %20 = load i32, i32* %3
  ret i32 %20
}
define dso_local i32 @I(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp sle i32 %4, 0
  br i1 %5, label %6, label %7
6:
  store i32 0, i32* %2
  br label %13
7:
  %8 = load i32, i32* %3
  %9 = load i32, i32* %3
  %10 = sub nsw i32 %9, 1
  %11 = call i32 @I(i32 %10)
  %12 = call i32 @vzI(i32 %8, i32 %11)
  store i32 %12, i32* %2
  br label %13
13:
  %14 = load i32, i32* %2
  ret i32 %14
}
