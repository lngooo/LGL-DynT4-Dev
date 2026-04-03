define dso_local void @InsertionSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  br label %9
9:
  %10 = load i32, i32* %5
  %11 = add nsw i32 %10, 1
  store i32 %11, i32* %5
  %12 = load i32, i32* %4
  %13 = icmp slt i32 %11, %12
  br i1 %13, label %14, label %57
14:
  %16 = load i32*, i32** %3
  %17 = load i32, i32* %5
  %18 = sext i32 %17 to i64
  %19 = getelementptr inbounds i32, i32* %16, i64 %18
  %20 = load i32, i32* %19
  store i32 %20, i32* %6
  %22 = load i32, i32* %5
  store i32 %22, i32* %7
  br label %23
23:
  %24 = load i32, i32* %7
  %25 = add nsw i32 %24, -1
  store i32 %25, i32* %7
  %26 = icmp sge i32 %25, 0
  br i1 %26, label %27, label %35
27:
  %28 = load i32*, i32** %3
  %29 = load i32, i32* %7
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %28, i64 %30
  %32 = load i32, i32* %31
  %33 = load i32, i32* %6
  %34 = icmp sgt i32 %32, %33
  br label %35
35:
  %36 = phi i1 [ false, %23 ], [ %34, %27 ]
  br i1 %36, label %37, label %48
37:
  %38 = load i32*, i32** %3
  %39 = load i32, i32* %7
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i32, i32* %38, i64 %40
  %42 = load i32, i32* %41
  %43 = load i32*, i32** %3
  %44 = load i32, i32* %7
  %45 = add nsw i32 %44, 1
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i32, i32* %43, i64 %46
  store i32 %42, i32* %47
  br label %23
48:
  %49 = load i32, i32* %6
  %50 = load i32*, i32** %3
  %51 = load i32, i32* %7
  %52 = add nsw i32 %51, 1
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds i32, i32* %50, i64 %53
  store i32 %49, i32* %54
  br label %9
57:
  ret void
}
