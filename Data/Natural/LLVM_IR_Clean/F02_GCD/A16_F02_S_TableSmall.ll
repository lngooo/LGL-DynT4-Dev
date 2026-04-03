@GCD.map = internal global [4 x [4 x i32]] [[4 x i32] [i32 0, i32 1, i32 2, i32 3], [4 x i32] [i32 1, i32 1, i32 1, i32 1], [4 x i32] [i32 2, i32 1, i32 2, i32 1], [4 x i32] [i32 3, i32 1, i32 1, i32 3]]
define dso_local i32 @GCD(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  %6 = load i32, i32* %4
  %7 = call i32 @abs(i32 %6)
  store i32 %7, i32* %4
  %8 = load i32, i32* %5
  %9 = call i32 @abs(i32 %8)
  store i32 %9, i32* %5
  %10 = load i32, i32* %4
  %11 = icmp sle i32 %10, 3
  br i1 %11, label %12, label %23
12:
  %13 = load i32, i32* %5
  %14 = icmp sle i32 %13, 3
  br i1 %14, label %15, label %23
15:
  %16 = load i32, i32* %4
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds [4 x [4 x i32]], [4 x [4 x i32]]* @GCD.map, i64 0, i64 %17
  %19 = load i32, i32* %5
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds [4 x i32], [4 x i32]* %18, i64 0, i64 %20
  %22 = load i32, i32* %21
  store i32 %22, i32* %3
  br label %36
23:
  %24 = load i32, i32* %5
  %25 = icmp eq i32 %24, 0
  br i1 %25, label %26, label %28
26:
  %27 = load i32, i32* %4
  br label %34
28:
  %29 = load i32, i32* %5
  %30 = load i32, i32* %4
  %31 = load i32, i32* %5
  %32 = srem i32 %30, %31
  %33 = call i32 @GCD(i32 %29, i32 %32)
  br label %34
34:
  %35 = phi i32 [ %27, %26 ], [ %33, %28 ]
  store i32 %35, i32* %3
  br label %36
36:
  %37 = load i32, i32* %3
  ret i32 %37
}
declare i32 @abs(i32)
