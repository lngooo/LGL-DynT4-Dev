define dso_local void @InsertionSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 1, i32* %5
  br label %9
9:
  %10 = load i32, i32* %5
  %11 = load i32, i32* %4
  %12 = icmp slt i32 %10, %11
  %13 = xor i1 %12, true
  %14 = xor i1 %13, true
  br i1 %14, label %15, label %64
15:
  %17 = load i32*, i32** %3
  %18 = load i32, i32* %5
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i32, i32* %17, i64 %19
  %21 = load i32, i32* %20
  store i32 %21, i32* %6
  %23 = load i32, i32* %5
  %24 = sub nsw i32 %23, 1
  store i32 %24, i32* %7
  br label %25
25:
  %26 = load i32, i32* %7
  %27 = icmp sge i32 %26, 0
  br i1 %27, label %28, label %38
28:
  %29 = load i32*, i32** %3
  %30 = load i32, i32* %7
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %29, i64 %31
  %33 = load i32, i32* %32
  %34 = load i32, i32* %6
  %35 = icmp sgt i32 %33, %34
  %36 = xor i1 %35, true
  %37 = xor i1 %36, true
  br label %38
38:
  %39 = phi i1 [ false, %25 ], [ %37, %28 ]
  br i1 %39, label %40, label %53
40:
  %41 = load i32*, i32** %3
  %42 = load i32, i32* %7
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i32, i32* %41, i64 %43
  %45 = load i32, i32* %44
  %46 = load i32*, i32** %3
  %47 = load i32, i32* %7
  %48 = add nsw i32 %47, 1
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds i32, i32* %46, i64 %49
  store i32 %45, i32* %50
  %51 = load i32, i32* %7
  %52 = add nsw i32 %51, -1
  store i32 %52, i32* %7
  br label %25
53:
  %54 = load i32, i32* %6
  %55 = load i32*, i32** %3
  %56 = load i32, i32* %7
  %57 = add nsw i32 %56, 1
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i32, i32* %55, i64 %58
  store i32 %54, i32* %59
  %60 = load i32, i32* %5
  %61 = add nsw i32 %60, 1
  store i32 %61, i32* %5
  br label %9
64:
  ret void
}
