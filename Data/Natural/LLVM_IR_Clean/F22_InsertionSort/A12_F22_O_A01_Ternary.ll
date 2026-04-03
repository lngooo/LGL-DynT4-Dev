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
  br label %67
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
  br i1 %27, label %28, label %37
28:
  %29 = load i32*, i32** %3
  %30 = load i32, i32* %7
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %29, i64 %31
  %33 = load i32, i32* %32
  %34 = load i32, i32* %6
  %35 = icmp sgt i32 %33, %34
  %36 = zext i1 %35 to i32
  br label %38
37:
  br label %38
38:
  %39 = phi i32 [ %36, %28 ], [ 0, %37 ]
  %40 = icmp ne i32 %39, 0
  br i1 %40, label %41, label %55
41:
  %42 = load i32*, i32** %3
  %43 = load i32, i32* %7
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i32, i32* %42, i64 %44
  %46 = load i32, i32* %45
  %47 = load i32*, i32** %3
  %48 = load i32, i32* %7
  %49 = add nsw i32 %48, 1
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i32, i32* %47, i64 %50
  store i32 %46, i32* %51
  br label %52
52:
  %53 = load i32, i32* %7
  %54 = add nsw i32 %53, -1
  store i32 %54, i32* %7
  br label %25
55:
  %56 = load i32, i32* %6
  %57 = load i32*, i32** %3
  %58 = load i32, i32* %7
  %59 = add nsw i32 %58, 1
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %57, i64 %60
  store i32 %56, i32* %61
  br label %64
64:
  %65 = load i32, i32* %5
  %66 = add nsw i32 %65, 1
  store i32 %66, i32* %5
  br label %9
67:
  ret void
}
