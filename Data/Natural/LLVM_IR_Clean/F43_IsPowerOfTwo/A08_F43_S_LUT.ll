@IsPowerOfTwo.powers = internal global [32 x i32] [i32 1, i32 2, i32 4, i32 8, i32 16, i32 32, i32 64, i32 128, i32 256, i32 512, i32 1024, i32 2048, i32 4096, i32 8192, i32 16384, i32 32768, i32 65536, i32 131072, i32 262144, i32 524288, i32 1048576, i32 2097152, i32 4194304, i32 8388608, i32 16777216, i32 33554432, i32 67108864, i32 134217728, i32 268435456, i32 536870912, i32 1073741824, i32 -2147483648]
define dso_local i32 @IsPowerOfTwo(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp eq i32 %6, 0
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %2
  br label %31
9:
  store i32 0, i32* %4
  br label %11
11:
  %12 = load i32, i32* %4
  %13 = icmp slt i32 %12, 32
  br i1 %13, label %15, label %14
14:
  store i32 2, i32* %5
  br label %27
15:
  %16 = load i32, i32* %3
  %17 = load i32, i32* %4
  %18 = sext i32 %17 to i64
  %19 = getelementptr inbounds [32 x i32], [32 x i32]* @IsPowerOfTwo.powers, i64 0, i64 %18
  %20 = load i32, i32* %19
  %21 = icmp eq i32 %16, %20
  br i1 %21, label %22, label %23
22:
  store i32 1, i32* %2
  store i32 1, i32* %5
  br label %27
23:
  br label %24
24:
  %25 = load i32, i32* %4
  %26 = add nsw i32 %25, 1
  store i32 %26, i32* %4
  br label %11
27:
  %29 = load i32, i32* %5
  switch i32 %29, label %33 [
    i32 2, label %30
    i32 1, label %31
  ]
30:
  store i32 0, i32* %2
  br label %31
31:
  %32 = load i32, i32* %2
  ret i32 %32
33:
  unreachable
}
