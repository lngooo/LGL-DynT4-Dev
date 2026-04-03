@IsPowerOfTwo.table = internal global [32 x i32] zeroinitializer
define dso_local i32 @IsPowerOfTwo(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  store i32 %0, i32* %3
  store i32 0, i32* %4
  br label %9
9:
  %10 = load i32, i32* %4
  %11 = icmp slt i32 %10, 32
  br i1 %11, label %14, label %12
12:
  br label %23
14:
  %15 = load i32, i32* %4
  %16 = shl i32 1, %15
  %17 = load i32, i32* %4
  %18 = sext i32 %17 to i64
  %19 = getelementptr inbounds [32 x i32], [32 x i32]* @IsPowerOfTwo.table, i64 0, i64 %18
  store i32 %16, i32* %19
  br label %20
20:
  %21 = load i32, i32* %4
  %22 = add nsw i32 %21, 1
  store i32 %22, i32* %4
  br label %9
23:
  store i32* getelementptr inbounds ([32 x i32], [32 x i32]* @IsPowerOfTwo.table, i64 0, i64 0), i32** %5
  %25 = load i32, i32* %3
  %26 = icmp eq i32 %25, 0
  br i1 %26, label %27, label %28
27:
  store i32 0, i32* %2
  store i32 1, i32* %6
  br label %51
28:
  store i32 0, i32* %7
  br label %30
30:
  %31 = load i32, i32* %7
  %32 = icmp slt i32 %31, 32
  br i1 %32, label %34, label %33
33:
  store i32 5, i32* %6
  br label %47
34:
  %35 = load i32*, i32** %5
  %36 = load i32, i32* %7
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i32, i32* %35, i64 %37
  %39 = load i32, i32* %38
  %40 = load i32, i32* %3
  %41 = icmp eq i32 %39, %40
  br i1 %41, label %42, label %43
42:
  store i32 1, i32* %2
  store i32 1, i32* %6
  br label %47
43:
  br label %44
44:
  %45 = load i32, i32* %7
  %46 = add nsw i32 %45, 1
  store i32 %46, i32* %7
  br label %30
47:
  %49 = load i32, i32* %6
  switch i32 %49, label %51 [
    i32 5, label %50
  ]
50:
  store i32 0, i32* %2
  store i32 1, i32* %6
  br label %51
51:
  %53 = load i32, i32* %2
  ret i32 %53
}
