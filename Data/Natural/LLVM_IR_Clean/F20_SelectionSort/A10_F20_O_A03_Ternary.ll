define dso_local void @SelectionSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %8 = load i32, i32* %4
  %9 = icmp sle i32 %8, 1
  br i1 %9, label %10, label %11
10:
  br label %64
11:
  store i32 0, i32* %5
  store i32 1, i32* %6
  br label %14
14:
  %15 = load i32, i32* %6
  %16 = load i32, i32* %4
  %17 = icmp slt i32 %15, %16
  br i1 %17, label %20, label %18
18:
  br label %41
20:
  %21 = load i32*, i32** %3
  %22 = load i32, i32* %6
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i32, i32* %21, i64 %23
  %25 = load i32, i32* %24
  %26 = load i32*, i32** %3
  %27 = load i32, i32* %5
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i32, i32* %26, i64 %28
  %30 = load i32, i32* %29
  %31 = icmp slt i32 %25, %30
  br i1 %31, label %32, label %34
32:
  %33 = load i32, i32* %6
  br label %36
34:
  %35 = load i32, i32* %5
  br label %36
36:
  %37 = phi i32 [ %33, %32 ], [ %35, %34 ]
  store i32 %37, i32* %5
  br label %38
38:
  %39 = load i32, i32* %6
  %40 = add nsw i32 %39, 1
  store i32 %40, i32* %6
  br label %14
41:
  %43 = load i32*, i32** %3
  %44 = getelementptr inbounds i32, i32* %43, i64 0
  %45 = load i32, i32* %44
  store i32 %45, i32* %7
  %46 = load i32*, i32** %3
  %47 = load i32, i32* %5
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i32, i32* %46, i64 %48
  %50 = load i32, i32* %49
  %51 = load i32*, i32** %3
  %52 = getelementptr inbounds i32, i32* %51, i64 0
  store i32 %50, i32* %52
  %53 = load i32, i32* %7
  %54 = load i32*, i32** %3
  %55 = load i32, i32* %5
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i32, i32* %54, i64 %56
  store i32 %53, i32* %57
  %58 = load i32*, i32** %3
  %59 = getelementptr inbounds i32, i32* %58, i64 1
  %60 = load i32, i32* %4
  %61 = sub nsw i32 %60, 1
  call void @SelectionSort(i32* %59, i32 %61)
  br label %64
64:
  ret void
}
