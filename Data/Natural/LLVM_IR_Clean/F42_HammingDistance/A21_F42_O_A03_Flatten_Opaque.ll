define dso_local i32 @HammingDistance(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %10 = load i32, i32* %3
  %11 = load i32, i32* %4
  %12 = xor i32 %10, %11
  store i32 %12, i32* %5
  store i32 0, i32* %6
  store i32 10, i32* %7
  br label %15
15:
  %16 = load i32, i32* %7
  %17 = icmp ne i32 %16, 0
  br i1 %17, label %18, label %47
18:
  %19 = load i32, i32* %7
  %20 = icmp eq i32 %19, 10
  br i1 %20, label %21, label %27
21:
  %22 = load i32, i32* %5
  %23 = icmp ne i32 %22, 0
  br i1 %23, label %24, label %25
24:
  store i32 20, i32* %7
  br label %26
25:
  store i32 0, i32* %7
  br label %26
26:
  br label %46
27:
  %28 = load i32, i32* %7
  %29 = icmp eq i32 %28, 20
  br i1 %29, label %30, label %45
30:
  store i32 5, i32* %8
  %32 = load i32, i32* %8
  %33 = load i32, i32* %8
  %34 = mul nsw i32 %32, %33
  %35 = icmp sgt i32 %34, 0
  br i1 %35, label %36, label %43
36:
  %37 = load i32, i32* %5
  %38 = sub i32 %37, 1
  %39 = load i32, i32* %5
  %40 = and i32 %39, %38
  store i32 %40, i32* %5
  %41 = load i32, i32* %6
  %42 = add nsw i32 %41, 1
  store i32 %42, i32* %6
  br label %43
43:
  store i32 10, i32* %7
  br label %45
45:
  br label %46
46:
  br label %15
47:
  %48 = load i32, i32* %6
  ret i32 %48
}
