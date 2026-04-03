define dso_local i32 @Sqrt(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp slt i32 %6, 0
  br i1 %7, label %8, label %9
8:
  store i32 -1, i32* %2
  br label %28
9:
  store i32 0, i32* %4
  store i32 1, i32* %5
  br label %12
12:
  %13 = load i32, i32* %3
  %14 = load i32, i32* %5
  %15 = icmp sge i32 %13, %14
  br i1 %15, label %16, label %24
16:
  %17 = load i32, i32* %5
  %18 = load i32, i32* %3
  %19 = sub nsw i32 %18, %17
  store i32 %19, i32* %3
  %20 = load i32, i32* %5
  %21 = add nsw i32 %20, 2
  store i32 %21, i32* %5
  %22 = load i32, i32* %4
  %23 = add nsw i32 %22, 1
  store i32 %23, i32* %4
  br label %12
24:
  %25 = load i32, i32* %4
  store i32 %25, i32* %2
  br label %28
28:
  %29 = load i32, i32* %2
  ret i32 %29
}
