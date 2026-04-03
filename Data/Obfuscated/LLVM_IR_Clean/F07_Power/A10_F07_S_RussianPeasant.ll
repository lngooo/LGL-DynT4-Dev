define dso_local i32 @U(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  store i32 1, i32* %5
  br label %7
7:
  %8 = load i32, i32* %4
  %9 = icmp sgt i32 %8, 0
  br i1 %9, label %10, label %24
10:
  %11 = load i32, i32* %4
  %12 = and i32 %11, 1
  %13 = icmp ne i32 %12, 0
  br i1 %13, label %14, label %18
14:
  %15 = load i32, i32* %3
  %16 = load i32, i32* %5
  %17 = mul nsw i32 %16, %15
  store i32 %17, i32* %5
  br label %18
18:
  %19 = load i32, i32* %3
  %20 = load i32, i32* %3
  %21 = mul nsw i32 %20, %19
  store i32 %21, i32* %3
  %22 = load i32, i32* %4
  %23 = ashr i32 %22, 1
  store i32 %23, i32* %4
  br label %7
24:
  %25 = load i32, i32* %5
  ret i32 %25
}
