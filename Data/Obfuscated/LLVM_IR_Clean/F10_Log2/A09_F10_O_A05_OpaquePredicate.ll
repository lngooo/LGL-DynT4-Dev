define dso_local i32 @UqTt5(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  %5 = load i32, i32* %2
  %6 = load i32, i32* %2
  %7 = mul nsw i32 %5, %6
  %8 = add nsw i32 %7, 1
  %9 = icmp sgt i32 %8, 0
  br i1 %9, label %10, label %49
10:
  %11 = load i32, i32* %2
  %12 = icmp sge i32 %11, 65536
  br i1 %12, label %13, label %18
13:
  %14 = load i32, i32* %2
  %15 = sdiv i32 %14, 65536
  store i32 %15, i32* %2
  %16 = load i32, i32* %3
  %17 = add nsw i32 %16, 16
  store i32 %17, i32* %3
  br label %18
18:
  %19 = load i32, i32* %2
  %20 = icmp sge i32 %19, 256
  br i1 %20, label %21, label %26
21:
  %22 = load i32, i32* %2
  %23 = sdiv i32 %22, 256
  store i32 %23, i32* %2
  %24 = load i32, i32* %3
  %25 = add nsw i32 %24, 8
  store i32 %25, i32* %3
  br label %26
26:
  %27 = load i32, i32* %2
  %28 = icmp sge i32 %27, 16
  br i1 %28, label %29, label %34
29:
  %30 = load i32, i32* %2
  %31 = sdiv i32 %30, 16
  store i32 %31, i32* %2
  %32 = load i32, i32* %3
  %33 = add nsw i32 %32, 4
  store i32 %33, i32* %3
  br label %34
34:
  %35 = load i32, i32* %2
  %36 = icmp sge i32 %35, 4
  br i1 %36, label %37, label %42
37:
  %38 = load i32, i32* %2
  %39 = sdiv i32 %38, 4
  store i32 %39, i32* %2
  %40 = load i32, i32* %3
  %41 = add nsw i32 %40, 2
  store i32 %41, i32* %3
  br label %42
42:
  %43 = load i32, i32* %2
  %44 = icmp sge i32 %43, 2
  br i1 %44, label %45, label %48
45:
  %46 = load i32, i32* %3
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %3
  br label %48
48:
  br label %49
49:
  %50 = load i32, i32* %3
  ret i32 %50
}
