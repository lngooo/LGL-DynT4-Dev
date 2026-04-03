define dso_local i64 @iUe(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca [21 x i64]
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %3
  %7 = load i32, i32* %3
  %8 = icmp slt i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store i64 0, i64* %2
  br label %57
10:
  %12 = getelementptr inbounds [21 x i64], [21 x i64]* %4, i64 0, i64 0
  store i64 1, i64* %12
  store i32 1, i32* %5
  br label %14
14:
  %15 = load i32, i32* %5
  %16 = load i32, i32* %3
  %17 = icmp sle i32 %15, %16
  br i1 %17, label %18, label %21
18:
  %19 = load i32, i32* %5
  %20 = icmp slt i32 %19, 21
  br label %21
21:
  %22 = phi i1 [ false, %14 ], [ %20, %18 ]
  br i1 %22, label %25, label %23
23:
  br label %45
25:
  %27 = load i32, i32* %5
  %28 = mul nsw i32 %27, 2
  %29 = sdiv i32 %28, 2
  store i32 %29, i32* %6
  %30 = load i32, i32* %6
  %31 = sub nsw i32 %30, 1
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds [21 x i64], [21 x i64]* %4, i64 0, i64 %32
  %34 = load i64, i64* %33
  %35 = load i32, i32* %5
  %36 = sext i32 %35 to i64
  %37 = mul nsw i64 %34, %36
  %38 = load i32, i32* %6
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds [21 x i64], [21 x i64]* %4, i64 0, i64 %39
  store i64 %37, i64* %40
  br label %42
42:
  %43 = load i32, i32* %5
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %5
  br label %14
45:
  %46 = load i32, i32* %3
  %47 = icmp sgt i32 %46, 20
  br i1 %47, label %48, label %49
48:
  br label %51
49:
  %50 = load i32, i32* %3
  br label %51
51:
  %52 = phi i32 [ 20, %48 ], [ %50, %49 ]
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds [21 x i64], [21 x i64]* %4, i64 0, i64 %53
  %55 = load i64, i64* %54
  store i64 %55, i64* %2
  br label %57
57:
  %58 = load i64, i64* %2
  ret i64 %58
}
