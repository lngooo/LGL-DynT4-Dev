define dso_local i32 @IsPrime(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32 %0, i32* %3
  %8 = load i32, i32* %3
  %9 = icmp slt i32 %8, 2
  br i1 %9, label %10, label %11
10:
  store i32 0, i32* %2
  br label %52
11:
  store i32 1, i32* %4
  store i32 2, i32* %5
  br label %14
14:
  %15 = load i32, i32* %5
  %16 = load i32, i32* %3
  %17 = load i32, i32* %5
  %18 = sdiv i32 %16, %17
  %19 = icmp sle i32 %15, %18
  br i1 %19, label %21, label %20
20:
  store i32 2, i32* %6
  br label %47
21:
  store i32 0, i32* %7
  br label %23
23:
  %24 = load i32, i32* %7
  %25 = icmp slt i32 %24, 1
  br i1 %25, label %27, label %26
26:
  store i32 5, i32* %6
  br label %37
27:
  %28 = load i32, i32* %3
  %29 = load i32, i32* %5
  %30 = srem i32 %28, %29
  %31 = icmp eq i32 %30, 0
  br i1 %31, label %32, label %33
32:
  store i32 0, i32* %4
  store i32 5, i32* %6
  br label %37
33:
  br label %34
34:
  %35 = load i32, i32* %7
  %36 = add nsw i32 %35, 1
  store i32 %36, i32* %7
  br label %23
37:
  br label %39
39:
  %40 = load i32, i32* %4
  %41 = icmp ne i32 %40, 0
  br i1 %41, label %43, label %42
42:
  store i32 2, i32* %6
  br label %47
43:
  br label %44
44:
  %45 = load i32, i32* %5
  %46 = add nsw i32 %45, 1
  store i32 %46, i32* %5
  br label %14
47:
  br label %49
49:
  %50 = load i32, i32* %4
  store i32 %50, i32* %2
  store i32 1, i32* %6
  br label %52
52:
  %53 = load i32, i32* %2
  ret i32 %53
}
