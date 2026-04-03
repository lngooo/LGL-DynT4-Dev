define dso_local i32 @Xh(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  %6 = load i32, i32* %4
  %7 = icmp eq i32 %6, 0
  br i1 %7, label %8, label %12
8:
  %9 = load i32, i32* %5
  %10 = icmp eq i32 %9, 0
  br i1 %10, label %11, label %12
11:
  store i32 0, i32* %3
  br label %25
12:
  %13 = load i32, i32* %4
  %14 = and i32 %13, 1
  %15 = load i32, i32* %5
  %16 = and i32 %15, 1
  %17 = icmp ne i32 %14, %16
  %18 = zext i1 %17 to i32
  %19 = load i32, i32* %4
  %20 = lshr i32 %19, 1
  %21 = load i32, i32* %5
  %22 = lshr i32 %21, 1
  %23 = call i32 @Xh(i32 %20, i32 %22)
  %24 = add nsw i32 %18, %23
  store i32 %24, i32* %3
  br label %25
25:
  %26 = load i32, i32* %3
  ret i32 %26
}
