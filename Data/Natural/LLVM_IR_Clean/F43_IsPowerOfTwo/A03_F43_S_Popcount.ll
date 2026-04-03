define dso_local i32 @IsPowerOfTwo(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %3
  %5 = load i32, i32* %3
  %6 = icmp eq i32 %5, 0
  br i1 %6, label %7, label %8
7:
  store i32 0, i32* %2
  br label %25
8:
  store i32 0, i32* %4
  br label %10
10:
  %11 = load i32, i32* %3
  %12 = icmp ugt i32 %11, 0
  br i1 %12, label %13, label %20
13:
  %14 = load i32, i32* %3
  %15 = and i32 %14, 1
  %16 = load i32, i32* %4
  %17 = add i32 %16, %15
  store i32 %17, i32* %4
  %18 = load i32, i32* %3
  %19 = lshr i32 %18, 1
  store i32 %19, i32* %3
  br label %10
20:
  %21 = load i32, i32* %4
  %22 = icmp eq i32 %21, 1
  %23 = zext i1 %22 to i32
  store i32 %23, i32* %2
  br label %25
25:
  %26 = load i32, i32* %2
  ret i32 %26
}
