define dso_local i32 @GCD(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  store i32 1, i32* %6
  store i32 1, i32* %7
  store i32 0, i32* %8
  %16 = load i32, i32* %3
  %17 = call i32 @abs(i32 %16)
  store i32 %17, i32* %3
  %18 = load i32, i32* %4
  %19 = call i32 @abs(i32 %18)
  store i32 %19, i32* %4
  br label %20
20:
  %21 = load i32, i32* %4
  %22 = icmp ne i32 %21, 0
  br i1 %22, label %23, label %52
23:
  %25 = load i32, i32* %3
  %26 = load i32, i32* %4
  %27 = sdiv i32 %25, %26
  store i32 %27, i32* %9
  %29 = load i32, i32* %3
  %30 = load i32, i32* %4
  %31 = srem i32 %29, %30
  store i32 %31, i32* %10
  %32 = load i32, i32* %4
  store i32 %32, i32* %3
  %33 = load i32, i32* %10
  store i32 %33, i32* %4
  %35 = load i32, i32* %5
  store i32 %35, i32* %11
  %36 = load i32, i32* %7
  %37 = load i32, i32* %9
  %38 = load i32, i32* %5
  %39 = mul nsw i32 %37, %38
  %40 = sub nsw i32 %36, %39
  store i32 %40, i32* %5
  %41 = load i32, i32* %11
  store i32 %41, i32* %7
  %42 = load i32, i32* %6
  store i32 %42, i32* %11
  %43 = load i32, i32* %8
  %44 = load i32, i32* %9
  %45 = load i32, i32* %6
  %46 = mul nsw i32 %44, %45
  %47 = sub nsw i32 %43, %46
  store i32 %47, i32* %6
  %48 = load i32, i32* %11
  store i32 %48, i32* %8
  br label %20
52:
  %53 = load i32, i32* %3
  ret i32 %53
}
declare i32 @abs(i32)
