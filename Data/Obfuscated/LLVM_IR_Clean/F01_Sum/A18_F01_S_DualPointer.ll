define dso_local i32 @rOna(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %2
  store i32 1, i32* %3
  %8 = load i32, i32* %2
  store i32 %8, i32* %4
  store i32 0, i32* %5
  br label %10
10:
  %11 = load i32, i32* %3
  %12 = load i32, i32* %4
  %13 = icmp slt i32 %11, %12
  br i1 %13, label %14, label %24
14:
  %15 = load i32, i32* %3
  %16 = load i32, i32* %4
  %17 = add nsw i32 %15, %16
  %18 = load i32, i32* %5
  %19 = add nsw i32 %18, %17
  store i32 %19, i32* %5
  %20 = load i32, i32* %3
  %21 = add nsw i32 %20, 1
  store i32 %21, i32* %3
  %22 = load i32, i32* %4
  %23 = add nsw i32 %22, -1
  store i32 %23, i32* %4
  br label %10
24:
  %25 = load i32, i32* %3
  %26 = load i32, i32* %4
  %27 = icmp eq i32 %25, %26
  br i1 %27, label %28, label %32
28:
  %29 = load i32, i32* %3
  %30 = load i32, i32* %5
  %31 = add nsw i32 %30, %29
  store i32 %31, i32* %5
  br label %32
32:
  %33 = load i32, i32* %5
  ret i32 %33
}
