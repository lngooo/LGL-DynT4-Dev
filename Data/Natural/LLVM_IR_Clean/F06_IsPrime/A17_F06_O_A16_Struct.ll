%struct.Checker = type { i32, i32 }
define dso_local i32 @IsPrime(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca %struct.Checker
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %3
  %8 = getelementptr inbounds %struct.Checker, %struct.Checker* %4, i32 0, i32 0
  %9 = load i32, i32* %3
  store i32 %9, i32* %8
  %10 = getelementptr inbounds %struct.Checker, %struct.Checker* %4, i32 0, i32 1
  store i32 1, i32* %10
  %11 = getelementptr inbounds %struct.Checker, %struct.Checker* %4, i32 0, i32 0
  %12 = load i32, i32* %11
  %13 = icmp slt i32 %12, 2
  br i1 %13, label %14, label %15
14:
  store i32 0, i32* %2
  store i32 1, i32* %5
  br label %42
15:
  store i32 2, i32* %6
  br label %17
17:
  %18 = load i32, i32* %6
  %19 = load i32, i32* %6
  %20 = mul nsw i32 %18, %19
  %21 = getelementptr inbounds %struct.Checker, %struct.Checker* %4, i32 0, i32 0
  %22 = load i32, i32* %21
  %23 = icmp sle i32 %20, %22
  br i1 %23, label %25, label %24
24:
  store i32 2, i32* %5
  br label %37
25:
  %26 = getelementptr inbounds %struct.Checker, %struct.Checker* %4, i32 0, i32 0
  %27 = load i32, i32* %26
  %28 = load i32, i32* %6
  %29 = srem i32 %27, %28
  %30 = icmp eq i32 %29, 0
  br i1 %30, label %31, label %33
31:
  %32 = getelementptr inbounds %struct.Checker, %struct.Checker* %4, i32 0, i32 1
  store i32 0, i32* %32
  store i32 2, i32* %5
  br label %37
33:
  br label %34
34:
  %35 = load i32, i32* %6
  %36 = add nsw i32 %35, 1
  store i32 %36, i32* %6
  br label %17
37:
  br label %39
39:
  %40 = getelementptr inbounds %struct.Checker, %struct.Checker* %4, i32 0, i32 1
  %41 = load i32, i32* %40
  store i32 %41, i32* %2
  store i32 1, i32* %5
  br label %42
42:
  %44 = load i32, i32* %2
  ret i32 %44
}
