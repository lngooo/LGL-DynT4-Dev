define dso_local i32 @ZTtb(i32 %0) {
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
  br i1 %13, label %14, label %35
14:
  %16 = load i32, i32* %3
  %17 = load i32, i32* %4
  %18 = add nsw i32 %16, %17
  %19 = sdiv i32 %18, 2
  store i32 %19, i32* %6
  %20 = load i32, i32* %6
  %21 = zext i32 %20 to i64
  %22 = shl i64 1, %21
  %23 = load i32, i32* %2
  %24 = zext i32 %23 to i64
  %25 = icmp ule i64 %22, %24
  br i1 %25, label %26, label %30
26:
  %27 = load i32, i32* %6
  store i32 %27, i32* %5
  %28 = load i32, i32* %6
  %29 = add nsw i32 %28, 1
  store i32 %29, i32* %3
  br label %33
30:
  %31 = load i32, i32* %6
  %32 = sub nsw i32 %31, 1
  store i32 %32, i32* %4
  br label %33
33:
  br label %10
35:
  %36 = load i32, i32* %5
  ret i32 %36
}
