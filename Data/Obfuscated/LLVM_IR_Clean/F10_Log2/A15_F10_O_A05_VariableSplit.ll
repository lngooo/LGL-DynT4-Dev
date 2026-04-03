define dso_local i32 @J(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  %9 = load i32, i32* %2
  %10 = icmp sge i32 %9, 65536
  br i1 %10, label %11, label %14
11:
  %12 = load i32, i32* %2
  %13 = ashr i32 %12, 16
  store i32 %13, i32* %2
  store i32 16, i32* %3
  br label %14
14:
  %15 = load i32, i32* %2
  %16 = icmp sge i32 %15, 256
  br i1 %16, label %17, label %20
17:
  %18 = load i32, i32* %2
  %19 = ashr i32 %18, 8
  store i32 %19, i32* %2
  store i32 8, i32* %4
  br label %20
20:
  store i32 0, i32* %5
  %22 = load i32, i32* %2
  %23 = icmp sge i32 %22, 16
  br i1 %23, label %24, label %27
24:
  %25 = load i32, i32* %2
  %26 = ashr i32 %25, 4
  store i32 %26, i32* %2
  store i32 4, i32* %5
  br label %27
27:
  store i32 0, i32* %6
  br label %29
29:
  %30 = load i32, i32* %2
  %31 = ashr i32 %30, 1
  store i32 %31, i32* %2
  %32 = icmp ne i32 %31, 0
  br i1 %32, label %33, label %36
33:
  %34 = load i32, i32* %6
  %35 = add nsw i32 %34, 1
  store i32 %35, i32* %6
  br label %29
36:
  %37 = load i32, i32* %3
  %38 = load i32, i32* %4
  %39 = add nsw i32 %37, %38
  %40 = load i32, i32* %5
  %41 = add nsw i32 %39, %40
  %42 = load i32, i32* %6
  %43 = add nsw i32 %41, %42
  ret i32 %43
}
