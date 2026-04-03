define dso_local i32 @BinarySearch(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  %11 = load i32, i32* %6
  %12 = icmp eq i32 %11, 0
  br i1 %12, label %13, label %14
13:
  store i32 -1, i32* %4
  br label %60
14:
  store i32 0, i32* %8
  %17 = load i32, i32* %6
  %18 = sub nsw i32 %17, 1
  store i32 %18, i32* %9
  br label %19
19:
  %20 = load i32, i32* %8
  %21 = load i32, i32* %9
  %22 = icmp slt i32 %20, %21
  br i1 %22, label %23, label %45
23:
  %25 = load i32, i32* %8
  %26 = load i32, i32* %9
  %27 = load i32, i32* %8
  %28 = sub nsw i32 %26, %27
  %29 = sdiv i32 %28, 2
  %30 = add nsw i32 %25, %29
  store i32 %30, i32* %10
  %31 = load i32*, i32** %5
  %32 = load i32, i32* %10
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i32, i32* %31, i64 %33
  %35 = load i32, i32* %34
  %36 = load i32, i32* %7
  %37 = icmp slt i32 %35, %36
  br i1 %37, label %38, label %41
38:
  %39 = load i32, i32* %10
  %40 = add nsw i32 %39, 1
  store i32 %40, i32* %8
  br label %43
41:
  %42 = load i32, i32* %10
  store i32 %42, i32* %9
  br label %43
43:
  br label %19
45:
  %46 = load i32*, i32** %5
  %47 = load i32, i32* %8
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i32, i32* %46, i64 %48
  %50 = load i32, i32* %49
  %51 = load i32, i32* %7
  %52 = icmp eq i32 %50, %51
  br i1 %52, label %53, label %55
53:
  %54 = load i32, i32* %8
  br label %56
55:
  br label %56
56:
  %57 = phi i32 [ %54, %53 ], [ -1, %55 ]
  store i32 %57, i32* %4
  br label %60
60:
  %61 = load i32, i32* %4
  ret i32 %61
}
