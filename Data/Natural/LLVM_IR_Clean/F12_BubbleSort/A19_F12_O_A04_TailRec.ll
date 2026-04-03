define dso_local void @pass(i32* %0, i32 %1) {
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
  br label %64
10:
  store i32 0, i32* %5
  br label %12
12:
  %13 = load i32, i32* %5
  %14 = load i32, i32* %4
  %15 = sub nsw i32 %14, 1
  %16 = icmp slt i32 %13, %15
  br i1 %16, label %19, label %17
17:
  br label %60
19:
  %20 = load i32*, i32** %3
  %21 = load i32, i32* %5
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i32, i32* %20, i64 %22
  %24 = load i32, i32* %23
  %25 = load i32*, i32** %3
  %26 = load i32, i32* %5
  %27 = add nsw i32 %26, 1
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i32, i32* %25, i64 %28
  %30 = load i32, i32* %29
  %31 = icmp sgt i32 %24, %30
  br i1 %31, label %32, label %56
32:
  %34 = load i32*, i32** %3
  %35 = load i32, i32* %5
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i32, i32* %34, i64 %36
  %38 = load i32, i32* %37
  store i32 %38, i32* %6
  %39 = load i32*, i32** %3
  %40 = load i32, i32* %5
  %41 = add nsw i32 %40, 1
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i32, i32* %39, i64 %42
  %44 = load i32, i32* %43
  %45 = load i32*, i32** %3
  %46 = load i32, i32* %5
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i32, i32* %45, i64 %47
  store i32 %44, i32* %48
  %49 = load i32, i32* %6
  %50 = load i32*, i32** %3
  %51 = load i32, i32* %5
  %52 = add nsw i32 %51, 1
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds i32, i32* %50, i64 %53
  store i32 %49, i32* %54
  br label %56
56:
  br label %57
57:
  %58 = load i32, i32* %5
  %59 = add nsw i32 %58, 1
  store i32 %59, i32* %5
  br label %12
60:
  %61 = load i32*, i32** %3
  %62 = load i32, i32* %4
  %63 = sub nsw i32 %62, 1
  call void @pass(i32* %61, i32 %63)
  br label %64
64:
  ret void
}
define dso_local void @BubbleSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %5 = load i32*, i32** %3
  %6 = load i32, i32* %4
  call void @pass(i32* %5, i32 %6)
  ret void
}
