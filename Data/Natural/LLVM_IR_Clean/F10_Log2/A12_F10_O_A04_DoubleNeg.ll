define dso_local i32 @Log2(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 31, i32* %4
  store i32 0, i32* %5
  br label %10
10:
  %11 = load i32, i32* %3
  %12 = load i32, i32* %4
  %13 = icmp sle i32 %11, %12
  %14 = xor i1 %13, true
  %15 = xor i1 %14, true
  br i1 %15, label %16, label %39
16:
  %18 = load i32, i32* %3
  %19 = load i32, i32* %4
  %20 = load i32, i32* %3
  %21 = sub nsw i32 %19, %20
  %22 = sdiv i32 %21, 2
  %23 = add nsw i32 %18, %22
  store i32 %23, i32* %6
  %24 = load i32, i32* %6
  %25 = zext i32 %24 to i64
  %26 = shl i64 1, %25
  %27 = load i32, i32* %2
  %28 = zext i32 %27 to i64
  %29 = icmp ule i64 %26, %28
  br i1 %29, label %30, label %34
30:
  %31 = load i32, i32* %6
  store i32 %31, i32* %5
  %32 = load i32, i32* %6
  %33 = add nsw i32 %32, 1
  store i32 %33, i32* %3
  br label %37
34:
  %35 = load i32, i32* %6
  %36 = sub nsw i32 %35, 1
  store i32 %36, i32* %4
  br label %37
37:
  br label %10
39:
  %40 = load i32, i32* %5
  ret i32 %40
}
