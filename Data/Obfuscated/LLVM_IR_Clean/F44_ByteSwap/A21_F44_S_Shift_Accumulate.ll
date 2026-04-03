define dso_local i32 @GMlg(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i32, i32* %4
  %9 = icmp slt i32 %8, 4
  br i1 %9, label %12, label %10
10:
  br label %23
12:
  %13 = load i32, i32* %3
  %14 = shl i32 %13, 8
  %15 = load i32, i32* %2
  %16 = and i32 %15, 255
  %17 = or i32 %14, %16
  store i32 %17, i32* %3
  %18 = load i32, i32* %2
  %19 = lshr i32 %18, 8
  store i32 %19, i32* %2
  br label %20
20:
  %21 = load i32, i32* %4
  %22 = add nsw i32 %21, 1
  store i32 %22, i32* %4
  br label %7
23:
  %24 = load i32, i32* %3
  ret i32 %24
}
