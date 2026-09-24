define dso_local i32 @Power(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  store i32 1, i32* %6
  %10 = load i32, i32* %5
  %11 = icmp slt i32 %10, 0
  br i1 %11, label %12, label %13
12:
  store i32 0, i32* %3
  store i32 1, i32* %7
  br label %30
13:
  store i32 0, i32* %8
  br label %15
15:
  %16 = load i32, i32* %8
  %17 = load i32, i32* %5
  %18 = icmp slt i32 %16, %17
  br i1 %18, label %21, label %19
19:
  store i32 2, i32* %7
  br label %28
21:
  %22 = load i32, i32* %6
  %23 = load i32, i32* %4
  %24 = call i32 @peasant_mul32(i32 %22, i32 %23)
  store i32 %24, i32* %6
  br label %25
25:
  %26 = load i32, i32* %8
  %27 = add nsw i32 %26, 1
  store i32 %27, i32* %8
  br label %15
28:
  %29 = load i32, i32* %6
  store i32 %29, i32* %3
  store i32 1, i32* %7
  br label %30
30:
  %32 = load i32, i32* %3
  ret i32 %32
}
define internal i32 @peasant_mul32(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %9 = load i32, i32* %3
  store i32 %9, i32* %5
  %11 = load i32, i32* %4
  store i32 %11, i32* %6
  store i32 0, i32* %7
  br label %13
13:
  %14 = load i32, i32* %6
  %15 = icmp ugt i32 %14, 0
  br i1 %15, label %16, label %29
16:
  %17 = load i32, i32* %6
  %18 = and i32 %17, 1
  %19 = icmp ne i32 %18, 0
  br i1 %19, label %20, label %24
20:
  %21 = load i32, i32* %5
  %22 = load i32, i32* %7
  %23 = add i32 %22, %21
  store i32 %23, i32* %7
  br label %24
24:
  %25 = load i32, i32* %5
  %26 = shl i32 %25, 1
  store i32 %26, i32* %5
  %27 = load i32, i32* %6
  %28 = lshr i32 %27, 1
  store i32 %28, i32* %6
  br label %13
29:
  %30 = load i32, i32* %7
  ret i32 %30
}
