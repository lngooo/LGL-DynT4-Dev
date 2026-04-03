define dso_local i32 @oFqY(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 1073741824, i32* %4
  br label %8
8:
  %9 = load i32, i32* %4
  %10 = load i32, i32* %2
  %11 = icmp sgt i32 %9, %10
  br i1 %11, label %12, label %15
12:
  %13 = load i32, i32* %4
  %14 = ashr i32 %13, 2
  store i32 %14, i32* %4
  br label %8
15:
  br label %16
16:
  %17 = load i32, i32* %4
  %18 = icmp ne i32 %17, 0
  br i1 %18, label %19, label %42
19:
  %21 = load i32, i32* %3
  %22 = load i32, i32* %4
  %23 = or i32 %21, %22
  store i32 %23, i32* %5
  %24 = load i32, i32* %2
  %25 = load i32, i32* %5
  %26 = icmp sge i32 %24, %25
  br i1 %26, label %27, label %35
27:
  %28 = load i32, i32* %5
  %29 = load i32, i32* %2
  %30 = sub nsw i32 %29, %28
  store i32 %30, i32* %2
  %31 = load i32, i32* %3
  %32 = ashr i32 %31, 1
  %33 = load i32, i32* %4
  %34 = or i32 %32, %33
  store i32 %34, i32* %3
  br label %38
35:
  %36 = load i32, i32* %3
  %37 = ashr i32 %36, 1
  store i32 %37, i32* %3
  br label %38
38:
  %39 = load i32, i32* %4
  %40 = ashr i32 %39, 2
  store i32 %40, i32* %4
  br label %16
42:
  %43 = load i32, i32* %3
  ret i32 %43
}
