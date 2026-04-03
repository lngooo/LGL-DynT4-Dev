define dso_local i32 @sQ(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 10, i32* %4
  store i32 0, i32* %5
  br label %9
9:
  %10 = load i32, i32* %5
  %11 = icmp slt i32 %10, 31
  br i1 %11, label %14, label %12
12:
  br label %44
14:
  %15 = load i32, i32* %4
  %16 = load i32, i32* %4
  %17 = mul nsw i32 %15, %16
  %18 = icmp sge i32 %17, 100
  br i1 %18, label %19, label %37
19:
  %20 = load i32, i32* %2
  %21 = load i32, i32* %5
  %22 = lshr i32 %20, %21
  %23 = and i32 %22, 1
  %24 = load i32, i32* %2
  %25 = load i32, i32* %5
  %26 = add nsw i32 %25, 1
  %27 = lshr i32 %24, %26
  %28 = and i32 %27, 1
  %29 = xor i32 %23, %28
  %30 = icmp ne i32 %29, 0
  br i1 %30, label %31, label %36
31:
  %32 = load i32, i32* %5
  %33 = shl i32 1, %32
  %34 = load i32, i32* %3
  %35 = or i32 %34, %33
  store i32 %35, i32* %3
  br label %36
36:
  br label %40
37:
  %38 = load i32, i32* %2
  %39 = add i32 %38, 1
  store i32 %39, i32* %2
  br label %40
40:
  br label %41
41:
  %42 = load i32, i32* %5
  %43 = add nsw i32 %42, 1
  store i32 %43, i32* %5
  br label %9
44:
  %45 = load i32, i32* %2
  %46 = and i32 %45, -2147483648
  %47 = load i32, i32* %3
  %48 = or i32 %47, %46
  store i32 %48, i32* %3
  %49 = load i32, i32* %3
  ret i32 %49
}
