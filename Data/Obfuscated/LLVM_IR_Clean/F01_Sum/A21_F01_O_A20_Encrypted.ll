define dso_local i32 @Zgm(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32 %0, i32* %2
  store i32 2748, i32* %3
  %10 = load i32, i32* %3
  %11 = xor i32 0, %10
  store i32 %11, i32* %4
  %13 = load i32, i32* %4
  %14 = load i32, i32* %3
  %15 = xor i32 %13, %14
  store i32 %15, i32* %5
  store i32 1, i32* %6
  br label %17
17:
  %18 = load i32, i32* %6
  %19 = load i32, i32* %2
  %20 = icmp sle i32 %18, %19
  br i1 %20, label %23, label %21
21:
  br label %35
23:
  %25 = load i32, i32* %6
  %26 = add nsw i32 %25, 5
  %27 = sub nsw i32 %26, 5
  store i32 %27, i32* %7
  %28 = load i32, i32* %7
  %29 = load i32, i32* %5
  %30 = add nsw i32 %29, %28
  store i32 %30, i32* %5
  br label %32
32:
  %33 = load i32, i32* %6
  %34 = add nsw i32 %33, 1
  store i32 %34, i32* %6
  br label %17
35:
  %36 = load i32, i32* %5
  ret i32 %36
}
