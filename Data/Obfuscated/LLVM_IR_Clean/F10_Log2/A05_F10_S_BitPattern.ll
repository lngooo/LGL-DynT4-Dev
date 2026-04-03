define dso_local i32 @P2(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  %5 = load i32, i32* %2
  %6 = icmp sge i32 %5, 65536
  br i1 %6, label %7, label %12
7:
  %8 = load i32, i32* %2
  %9 = ashr i32 %8, 16
  store i32 %9, i32* %2
  %10 = load i32, i32* %3
  %11 = add nsw i32 %10, 16
  store i32 %11, i32* %3
  br label %12
12:
  %13 = load i32, i32* %2
  %14 = icmp sge i32 %13, 256
  br i1 %14, label %15, label %20
15:
  %16 = load i32, i32* %2
  %17 = ashr i32 %16, 8
  store i32 %17, i32* %2
  %18 = load i32, i32* %3
  %19 = add nsw i32 %18, 8
  store i32 %19, i32* %3
  br label %20
20:
  %21 = load i32, i32* %2
  %22 = icmp sge i32 %21, 16
  br i1 %22, label %23, label %28
23:
  %24 = load i32, i32* %2
  %25 = ashr i32 %24, 4
  store i32 %25, i32* %2
  %26 = load i32, i32* %3
  %27 = add nsw i32 %26, 4
  store i32 %27, i32* %3
  br label %28
28:
  %29 = load i32, i32* %2
  %30 = icmp sge i32 %29, 4
  br i1 %30, label %31, label %36
31:
  %32 = load i32, i32* %2
  %33 = ashr i32 %32, 2
  store i32 %33, i32* %2
  %34 = load i32, i32* %3
  %35 = add nsw i32 %34, 2
  store i32 %35, i32* %3
  br label %36
36:
  %37 = load i32, i32* %2
  %38 = icmp sge i32 %37, 2
  br i1 %38, label %39, label %42
39:
  %40 = load i32, i32* %3
  %41 = add nsw i32 %40, 1
  store i32 %41, i32* %3
  br label %42
42:
  %43 = load i32, i32* %3
  ret i32 %43
}
