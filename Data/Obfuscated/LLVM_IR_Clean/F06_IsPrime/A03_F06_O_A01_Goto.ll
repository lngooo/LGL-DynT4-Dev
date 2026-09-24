define dso_local i32 @f5GC(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %3
  store i32 2, i32* %4
  %7 = load i32, i32* %3
  %8 = icmp slt i32 %7, 2
  br i1 %8, label %9, label %10
9:
  br label %28
10:
  br label %11
11:
  %12 = load i32, i32* %4
  %13 = load i32, i32* %3
  %14 = load i32, i32* %4
  %15 = sdiv i32 %13, %14
  %16 = icmp sgt i32 %12, %15
  br i1 %16, label %17, label %18
17:
  br label %27
18:
  %19 = load i32, i32* %3
  %20 = load i32, i32* %4
  %21 = srem i32 %19, %20
  %22 = icmp eq i32 %21, 0
  br i1 %22, label %23, label %24
23:
  br label %28
24:
  %25 = load i32, i32* %4
  %26 = add nsw i32 %25, 1
  store i32 %26, i32* %4
  br label %11
27:
  store i32 1, i32* %2
  store i32 1, i32* %5
  br label %29
28:
  store i32 0, i32* %2
  store i32 1, i32* %5
  br label %29
29:
  %31 = load i32, i32* %2
  ret i32 %31
}
