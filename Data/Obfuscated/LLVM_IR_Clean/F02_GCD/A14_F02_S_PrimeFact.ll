define dso_local i32 @Hs8(i32 %0, i32 %1) {
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
  %13 = icmp eq i32 %12, 0
  br i1 %13, label %17, label %14
14:
  %15 = load i32, i32* %5
  %16 = icmp eq i32 %15, 0
  br i1 %16, label %17, label %21
17:
  %18 = load i32, i32* %4
  %19 = load i32, i32* %5
  %20 = or i32 %18, %19
  store i32 %20, i32* %3
  br label %62
21:
  store i32 1, i32* %6
  store i32 2, i32* %7
  br label %24
24:
  %25 = load i32, i32* %7
  %26 = load i32, i32* %4
  %27 = icmp sle i32 %25, %26
  br i1 %27, label %28, label %32
28:
  %29 = load i32, i32* %7
  %30 = load i32, i32* %5
  %31 = icmp sle i32 %29, %30
  br label %32
32:
  %33 = phi i1 [ false, %24 ], [ %31, %28 ]
  br i1 %33, label %34, label %58
34:
  %35 = load i32, i32* %4
  %36 = load i32, i32* %7
  %37 = srem i32 %35, %36
  %38 = icmp eq i32 %37, 0
  br i1 %38, label %39, label %54
39:
  %40 = load i32, i32* %5
  %41 = load i32, i32* %7
  %42 = srem i32 %40, %41
  %43 = icmp eq i32 %42, 0
  br i1 %43, label %44, label %54
44:
  %45 = load i32, i32* %7
  %46 = load i32, i32* %6
  %47 = mul nsw i32 %46, %45
  store i32 %47, i32* %6
  %48 = load i32, i32* %7
  %49 = load i32, i32* %4
  %50 = sdiv i32 %49, %48
  store i32 %50, i32* %4
  %51 = load i32, i32* %7
  %52 = load i32, i32* %5
  %53 = sdiv i32 %52, %51
  store i32 %53, i32* %5
  br label %57
54:
  %55 = load i32, i32* %7
  %56 = add nsw i32 %55, 1
  store i32 %56, i32* %7
  br label %57
57:
  br label %24
58:
  %59 = load i32, i32* %6
  store i32 %59, i32* %3
  br label %62
62:
  %63 = load i32, i32* %3
  ret i32 %63
}
declare i32 @abs(i32)
