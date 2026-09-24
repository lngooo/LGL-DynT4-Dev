define dso_local i32 @f(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i32, i32* %4
  %9 = icmp slt i32 %8, 30
  br i1 %9, label %12, label %10
10:
  br label %52
12:
  %13 = load i32, i32* %2
  %14 = load i32, i32* %4
  %15 = lshr i32 %13, %14
  %16 = and i32 %15, 1
  %17 = load i32, i32* %2
  %18 = load i32, i32* %4
  %19 = add nsw i32 %18, 1
  %20 = lshr i32 %17, %19
  %21 = and i32 %20, 1
  %22 = xor i32 %16, %21
  %23 = icmp ne i32 %22, 0
  br i1 %23, label %24, label %29
24:
  %25 = load i32, i32* %4
  %26 = shl i32 1, %25
  %27 = load i32, i32* %3
  %28 = or i32 %27, %26
  store i32 %28, i32* %3
  br label %29
29:
  %30 = load i32, i32* %2
  %31 = load i32, i32* %4
  %32 = add nsw i32 %31, 1
  %33 = lshr i32 %30, %32
  %34 = and i32 %33, 1
  %35 = load i32, i32* %2
  %36 = load i32, i32* %4
  %37 = add nsw i32 %36, 2
  %38 = lshr i32 %35, %37
  %39 = and i32 %38, 1
  %40 = xor i32 %34, %39
  %41 = icmp ne i32 %40, 0
  br i1 %41, label %42, label %48
42:
  %43 = load i32, i32* %4
  %44 = add nsw i32 %43, 1
  %45 = shl i32 1, %44
  %46 = load i32, i32* %3
  %47 = or i32 %46, %45
  store i32 %47, i32* %3
  br label %48
48:
  br label %49
49:
  %50 = load i32, i32* %4
  %51 = add nsw i32 %50, 2
  store i32 %51, i32* %4
  br label %7
52:
  %53 = load i32, i32* %2
  %54 = lshr i32 %53, 30
  %55 = and i32 %54, 1
  %56 = load i32, i32* %2
  %57 = lshr i32 %56, 31
  %58 = and i32 %57, 1
  %59 = xor i32 %55, %58
  %60 = icmp ne i32 %59, 0
  br i1 %60, label %61, label %64
61:
  %62 = load i32, i32* %3
  %63 = or i32 %62, 1073741824
  store i32 %63, i32* %3
  br label %64
64:
  %65 = load i32, i32* %2
  %66 = lshr i32 %65, 31
  %67 = and i32 %66, 1
  %68 = icmp ne i32 %67, 0
  br i1 %68, label %69, label %72
69:
  %70 = load i32, i32* %3
  %71 = or i32 %70, -2147483648
  store i32 %71, i32* %3
  br label %72
72:
  %73 = load i32, i32* %3
  ret i32 %73
}
