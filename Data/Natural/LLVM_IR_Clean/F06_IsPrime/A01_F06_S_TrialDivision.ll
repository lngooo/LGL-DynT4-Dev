define dso_local i32 @IsPrime(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp sle i32 %6, 1
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %2
  br label %51
9:
  %10 = load i32, i32* %3
  %11 = icmp sle i32 %10, 3
  br i1 %11, label %12, label %13
12:
  store i32 1, i32* %2
  br label %51
13:
  %14 = load i32, i32* %3
  %15 = srem i32 %14, 2
  %16 = icmp eq i32 %15, 0
  br i1 %16, label %21, label %17
17:
  %18 = load i32, i32* %3
  %19 = srem i32 %18, 3
  %20 = icmp eq i32 %19, 0
  br i1 %20, label %21, label %22
21:
  store i32 0, i32* %2
  br label %51
22:
  store i32 5, i32* %4
  br label %24
24:
  %25 = load i32, i32* %4
  %26 = load i32, i32* %4
  %27 = mul nsw i32 %25, %26
  %28 = load i32, i32* %3
  %29 = icmp sle i32 %27, %28
  br i1 %29, label %31, label %30
30:
  store i32 2, i32* %5
  br label %47
31:
  %32 = load i32, i32* %3
  %33 = load i32, i32* %4
  %34 = srem i32 %32, %33
  %35 = icmp eq i32 %34, 0
  br i1 %35, label %42, label %36
36:
  %37 = load i32, i32* %3
  %38 = load i32, i32* %4
  %39 = add nsw i32 %38, 2
  %40 = srem i32 %37, %39
  %41 = icmp eq i32 %40, 0
  br i1 %41, label %42, label %43
42:
  store i32 0, i32* %2
  store i32 1, i32* %5
  br label %47
43:
  br label %44
44:
  %45 = load i32, i32* %4
  %46 = add nsw i32 %45, 6
  store i32 %46, i32* %4
  br label %24
47:
  %49 = load i32, i32* %5
  switch i32 %49, label %53 [
    i32 2, label %50
    i32 1, label %51
  ]
50:
  store i32 1, i32* %2
  br label %51
51:
  %52 = load i32, i32* %2
  ret i32 %52
53:
  unreachable
}
