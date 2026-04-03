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
  br label %65
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
  br i1 %22, label %23, label %50
23:
  %24 = load i32, i32* %8
  %25 = mul nsw i32 %24, 0
  %26 = icmp ne i32 %25, 0
  br i1 %26, label %27, label %28
27:
  br label %50
28:
  %30 = load i32, i32* %8
  %31 = load i32, i32* %9
  %32 = load i32, i32* %8
  %33 = sub nsw i32 %31, %32
  %34 = sdiv i32 %33, 2
  %35 = add nsw i32 %30, %34
  store i32 %35, i32* %10
  %36 = load i32*, i32** %5
  %37 = load i32, i32* %10
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i32, i32* %36, i64 %38
  %40 = load i32, i32* %39
  %41 = load i32, i32* %7
  %42 = icmp slt i32 %40, %41
  br i1 %42, label %43, label %46
43:
  %44 = load i32, i32* %10
  %45 = add nsw i32 %44, 1
  store i32 %45, i32* %8
  br label %48
46:
  %47 = load i32, i32* %10
  store i32 %47, i32* %9
  br label %48
48:
  br label %19
50:
  %51 = load i32*, i32** %5
  %52 = load i32, i32* %8
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds i32, i32* %51, i64 %53
  %55 = load i32, i32* %54
  %56 = load i32, i32* %7
  %57 = icmp eq i32 %55, %56
  br i1 %57, label %58, label %60
58:
  %59 = load i32, i32* %8
  br label %61
60:
  br label %61
61:
  %62 = phi i32 [ %59, %58 ], [ -1, %60 ]
  store i32 %62, i32* %4
  br label %65
65:
  %66 = load i32, i32* %4
  ret i32 %66
}
