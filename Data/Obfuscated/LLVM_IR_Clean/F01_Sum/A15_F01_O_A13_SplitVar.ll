define dso_local i32 @eL(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  store i32 1, i32* %5
  br label %9
9:
  %10 = load i32, i32* %5
  %11 = load i32, i32* %2
  %12 = icmp sle i32 %10, %11
  br i1 %12, label %15, label %13
13:
  br label %31
15:
  %16 = load i32, i32* %5
  %17 = srem i32 %16, 2
  %18 = icmp eq i32 %17, 0
  br i1 %18, label %19, label %23
19:
  %20 = load i32, i32* %5
  %21 = load i32, i32* %3
  %22 = add nsw i32 %21, %20
  store i32 %22, i32* %3
  br label %27
23:
  %24 = load i32, i32* %5
  %25 = load i32, i32* %4
  %26 = add nsw i32 %25, %24
  store i32 %26, i32* %4
  br label %27
27:
  br label %28
28:
  %29 = load i32, i32* %5
  %30 = add nsw i32 %29, 1
  store i32 %30, i32* %5
  br label %9
31:
  %32 = load i32, i32* %3
  %33 = load i32, i32* %4
  %34 = add nsw i32 %32, %33
  ret i32 %34
}
