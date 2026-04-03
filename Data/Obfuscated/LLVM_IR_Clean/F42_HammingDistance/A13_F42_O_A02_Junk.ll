define dso_local i32 @jVM(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  br label %12
12:
  %13 = load i32, i32* %6
  %14 = icmp slt i32 %13, 32
  br i1 %14, label %17, label %15
15:
  br label %48
17:
  %19 = load i32, i32* %3
  %20 = load i32, i32* %6
  %21 = lshr i32 %19, %20
  %22 = and i32 %21, 1
  store i32 %22, i32* %7
  %24 = load i32, i32* %4
  %25 = load i32, i32* %6
  %26 = lshr i32 %24, %25
  %27 = and i32 %26, 1
  store i32 %27, i32* %8
  %29 = load i32, i32* %7
  %30 = load i32, i32* %8
  %31 = add i32 %29, %30
  %32 = mul i32 %31, 0
  store i32 %32, i32* %9
  %33 = load i32, i32* %7
  %34 = load i32, i32* %8
  %35 = icmp ne i32 %33, %34
  br i1 %35, label %36, label %41
36:
  %37 = load i32, i32* %5
  %38 = add nsw i32 %37, 1
  %39 = load i32, i32* %9
  %40 = add nsw i32 %38, %39
  store i32 %40, i32* %5
  br label %41
41:
  br label %45
45:
  %46 = load i32, i32* %6
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %6
  br label %12
48:
  %49 = load i32, i32* %5
  ret i32 %49
}
