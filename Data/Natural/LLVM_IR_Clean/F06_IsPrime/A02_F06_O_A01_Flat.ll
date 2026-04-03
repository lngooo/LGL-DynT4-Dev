define dso_local i32 @IsPrime(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %3
  store i32 0, i32* %4
  store i32 5, i32* %5
  br label %9
9:
  %10 = load i32, i32* %4
  %11 = icmp ne i32 %10, 5
  br i1 %11, label %12, label %66
12:
  %13 = load i32, i32* %4
  switch i32 %13, label %65 [
    i32 0, label %14
    i32 1, label %23
    i32 2, label %32
    i32 3, label %42
    i32 4, label %50
  ]
14:
  %15 = load i32, i32* %3
  %16 = icmp sle i32 %15, 1
  %17 = zext i1 %16 to i64
  %18 = select i1 %16, i32 5, i32 1
  store i32 %18, i32* %4
  %19 = load i32, i32* %3
  %20 = icmp sle i32 %19, 1
  br i1 %20, label %21, label %22
21:
  store i32 0, i32* %2
  store i32 1, i32* %6
  br label %67
22:
  br label %65
23:
  %24 = load i32, i32* %3
  %25 = icmp sle i32 %24, 3
  %26 = zext i1 %25 to i64
  %27 = select i1 %25, i32 5, i32 2
  store i32 %27, i32* %4
  %28 = load i32, i32* %3
  %29 = icmp sle i32 %28, 3
  br i1 %29, label %30, label %31
30:
  store i32 1, i32* %2
  store i32 1, i32* %6
  br label %67
31:
  br label %65
32:
  %33 = load i32, i32* %3
  %34 = srem i32 %33, 2
  %35 = icmp eq i32 %34, 0
  br i1 %35, label %40, label %36
36:
  %37 = load i32, i32* %3
  %38 = srem i32 %37, 3
  %39 = icmp eq i32 %38, 0
  br i1 %39, label %40, label %41
40:
  store i32 0, i32* %2
  store i32 1, i32* %6
  br label %67
41:
  store i32 3, i32* %4
  br label %65
42:
  %43 = load i32, i32* %5
  %44 = load i32, i32* %5
  %45 = mul nsw i32 %43, %44
  %46 = load i32, i32* %3
  %47 = icmp sle i32 %45, %46
  %48 = zext i1 %47 to i64
  %49 = select i1 %47, i32 4, i32 5
  store i32 %49, i32* %4
  br label %65
50:
  %51 = load i32, i32* %3
  %52 = load i32, i32* %5
  %53 = srem i32 %51, %52
  %54 = icmp eq i32 %53, 0
  br i1 %54, label %61, label %55
55:
  %56 = load i32, i32* %3
  %57 = load i32, i32* %5
  %58 = add nsw i32 %57, 2
  %59 = srem i32 %56, %58
  %60 = icmp eq i32 %59, 0
  br i1 %60, label %61, label %62
61:
  store i32 0, i32* %2
  store i32 1, i32* %6
  br label %67
62:
  %63 = load i32, i32* %5
  %64 = add nsw i32 %63, 6
  store i32 %64, i32* %5
  store i32 3, i32* %4
  br label %65
65:
  br label %9
66:
  store i32 1, i32* %2
  store i32 1, i32* %6
  br label %67
67:
  %70 = load i32, i32* %2
  ret i32 %70
}
