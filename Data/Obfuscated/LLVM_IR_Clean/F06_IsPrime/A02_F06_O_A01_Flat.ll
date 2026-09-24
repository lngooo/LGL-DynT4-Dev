define dso_local i32 @Wp(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 2, i32* %4
  store i32 1, i32* %5
  br label %9
9:
  br label %10
10:
  %11 = load i32, i32* %3
  switch i32 %11, label %43 [
    i32 0, label %12
    i32 1, label %18
    i32 2, label %27
    i32 3, label %35
    i32 4, label %38
  ]
12:
  %13 = load i32, i32* %2
  %14 = icmp slt i32 %13, 2
  br i1 %14, label %15, label %16
15:
  store i32 0, i32* %5
  store i32 4, i32* %3
  br label %17
16:
  store i32 1, i32* %3
  br label %17
17:
  br label %43
18:
  %19 = load i32, i32* %4
  %20 = load i32, i32* %2
  %21 = load i32, i32* %4
  %22 = sdiv i32 %20, %21
  %23 = icmp sle i32 %19, %22
  br i1 %23, label %24, label %25
24:
  store i32 2, i32* %3
  br label %26
25:
  store i32 1, i32* %5
  store i32 4, i32* %3
  br label %26
26:
  br label %43
27:
  %28 = load i32, i32* %2
  %29 = load i32, i32* %4
  %30 = srem i32 %28, %29
  %31 = icmp eq i32 %30, 0
  br i1 %31, label %32, label %33
32:
  store i32 0, i32* %5
  store i32 4, i32* %3
  br label %34
33:
  store i32 3, i32* %3
  br label %34
34:
  br label %43
35:
  %36 = load i32, i32* %4
  %37 = add nsw i32 %36, 1
  store i32 %37, i32* %4
  store i32 1, i32* %3
  br label %43
38:
  %39 = load i32, i32* %5
  ret i32 %39
43:
  br label %9
}
