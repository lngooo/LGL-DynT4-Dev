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
  br i1 %12, label %15, label %13
13:
  br label %70
15:
  %16 = load i32, i32* %5
  %17 = load i32, i32* %5
  %18 = mul nsw i32 %16, %17
  %19 = add nsw i32 %18, 1
  %20 = icmp sgt i32 %19, 0
  br i1 %20, label %21, label %66
21:
  %23 = load i32*, i32** %3
  %24 = load i32, i32* %5
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i32, i32* %23, i64 %25
  %27 = load i32, i32* %26
  store i32 %27, i32* %6
  %29 = load i32, i32* %5
  %30 = sub nsw i32 %29, 1
  store i32 %30, i32* %7
  br label %31
31:
  %32 = load i32, i32* %7
  %33 = icmp sge i32 %32, 0
  br i1 %33, label %34, label %42
34:
  %35 = load i32*, i32** %3
  %36 = load i32, i32* %7
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i32, i32* %35, i64 %37
  %39 = load i32, i32* %38
  %40 = load i32, i32* %6
  %41 = icmp sgt i32 %39, %40
  br label %42
42:
  %43 = phi i1 [ false, %31 ], [ %41, %34 ]
  br i1 %43, label %44, label %57
44:
  %45 = load i32*, i32** %3
  %46 = load i32, i32* %7
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i32, i32* %45, i64 %47
  %49 = load i32, i32* %48
  %50 = load i32*, i32** %3
  %51 = load i32, i32* %7
  %52 = add nsw i32 %51, 1
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds i32, i32* %50, i64 %53
  store i32 %49, i32* %54
  %55 = load i32, i32* %7
  %56 = add nsw i32 %55, -1
  store i32 %56, i32* %7
  br label %31
57:
  %58 = load i32, i32* %6
  %59 = load i32*, i32** %3
  %60 = load i32, i32* %7
  %61 = add nsw i32 %60, 1
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i32, i32* %59, i64 %62
  store i32 %58, i32* %63
  br label %66
66:
  br label %67
67:
  %68 = load i32, i32* %5
  %69 = add nsw i32 %68, 1
  store i32 %69, i32* %5
  br label %9
70:
  ret void
}
