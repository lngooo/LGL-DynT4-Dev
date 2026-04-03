define dso_local i32 @GrayCode(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i8
  %7 = alloca i8
  store i32 %0, i32* %2
  store i32 0, i32* %3
  %10 = load i32, i32* %2
  %11 = lshr i32 %10, 1
  store i32 %11, i32* %4
  store i32 0, i32* %5
  br label %13
13:
  %14 = load i32, i32* %5
  %15 = icmp slt i32 %14, 8
  br i1 %15, label %18, label %16
16:
  br label %44
18:
  %19 = load i32, i32* %2
  %20 = load i32, i32* %5
  %21 = mul nsw i32 %20, 4
  %22 = lshr i32 %19, %21
  %23 = and i32 %22, 15
  %24 = trunc i32 %23 to i8
  store i8 %24, i8* %6
  %25 = load i32, i32* %4
  %26 = load i32, i32* %5
  %27 = mul nsw i32 %26, 4
  %28 = lshr i32 %25, %27
  %29 = and i32 %28, 15
  %30 = trunc i32 %29 to i8
  store i8 %30, i8* %7
  %31 = load i8, i8* %6
  %32 = zext i8 %31 to i32
  %33 = load i8, i8* %7
  %34 = zext i8 %33 to i32
  %35 = xor i32 %32, %34
  %36 = load i32, i32* %5
  %37 = mul nsw i32 %36, 4
  %38 = shl i32 %35, %37
  %39 = load i32, i32* %3
  %40 = or i32 %39, %38
  store i32 %40, i32* %3
  br label %41
41:
  %42 = load i32, i32* %5
  %43 = add nsw i32 %42, 1
  store i32 %43, i32* %5
  br label %13
44:
  %45 = load i32, i32* %3
  ret i32 %45
}
