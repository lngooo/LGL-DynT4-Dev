define dso_local i32 @me(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %3
  %7 = load i32, i32* %3
  %8 = icmp slt i32 %7, 4
  br i1 %8, label %9, label %13
9:
  %10 = load i32, i32* %3
  %11 = icmp sgt i32 %10, 1
  %12 = zext i1 %11 to i32
  store i32 %12, i32* %2
  br label %77
13:
  %14 = load i32, i32* %3
  %15 = srem i32 %14, 2
  %16 = icmp ne i32 %15, 0
  br i1 %16, label %17, label %21
17:
  %18 = load i32, i32* %3
  %19 = srem i32 %18, 3
  %20 = icmp ne i32 %19, 0
  br i1 %20, label %22, label %21
21:
  store i32 0, i32* %2
  br label %77
22:
  store i32 5, i32* %4
  br label %24
24:
  %25 = load i32, i32* %4
  %26 = load i32, i32* %4
  %27 = mul nsw i32 %25, %26
  %28 = load i32, i32* %3
  %29 = icmp sgt i32 %27, %28
  br i1 %29, label %30, label %31
30:
  store i32 2, i32* %5
  br label %73
31:
  %32 = load i32, i32* %3
  %33 = load i32, i32* %4
  %34 = srem i32 %32, %33
  %35 = icmp eq i32 %34, 0
  br i1 %35, label %42, label %36
36:
  %37 = load i32, i32* %3
  %38 = load i32, i32* %4
  %39 = add nsw i32 %38, 2
  %40 = srem i32 %37, %39
  %41 = icmp eq i32 %40, 0
  br i1 %41, label %42, label %43
42:
  store i32 0, i32* %2
  store i32 1, i32* %5
  br label %73
43:
  %45 = load i32, i32* %4
  %46 = add nsw i32 %45, 6
  store i32 %46, i32* %6
  %47 = load i32, i32* %6
  %48 = load i32, i32* %6
  %49 = mul nsw i32 %47, %48
  %50 = load i32, i32* %3
  %51 = icmp sgt i32 %49, %50
  br i1 %51, label %52, label %53
52:
  store i32 2, i32* %5
  br label %66
53:
  %54 = load i32, i32* %3
  %55 = load i32, i32* %6
  %56 = srem i32 %54, %55
  %57 = icmp eq i32 %56, 0
  br i1 %57, label %64, label %58
58:
  %59 = load i32, i32* %3
  %60 = load i32, i32* %6
  %61 = add nsw i32 %60, 2
  %62 = srem i32 %59, %61
  %63 = icmp eq i32 %62, 0
  br i1 %63, label %64, label %65
64:
  store i32 0, i32* %2
  store i32 1, i32* %5
  br label %66
65:
  store i32 0, i32* %5
  br label %66
66:
  %68 = load i32, i32* %5
  switch i32 %68, label %73 [
    i32 0, label %69
  ]
69:
  br label %70
70:
  %71 = load i32, i32* %4
  %72 = add nsw i32 %71, 12
  store i32 %72, i32* %4
  br label %24
73:
  %75 = load i32, i32* %5
  switch i32 %75, label %79 [
    i32 2, label %76
    i32 1, label %77
  ]
76:
  store i32 1, i32* %2
  br label %77
77:
  %78 = load i32, i32* %2
  ret i32 %78
79:
  unreachable
}
