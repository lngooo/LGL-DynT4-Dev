define dso_local i32 @Log2(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %3
  store i32 0, i32* %4
  %7 = load i32, i32* %3
  %8 = icmp sle i32 %7, 1
  br i1 %8, label %9, label %10
9:
  store i32 0, i32* %2
  store i32 1, i32* %5
  br label %23
10:
  br label %11
11:
  br label %12
12:
  %13 = load i32, i32* %3
  %14 = sdiv i32 %13, 2
  store i32 %14, i32* %3
  %15 = load i32, i32* %3
  %16 = icmp eq i32 %15, 0
  br i1 %16, label %17, label %18
17:
  br label %21
18:
  %19 = load i32, i32* %4
  %20 = add nsw i32 %19, 1
  store i32 %20, i32* %4
  br label %11
21:
  %22 = load i32, i32* %4
  store i32 %22, i32* %2
  store i32 1, i32* %5
  br label %23
23:
  %25 = load i32, i32* %2
  ret i32 %25
}
