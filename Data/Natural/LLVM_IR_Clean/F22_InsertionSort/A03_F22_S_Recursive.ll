define dso_local void @InsertionSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %7 = load i32, i32* %4
  %8 = icmp sle i32 %7, 1
  br i1 %8, label %9, label %10
9:
  br label %59
10:
  %11 = load i32*, i32** %3
  %12 = load i32, i32* %4
  %13 = sub nsw i32 %12, 1
  call void @InsertionSort(i32* %11, i32 %13)
  %15 = load i32*, i32** %3
  %16 = load i32, i32* %4
  %17 = sub nsw i32 %16, 1
  %18 = sext i32 %17 to i64
  %19 = getelementptr inbounds i32, i32* %15, i64 %18
  %20 = load i32, i32* %19
  store i32 %20, i32* %5
  %22 = load i32, i32* %4
  %23 = sub nsw i32 %22, 2
  store i32 %23, i32* %6
  br label %24
24:
  %25 = load i32, i32* %6
  %26 = icmp sge i32 %25, 0
  br i1 %26, label %27, label %35
27:
  %28 = load i32*, i32** %3
  %29 = load i32, i32* %6
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %28, i64 %30
  %32 = load i32, i32* %31
  %33 = load i32, i32* %5
  %34 = icmp sgt i32 %32, %33
  br label %35
35:
  %36 = phi i1 [ false, %24 ], [ %34, %27 ]
  br i1 %36, label %37, label %50
37:
  %38 = load i32*, i32** %3
  %39 = load i32, i32* %6
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i32, i32* %38, i64 %40
  %42 = load i32, i32* %41
  %43 = load i32*, i32** %3
  %44 = load i32, i32* %6
  %45 = add nsw i32 %44, 1
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i32, i32* %43, i64 %46
  store i32 %42, i32* %47
  %48 = load i32, i32* %6
  %49 = add nsw i32 %48, -1
  store i32 %49, i32* %6
  br label %24
50:
  %51 = load i32, i32* %5
  %52 = load i32*, i32** %3
  %53 = load i32, i32* %6
  %54 = add nsw i32 %53, 1
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i32, i32* %52, i64 %55
  store i32 %51, i32* %56
  br label %59
59:
  ret void
}
