define dso_local i32 @pa(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  %8 = load i32, i32* %4
  %9 = call i32 @abs(i32 %8)
  store i32 %9, i32* %4
  %10 = load i32, i32* %5
  %11 = call i32 @abs(i32 %10)
  store i32 %11, i32* %5
  %12 = load i32, i32* %4
  %13 = icmp ne i32 %12, 0
  br i1 %13, label %14, label %17
14:
  %15 = load i32, i32* %5
  %16 = icmp ne i32 %15, 0
  br i1 %16, label %21, label %17
17:
  %18 = load i32, i32* %4
  %19 = load i32, i32* %5
  %20 = or i32 %18, %19
  store i32 %20, i32* %3
  br label %73
21:
  store i32 0, i32* %6
  br label %23
23:
  %24 = load i32, i32* %4
  %25 = and i32 %24, 1
  %26 = icmp ne i32 %25, 0
  br i1 %26, label %31, label %27
27:
  %28 = load i32, i32* %5
  %29 = and i32 %28, 1
  %30 = icmp ne i32 %29, 0
  br label %31
31:
  %32 = phi i1 [ true, %23 ], [ %30, %27 ]
  %33 = xor i1 %32, true
  br i1 %33, label %34, label %41
34:
  %35 = load i32, i32* %4
  %36 = ashr i32 %35, 1
  store i32 %36, i32* %4
  %37 = load i32, i32* %5
  %38 = ashr i32 %37, 1
  store i32 %38, i32* %5
  %39 = load i32, i32* %6
  %40 = add nsw i32 %39, 1
  store i32 %40, i32* %6
  br label %23
41:
  br label %42
42:
  %43 = load i32, i32* %5
  %44 = icmp ne i32 %43, 0
  br i1 %44, label %45, label %68
45:
  br label %46
46:
  %47 = load i32, i32* %5
  %48 = and i32 %47, 1
  %49 = icmp ne i32 %48, 0
  %50 = xor i1 %49, true
  br i1 %50, label %51, label %54
51:
  %52 = load i32, i32* %5
  %53 = ashr i32 %52, 1
  store i32 %53, i32* %5
  br label %46
54:
  %55 = load i32, i32* %4
  %56 = load i32, i32* %5
  %57 = icmp sgt i32 %55, %56
  br i1 %57, label %58, label %64
58:
  %60 = load i32, i32* %4
  store i32 %60, i32* %7
  %61 = load i32, i32* %5
  store i32 %61, i32* %4
  %62 = load i32, i32* %7
  store i32 %62, i32* %5
  br label %64
64:
  %65 = load i32, i32* %4
  %66 = load i32, i32* %5
  %67 = sub nsw i32 %66, %65
  store i32 %67, i32* %5
  br label %42
68:
  %69 = load i32, i32* %4
  %70 = load i32, i32* %6
  %71 = shl i32 %69, %70
  store i32 %71, i32* %3
  br label %73
73:
  %74 = load i32, i32* %3
  ret i32 %74
}
declare i32 @abs(i32)
