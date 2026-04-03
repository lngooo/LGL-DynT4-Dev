define dso_local i32 @h(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  br label %6
6:
  %7 = load i32, i32* %4
  %8 = icmp ne i32 %7, 0
  br i1 %8, label %9, label %20
9:
  %11 = load i32, i32* %3
  %12 = load i32, i32* %4
  %13 = and i32 %11, %12
  store i32 %13, i32* %5
  %14 = load i32, i32* %3
  %15 = load i32, i32* %4
  %16 = xor i32 %14, %15
  store i32 %16, i32* %3
  %17 = load i32, i32* %5
  %18 = shl i32 %17, 1
  store i32 %18, i32* %4
  br label %6
20:
  %21 = load i32, i32* %3
  ret i32 %21
}
define dso_local i32 @X3(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 1, i32* %4
  br label %7
7:
  %8 = load i32, i32* %4
  %9 = load i32, i32* %2
  %10 = icmp sle i32 %8, %9
  br i1 %10, label %13, label %11
11:
  br label %20
13:
  %14 = load i32, i32* %3
  %15 = load i32, i32* %4
  %16 = call i32 @h(i32 %14, i32 %15)
  store i32 %16, i32* %3
  br label %17
17:
  %18 = load i32, i32* %4
  %19 = add nsw i32 %18, 1
  store i32 %19, i32* %4
  br label %7
20:
  %21 = load i32, i32* %3
  ret i32 %21
}
